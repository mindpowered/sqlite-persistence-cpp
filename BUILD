cc_library(
  name = 'persistence',
  visibility = ['//visibility:public'],
  deps = [
    '//extern/sqlite3:sqlite3',
    '@haxecpp//:haxe_thread',
    '@maglev//:maglev',
  ],
  srcs = [
    "src/Persistence.cpp",
    "include/Persistence.h"
  ],
  strip_include_prefix = 'include/',
  hdrs = [
    "include/mindpowered/persistence/Persistence.h"
  ]
)
