

filegroup(
 name = "catch2",
 srcs = ["catch2.build_defs"],
 visibility = ["PUBLIC"]
)

github_repo(
  name = "catch2-repo",
  repo = "catchorg/Catch2",
  revision = CONFIG.CATCH2.VERSION,
  build_file = "BUILD.catch2",
  strip_build = True
)