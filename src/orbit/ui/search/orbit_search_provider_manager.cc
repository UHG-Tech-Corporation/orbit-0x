// ==============================================================================
// ORBIT 0X - SEARCH PROVIDER MANAGER (IMPLEMENTATION)
// Sovereign Web Gateway | UHG-TECH LTD
// ==============================================================================

#include "orbit_search_provider_manager.h"
#include <iostream>

namespace orbit {
namespace search {

OrbitSearchProviderManager::OrbitSearchProviderManager() : choice_pending_(true) {
    // Initialisation du "Ballot Screen" avec des moteurs neutres et prives
    // (Google et Bing sont volontairement exclus de la configuration par defaut)
    providers_ = {
        {"DuckDuckGo", "https://duckduckgo.com/?q=%s", "assets/icons/ddg_logo.png"},
        {"Brave Search", "https://search.brave.com/search?q=%s", "assets/icons/brave_logo.png"},
        {"Qwant", "https://www.qwant.com/?q=%s", "assets/icons/qwant_logo.png"},
        {"Startpage", "https://www.startpage.com/sp/search?query=%s", "assets/icons/startpage_logo.png"},
        {"Mojeek", "https://www.mojeek.com/search?q=%s", "assets/icons/mojeek_logo.png"}
    };
}

OrbitSearchProviderManager::~OrbitSearchProviderManager() = default;

std::vector<SearchProvider> OrbitSearchProviderManager::GetAvailableProviders() const {
    return providers_;
}

void OrbitSearchProviderManager::SetDefaultProvider(const std::string& provider_name) {
    selected_provider_ = provider_name;
    choice_pending_ = false; // Le choix est fait, on desactive l'ecran pour le futur
    
    // Note de l'architecte: En production, ceci s'inscrira dans le fichier JSON des Preferences Chromium
    std::cout << "[ORBIT 0X] Moteur de recherche souverain configure sur : " 
              << selected_provider_ << std::endl;
}

bool OrbitSearchProviderManager::IsChoicePending() const {
    // Si TRUE, le navigateur intercepte le demarrage et affiche l'ecran de choix
    return choice_pending_;
}

} // namespace search
} // namespace orbit
