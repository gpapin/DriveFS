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



#include "TeamDrive.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

TeamDrive::TeamDrive()
{
    m_BackgroundImageFileIsSet = false;
    m_BackgroundImageLink = U("");
    m_BackgroundImageLinkIsSet = false;
    m_CapabilitiesIsSet = false;
    m_ColorRgb = U("");
    m_ColorRgbIsSet = false;
    m_CreatedTime = utility::datetime();
    m_CreatedTimeIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Kind = U("");
    m_KindIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_ThemeId = U("");
    m_ThemeIdIsSet = false;
}

TeamDrive::~TeamDrive()
{
}

void TeamDrive::validate()
{
    // TODO: implement validation
}

web::json::value TeamDrive::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_BackgroundImageFileIsSet)
    {
        val[U("backgroundImageFile")] = ModelBase::toJson(m_BackgroundImageFile);
    }
    if(m_BackgroundImageLinkIsSet)
    {
        val[U("backgroundImageLink")] = ModelBase::toJson(m_BackgroundImageLink);
    }
    if(m_CapabilitiesIsSet)
    {
        val[U("capabilities")] = ModelBase::toJson(m_Capabilities);
    }
    if(m_ColorRgbIsSet)
    {
        val[U("colorRgb")] = ModelBase::toJson(m_ColorRgb);
    }
    if(m_CreatedTimeIsSet)
    {
        val[U("createdTime")] = ModelBase::toJson(m_CreatedTime);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_KindIsSet)
    {
        val[U("kind")] = ModelBase::toJson(m_Kind);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_ThemeIdIsSet)
    {
        val[U("themeId")] = ModelBase::toJson(m_ThemeId);
    }

    return val;
}

void TeamDrive::fromJson(web::json::value& val)
{
    if(val.has_field(U("backgroundImageFile")))
    {
        if(!val[U("backgroundImageFile")].is_null())
        {
            std::shared_ptr<TeamDrive_backgroundImageFile> newItem(new TeamDrive_backgroundImageFile());
            newItem->fromJson(val[U("backgroundImageFile")]);
            setBackgroundImageFile( newItem );
        }
    }
    if(val.has_field(U("backgroundImageLink")))
    {
        setBackgroundImageLink(ModelBase::stringFromJson(val[U("backgroundImageLink")]));
    }
    if(val.has_field(U("capabilities")))
    {
        if(!val[U("capabilities")].is_null())
        {
            std::shared_ptr<TeamDrive_capabilities> newItem(new TeamDrive_capabilities());
            newItem->fromJson(val[U("capabilities")]);
            setCapabilities( newItem );
        }
    }
    if(val.has_field(U("colorRgb")))
    {
        setColorRgb(ModelBase::stringFromJson(val[U("colorRgb")]));
    }
    if(val.has_field(U("createdTime")))
    {
        setCreatedTime(ModelBase::dateFromJson(val[U("createdTime")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    if(val.has_field(U("kind")))
    {
        setKind(ModelBase::stringFromJson(val[U("kind")]));
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
    }
    if(val.has_field(U("themeId")))
    {
        setThemeId(ModelBase::stringFromJson(val[U("themeId")]));
    }
}

void TeamDrive::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_BackgroundImageFileIsSet)
    {
        if (m_BackgroundImageFile.get())
        {
            m_BackgroundImageFile->toMultipart(multipart, U("backgroundImageFile."));
        }
        
    }
    if(m_BackgroundImageLinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("backgroundImageLink"), m_BackgroundImageLink));
        
    }
    if(m_CapabilitiesIsSet)
    {
        if (m_Capabilities.get())
        {
            m_Capabilities->toMultipart(multipart, U("capabilities."));
        }
        
    }
    if(m_ColorRgbIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("colorRgb"), m_ColorRgb));
        
    }
    if(m_CreatedTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("createdTime"), m_CreatedTime));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_KindIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("kind"), m_Kind));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_ThemeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("themeId"), m_ThemeId));
        
    }
}

