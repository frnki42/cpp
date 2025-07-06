# ╔═══════════════════════════════════════════════════════════════════════════╗
# ║   file:       Makefile                                                    ║
# ║   created:    2025/07/06 05:14                                            ║
# ║   updated:    2025/07/06 05:14                                            ║
# ║                                                                           ║
# ║   crafted & polished by .frnki                                            ║
# ╚═══════════════════════════════════════════════════════════════════════════╝
#	── COMPILER & FLAGS ──
CXX 		= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98 

#	── TARGET NAME ──
NAME		= megaphone

# ── SOURCE & OBJECT FILES ──
SRCS 	= ex00/megaphone.cpp
OBJS 	= ${SRCS:.cpp=.o}

# ── BUILD TARGETS ──
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# ── CLEANUP ──
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
