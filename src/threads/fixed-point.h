
/*Base on Sec B.6*/

/* Assign constant val to P, Q, F for p.q format purpose*/
#define P 17
#define Q 16
#define F 1<<Q

/* Floating point conversion*/
#define FP_COVERTING(N) N*F
#define FP_COV_TOWARD_ZERO(X) X/F
#define FP_COV_TOWARD_INT(X) ((X>=0)? (((X+F)/2)/F):(((X-F)/2)/F))

/*Float and Int calculation*/
#define INT_ADD(X,Y) X+Y
#define INT_SUB(X,Y) X-Y
#define FP_ADD(X,N) X+N*F
#define FP_SUB(X,N) X-N*F
#define INT_MUL(X,Y) (((int64_t)(X) * Y)/F)
#define FP_MUL(X,N) X*N
#define INT_DIV(X,Y) (((int64_t)(X) * F)/Y)
#define FP_DIV(X,N) X/N
