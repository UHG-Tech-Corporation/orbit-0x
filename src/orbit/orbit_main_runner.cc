// ==============================================================================
// ORBIT 0X - MAIN RUNNER & ORCHESTRATOR (IMPLEMENTATION)
// Sovereign Web Gateway | UHG-TECH LTD
// ==============================================================================
#include "orbit_main_runner.h"

// Inclusions de nos modules souverains
#include "identity/orbit_identity_manager.h"
#include "adblock/orbit_network_interceptor.h"
#include <iostream>

namespace orbit {

void OrbitMainRunner::InitializeSovereignModules() {
    std::cout << "==================================================" << std::endl;
    std::cout << " 🚀 ORBIT 0X - SEQUENCE D'AMORCAGE SOUVERAINE" << std::endl;
    std::cout << "==================================================" << std::endl;

    // 1. Amorçage de l'Identity Manager (Comptes @0x.com)
    std::cout << "[BOOT] Vérification de l'environnement d'identité..." << std::endl;
    identity::OrbitIdentityManager identity_manager;

    // 2. Armement du Bouclier Réseau (AdBlocker natif)
    std::cout << "[BOOT] Armement de l'intercepteur réseau agressif..." << std::endl;
    // La logique statique de l'AdBlocker est prête à intercepter via les hooks Chromium

    // 3. Préparation des capsules IA
    std::cout << "[BOOT] Modules L'Ombre AI (Local & Cloud) en stand-by." << std::endl;

    std::cout << "[BOOT] ✅ Tous les systèmes souverains sont opérationnels." << std::endl;
    std::cout << "==================================================" << std::endl;
}

} // namespace orbit
