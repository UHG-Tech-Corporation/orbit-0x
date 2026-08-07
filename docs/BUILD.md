# 🏗️ ORBIT 0X - Sovereign Compilation Guide

Welcome to the ORBIT 0X Build Manual. Because ORBIT 0X is a deeply integrated Sovereign Web Gateway (and not just a superficial UI wrapper), compiling it requires fetching the full Chromium source tree and injecting our C++/Rust architecture directly into the engine.

## ⚠️ Prerequisites

Before you begin, ensure your system meets the following requirements:
*   **Disk Space:** At least **100 GB** of free space on a fast SSD.
*   **Memory:** 16 GB RAM minimum (32+ GB highly recommended).
*   **OS/Compiler:** 
    *   *Windows:* Visual Studio 2022 (Desktop development with C++ & Windows 10/11 SDK).
    *   *Linux:* Clang/LLVM ecosystem.
*   **Git:** Ensure autocrlf is disabled (`git config --global core.autocrlf false`).

---

## 🛠️ Step 1: Install Google's `depot_tools`

Chromium cannot be cloned via a simple `git clone`. You must use Google's internal toolchain.

1. Download [depot_tools](https://storage.googleapis.com/chrome-infra/depot_tools.zip).
2. Extract it to a short path without spaces (e.g., `C:\src\depot_tools`).
3. Add this path to the **TOP** of your system's `PATH` environment variable.
4. Open a terminal and run `gclient` to initialize the tools (it will download Python and Git dependencies automatically).

---

## 📥 Step 2: Fetch the Engine (The Heavy Lifting)

Navigate to your working directory (outside of the `orbit-0x` repository) and download the Chromium source tree. *Note: This will download approximately 50GB of data. A fiber-optic connection is recommended.*

```bash
mkdir src
cd src
# Set the toolchain variable (Windows only)
$env:DEPOT_TOOLS_WIN_TOOLCHAIN=0
# Fetch the source
fetch chromium

🧬 Step 3: Inject ORBIT 0X Architecture
Once the Chromium source tree is fully downloaded, you must inject the ORBIT 0X sovereign modules (src/orbit) into the engine.
Copy the src/orbit directory from this repository.
Paste it directly into the Chromium src/ directory you just downloaded.
(Automated Step) Our build script will handle the De-Googling and UI asset replacement.
🚀 Step 4: Automate the Build
Navigate to the directory containing our master build script and execute it. The script will clean Google telemetry, inject UI assets, generate Ninja files, and compile the final binary.
# Make the script executable (if in a Bash environment)
chmod +x build_orbit.sh

# Execute the master automation script
./build_orbit.sh

Note on Compilation Time: Compiling the V8 Engine and Blink rendering pipeline alongside our Rust/C++ modules is CPU-intensive. It can take anywhere from 2 to 6 hours depending on your hardware.
Upon completion, your sovereign chrome.exe (ORBIT 0X) will be located in the out/Release/ directory. Welcome to the 0X Era.