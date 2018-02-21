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
 * PermissionList.h
 *
 * A list of permissions for a file.
 */

#ifndef PermissionList_H_
#define PermissionList_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>
#include "Permission.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// A list of permissions for a file.
/// </summary>
class  PermissionList
    : public ModelBase
{
public:
    PermissionList();
    virtual ~PermissionList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PermissionList members

    /// <summary>
    /// Identifies what kind of resource this is. Value: the fixed string \&quot;drive#permissionList\&quot;.
    /// </summary>
    utility::string_t getKind() const;
    bool kindIsSet() const;
    void unsetKind();
    void setKind(utility::string_t value);
    /// <summary>
    /// The page token for the next page of permissions. This field will be absent if the end of the permissions list has been reached. If the token is rejected for any reason, it should be discarded, and pagination should be restarted from the first page of results.
    /// </summary>
    utility::string_t getNextPageToken() const;
    bool nextPageTokenIsSet() const;
    void unsetNextPageToken();
    void setNextPageToken(utility::string_t value);
    /// <summary>
    /// The list of permissions. If nextPageToken is populated, then this list may be incomplete and an additional page of results should be fetched.
    /// </summary>
    std::vector<std::shared_ptr<Permission>>& getPermissions();
    bool permissionsIsSet() const;
    void unsetPermissions();
    void setPermissions(std::vector<std::shared_ptr<Permission>> value);

protected:
    utility::string_t m_Kind;
    bool m_KindIsSet;
    utility::string_t m_NextPageToken;
    bool m_NextPageTokenIsSet;
    std::vector<std::shared_ptr<Permission>> m_Permissions;
    bool m_PermissionsIsSet;
};

}
}
}
}

#endif /* PermissionList_H_ */