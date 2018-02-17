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



#include "About.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

About::About()
{
    m_AppInstalled = false;
    m_AppInstalledIsSet = false;
    m_CanCreateTeamDrives = false;
    m_CanCreateTeamDrivesIsSet = false;
    m_ExportFormatsIsSet = false;
    m_FolderColorPaletteIsSet = false;
    m_ImportFormatsIsSet = false;
    m_Kind = U("");
    m_KindIsSet = false;
    m_MaxImportSizesIsSet = false;
    m_MaxUploadSize = U("");
    m_MaxUploadSizeIsSet = false;
    m_StorageQuotaIsSet = false;
    m_TeamDriveThemesIsSet = false;
    m_UserIsSet = false;
}

About::~About()
{
}

void About::validate()
{
    // TODO: implement validation
}

web::json::value About::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_AppInstalledIsSet)
    {
        val[U("appInstalled")] = ModelBase::toJson(m_AppInstalled);
    }
    if(m_CanCreateTeamDrivesIsSet)
    {
        val[U("canCreateTeamDrives")] = ModelBase::toJson(m_CanCreateTeamDrives);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_ExportFormats )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        if(jsonArray.size() > 0)
        {
            val[U("exportFormats")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_FolderColorPalette )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("folderColorPalette")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_ImportFormats )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        if(jsonArray.size() > 0)
        {
            val[U("importFormats")] = web::json::value::array(jsonArray);
        }
    }
    if(m_KindIsSet)
    {
        val[U("kind")] = ModelBase::toJson(m_Kind);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_MaxImportSizes )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        if(jsonArray.size() > 0)
        {
            val[U("maxImportSizes")] = web::json::value::array(jsonArray);
        }
    }
    if(m_MaxUploadSizeIsSet)
    {
        val[U("maxUploadSize")] = ModelBase::toJson(m_MaxUploadSize);
    }
    if(m_StorageQuotaIsSet)
    {
        val[U("storageQuota")] = ModelBase::toJson(m_StorageQuota);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_TeamDriveThemes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("teamDriveThemes")] = web::json::value::array(jsonArray);
        }
    }
    if(m_UserIsSet)
    {
        val[U("user")] = ModelBase::toJson(m_User);
    }

    return val;
}

void About::fromJson(web::json::value& val)
{
    if(val.has_field(U("appInstalled")))
    {
        setAppInstalled(ModelBase::boolFromJson(val[U("appInstalled")]));
    }
    if(val.has_field(U("canCreateTeamDrives")))
    {
        setCanCreateTeamDrives(ModelBase::boolFromJson(val[U("canCreateTeamDrives")]));
    }
    {
        m_ExportFormats.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("exportFormats")))
        {
        for( auto& item : val[U("exportFormats")].as_array() )
        {  
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(!item.is_null())
            {
                web::json::value valueArray = item[U("value")];
                std::vector<utility::string_t> newItem;
                newItem.reserve(valueArray.size());
                for(auto n : valueArray.as_array()) {
                    newItem.push_back(n.as_string());
                }
                m_ExportFormats.insert(std::pair<utility::string_t,std::vector<utility::string_t>>( key, newItem ));
            }
        }
        }
    }
    {
        m_FolderColorPalette.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("folderColorPalette")))
        {
        for( auto& item : val[U("folderColorPalette")].as_array() )
        {
            m_FolderColorPalette.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    {
        m_ImportFormats.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("importFormats")))
        {
        for( auto& item : val[U("importFormats")].as_array() )
        {  
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(!item.is_null())
            {
                web::json::value valueArray = item[U("value")];
                std::vector<utility::string_t> newItem;
                newItem.reserve(valueArray.size());
                for(auto n : valueArray.as_array()) {
                    newItem.push_back(n.as_string());
                }
                m_ImportFormats.insert(std::pair<utility::string_t,std::vector<utility::string_t>>( key, newItem ));
            }
        }
        }
    }
    if(val.has_field(U("kind")))
    {
        setKind(ModelBase::stringFromJson(val[U("kind")]));
    }
    {
        m_MaxImportSizes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("maxImportSizes")))
        {
        for( auto& item : val[U("maxImportSizes")].as_array() )
        {  
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            m_MaxImportSizes.insert(std::pair<utility::string_t,utility::string_t>( key, ModelBase::stringFromJson(item[U("value")])));
        }
        }
    }
    if(val.has_field(U("maxUploadSize")))
    {
        setMaxUploadSize(ModelBase::stringFromJson(val[U("maxUploadSize")]));
    }
    if(val.has_field(U("storageQuota")))
    {
        if(!val[U("storageQuota")].is_null())
        {
            std::shared_ptr<About_storageQuota> newItem(new About_storageQuota());
            newItem->fromJson(val[U("storageQuota")]);
            setStorageQuota( newItem );
        }
    }
    {
        m_TeamDriveThemes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("teamDriveThemes")))
        {
        for( auto& item : val[U("teamDriveThemes")].as_array() )
        {
            if(item.is_null())
            {
                m_TeamDriveThemes.push_back( std::shared_ptr<About_teamDriveThemes>(nullptr) );
            }
            else
            {
                std::shared_ptr<About_teamDriveThemes> newItem(new About_teamDriveThemes());
                newItem->fromJson(item);
                m_TeamDriveThemes.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("user")))
    {
        if(!val[U("user")].is_null())
        {
            std::shared_ptr<User> newItem(new User());
            newItem->fromJson(val[U("user")]);
            setUser( newItem );
        }
    }
}

