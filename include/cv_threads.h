//  cv_threads.h
//
//  thread-related stuff

#ifndef _CV_THREADS_H_
#define _CV_THREADS_H_ 1


/// Start the purging thread
///
/// ttl
void    startThreadPurge(int);

/// start the receiving thread
///
/// socket fd
void    startThreadRecv(int);


#endif  /* cv_threads.h */