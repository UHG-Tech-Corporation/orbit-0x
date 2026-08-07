// ==============================================================================
// ORBIT 0X - THEME & COLOR PALETTE
// Sovereign Web Gateway | UHG-TECH LTD
// ==============================================================================

#ifndef ORBIT_UI_BRANDING_ORBIT_THEME_COLORS_H_
#define ORBIT_UI_BRANDING_ORBIT_THEME_COLORS_H_

namespace orbit {
namespace ui {
namespace theme {

// Identite officielle du navigateur
constexpr char kBrowserName[] = "ORBIT 0X";
constexpr char kBrowserVersion[] = "1.0.0-Sovereign-Alpha";

// ==============================================================================
// Palette de couleurs souveraine (Dark Theme par defaut)
// Format: 0xFF + RRGGBB (SkColor natif pour le moteur graphique Chromium)
// ==============================================================================

// Noir profond/Bleu nuit (Ton design original)
constexpr unsigned int kOrbitBackgroundColor = 0xFF0B0F19; 

// Gris fonce
constexpr unsigned int kOrbitToolbarColor = 0xFF111827;   

// Cyan Neon (Boutons actifs, L'Ombre IA)
constexpr unsigned int kOrbitAccentColor = 0xFF00E5FF;    

// Blanc pur
constexpr unsigned int kOrbitTextColor = 0xFFFFFFFF;      

} // namespace theme
} // namespace ui
} // namespace orbit

#endif // ORBIT_UI_BRANDING_ORBIT_THEME_COLORS_H_
