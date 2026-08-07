// ==============================================================================
// ORBIT 0X - NATIVE NETWORK INTERCEPTOR (IMPLEMENTATION)
// ==============================================================================
#include "orbit_network_interceptor.h"
#include <iostream>

namespace orbit {
namespace adblock {

bool OrbitNetworkInterceptor::ShouldBlockRequest(const std::string& url) {
    // 1. Bloquer la telemetrie et les traqueurs de maniere agressive
    if (IsGoogleTelemetry(url)) {
        std::cout << "[ORBIT 0X SHIELD] Requete bloquee (Mouchard/Pub) : " << url << std::endl;
        return true; // true = Requete detruite
    }

    // 2. (A venir) : Appel vers notre module Rust pour des listes de filtres plus complexes

    // Si tout est propre, on laisse passer la requete
    return false;
}

bool OrbitNetworkInterceptor::IsGoogleTelemetry(const std::string& url) {
    // Liste noire hardcore (De-Googling)
    if (url.find("clients1.google.com") != std::string::npos ||
        url.find("googleapis.com/log") != std::string::npos ||
        url.find("doubleclick.net") != std::string::npos ||
        url.find("google-analytics.com") != std::string::npos) {
        return true;
    }
    return false;
}

} // namespace adblock
} // namespace orbit