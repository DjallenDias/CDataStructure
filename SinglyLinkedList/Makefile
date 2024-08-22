CXX = gcc
CXXFLAGS = -Wall -Iinclude

SRCDIR = src
BUILDDIR = build
BINDIR = bin

SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(SOURCES))
EXECUTABLE = $(BINDIR)/my_program

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CXX) -g -o $@ $^ $(CXXFLAGS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(BUILDDIR)
	$(CXX) -g -c -o $@ $< $(CXXFLAGS)

clean:
	rm -rf $(BUILDDIR) $(BINDIR)

run:
	./bin/my_program

.PHONY: all clean