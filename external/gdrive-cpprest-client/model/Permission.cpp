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



#include "Permission.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Permission::Permission()
{
    m_AllowFileDiscovery = false;
    m_AllowFileDiscoveryIsSet = false;
    m_Deleted = false;
    m_DeletedIsSet = false;
    m_DisplayName = U("");
    m_DisplayNameIsSet = false;
    m_Domain = U("");
    m_DomainIsSet = false;
    m_EmailAddress = U("");
    m_EmailAddressIsSet = false;
    m_ExpirationTime = utility::datetime();
    m_ExpirationTimeIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Kind = U("");
    m_KindIsSet = false;
    m_PhotoLink = U("");
    m_PhotoLinkIsSet = false;
    m_Role = U("");
    m_RoleIsSet = false;
    m_TeamDrivePermissionDetailsIsSet = false;
    m_Type = U("");
    m_TypeIsSet = false;
}

Permission::~Permission()
{
}

void Permission::validate()
{
    // TODO: implement validation
}

web::json::value Permission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_AllowFileDiscoveryIsSet)
    {
        val[U("allowFileDiscovery")] = ModelBase::toJson(m_AllowFileDiscovery);
    }
    if(m_DeletedIsSet)
    {
        val[U("deleted")] = ModelBase::toJson(m_Deleted);
    }
    if(m_DisplayNameIsSet)
    {
        val[U("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    if(m_DomainIsSet)
    {
        val[U("domain")] = ModelBase::toJson(m_Domain);
    }
    if(m_EmailAddressIsSet)
    {
        val[U("emailAddress")] = ModelBase::toJson(m_EmailAddress);
    }
    if(m_ExpirationTimeIsSet)
    {
        val[U("expirationTime")] = ModelBase::toJson(m_ExpirationTime);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_KindIsSet)
    {
        val[U("kind")] = ModelBase::toJson(m_Kind);
    }
    if(m_PhotoLinkIsSet)
    {
        val[U("photoLink")] = ModelBase::toJson(m_PhotoLink);
    }
    if(m_RoleIsSet)
    {
        val[U("role")] = ModelBase::toJson(m_Role);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_TeamDrivePermissionDetails )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("teamDrivePermissionDetails")] = web::json::value::array(jsonArray);
        }
    }
    if(m_TypeIsSet)
    {
        val[U("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

void Permission::fromJson(web::json::value& val)
{
    if(val.has_field(U("allowFileDiscovery")))
    {
        setAllowFileDiscovery(ModelBase::boolFromJson(val[U("allowFileDiscovery")]));
    }
    if(val.has_field(U("deleted")))
    {
        setDeleted(ModelBase::boolFromJson(val[U("deleted")]));
    }
    if(val.has_field(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[U("displayName")]));
    }
    if(val.has_field(U("domain")))
    {
        setDomain(ModelBase::stringFromJson(val[U("domain")]));
    }
    if(val.has_field(U("emailAddress")))
    {
        setEmailAddress(ModelBase::stringFromJson(val[U("emailAddress")]));
    }
    if(val.has_field(U("expirationTime")))
    {
        setExpirationTime(ModelBase::dateFromJson(val[U("expirationTime")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    if(val.has_field(U("kind")))
    {
        setKind(ModelBase::stringFromJson(val[U("kind")]));
    }
    if(val.has_field(U("photoLink")))
    {
        setPhotoLink(ModelBase::stringFromJson(val[U("photoLink")]));
    }
    if(val.has_field(U("role")))
    {
        setRole(ModelBase::stringFromJson(val[U("role")]));
    }
    {
        m_TeamDrivePermissionDetails.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("teamDrivePermissionDetails")))
        {
        for( auto& item : val[U("teamDrivePermissionDetails")].as_array() )
        {
            if(item.is_null())
            {
                m_TeamDrivePermissionDetails.push_back( std::shared_ptr<Permission_teamDrivePermissionDetails>(nullptr) );
            }
            else
            {
                std::shared_ptr<Permission_teamDrivePermissionDetails> newItem(new Permission_teamDrivePermissionDetails());
                newItem->fromJson(item);
                m_TeamDrivePermissionDetails.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("type")))
    {
        setType(ModelBase::stringFromJson(val[U("type")]));
    }
}

void Permission::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_AllowFileDiscoveryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("allowFileDiscovery"), m_AllowFileDiscovery));
    }
    if(m_DeletedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("deleted"), m_Deleted));
    }
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("displayName"), m_DisplayName));
        
    }
    if(m_DomainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("domain"), m_Domain));
        
    }
    if(m_EmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("emailAddress"), m_EmailAddress));
        
    }
    if(m_ExpirationTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("expirationTime"), m_ExpirationTime));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_KindIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("kind"), m_Kind));
        
    }
    if(m_PhotoLinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("photoLink"), m_PhotoLink));
        
    }
    if(m_RoleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("role"), m_Role));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_TeamDrivePermissionDetails )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("teamDrivePermissionDetails"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
        
    }
}

