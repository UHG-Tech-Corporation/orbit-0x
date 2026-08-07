// ==============================================================================
// ORBIT 0X - SEARCH PROVIDER MANAGER (HEADER)
// Sovereign Web Gateway | UHG-TECH LTD
// ==============================================================================

#ifndef ORBIT_UI_SEARCH_PROVIDER_MANAGER_H_
#define ORBIT_UI_SEARCH_PROVIDER_MANAGER_H_

#include <string>
#include <vector>

namespace orbit {
namespace search {

// Structure definissant un moteur de recherche souverain
struct SearchProvider {
    std::string name;
    std::string search_url;
    std::string logo_asset_path;
};

class OrbitSearchProviderManager {
public:
    OrbitSearchProviderManager();
    ~OrbitSearchProviderManager();

    // Recupere la liste universelle des moteurs de recherche
    std::vector<SearchProvider> GetAvailableProviders() const;

    // Enregistre le choix definitif de l'utilisateur
    void SetDefaultProvider(const std::string& provider_name);

    // Verifie si l'utilisateur doit voir l'ecran de selection (Premier lancement)
    bool IsChoicePending() const;

private:
    std::vector<SearchProvider> providers_;
    bool choice_pending_;
    std::string selected_provider_;
};

} // namespace search
} // namespace orbit

#endif // ORBIT_UI_SEARCH_PROVIDER_MANAGER_H_

