workspace(name = "hello")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "bazel_skylib",
    branch = "main",
    remote = "https://github.com/bazelbuild/bazel-skylib.git",
)

git_repository(
    name = "com_github_gflags_gflags",
    branch = "master",
    remote = "https://github.com/gflags/gflags.git",
)

git_repository(
    name = "com_github_google_glog",
    branch = "master",
    remote = "https://github.com/google/glog.git",
)

git_repository(
    name = "com_google_absl",
    branch = "master",
    remote = "https://github.com/abseil/abseil-cpp.git",
)

git_repository(
    name = "com_google_googletest",
    branch = "main",
    remote = "https://github.com/google/googletest.git",
)
