// ==============================================================================
// ORBIT 0X - L'OMBRE CLOUD AI CONNECTOR (HEADER)
// Sovereign Web Gateway | UHG-TECH LTD
// ==============================================================================
#ifndef ORBIT_AI_CLOUD_ORBIT_CLOUD_AI_CONNECTOR_H_
#define ORBIT_AI_CLOUD_ORBIT_CLOUD_AI_CONNECTOR_H_

#include <string>

namespace orbit {
namespace ai {
namespace cloud {

class OrbitCloudAiConnector {
 public:
  OrbitCloudAiConnector();
  ~OrbitCloudAiConnector();

  // Envoie un prompt complexe au serveur L'Ombre (UHG-TECH)
  // Retourne la reponse JSON sous forme de chaine de caracteres
  std::string QueryLombreAPI(const std::string& prompt, const std::string& api_key);

 private:
  // URL de ton futur point d'entree API
  const std::string lombre_api_endpoint_ = "https://api.uhg-tech.com/lombre/v1/reasoning";
};

} // namespace cloud
} // namespace ai
} // namespace orbit

#endif // ORBIT_AI_CLOUD_ORBIT_CLOUD_AI_CONNECTOR_H_
