load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "my_app",
    srcs = ["main.cc"],
    copts = ["/std:c++17"],  # 指定使用C++17标准
    deps = [
        "@com_github_google_glog//:glog",
    ],
)
