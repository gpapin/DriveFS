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



#include "File_contentHints.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

File_contentHints::File_contentHints()
{
    m_IndexableText = U("");
    m_IndexableTextIsSet = false;
    m_ThumbnailIsSet = false;
}

File_contentHints::~File_contentHints()
{
}

void File_contentHints::validate()
{
    // TODO: implement validation
}

web::json::value File_contentHints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IndexableTextIsSet)
    {
        val[U("indexableText")] = ModelBase::toJson(m_IndexableText);
    }
    if(m_ThumbnailIsSet)
    {
        val[U("thumbnail")] = ModelBase::toJson(m_Thumbnail);
    }

    return val;
}

void File_contentHints::fromJson(web::json::value& val)
{
    if(val.has_field(U("indexableText")))
    {
        setIndexableText(ModelBase::stringFromJson(val[U("indexableText")]));
    }
    if(val.has_field(U("thumbnail")))
    {
        if(!val[U("thumbnail")].is_null())
        {
            std::shared_ptr<File_contentHints_thumbnail> newItem(new File_contentHints_thumbnail());
            newItem->fromJson(val[U("thumbnail")]);
            setThumbnail( newItem );
        }
    }
}

void File_contentHints::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_IndexableTextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("indexableText"), m_IndexableText));
        
    }
    if(m_ThumbnailIsSet)
    {
        if (m_Thumbnail.get())
        {
            m_Thumbnail->toMultipart(multipart, U("thumbnail."));
        }
        
    }
}

void File_contentHints::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("indexableText")))
    {
        setIndexableText(ModelBase::stringFromHttpContent(multipart->getContent(U("indexableText"))));
    }
    if(multipart->hasContent(U("thumbnail")))
    {
        if(multipart->hasContent(U("thumbnail")))
        {
            std::shared_ptr<File_contentHints_thumbnail> newItem(new File_contentHints_thumbnail());
            newItem->fromMultiPart(multipart, U("thumbnail."));
            setThumbnail( newItem );
        }
    }
}

utility::string_t File_contentHints::getIndexableText() const
{
    return m_IndexableText;
}


void File_contentHints::setIndexableText(utility::string_t value)
{
    m_IndexableText = value;
    m_IndexableTextIsSet = true;
}
bool File_contentHints::indexableTextIsSet() const
{
    return m_IndexableTextIsSet;
}

void File_contentHints::unsetIndexableText()
{
    m_IndexableTextIsSet = false;
}

std::shared_ptr<File_contentHints_thumbnail> File_contentHints::getThumbnail() const
{
    return m_Thumbnail;
}


void File_contentHints::setThumbnail(std::shared_ptr<File_contentHints_thumbnail> value)
{
    m_Thumbnail = value;
    m_ThumbnailIsSet = true;
}
bool File_contentHints::thumbnailIsSet() const
{
    return m_ThumbnailIsSet;
}

void File_contentHints::unsetThumbnail()
{
    m_ThumbnailIsSet = false;
}

}
}
}
}
