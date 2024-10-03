load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "my_app",
    srcs = ["main.cc"],
    copts = ["/std:c++17"],
    deps = [
        "@com_github_google_glog//:glog",
    ],
)
