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
 * FilesApi.h
 *
 * 
 */

#ifndef FilesApi_H_
#define FilesApi_H_


#include "ApiClient.h"

#include "Channel.h"
#include "File.h"
#include "FileList.h"
#include "GeneratedIds.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  FilesApi
{
public:
    FilesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~FilesApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a copy of a file and applies any requested updates with patch semantics.
    /// </remarks>
    /// <param name="fileId">The ID of the file.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="body"> (optional)</param>/// <param name="ignoreDefaultVisibility">Whether to ignore the domain&#39;s default visibility settings for the created file. Domain administrators can choose to make all uploaded files visible to the domain by default; this parameter bypasses that behavior for the request. Permissions are still inherited from parent folders. (optional, default to false)</param>/// <param name="keepRevisionForever">Whether to set the &#39;keepForever&#39; field in the new head revision. This is only applicable to files with binary content in Drive. (optional, default to false)</param>/// <param name="ocrLanguage">A language hint for OCR processing during image import (ISO 639-1 code). (optional)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>
    pplx::task<std::shared_ptr<File>> copy(utility::string_t fileId, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, std::shared_ptr<File> body, bool ignoreDefaultVisibility, bool keepRevisionForever, utility::string_t ocrLanguage, bool supportsTeamDrives);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a new file.
    /// </remarks>
    /// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="body"> (optional)</param>/// <param name="ignoreDefaultVisibility">Whether to ignore the domain&#39;s default visibility settings for the created file. Domain administrators can choose to make all uploaded files visible to the domain by default; this parameter bypasses that behavior for the request. Permissions are still inherited from parent folders. (optional, default to false)</param>/// <param name="keepRevisionForever">Whether to set the &#39;keepForever&#39; field in the new head revision. This is only applicable to files with binary content in Drive. (optional, default to false)</param>/// <param name="ocrLanguage">A language hint for OCR processing during image import (ISO 639-1 code). (optional)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>/// <param name="useContentAsIndexableText">Whether to use the uploaded content as indexable text. (optional, default to false)</param>
    pplx::task<std::shared_ptr<File>> create(utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, std::shared_ptr<File> body, bool ignoreDefaultVisibility, bool keepRevisionForever, utility::string_t ocrLanguage, bool supportsTeamDrives, bool useContentAsIndexableText);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Permanently deletes a file owned by the user without moving it to the trash. If the file belongs to a Team Drive the user must be an organizer on the parent. If the target is a folder, all descendants owned by the user are also deleted.
    /// </remarks>
    /// <param name="fileId">The ID of the file.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>
    pplx::task<void> delete_(utility::string_t fileId, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, bool supportsTeamDrives);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Permanently deletes all of the user&#39;s trashed files.
    /// </remarks>
    /// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>
    pplx::task<void> emptyTrash(utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Exports a Google Doc to the requested MIME type and returns the exported content. Please note that the exported content is limited to 10MB.
    /// </remarks>
    /// <param name="fileId">The ID of the file.</param>/// <param name="mimeType">The MIME type of the format requested for this export.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>
    pplx::task<void> export_(utility::string_t fileId, utility::string_t mimeType, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Generates a set of file IDs which can be provided in create requests.
    /// </remarks>
    /// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="count">The number of IDs to return. (optional, default to 10)</param>/// <param name="space">The space in which the IDs can be used to create new files. Supported values are &#39;drive&#39; and &#39;appDataFolder&#39;. (optional, default to drive)</param>
    pplx::task<std::shared_ptr<GeneratedIds>> generateIds(utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, int32_t count, utility::string_t space);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Gets a file&#39;s metadata or content by ID.
    /// </remarks>
    /// <param name="fileId">The ID of the file.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="acknowledgeAbuse">Whether the user is acknowledging the risk of downloading known malware or other abusive files. This is only applicable when alt&#x3D;media. (optional, default to false)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>
    pplx::task<std::shared_ptr<File>> get(utility::string_t fileId, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, bool acknowledgeAbuse, bool supportsTeamDrives);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Lists or searches files.
    /// </remarks>
    /// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="corpora">Comma-separated list of bodies of items (files/documents) to which the query applies. Supported bodies are &#39;user&#39;, &#39;domain&#39;, &#39;teamDrive&#39; and &#39;allTeamDrives&#39;. &#39;allTeamDrives&#39; must be combined with &#39;user&#39;; all other values must be used in isolation. Prefer &#39;user&#39; or &#39;teamDrive&#39; to &#39;allTeamDrives&#39; for efficiency. (optional)</param>/// <param name="corpus">The source of files to list. Deprecated: use &#39;corpora&#39; instead. (optional)</param>/// <param name="includeTeamDriveItems">Whether Team Drive items should be included in results. (optional, default to false)</param>/// <param name="orderBy">A comma-separated list of sort keys. Valid keys are &#39;createdTime&#39;, &#39;folder&#39;, &#39;modifiedByMeTime&#39;, &#39;modifiedTime&#39;, &#39;name&#39;, &#39;name_natural&#39;, &#39;quotaBytesUsed&#39;, &#39;recency&#39;, &#39;sharedWithMeTime&#39;, &#39;starred&#39;, and &#39;viewedByMeTime&#39;. Each key sorts ascending by default, but may be reversed with the &#39;desc&#39; modifier. Example usage: ?orderBy&#x3D;folder,modifiedTime desc,name. Please note that there is a current limitation for users with approximately one million files in which the requested sort order is ignored. (optional)</param>/// <param name="pageSize">The maximum number of files to return per page. Partial or empty result pages are possible even before the end of the files list has been reached. (optional, default to 100)</param>/// <param name="pageToken">The token for continuing a previous list request on the next page. This should be set to the value of &#39;nextPageToken&#39; from the previous response. (optional)</param>/// <param name="q">A query for filtering the file results. See the \&quot;Search for Files\&quot; guide for supported syntax. (optional)</param>/// <param name="spaces">A comma-separated list of spaces to query within the corpus. Supported values are &#39;drive&#39;, &#39;appDataFolder&#39; and &#39;photos&#39;. (optional, default to drive)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>/// <param name="teamDriveId">ID of Team Drive to search. (optional)</param>
    pplx::task<std::shared_ptr<FileList>> list(utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, utility::string_t corpora, utility::string_t corpus, bool includeTeamDriveItems, utility::string_t orderBy, int32_t pageSize, utility::string_t pageToken, utility::string_t q, utility::string_t spaces, bool supportsTeamDrives, utility::string_t teamDriveId);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Updates a file&#39;s metadata and/or content with patch semantics.
    /// </remarks>
    /// <param name="fileId">The ID of the file.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="addParents">A comma-separated list of parent IDs to add. (optional)</param>/// <param name="body"> (optional)</param>/// <param name="keepRevisionForever">Whether to set the &#39;keepForever&#39; field in the new head revision. This is only applicable to files with binary content in Drive. (optional, default to false)</param>/// <param name="ocrLanguage">A language hint for OCR processing during image import (ISO 639-1 code). (optional)</param>/// <param name="removeParents">A comma-separated list of parent IDs to remove. (optional)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>/// <param name="useContentAsIndexableText">Whether to use the uploaded content as indexable text. (optional, default to false)</param>
    pplx::task<std::shared_ptr<File>> update(utility::string_t fileId, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, utility::string_t addParents, std::shared_ptr<File> body, bool keepRevisionForever, utility::string_t ocrLanguage, utility::string_t removeParents, bool supportsTeamDrives, bool useContentAsIndexableText);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Subscribes to changes to a file
    /// </remarks>
    /// <param name="fileId">The ID of the file.</param>/// <param name="alt">Data format for the response. (optional, default to json)</param>/// <param name="fields">Selector specifying which fields to include in a partial response. (optional)</param>/// <param name="key">API key. Your API key identifies your project and provides you with API access, quota, and reports. Required unless you provide an OAuth 2.0 token. (optional)</param>/// <param name="oauthToken">OAuth 2.0 token for the current user. (optional)</param>/// <param name="prettyPrint">Returns response with indentations and line breaks. (optional, default to true)</param>/// <param name="quotaUser">Available to use for quota purposes for server-side applications. Can be any arbitrary string assigned to a user, but should not exceed 40 characters. Overrides userIp if both are provided. (optional)</param>/// <param name="userIp">IP address of the site where the request originates. Use this if you want to enforce per-user limits. (optional)</param>/// <param name="acknowledgeAbuse">Whether the user is acknowledging the risk of downloading known malware or other abusive files. This is only applicable when alt&#x3D;media. (optional, default to false)</param>/// <param name="resource"> (optional)</param>/// <param name="supportsTeamDrives">Whether the requesting application supports Team Drives. (optional, default to false)</param>
    pplx::task<std::shared_ptr<Channel>> watch(utility::string_t fileId, utility::string_t alt, utility::string_t fields, utility::string_t key, utility::string_t oauthToken, bool prettyPrint, utility::string_t quotaUser, utility::string_t userIp, bool acknowledgeAbuse, std::shared_ptr<Channel> resource, bool supportsTeamDrives);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* FilesApi_H_ */

