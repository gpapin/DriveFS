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
 * PermissionsApi.h
 *
 * 
 */

#ifndef PermissionsApi_H_
#define PermissionsApi_H_


#include "ApiClient.h"

#include "Permission.h"
#include "PermissionList.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  PermissionsApi
{
public:
    PermissionsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~PermissionsApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a permission for a file or Team Drive.
    /// </remarks>
    /// <param name="fileId">The ID of the file or Team Drive.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="body"> (optional)</param>/// <param name="emailMessage">A plain text custom message to include in the notification email. (optional)</param>/// <param name="sendNotificationEmail">Whether to send a notification email when sharing to users or groups. This defaults to true for users and groups, and is not allowed for other requests. It must not be disabled for ownership transfers. (optional)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>/// <param name="transferOwnership">Whether to transfer ownership to the specified user and downgrade the current owner to a writer. This parameter is required as an acknowledgement of the side effect. (optional, default to false)</param>/// <param name="useDomainAdminAccess">Whether the request should be treated as if it was issued by a domain administrator; if set to true, then the requester will be granted access if they are an administrator of the domain to which the item belongs. (optional, default to false)</param>
    pplx::task<std::shared_ptr<Permission>> create(utility::string_t fileId, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, std::shared_ptr<Permission> body, utility::string_t emailMessage, bool sendNotificationEmail, bool supportsTeamDrives, bool transferOwnership, bool useDomainAdminAccess);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Deletes a permission.
    /// </remarks>
    /// <param name="fileId">The ID of the file or Team Drive.</param>/// <param name="permissionId">The ID of the permission.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>/// <param name="useDomainAdminAccess">Whether the request should be treated as if it was issued by a domain administrator; if set to true, then the requester will be granted access if they are an administrator of the domain to which the item belongs. (optional, default to false)</param>
    pplx::task<void> delete_(utility::string_t fileId, utility::string_t permissionId, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, bool supportsTeamDrives, bool useDomainAdminAccess);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Gets a permission by ID.
    /// </remarks>
    /// <param name="fileId">The ID of the file.</param>/// <param name="permissionId">The ID of the permission.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>/// <param name="useDomainAdminAccess">Whether the request should be treated as if it was issued by a domain administrator; if set to true, then the requester will be granted access if they are an administrator of the domain to which the item belongs. (optional, default to false)</param>
    pplx::task<std::shared_ptr<Permission>> get(utility::string_t fileId, utility::string_t permissionId, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, bool supportsTeamDrives, bool useDomainAdminAccess);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Lists a file&#39;s or Team Drive&#39;s permissions.
    /// </remarks>
    /// <param name="fileId">The ID of the file or Team Drive.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="pageSize">The maximum number of permissions to return per page. When not set for files in a Team Drive, at most 100 results will be returned. When not set for files that are not in a Team Drive, the entire list will be returned. (optional)</param>/// <param name="pageToken">The token for continuing a previous list request on the next page. This should be set to the value of &#39;nextPageToken&#39; from the previous response. (optional)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>/// <param name="useDomainAdminAccess">Whether the request should be treated as if it was issued by a domain administrator; if set to true, then the requester will be granted access if they are an administrator of the domain to which the item belongs. (optional, default to false)</param>
    pplx::task<std::shared_ptr<PermissionList>> list(utility::string_t fileId, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, int32_t pageSize, utility::string_t pageToken, bool supportsTeamDrives, bool useDomainAdminAccess);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Updates a permission with patch semantics.
    /// </remarks>
    /// <param name="fileId">The ID of the file or Team Drive.</param>/// <param name="permissionId">The ID of the permission.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="body"> (optional)</param>/// <param name="removeExpiration">Whether to remove the expiration date. (optional, default to false)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>/// <param name="transferOwnership">Whether to transfer ownership to the specified user and downgrade the current owner to a writer. This parameter is required as an acknowledgement of the side effect. (optional, default to false)</param>/// <param name="useDomainAdminAccess">Whether the request should be treated as if it was issued by a domain administrator; if set to true, then the requester will be granted access if they are an administrator of the domain to which the item belongs. (optional, default to false)</param>
    pplx::task<std::shared_ptr<Permission>> update(utility::string_t fileId, utility::string_t permissionId, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, std::shared_ptr<Permission> body, bool removeExpiration, bool supportsTeamDrives, bool transferOwnership, bool useDomainAdminAccess);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* PermissionsApi_H_ */

