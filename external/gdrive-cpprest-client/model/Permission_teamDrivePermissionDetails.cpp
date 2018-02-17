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



#include "Permission_teamDrivePermissionDetails.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Permission_teamDrivePermissionDetails::Permission_teamDrivePermissionDetails()
{
    m_Inherited = false;
    m_InheritedIsSet = false;
    m_InheritedFrom = U("");
    m_InheritedFromIsSet = false;
    m_Role = U("");
    m_RoleIsSet = false;
    m_TeamDrivePermissionType = U("");
    m_TeamDrivePermissionTypeIsSet = false;
}

Permission_teamDrivePermissionDetails::~Permission_teamDrivePermissionDetails()
{
}

void Permission_teamDrivePermissionDetails::validate()
{
    // TODO: implement validation
}

web::json::value Permission_teamDrivePermissionDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_InheritedIsSet)
    {
        val[U("inherited")] = ModelBase::toJson(m_Inherited);
    }
    if(m_InheritedFromIsSet)
    {
        val[U("inheritedFrom")] = ModelBase::toJson(m_InheritedFrom);
    }
    if(m_RoleIsSet)
    {
        val[U("role")] = ModelBase::toJson(m_Role);
    }
    if(m_TeamDrivePermissionTypeIsSet)
    {
        val[U("teamDrivePermissionType")] = ModelBase::toJson(m_TeamDrivePermissionType);
    }

    return val;
}

void Permission_teamDrivePermissionDetails::fromJson(web::json::value& val)
{
    if(val.has_field(U("inherited")))
    {
        setInherited(ModelBase::boolFromJson(val[U("inherited")]));
    }
    if(val.has_field(U("inheritedFrom")))
    {
        setInheritedFrom(ModelBase::stringFromJson(val[U("inheritedFrom")]));
    }
    if(val.has_field(U("role")))
    {
        setRole(ModelBase::stringFromJson(val[U("role")]));
    }
    if(val.has_field(U("teamDrivePermissionType")))
    {
        setTeamDrivePermissionType(ModelBase::stringFromJson(val[U("teamDrivePermissionType")]));
    }
}

void Permission_teamDrivePermissionDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_InheritedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("inherited"), m_Inherited));
    }
    if(m_InheritedFromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("inheritedFrom"), m_InheritedFrom));
        
    }
    if(m_RoleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("role"), m_Role));
        
    }
    if(m_TeamDrivePermissionTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("teamDrivePermissionType"), m_TeamDrivePermissionType));
        
    }
}

void Permission_teamDrivePermissionDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("inherited")))
    {
        setInherited(ModelBase::boolFromHttpContent(multipart->getContent(U("inherited"))));
    }
    if(multipart->hasContent(U("inheritedFrom")))
    {
        setInheritedFrom(ModelBase::stringFromHttpContent(multipart->getContent(U("inheritedFrom"))));
    }
    if(multipart->hasContent(U("role")))
    {
        setRole(ModelBase::stringFromHttpContent(multipart->getContent(U("role"))));
    }
    if(multipart->hasContent(U("teamDrivePermissionType")))
    {
        setTeamDrivePermissionType(ModelBase::stringFromHttpContent(multipart->getContent(U("teamDrivePermissionType"))));
    }
}

bool Permission_teamDrivePermissionDetails::getInherited() const
{
    return m_Inherited;
}


void Permission_teamDrivePermissionDetails::setInherited(bool value)
{
    m_Inherited = value;
    m_InheritedIsSet = true;
}
bool Permission_teamDrivePermissionDetails::inheritedIsSet() const
{
    return m_InheritedIsSet;
}

void Permission_teamDrivePermissionDetails::unsetInherited()
{
    m_InheritedIsSet = false;
}

utility::string_t Permission_teamDrivePermissionDetails::getInheritedFrom() const
{
    return m_InheritedFrom;
}


void Permission_teamDrivePermissionDetails::setInheritedFrom(utility::string_t value)
{
    m_InheritedFrom = value;
    m_InheritedFromIsSet = true;
}
bool Permission_teamDrivePermissionDetails::inheritedFromIsSet() const
{
    return m_InheritedFromIsSet;
}

void Permission_teamDrivePermissionDetails::unsetInheritedFrom()
{
    m_InheritedFromIsSet = false;
}

utility::string_t Permission_teamDrivePermissionDetails::getRole() const
{
    return m_Role;
}


void Permission_teamDrivePermissionDetails::setRole(utility::string_t value)
{
    m_Role = value;
    m_RoleIsSet = true;
}
bool Permission_teamDrivePermissionDetails::roleIsSet() const
{
    return m_RoleIsSet;
}

void Permission_teamDrivePermissionDetails::unsetRole()
{
    m_RoleIsSet = false;
}

utility::string_t Permission_teamDrivePermissionDetails::getTeamDrivePermissionType() const
{
    return m_TeamDrivePermissionType;
}


void Permission_teamDrivePermissionDetails::setTeamDrivePermissionType(utility::string_t value)
{
    m_TeamDrivePermissionType = value;
    m_TeamDrivePermissionTypeIsSet = true;
}
bool Permission_teamDrivePermissionDetails::teamDrivePermissionTypeIsSet() const
{
    return m_TeamDrivePermissionTypeIsSet;
}

void Permission_teamDrivePermissionDetails::unsetTeamDrivePermissionType()
{
    m_TeamDrivePermissionTypeIsSet = false;
}

}
}
}
}

