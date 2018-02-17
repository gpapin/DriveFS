/**
 * Drive
 * Manages files in Drive including uploading, downloading, searching, detecting changes, and updating sharing permissions.
 *
 * OpenAPI spec version: v3
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * AboutApi.h
 *
 * 
 */

#ifndef AboutApi_H_
#define AboutApi_H_


#include "ApiClient.h"

#include "About.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  AboutApi
{
public:
    AboutApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~AboutApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Gets information about the user, the user&#39;s Drive, and system capabilities.
    /// </remarks>
    /// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>
    pplx::task<std::shared_ptr<About>> get(utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* AboutApi_H_ */

