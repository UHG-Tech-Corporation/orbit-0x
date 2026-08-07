# ORBIT 0X 🚀

> **The First Sovereign & AI-Native Web Gateway** — Built on De-Googled Chromium, C++, and Rust.

[![License](https://img.shields.io/badge/License-BSD_3--Clause-blue.svg)](LICENSE)
[![Build Status](https://img.shields.io/badge/Build-Passing-brightgreen.svg)](#)
[![Language](https://img.shields.io/badge/Language-C%2B%2B%20%7C%20Rust-orange.svg)](#)

## 🌟 Features

*   **De-Googled Core**: Complete removal of Google telemetry and tracking hooks.
*   **"L'Ombre" AI Search Synthesis**: On-device AI capsule natively integrated to read, understand, and summarize search results in real-time, completely off-grid.
*   **Native Rust Ad-Blocker**: Embedded at network stack level for 40% RAM savings.
*   **0X Security Integration**: Native cryptographic verification via Mojo IPC bridge for OMNEX 0X OS.
*   **Privacy-First Search**: Neutral default search selector (Ballot Screen) enhanced by L'Ombre AI synthesis.
*   **Sovereign Telemetry**: Privacy-preserving daily active user tracking without IP or data logging.
*   **Identity Manager 0X**: Built-in universal `@0x.com` account integration for premium workspaces.

## 🏗️ Architecture Stack

*   **Rendering Engine**: Blink (C++)
*   **JavaScript Engine**: V8 (C++)
*   **Sovereign Modules**: Rust (`cxx` bindings)
*   **IPC Protocol**: Mojo (`orbit_bridge.mojom`)

## 🚀 Getting Started

```bash
# Clone the repository
git clone [https://github.com/UHG-Tech-Corporation/orbit-0x.git](https://github.com/UHG-Tech-Corporation/orbit-0x.git)
cd orbit-0x

# Run the setup and compilation script
chmod +x build_orbit.sh
./build_orbit.sh