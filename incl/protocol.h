#include <stdint.h>

typedef struct s_dm_msg
{
   uint8_t        msg_type;
   uint64_t       msg_id;
   uint64_t       sender_id;
   uint64_t       reciever_id;
   char           *content;

} t_dm_msg;

enum MESSAGE_TYPE
{
   TEXT,
   REACTION,
};

enum MESSAGE_LOCATION
{
   SERVER,
   DM,
};

enum SERVER_TYPE
{
   PUBLIC,
   PRIVATE
};