void Permission::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("allowFileDiscovery")))
    {
        setAllowFileDiscovery(ModelBase::boolFromHttpContent(multipart->getContent(U("allowFileDiscovery"))));
    }
    if(multipart->hasContent(U("deleted")))
    {
        setDeleted(ModelBase::boolFromHttpContent(multipart->getContent(U("deleted"))));
    }
    if(multipart->hasContent(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(U("displayName"))));
    }
    if(multipart->hasContent(U("domain")))
    {
        setDomain(ModelBase::stringFromHttpContent(multipart->getContent(U("domain"))));
    }
    if(multipart->hasContent(U("emailAddress")))
    {
        setEmailAddress(ModelBase::stringFromHttpContent(multipart->getContent(U("emailAddress"))));
    }
    if(multipart->hasContent(U("expirationTime")))
    {
        setExpirationTime(ModelBase::dateFromHttpContent(multipart->getContent(U("expirationTime"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("kind")))
    {
        setKind(ModelBase::stringFromHttpContent(multipart->getContent(U("kind"))));
    }
    if(multipart->hasContent(U("photoLink")))
    {
        setPhotoLink(ModelBase::stringFromHttpContent(multipart->getContent(U("photoLink"))));
    }
    if(multipart->hasContent(U("role")))
    {
        setRole(ModelBase::stringFromHttpContent(multipart->getContent(U("role"))));
    }
    {
        m_TeamDrivePermissionDetails.clear();
        if(multipart->hasContent(U("teamDrivePermissionDetails")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("teamDrivePermissionDetails"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_TeamDrivePermissionDetails.push_back( std::shared_ptr<Permission_teamDrivePermissionDetails>(nullptr) );
            }
            else
            {
                std::shared_ptr<Permission_teamDrivePermissionDetails> newItem(new Permission_teamDrivePermissionDetails());
                newItem->fromJson(item);
                m_TeamDrivePermissionDetails.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    }
}

bool Permission::getAllowFileDiscovery() const
{
    return m_AllowFileDiscovery;
}


void Permission::setAllowFileDiscovery(bool value)
{
    m_AllowFileDiscovery = value;
    m_AllowFileDiscoveryIsSet = true;
}
bool Permission::allowFileDiscoveryIsSet() const
{
    return m_AllowFileDiscoveryIsSet;
}

void Permission::unsetAllowFileDiscovery()
{
    m_AllowFileDiscoveryIsSet = false;
}

bool Permission::getDeleted() const
{
    return m_Deleted;
}


void Permission::setDeleted(bool value)
{
    m_Deleted = value;
    m_DeletedIsSet = true;
}
bool Permission::deletedIsSet() const
{
    return m_DeletedIsSet;
}

void Permission::unsetDeleted()
{
    m_DeletedIsSet = false;
}

utility::string_t Permission::getDisplayName() const
{
    return m_DisplayName;
}


void Permission::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool Permission::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}

void Permission::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}

utility::string_t Permission::getDomain() const
{
    return m_Domain;
}


void Permission::setDomain(utility::string_t value)
{
    m_Domain = value;
    m_DomainIsSet = true;
}
bool Permission::domainIsSet() const
{
    return m_DomainIsSet;
}

void Permission::unsetDomain()
{
    m_DomainIsSet = false;
}

utility::string_t Permission::getEmailAddress() const
{
    return m_EmailAddress;
}


void Permission::setEmailAddress(utility::string_t value)
{
    m_EmailAddress = value;
    m_EmailAddressIsSet = true;
}
bool Permission::emailAddressIsSet() const
{
    return m_EmailAddressIsSet;
}

void Permission::unsetEmailAddress()
{
    m_EmailAddressIsSet = false;
}

utility::datetime Permission::getExpirationTime() const
{
    return m_ExpirationTime;
}


void Permission::setExpirationTime(utility::datetime value)
{
    m_ExpirationTime = value;
    m_ExpirationTimeIsSet = true;
}
bool Permission::expirationTimeIsSet() const
{
    return m_ExpirationTimeIsSet;
}

void Permission::unsetExpirationTime()
{
    m_ExpirationTimeIsSet = false;
}

utility::string_t Permission::getId() const
{
    return m_Id;
}


void Permission::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Permission::idIsSet() const
{
    return m_IdIsSet;
}

void Permission::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t Permission::getKind() const
{
    return m_Kind;
}


void Permission::setKind(utility::string_t value)
{
    m_Kind = value;
    m_KindIsSet = true;
}
bool Permission::kindIsSet() const
{
    return m_KindIsSet;
}

void Permission::unsetKind()
{
    m_KindIsSet = false;
}

utility::string_t Permission::getPhotoLink() const
{
    return m_PhotoLink;
}


void Permission::setPhotoLink(utility::string_t value)
{
    m_PhotoLink = value;
    m_PhotoLinkIsSet = true;
}
bool Permission::photoLinkIsSet() const
{
    return m_PhotoLinkIsSet;
}

void Permission::unsetPhotoLink()
{
    m_PhotoLinkIsSet = false;
}

utility::string_t Permission::getRole() const
{
    return m_Role;
}


void Permission::setRole(utility::string_t value)
{
    m_Role = value;
    m_RoleIsSet = true;
}
bool Permission::roleIsSet() const
{
    return m_RoleIsSet;
}

void Permission::unsetRole()
{
    m_RoleIsSet = false;
}

std::vector<std::shared_ptr<Permission_teamDrivePermissionDetails>>& Permission::getTeamDrivePermissionDetails()
{
    return m_TeamDrivePermissionDetails;
}

void Permission::setTeamDrivePermissionDetails(std::vector<std::shared_ptr<Permission_teamDrivePermissionDetails>> value)
{
    m_TeamDrivePermissionDetails = value;
    m_TeamDrivePermissionDetailsIsSet = true;
}
bool Permission::teamDrivePermissionDetailsIsSet() const
{
    return m_TeamDrivePermissionDetailsIsSet;
}

void Permission::unsetTeamDrivePermissionDetails()
{
    m_TeamDrivePermissionDetailsIsSet = false;
}

utility::string_t Permission::getType() const
{
    return m_Type;
}


void Permission::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool Permission::typeIsSet() const
{
    return m_TypeIsSet;
}

void Permission::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}

