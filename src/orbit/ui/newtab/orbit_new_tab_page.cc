// ==============================================================================
// ORBIT 0X - NEW TAB PAGE & SEARCH ROUTER (IMPLEMENTATION)
// Sovereign Web Gateway | UHG-TECH LTD
// ==============================================================================
#include "orbit_new_tab_page.h"
#include <sstream>

namespace orbit {
namespace ui {

OrbitNewTabPage::OrbitNewTabPage() {
    InitializeSearchProviders();
}

OrbitNewTabPage::~OrbitNewTabPage() {}

void OrbitNewTabPage::InitializeSearchProviders() {
    // 1. Google avec tag partenaire ORBIT 0X
    providers_.push_back({
        "Google",
        "https://www.google.com/search?q={query}&client=orbit0x",
        "client=orbit0x"
    });

    // 2. DuckDuckGo pour les adeptes de la vie privee
    providers_.push_back({
        "DuckDuckGo",
        "https://duckduckgo.com/?q={query}&t=orbit0x",
        "t=orbit0x"
    });

    // 3. Qwant (Alternative europeenne souveraine)
    providers_.push_back({
        "Qwant",
        "https://www.qwant.com/?q={query}&client=orbit0x",
        "client=orbit0x"
    });

    // Moteur par defaut
    default_provider_name_ = "DuckDuckGo";
}

std::string OrbitNewTabPage::BuildSearchUrl(const std::string& provider_name, const std::string& query) {
    for (const auto& provider : providers_) {
        if (provider.name == provider_name) {
            std::string url = provider.search_url_template;
            size_t pos = url.find("{query}");
            if (pos != std::string::npos) {
                url.replace(pos, 7, query);
            }
            return url;
        }
    }
    // Fallback vers la recherche par defaut
    return "https://duckduckgo.com/?q=" + query + "&t=orbit0x";
}

std::string OrbitNewTabPage::RenderHTML() {
    std::stringstream html;
    html << "<!DOCTYPE html>\n"
         << "<html lang=\"fr\">\n"
         << "<head>\n"
         << "  <meta charset=\"UTF-8\">\n"
         << "  <title>ORBIT 0X — Sovereign Gateway</title>\n"
         << "  <style>\n"
         << "    body { background-color: #0b0f19; color: #ffffff; font-family: sans-serif; display: flex; flex-direction: column; align-items: center; justify-content: center; height: 100vh; margin: 0; }\n"
         << "    h1 { font-size: 2.5rem; letter-spacing: 2px; margin-bottom: 20px; }\n"
         << "    .search-box { width: 50%; padding: 15px 25px; border-radius: 30px; border: 1px solid #1f293d; background: #111827; color: #fff; font-size: 1.1rem; outline: none; }\n"
         << "    .search-box:focus { border-color: #3b82f6; box-shadow: 0 0 10px rgba(59, 130, 246, 0.5); }\n"
         << "    .badge { margin-top: 15px; font-size: 0.85rem; color: #6b7280; }\n"
         << "  </style>\n"
         << "</head>\n"
         << "<body>\n"
         << "  <h1>ORBIT 0X</h1>\n"
         << "  <input type=\"text\" class=\"search-box\" placeholder=\"Rechercher en toute souverainete...\">\n"
         << "  <div class=\"badge\">Protege par L'Ombre AI & Le Bouclier Reseau Rust</div>\n"
         << "</body>\n"
         << "</html>\n";
    return html.str();
}

} // namespace ui
} // namespace orbit
