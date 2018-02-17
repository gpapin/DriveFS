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
 * Comment.h
 *
 * A comment on a file.
 */

#ifndef Comment_H_
#define Comment_H_


#include "ModelBase.h"

#include "Comment_quotedFileContent.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "Reply.h"
#include "User.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// A comment on a file.
/// </summary>
class  Comment
    : public ModelBase
{
public:
    Comment();
    virtual ~Comment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Comment members

    /// <summary>
    /// A region of the document represented as a JSON string. See anchor documentation for details on how to define and interpret anchor properties.
    /// </summary>
    utility::string_t getAnchor() const;
    bool anchorIsSet() const;
    void unsetAnchor();
    void setAnchor(utility::string_t value);
    /// <summary>
    /// The user who created the comment.
    /// </summary>
    std::shared_ptr<User> getAuthor() const;
    bool authorIsSet() const;
    void unsetAuthor();
    void setAuthor(std::shared_ptr<User> value);
    /// <summary>
    /// The plain text content of the comment. This field is used for setting the content, while htmlContent should be displayed.
    /// </summary>
    utility::string_t getContent() const;
    bool contentIsSet() const;
    void unsetContent();
    void setContent(utility::string_t value);
    /// <summary>
    /// The time at which the comment was created (RFC 3339 date-time).
    /// </summary>
    utility::datetime getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetCreatedTime();
    void setCreatedTime(utility::datetime value);
    /// <summary>
    /// Whether the comment has been deleted. A deleted comment has no content.
    /// </summary>
    bool getDeleted() const;
    bool deletedIsSet() const;
    void unsetDeleted();
    void setDeleted(bool value);
    /// <summary>
    /// The content of the comment with HTML formatting.
    /// </summary>
    utility::string_t getHtmlContent() const;
    bool htmlContentIsSet() const;
    void unsetHtmlContent();
    void setHtmlContent(utility::string_t value);
    /// <summary>
    /// The ID of the comment.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// Identifies what kind of resource this is. Value: the fixed string \&quot;drive#comment\&quot;.
    /// </summary>
    utility::string_t getKind() const;
    bool kindIsSet() const;
    void unsetKind();
    void setKind(utility::string_t value);
    /// <summary>
    /// The last time the comment or any of its replies was modified (RFC 3339 date-time).
    /// </summary>
    utility::datetime getModifiedTime() const;
    bool modifiedTimeIsSet() const;
    void unsetModifiedTime();
    void setModifiedTime(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Comment_quotedFileContent> getQuotedFileContent() const;
    bool quotedFileContentIsSet() const;
    void unsetQuotedFileContent();
    void setQuotedFileContent(std::shared_ptr<Comment_quotedFileContent> value);
    /// <summary>
    /// The full list of replies to the comment in chronological order.
    /// </summary>
    std::vector<std::shared_ptr<Reply>>& getReplies();
    bool repliesIsSet() const;
    void unsetReplies();
    void setReplies(std::vector<std::shared_ptr<Reply>> value);
    /// <summary>
    /// Whether the comment has been resolved by one of its replies.
    /// </summary>
    bool getResolved() const;
    bool resolvedIsSet() const;
    void unsetResolved();
    void setResolved(bool value);

protected:
    utility::string_t m_Anchor;
    bool m_AnchorIsSet;
    std::shared_ptr<User> m_Author;
    bool m_AuthorIsSet;
    utility::string_t m_Content;
    bool m_ContentIsSet;
    utility::datetime m_CreatedTime;
    bool m_CreatedTimeIsSet;
    bool m_Deleted;
    bool m_DeletedIsSet;
    utility::string_t m_HtmlContent;
    bool m_HtmlContentIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Kind;
    bool m_KindIsSet;
    utility::datetime m_ModifiedTime;
    bool m_ModifiedTimeIsSet;
    std::shared_ptr<Comment_quotedFileContent> m_QuotedFileContent;
    bool m_QuotedFileContentIsSet;
    std::vector<std::shared_ptr<Reply>> m_Replies;
    bool m_RepliesIsSet;
    bool m_Resolved;
    bool m_ResolvedIsSet;
};

}
}
}
}

#endif /* Comment_H_ */
