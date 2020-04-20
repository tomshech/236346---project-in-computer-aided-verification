//
// Created by tshech on 4/18/2020.
//

#ifndef INC_236346_PROJECT_IN_COMPUTER_AIDED_VERIFICATION_HOMEPAGE_H
#define INC_236346_PROJECT_IN_COMPUTER_AIDED_VERIFICATION_HOMEPAGE_H
int USER_ID = 0;
int GROUP_ID = 0;

// Possible return values
typedef enum {
    NO_SUCH_USER_EXIST,
    NO_SUCH_GROUP_EXIST.
    USER_NOT_IN_GROUP,
    USERS_ARE_NOT_FRIENDS,
    SYSTEM_ERROR,
    SUCCESS
} ReturnValue;

typedef struct {
    // to be defined
    int m_Sender_id;
    int m_Receiver_id;
    char* m_Message;
} *SMailBox;

//Possible structs
typedef struct {
    char *m_User_name;
    char *m_Password;
    char *m_Email;
    int m_UserId;
    //to be defined
    friends_list* m_Friends_list;
    //to be defined
    messagesList m_ListofMessages
} *Suser;

typedef struct {
    char* m_Group_name;
    Suser *m_Group_members;
    int m_Num_of_participants;
    int m_Group_id;
} *SGroup;

typedef struct {
    int m_Commenter_id;
    char* m_Comment;
} *SComment;

typedef struct {
    // to be defined
    commnts_list* m_Comments_list;
    int m_poster_id;
    char* m_post;
} *SPost;

typedef struct {
    // to be defined
    int m_Sender_id;
    int m_Receiver_id;
    char* m_Message;
} *SMessage;

typedef struct {
    // to be defined
    Postlist m_list_of_posts;
} *SHomePage;

/*
 * return SUCCESS if user exists, NO_SUCH_USER_EXIST otherwise
 */
ReturnValue checkWhetherUserExists(int user_id);

/*
 * return SUCCESS if group exists, NO_SUCH_GROUP_EXIST otherwise
 */
ReturnValue checkWhetherGroupExists(int group_id);

/*
 * return SUCCESS if user successfully creates, SYSTEM_ERROR otherwise
 */
ReturnValue CreateUser(char *m_User_name, char *m_Password, char *m_Email);

/*
 * return SUCCESS if user successfully creates, SYSTEM_ERROR otherwise
 */
ReturnValue CreateGroup(listOFUsers users_list);

/*
 * return SUCCESS if post successfully posted, SYSTEM_ERROR otherwise
 */
ReturnValue PostMessage(char* content);

/*
 * return SUCCESS if user exists, NO_SUCH_USER_EXIST otherwise
 */
ReturnValue SendMessageToUser(int sender_id, int receiver_id, char* content);

/*
 * return SUCCESS if group exists, NO_SUCH_GROUP_EXIST otherwise
 */
ReturnValue SendMessageToGroup(int sender_id, int group_id, char* content);

/*
 * commenter_id comments on post_id with the content (content).
 * return SUCCESS anytime
 */
ReturnValue CommentPost(int commenter_id, int post_id, char* content);

/*
 * return SUCCESS if user exists, NO_SUCH_USER_EXIST otherwise
 */
ReturnValue DeleteUser(int user_id);

/*
 * return SUCCESS if user exists, NO_SUCH_USER_EXIST otherwise
 */
ReturnValue DeleteMessage(int user_id, int message_id);

/*
 * delete the post_id from the homepage
 * return success anytime
 */
ReturnValue DeletePost(SHomePage home_page, int post_id);





#endif //INC_236346_PROJECT_IN_COMPUTER_AIDED_VERIFICATION_HOMEPAGE_H
