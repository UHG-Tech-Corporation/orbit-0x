// ==============================================================================
// ORBIT 0X - NATIVE NETWORK INTERCEPTOR (HEADER)
// ==============================================================================
#ifndef ORBIT_ADBLOCK_NETWORK_INTERCEPTOR_H_
#define ORBIT_ADBLOCK_NETWORK_INTERCEPTOR_H_

#include <string>

namespace orbit {
namespace adblock {

class OrbitNetworkInterceptor {
 public:
  // Fonction appelee par le moteur Chromium pour chaque requete reseau
  static bool ShouldBlockRequest(const std::string& url);

 private:
  // Verifie si l'URL appartient a un tracker Google (De-Googling)
  static bool IsGoogleTelemetry(const std::string& url);
};

} // namespace adblock
} // namespace orbit

#endif // ORBIT_ADBLOCK_NETWORK_INTERCEPTOR_H_