// ==============================================================================
// ORBIT 0X - NEW TAB PAGE & SEARCH ROUTER (HEADER)
// Sovereign Web Gateway | UHG-TECH LTD
// ==============================================================================
#ifndef ORBIT_UI_NEWTAB_ORBIT_NEW_TAB_PAGE_H_
#define ORBIT_UI_NEWTAB_ORBIT_NEW_TAB_PAGE_H_

#include <string>
#include <vector>

namespace orbit {
namespace ui {

struct SearchEngineProvider {
  std::string name;
  std::string search_url_template;
  std::string affiliate_tag;
};

class OrbitNewTabPage {
 public:
  OrbitNewTabPage();
  ~OrbitNewTabPage();

  // Initialise les moteurs de recherche et applique les tags d'affiliation
  void InitializeSearchProviders();

  // Construit l'URL finale avec le tag partenaire (Google, DuckDuckGo, etc.)
  std::string BuildSearchUrl(const std::string& provider_name, const std::string& query);

  // Genere le contenu HTML/CSS natif de la page orbit://newtab
  std::string RenderHTML();

 private:
  std::vector<SearchEngineProvider> providers_;
  std::string default_provider_name_;
};

} // namespace ui
} // namespace orbit

#endif // ORBIT_UI_NEWTAB_ORBIT_NEW_TAB_PAGE_H_

