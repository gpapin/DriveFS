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



#include "ReplyList.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ReplyList::ReplyList()
{
    m_Kind = U("");
    m_KindIsSet = false;
    m_NextPageToken = U("");
    m_NextPageTokenIsSet = false;
    m_RepliesIsSet = false;
}

ReplyList::~ReplyList()
{
}

void ReplyList::validate()
{
    // TODO: implement validation
}

web::json::value ReplyList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_KindIsSet)
    {
        val[U("kind")] = ModelBase::toJson(m_Kind);
    }
    if(m_NextPageTokenIsSet)
    {
        val[U("nextPageToken")] = ModelBase::toJson(m_NextPageToken);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Replies )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("replies")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void ReplyList::fromJson(web::json::value& val)
{
    if(val.has_field(U("kind")))
    {
        setKind(ModelBase::stringFromJson(val[U("kind")]));
    }
    if(val.has_field(U("nextPageToken")))
    {
        setNextPageToken(ModelBase::stringFromJson(val[U("nextPageToken")]));
    }
    {
        m_Replies.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("replies")))
        {
        for( auto& item : val[U("replies")].as_array() )
        {
            if(item.is_null())
            {
                m_Replies.push_back( std::shared_ptr<Reply>(nullptr) );
            }
            else
            {
                std::shared_ptr<Reply> newItem(new Reply());
                newItem->fromJson(item);
                m_Replies.push_back( newItem );
            }
        }
        }
    }
}

void ReplyList::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_KindIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("kind"), m_Kind));
        
    }
    if(m_NextPageTokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("nextPageToken"), m_NextPageToken));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Replies )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("replies"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
}

void ReplyList::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("kind")))
    {
        setKind(ModelBase::stringFromHttpContent(multipart->getContent(U("kind"))));
    }
    if(multipart->hasContent(U("nextPageToken")))
    {
        setNextPageToken(ModelBase::stringFromHttpContent(multipart->getContent(U("nextPageToken"))));
    }
    {
        m_Replies.clear();
        if(multipart->hasContent(U("replies")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("replies"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Replies.push_back( std::shared_ptr<Reply>(nullptr) );
            }
            else
            {
                std::shared_ptr<Reply> newItem(new Reply());
                newItem->fromJson(item);
                m_Replies.push_back( newItem );
            }
        }
        }
    }
}

utility::string_t ReplyList::getKind() const
{
    return m_Kind;
}


void ReplyList::setKind(utility::string_t value)
{
    m_Kind = value;
    m_KindIsSet = true;
}
bool ReplyList::kindIsSet() const
{
    return m_KindIsSet;
}

void ReplyList::unsetKind()
{
    m_KindIsSet = false;
}

utility::string_t ReplyList::getNextPageToken() const
{
    return m_NextPageToken;
}


void ReplyList::setNextPageToken(utility::string_t value)
{
    m_NextPageToken = value;
    m_NextPageTokenIsSet = true;
}
bool ReplyList::nextPageTokenIsSet() const
{
    return m_NextPageTokenIsSet;
}

void ReplyList::unsetNextPageToken()
{
    m_NextPageTokenIsSet = false;
}

std::vector<std::shared_ptr<Reply>>& ReplyList::getReplies()
{
    return m_Replies;
}

void ReplyList::setReplies(std::vector<std::shared_ptr<Reply>> value)
{
    m_Replies = value;
    m_RepliesIsSet = true;
}
bool ReplyList::repliesIsSet() const
{
    return m_RepliesIsSet;
}

void ReplyList::unsetReplies()
{
    m_RepliesIsSet = false;
}

}
}
}
}
