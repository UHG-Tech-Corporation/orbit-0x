// ==============================================================================
// ORBIT 0X - AI CAPSULE BRIDGE (HEADER)
// ==============================================================================
#ifndef ORBIT_AI_CAPSULE_BRIDGE_H_
#define ORBIT_AI_CAPSULE_BRIDGE_H_

#include <string>

namespace orbit {
namespace ai {

class OrbitAICapsule {
 public:
  // Fonction qui sera appelée par le navigateur pour interroger l'IA locale (Rust)
  static std::string ProcessPrompt(const std::string& prompt);
};

} // namespace ai
} // namespace orbit

#endif // ORBIT_AI_CAPSULE_BRIDGE_H_
