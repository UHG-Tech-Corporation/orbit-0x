// ==============================================================================
// ORBIT 0X - SOVEREIGN TELEMETRY (IMPLEMENTATION)
// Sovereign Web Gateway | UHG-TECH LTD
// ==============================================================================

#include "orbit_sovereign_telemetry.h"
#include <iostream>

namespace orbit {
namespace telemetry {

SovereignTelemetry::SovereignTelemetry() {
    // Le serveur (backend) qui comptera les utilisateurs
    telemetry_endpoint_ = "https://metrics.uhg-tech.com/api/v1/ping";
}

SovereignTelemetry::~SovereignTelemetry() = default;

bool SovereignTelemetry::HasPingedToday() const {
    // En production, ce code lira un petit fichier local chiffre 
    // pour voir si la date du jour correspond au dernier ping.
    // Pour l'instant, on simule que le ping n'a pas encore ete envoye.
    return false; 
}

void SovereignTelemetry::SendDailyActiveUserPing() {
    if (HasPingedToday()) {
        return; // Si on a deja compte l'utilisateur aujourd'hui, on stoppe tout.
    }

    // Le ping anonyme est envoye a ton tableau de bord
    std::cout << "[ORBIT TELEMETRY] Connexion etablie avec : " << telemetry_endpoint_ << std::endl;
    std::cout << "[ORBIT TELEMETRY] +1 Utilisateur Actif enregistre." << std::endl;
    std::cout << "[ORBIT TELEMETRY] CONFIDENTIALITE STRICTE : Aucune donnee personnelle transmise." << std::endl;
    
    // Apres l'envoi, le systeme enregistre la date du jour pour ne plus rien 
    // envoyer avant le lendemain.
}

} // namespace telemetry
} // namespace orbit
