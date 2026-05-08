
typedef enum e_type
{
	WORD,
	PIPE,
	REDIR_IN,
	REDIR_OUT,
	HEREDOC,
	REDIR_APPEND
}					t_type;

typedef struct s_token
{
	char			*value;		// caracetere(s) du token
	t_type			type;		// enum type du token
	struct s_token	*next;
	struct s_token	*prev;
}					t_token;

typedef struct s_state
{
	char			*str; 		//string transmis dans le prompt
	int				i;			//place dans la string
	char			quote;		//quote = \0 si simple = ' si double = "
	struct s_token	*current;	//token en cours
	struct s_token	*head;		//tete de la liste
}					t_state;
