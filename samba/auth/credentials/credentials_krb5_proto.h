#ifndef __AUTH_CREDENTIALS_CREDENTIALS_KRB5_PROTO_H__
#define __AUTH_CREDENTIALS_CREDENTIALS_KRB5_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from auth/credentials/credentials_krb5.c  */

int cli_credentials_get_krb5_context(struct cli_credentials *cred, 
				     struct smb_krb5_context **smb_krb5_context) ;
NTSTATUS cli_credentials_set_krb5_context(struct cli_credentials *cred, 
					  struct smb_krb5_context *smb_krb5_context);
int cli_credentials_set_from_ccache(struct cli_credentials *cred, 
				    enum credentials_obtained obtained);
int cli_credentials_set_ccache(struct cli_credentials *cred, 
			       const char *name, 
			       enum credentials_obtained obtained);
int cli_credentials_new_ccache(struct cli_credentials *cred, struct ccache_container **_ccc);
int cli_credentials_get_ccache(struct cli_credentials *cred, 
			       struct ccache_container **ccc);
int cli_credentials_get_client_gss_creds(struct cli_credentials *cred, 
					 struct gssapi_creds_container **_gcc) ;
int cli_credentials_set_client_gss_creds(struct cli_credentials *cred, 
					 gss_cred_id_t gssapi_cred,
					 enum credentials_obtained obtained) ;
int cli_credentials_get_keytab(struct cli_credentials *cred, 
			       struct keytab_container **_ktc);
int cli_credentials_set_keytab_name(struct cli_credentials *cred, 
				    const char *keytab_name, 
				    enum credentials_obtained obtained) ;
int cli_credentials_update_keytab(struct cli_credentials *cred) ;
int cli_credentials_get_server_gss_creds(struct cli_credentials *cred, 
					 struct gssapi_creds_container **_gcc) ;
void cli_credentials_set_kvno(struct cli_credentials *cred,
			      int kvno);
int cli_credentials_get_kvno(struct cli_credentials *cred);
const char *cli_credentials_get_salt_principal(struct cli_credentials *cred) ;
void cli_credentials_set_salt_principal(struct cli_credentials *cred, const char *principal) ;
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __AUTH_CREDENTIALS_CREDENTIALS_KRB5_PROTO_H__ */

