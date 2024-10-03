#!/bin/bash

# https://google.github.io/glog/stable/flags/#using-command-line-parameters-and-environment-variables
# INFO, WARNING, ERROR, and FATAL are 0, 1, 2, and 3
export GLOG_minloglevel=1
# Copy log messages at or above this level to stderr in addition to logfiles.
#The numbers of severity levels INFO, WARNING, ERROR, and FATAL are 0, 1, 2, and 3, respectively.
export GLOG_stderrthreshold=1
./bazel-bin/my_app

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    log_path="/opt/hello-grpc/"
elif [[ "$OSTYPE" == "darwin"* ]]; then
    log_path="/opt/hello-grpc/"
elif [[ "$OSTYPE" == "cygwin" || "$OSTYPE" == "msys" || "$OSTYPE" == "win32" ]]; then
    log_path="D:\\garden\\opt\\hello_grpc"
else
    echo "Unsupported OS type: $OSTYPE"
    exit 1
fi
ls "$log_path"