void About::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_AppInstalledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("appInstalled"), m_AppInstalled));
    }
    if(m_CanCreateTeamDrivesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("canCreateTeamDrives"), m_CanCreateTeamDrives));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_ExportFormats )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("exportFormats"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_FolderColorPalette )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("folderColorPalette"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_ImportFormats )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("importFormats"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_KindIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("kind"), m_Kind));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_MaxImportSizes )
        {
            web::json::value tmp = web::json::value::object();
            tmp[U("key")] = ModelBase::toJson(item.first);
            tmp[U("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("maxImportSizes"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_MaxUploadSizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("maxUploadSize"), m_MaxUploadSize));
        
    }
    if(m_StorageQuotaIsSet)
    {
        if (m_StorageQuota.get())
        {
            m_StorageQuota->toMultipart(multipart, U("storageQuota."));
        }
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_TeamDriveThemes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("teamDriveThemes"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_UserIsSet)
    {
        if (m_User.get())
        {
            m_User->toMultipart(multipart, U("user."));
        }
        
    }
}

void About::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("appInstalled")))
    {
        setAppInstalled(ModelBase::boolFromHttpContent(multipart->getContent(U("appInstalled"))));
    }
    if(multipart->hasContent(U("canCreateTeamDrives")))
    {
        setCanCreateTeamDrives(ModelBase::boolFromHttpContent(multipart->getContent(U("canCreateTeamDrives"))));
    }
    {
        m_ExportFormats.clear();
        if(multipart->hasContent(U("exportFormats")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("exportFormats"))));
        for( auto& item : jsonArray.as_array() )
        {
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(!item.is_null())
            {
                web::json::value valueArray = item[U("value")];
                std::vector<utility::string_t> newItem;
                newItem.reserve(valueArray.size());
                for(auto n : valueArray.as_array()) {
                    newItem.push_back(n.as_string());
                }
                m_ExportFormats.insert(std::pair<utility::string_t,std::vector<utility::string_t>>( key, newItem ));
            }
        }
        }
    }
    {
        m_FolderColorPalette.clear();
        if(multipart->hasContent(U("folderColorPalette")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("folderColorPalette"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_FolderColorPalette.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    {
        m_ImportFormats.clear();
        if(multipart->hasContent(U("importFormats")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("importFormats"))));
        for( auto& item : jsonArray.as_array() )
        {
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            if(!item.is_null())
            {
                web::json::value valueArray = item[U("value")];
                std::vector<utility::string_t> newItem;
                newItem.reserve(valueArray.size());
                for(auto n : valueArray.as_array()) {
                    newItem.push_back(n.as_string());
                }
                m_ImportFormats.insert(std::pair<utility::string_t,std::vector<utility::string_t>>( key, newItem ));
            }
        }
        }
    }
    if(multipart->hasContent(U("kind")))
    {
        setKind(ModelBase::stringFromHttpContent(multipart->getContent(U("kind"))));
    }
    {
        m_MaxImportSizes.clear();
        if(multipart->hasContent(U("maxImportSizes")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("maxImportSizes"))));
        for( auto& item : jsonArray.as_array() )
        {
            utility::string_t key;
            if(item.has_field(U("key")))
            {
                key = ModelBase::stringFromJson(item[U("key")]);
            }
            m_MaxImportSizes.insert(std::pair<utility::string_t,utility::string_t>( key, ModelBase::stringFromJson(item[U("value")])));
        }
        }
    }
    if(multipart->hasContent(U("maxUploadSize")))
    {
        setMaxUploadSize(ModelBase::stringFromHttpContent(multipart->getContent(U("maxUploadSize"))));
    }
    if(multipart->hasContent(U("storageQuota")))
    {
        if(multipart->hasContent(U("storageQuota")))
        {
            std::shared_ptr<About_storageQuota> newItem(new About_storageQuota());
            newItem->fromMultiPart(multipart, U("storageQuota."));
            setStorageQuota( newItem );
        }
    }
    {
        m_TeamDriveThemes.clear();
        if(multipart->hasContent(U("teamDriveThemes")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("teamDriveThemes"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_TeamDriveThemes.push_back( std::shared_ptr<About_teamDriveThemes>(nullptr) );
            }
            else
            {
                std::shared_ptr<About_teamDriveThemes> newItem(new About_teamDriveThemes());
                newItem->fromJson(item);
                m_TeamDriveThemes.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("user")))
    {
        if(multipart->hasContent(U("user")))
        {
            std::shared_ptr<User> newItem(new User());
            newItem->fromMultiPart(multipart, U("user."));
            setUser( newItem );
        }
    }
}

bool About::getAppInstalled() const
{
    return m_AppInstalled;
}


void About::setAppInstalled(bool value)
{
    m_AppInstalled = value;
    m_AppInstalledIsSet = true;
}
bool About::appInstalledIsSet() const
{
    return m_AppInstalledIsSet;
}

void About::unsetAppInstalled()
{
    m_AppInstalledIsSet = false;
}

bool About::getCanCreateTeamDrives() const
{
    return m_CanCreateTeamDrives;
}


void About::setCanCreateTeamDrives(bool value)
{
    m_CanCreateTeamDrives = value;
    m_CanCreateTeamDrivesIsSet = true;
}
bool About::canCreateTeamDrivesIsSet() const
{
    return m_CanCreateTeamDrivesIsSet;
}

void About::unsetCanCreateTeamDrives()
{
    m_CanCreateTeamDrivesIsSet = false;
}

std::map<utility::string_t, std::vector<utility::string_t>>& About::getExportFormats()
{
    return m_ExportFormats;
}

void About::setExportFormats(std::map<utility::string_t, std::vector<utility::string_t>> value)
{
    m_ExportFormats = value;
    m_ExportFormatsIsSet = true;
}
bool About::exportFormatsIsSet() const
{
    return m_ExportFormatsIsSet;
}

void About::unsetExportFormats()
{
    m_ExportFormatsIsSet = false;
}

std::vector<utility::string_t>& About::getFolderColorPalette()
{
    return m_FolderColorPalette;
}

void About::setFolderColorPalette(std::vector<utility::string_t> value)
{
    m_FolderColorPalette = value;
    m_FolderColorPaletteIsSet = true;
}
bool About::folderColorPaletteIsSet() const
{
    return m_FolderColorPaletteIsSet;
}

void About::unsetFolderColorPalette()
{
    m_FolderColorPaletteIsSet = false;
}

std::map<utility::string_t, std::vector<utility::string_t>>& About::getImportFormats()
{
    return m_ImportFormats;
}

void About::setImportFormats(std::map<utility::string_t, std::vector<utility::string_t>> value)
{
    m_ImportFormats = value;
    m_ImportFormatsIsSet = true;
}
bool About::importFormatsIsSet() const
{
    return m_ImportFormatsIsSet;
}

void About::unsetImportFormats()
{
    m_ImportFormatsIsSet = false;
}

utility::string_t About::getKind() const
{
    return m_Kind;
}


void About::setKind(utility::string_t value)
{
    m_Kind = value;
    m_KindIsSet = true;
}
bool About::kindIsSet() const
{
    return m_KindIsSet;
}

void About::unsetKind()
{
    m_KindIsSet = false;
}

std::map<utility::string_t, utility::string_t>& About::getMaxImportSizes()
{
    return m_MaxImportSizes;
}

void About::setMaxImportSizes(std::map<utility::string_t, utility::string_t> value)
{
    m_MaxImportSizes = value;
    m_MaxImportSizesIsSet = true;
}
bool About::maxImportSizesIsSet() const
{
    return m_MaxImportSizesIsSet;
}

void About::unsetMaxImportSizes()
{
    m_MaxImportSizesIsSet = false;
}

utility::string_t About::getMaxUploadSize() const
{
    return m_MaxUploadSize;
}


void About::setMaxUploadSize(utility::string_t value)
{
    m_MaxUploadSize = value;
    m_MaxUploadSizeIsSet = true;
}
bool About::maxUploadSizeIsSet() const
{
    return m_MaxUploadSizeIsSet;
}

void About::unsetMaxUploadSize()
{
    m_MaxUploadSizeIsSet = false;
}

std::shared_ptr<About_storageQuota> About::getStorageQuota() const
{
    return m_StorageQuota;
}


void About::setStorageQuota(std::shared_ptr<About_storageQuota> value)
{
    m_StorageQuota = value;
    m_StorageQuotaIsSet = true;
}
bool About::storageQuotaIsSet() const
{
    return m_StorageQuotaIsSet;
}

void About::unsetStorageQuota()
{
    m_StorageQuotaIsSet = false;
}

std::vector<std::shared_ptr<About_teamDriveThemes>>& About::getTeamDriveThemes()
{
    return m_TeamDriveThemes;
}

void About::setTeamDriveThemes(std::vector<std::shared_ptr<About_teamDriveThemes>> value)
{
    m_TeamDriveThemes = value;
    m_TeamDriveThemesIsSet = true;
}
bool About::teamDriveThemesIsSet() const
{
    return m_TeamDriveThemesIsSet;
}

void About::unsetTeamDriveThemes()
{
    m_TeamDriveThemesIsSet = false;
}

std::shared_ptr<User> About::getUser() const
{
    return m_User;
}


void About::setUser(std::shared_ptr<User> value)
{
    m_User = value;
    m_UserIsSet = true;
}
bool About::userIsSet() const
{
    return m_UserIsSet;
}

void About::unsetUser()
{
    m_UserIsSet = false;
}

}
}
}
}

