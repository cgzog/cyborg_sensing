#	autonomous database Makefile


CV_INC_DIR	= ../include
INC		= -I$(CV_INC_DIR)
CFLAGS	+= $(INC) -pthread -g $(DEBUG)

LDLIBS  = -lcyborgauto
LDFLAGS	+= -L ../lib -pthread

SRCS	= cv_db.c init.c globals.c lists.c threads.c sensors.c post.c query.c

OBJS	= ${SRCS:.c=.o}

TARGETS	= cv_db



all:	$(TARGETS)



cv_db:	$(OBJS)

cv_db.o:	cv_db.c $(CV_INC_DIR)/cv.h $(CV_INC_DIR)/db/externs.h \
			$(CV_INC_DIR)/db/lists.h

init.o:		init.c $(CV_INC_DIR)/cv.h $(CV_INC_DIR)/cv_net.h \
			$(CV_INC_DIR)/db/externs.h

globals.o:	globals.c $(CV_INC_DIR)/cv.h $(CV_INC_DIR)/cv_net.h \
			$(CV_INC_DIR)/db/externs.h

lists.o:	lists.c $(CV_INC_DIR)/cv.h $(CV_INC_DIR)/cv_net.h \
			$(CV_INC_DIR)/db/externs.h $(CV_INC_DIR)/db/lists.h

utility.o:	utility.c $(CV_INC_DIR)/cv.h $(CV_INC_DIR)/db/externs.h

threads.o:	threads.c $(CV_INC_DIR)/cv.h $(CV_INC_DIR)/db/externs.h \
			$(CV_INC_DIR)/sensors.h $(CV_INC_DIR)/db/threads.h \
			$(CV_INC_DIR)/db/lists.h

post.o:		post.c $(CV_INC_DIR)/cv.h $(CV_INC_DIR)/db/externs.h \
			$(CV_INC_DIR)/sensors.h $(CV_INC_DIR)/db/lists.h

query.o:	query.c $(CV_INC_DIR)/cv.h $(CV_INC_DIR)/db/externs.h \
			$(CV_INC_DIR)/sensors.h $(CV_INC_DIR)/db/lists.h \
			$(CV_INC_DIR)/db/query.h

sensors.o:	sensors.c $(CV_INC_DIR)/cv.h $(CV_INC_DIR)/db/externs.h \
			$(CV_INC_DIR)/sensors.h \
			$(CV_INC_DIR)/db/lists.h



clean:
	rm -rf $(OBJS) $(TARGETS)


valgrind:	cv_db
	valgrind --leak-check=full --show-leak-kinds=all --read-var-info=yes -v ./cv_db -D 2 -d DEBUG 2>stderr

