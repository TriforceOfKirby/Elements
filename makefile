SOURCES = $(wildcard src/*.cc)
OBJECTS = $(addprefix obj/, $(notdir $(patsubst %.cc, %.o, $(SOURCES))))
CXXFLAGS = -g -Wall -Wextra -Werror -Os -std=c++14
SUBDIRS = bin obj

.PHONY : all clean depend subdirs

all : elements

clean :
	@$(RM) -r $(SUBDIRS)

depend : .depend

subdirs : $(SUBDIRS)

elements : $(OBJECTS) | bin
	@$(CXX) $(CXXFLAGS) $^ -o $(addprefix bin/, $@)

obj/%.o : src/%.cc | obj
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(SUBDIRS) :
	@mkdir -p $@

.depend : $(SOURCES)
	@$(RM) ./.depend
	@$(CXX) $(CXXFLAGS) -MM $^>>./.depend;

-include .depend
