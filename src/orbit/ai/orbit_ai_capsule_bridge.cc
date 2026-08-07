// ==============================================================================
// ORBIT 0X - AI CAPSULE BRIDGE (IMPLEMENTATION)
// ==============================================================================
#include "orbit_ai_capsule_bridge.h"

// Inclusion du fichier magique généré par le compilateur CXX depuis notre code Rust
#include "orbit/ai/rust/src/lib.rs.h"

namespace orbit {
namespace ai {

std::string OrbitAICapsule::ProcessPrompt(const std::string& prompt) {
    // Appel direct à la fonction Rust compilée de manière sécurisée
    return std::string(process_local_prompt(prompt));
}

} // namespace ai
} // namespace orbit
