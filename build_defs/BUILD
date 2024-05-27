

filegroup(
 name = "catch2",
 srcs = ["catch2.build_defs"],
 visibility = ["PUBLIC"]
)

plugin_repo(
  name = "cc",
  revision = "v0.3.2",
  plugin = "cc-rules",
  owner = "please-build",
)

plugin_repo(
  name = "cmake",
  revision = "master",
  plugin = "cmake-rules",
  owner = "cemeceme"
)

github_repo(
  name = "catch2-repo",
  repo = "catchorg/Catch2",
  revision = "v3.5.3",
  build_file = "BUILD.catch2",
  strip_build = True
)