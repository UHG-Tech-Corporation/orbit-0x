// ==============================================================================
// ORBIT 0X - IDENTITY MANAGER (IMPLEMENTATION)
// Sovereign Web Gateway | UHG-TECH LTD
// ==============================================================================
#include "orbit_identity_manager.h"
#include <iostream>

namespace orbit {
namespace identity {

OrbitIdentityManager::OrbitIdentityManager() {
    // Par defaut, l'utilisateur n'est pas connecte
    current_user_ = {"", false, false, ""};
}

OrbitIdentityManager::~OrbitIdentityManager() {}

bool OrbitIdentityManager::IsValid0xDomain(const std::string& email) const {
    // On force l'utilisation de l'ecosysteme souverain
    std::string domain = "@0x.com";
    if (email.length() >= domain.length()) {
        return (0 == email.compare(email.length() - domain.length(), domain.length(), domain));
    }
    return false;
}

bool OrbitIdentityManager::LoginWith0xAccount(const std::string& email, const std::string& password) {
    std::cout << "[0X IDENTITY] Tentative de connexion pour : " << email << std::endl;

    if (!IsValid0xDomain(email)) {
        std::cout << "[0X IDENTITY] ❌ Échec : Seuls les comptes @0x.com sont autorisés." << std::endl;
        return false;
    }

    // TODO: Appel réseau sécurisé (Mojo/Rust) vers les serveurs d'authentification UHG-TECH
    // Simulation d'une connexion réussie pour le squelette architectural :
    current_user_.email = email;
    current_user_.is_authenticated = true;
    
    // Logique d'entreprise : Si l'API renvoie un statut Premium
    current_user_.is_premium_workspace = true; // Simulé
    current_user_.sync_token = "SECURE_SYNC_TOKEN_8923749823";

    std::cout << "[0X IDENTITY] ✅ Connexion réussie. Accès Workspace autorisé." << std::endl;
    return true;
}

bool OrbitIdentityManager::IsPremiumUser() const {
    return current_user_.is_authenticated && current_user_.is_premium_workspace;
}

void OrbitIdentityManager::Logout() {
    std::cout << "[0X IDENTITY] Déconnexion et purge sécurisée de la session." << std::endl;
    current_user_ = {"", false, false, ""};
}

} // namespace identity
} // namespace orbit


