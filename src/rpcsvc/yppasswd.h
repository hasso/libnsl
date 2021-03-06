/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _YPPASSWD_H_RPCGEN
#define _YPPASSWD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

struct passwd {
	char *pw_name;
	char *pw_passwd;
	int pw_uid;
	int pw_gid;
	char *pw_gecos;
	char *pw_dir;
	char *pw_shell;
};
typedef struct passwd passwd;

struct yppasswd {
	char *oldpass;
	struct passwd newpw;
};
typedef struct yppasswd yppasswd;

#define YPPASSWDPROG 100009
#define YPPASSWDVERS 1
#define YPPASSWDPROC_UPDATE 1

extern int * yppasswdproc_update_1(yppasswd *, CLIENT *);
extern int * yppasswdproc_update_1_svc(yppasswd *, struct svc_req *);
extern int yppasswdprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

/* the xdr functions */
extern  bool_t xdr_passwd (XDR *, struct passwd*);
extern  bool_t xdr_yppasswd (XDR *, yppasswd*);

#ifdef __cplusplus
}
#endif

#endif /* !_YPPASSWD_H_RPCGEN */
