// ==============================================================================
// ORBIT 0X - IDENTITY MANAGER (HEADER)
// Sovereign Web Gateway | UHG-TECH LTD
// ==============================================================================
#ifndef ORBIT_IDENTITY_ORBIT_IDENTITY_MANAGER_H_
#define ORBIT_IDENTITY_ORBIT_IDENTITY_MANAGER_H_

#include <string>

namespace orbit {
namespace identity {

// Structure pour stocker les informations du compte 0X
struct OrbitAccount {
  std::string email;
  bool is_authenticated;
  bool is_premium_workspace;
  std::string sync_token;
};

class OrbitIdentityManager {
 public:
  OrbitIdentityManager();
  ~OrbitIdentityManager();

  // Fonction pour se connecter avec un compte @0x.com
  bool LoginWith0xAccount(const std::string& email, const std::string& password);
  
  // Verifie si l'utilisateur a droit aux fonctions avancees (Cloud AI, VPN, etc.)
  bool IsPremiumUser() const;

  // Deconnexion et suppression securisee des donnees locales
  void Logout();

 private:
  OrbitAccount current_user_;
  
  // Valide que l'email se termine bien par @0x.com
  bool IsValid0xDomain(const std::string& email) const;
};

} // namespace identity
} // namespace orbit

#endif // ORBIT_IDENTITY_ORBIT_IDENTITY_MANAGER_H_