void TeamDrive::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("backgroundImageFile")))
    {
        if(multipart->hasContent(U("backgroundImageFile")))
        {
            std::shared_ptr<TeamDrive_backgroundImageFile> newItem(new TeamDrive_backgroundImageFile());
            newItem->fromMultiPart(multipart, U("backgroundImageFile."));
            setBackgroundImageFile( newItem );
        }
    }
    if(multipart->hasContent(U("backgroundImageLink")))
    {
        setBackgroundImageLink(ModelBase::stringFromHttpContent(multipart->getContent(U("backgroundImageLink"))));
    }
    if(multipart->hasContent(U("capabilities")))
    {
        if(multipart->hasContent(U("capabilities")))
        {
            std::shared_ptr<TeamDrive_capabilities> newItem(new TeamDrive_capabilities());
            newItem->fromMultiPart(multipart, U("capabilities."));
            setCapabilities( newItem );
        }
    }
    if(multipart->hasContent(U("colorRgb")))
    {
        setColorRgb(ModelBase::stringFromHttpContent(multipart->getContent(U("colorRgb"))));
    }
    if(multipart->hasContent(U("createdTime")))
    {
        setCreatedTime(ModelBase::dateFromHttpContent(multipart->getContent(U("createdTime"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("kind")))
    {
        setKind(ModelBase::stringFromHttpContent(multipart->getContent(U("kind"))));
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    }
    if(multipart->hasContent(U("themeId")))
    {
        setThemeId(ModelBase::stringFromHttpContent(multipart->getContent(U("themeId"))));
    }
}

std::shared_ptr<TeamDrive_backgroundImageFile> TeamDrive::getBackgroundImageFile() const
{
    return m_BackgroundImageFile;
}


void TeamDrive::setBackgroundImageFile(std::shared_ptr<TeamDrive_backgroundImageFile> value)
{
    m_BackgroundImageFile = value;
    m_BackgroundImageFileIsSet = true;
}
bool TeamDrive::backgroundImageFileIsSet() const
{
    return m_BackgroundImageFileIsSet;
}

void TeamDrive::unsetBackgroundImageFile()
{
    m_BackgroundImageFileIsSet = false;
}

utility::string_t TeamDrive::getBackgroundImageLink() const
{
    return m_BackgroundImageLink;
}


void TeamDrive::setBackgroundImageLink(utility::string_t value)
{
    m_BackgroundImageLink = value;
    m_BackgroundImageLinkIsSet = true;
}
bool TeamDrive::backgroundImageLinkIsSet() const
{
    return m_BackgroundImageLinkIsSet;
}

void TeamDrive::unsetBackgroundImageLink()
{
    m_BackgroundImageLinkIsSet = false;
}

std::shared_ptr<TeamDrive_capabilities> TeamDrive::getCapabilities() const
{
    return m_Capabilities;
}


void TeamDrive::setCapabilities(std::shared_ptr<TeamDrive_capabilities> value)
{
    m_Capabilities = value;
    m_CapabilitiesIsSet = true;
}
bool TeamDrive::capabilitiesIsSet() const
{
    return m_CapabilitiesIsSet;
}

void TeamDrive::unsetCapabilities()
{
    m_CapabilitiesIsSet = false;
}

utility::string_t TeamDrive::getColorRgb() const
{
    return m_ColorRgb;
}


void TeamDrive::setColorRgb(utility::string_t value)
{
    m_ColorRgb = value;
    m_ColorRgbIsSet = true;
}
bool TeamDrive::colorRgbIsSet() const
{
    return m_ColorRgbIsSet;
}

void TeamDrive::unsetColorRgb()
{
    m_ColorRgbIsSet = false;
}

utility::datetime TeamDrive::getCreatedTime() const
{
    return m_CreatedTime;
}


void TeamDrive::setCreatedTime(utility::datetime value)
{
    m_CreatedTime = value;
    m_CreatedTimeIsSet = true;
}
bool TeamDrive::createdTimeIsSet() const
{
    return m_CreatedTimeIsSet;
}

void TeamDrive::unsetCreatedTime()
{
    m_CreatedTimeIsSet = false;
}

utility::string_t TeamDrive::getId() const
{
    return m_Id;
}


void TeamDrive::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool TeamDrive::idIsSet() const
{
    return m_IdIsSet;
}

void TeamDrive::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t TeamDrive::getKind() const
{
    return m_Kind;
}


void TeamDrive::setKind(utility::string_t value)
{
    m_Kind = value;
    m_KindIsSet = true;
}
bool TeamDrive::kindIsSet() const
{
    return m_KindIsSet;
}

void TeamDrive::unsetKind()
{
    m_KindIsSet = false;
}

utility::string_t TeamDrive::getName() const
{
    return m_Name;
}


void TeamDrive::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool TeamDrive::nameIsSet() const
{
    return m_NameIsSet;
}

void TeamDrive::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t TeamDrive::getThemeId() const
{
    return m_ThemeId;
}


void TeamDrive::setThemeId(utility::string_t value)
{
    m_ThemeId = value;
    m_ThemeIdIsSet = true;
}
bool TeamDrive::themeIdIsSet() const
{
    return m_ThemeIdIsSet;
}

void TeamDrive::unsetThemeId()
{
    m_ThemeIdIsSet = false;
}

}
}
}
}

