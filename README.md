# catch2-rules
A set of please rules, that provide C++ testing utilities with catch2.

## How to use

First, make sure to include the plugin within your please project by adding the following to your projects `plugins/BUILD` file:
```
plugin_repo(
  name = "catch2",
  revision = "master",
  plugin = "catch2-rules",
  owner = "cemeceme"
)
```
Make sure to either `preloadsubincludes` or `subinclude` the rules in the BUILD files where you need them.

## Provided rules

### cc_catch2_test
Compiles and runs tests using catch2, similarly to how the please native cc-test rule works.

Catch2 already provides its own main file, which gets used by this rule. The rule doesn't currently support custom main files.

Takes the following arguments:
```
name              (str)         : Name of the rule
srcs              (list)        : C or C++ source files to compile.
hdrs              (list)        : Header files.
compiler_flags    (list)        : Flags to pass to the compiler.
linker_flags      (list)        : Flags to pass to the linker.
pkg_config_libs   (list)        : Libraries to declare a dependency on using `pkg-config --libs`
pkg_config_cflags (list)        : Libraries to declare a dependency on using `pkg-config --cflags`
deps              (list)        : Dependent rules.
worker            (str)         : Reference to worker script, A persistent worker process that is used to set up the test. TODO, this is not yet implemented.
data              (list)        : Runtime data files for this test.
visibility        (list)        : Visibility declaration for this rule.
flags             (str)         : Flags to apply to the test invocation.
labels            (list)        : Labels to attach to this test.
flaky             (bool | int)  : If true the test will be marked as flaky and automatically retried.
defines           (list | dict) : A list or dict of defines to use when compiling.
test_outputs      (list)        : Extra test output files to generate from this test.
size              (str)         : Test size (enormous, large, medium or small).
timeout           (int)         : Length of time in seconds to allow the test to run for before killing it.
sandbox           (bool)        : Sandbox the test on Linux to restrict access to namespaces such as network.
write_main        (bool)        : Deprecated, has no effect. See `plz help testmain` for more information about how to define a default dependency for the test main.
linkstatic        (bool)        : Only provided for Bazel compatibility. Has no actual effect since we always link roughly equivalently to their "mostly-static" mode.
```

## Configuration

### version
The version of catch2 to use.