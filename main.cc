#include <glog/logging.h>

void initLog(char *const *argv)
{
    /*
     * https://google.github.io/glog/stable/logging/#format-customization
     * 日志文件名 <program name>.<host name>.<user name>.log.<Severity level>.<date>-<time>.<pid>
     * 日志格式 [IWEF]yyyymmdd hh:mm:ss.uuuuuu threadid file:line] msg
     */
    google::InitGoogleLogging(argv[0]);

#ifdef _WIN32
    FLAGS_log_dir = R"(D:\garden\opt\hello_grpc\)";
#elif __APPLE__
    FLAGS_log_dir = "/opt/hello-grpc/";
#else
    FLAGS_log_dir = "/opt/hello-grpc/";
#endif
    FLAGS_colorlogtostderr = true;
    FLAGS_alsologtostderr = true;
}

int main(int argc, char *argv[])
{
    initLog(argv);

    LOG(INFO) << "Hello, glog!";
    LOG(INFO) << "This is an info message.";
    LOG(WARNING) << "This is a warning message.";

    google::ShutdownGoogleLogging();
    return 0;
}