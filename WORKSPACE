bind(
  name = "libssl",
  actual = "//third_party/openssl:ssl",
)

bind(
  name = "zlib",
  actual = "//third_party/zlib",
)

new_local_repository(
  # This one can't be called protobuf because "//external:protobuf" is
  # depent by grpc
  name = "com_google_protobuf",
  path = "third_party/protobuf",
  build_file = "third_party/protobuf/BUILD",
)

new_local_repository(
    name = "submodule_cares",
    path = "third_party/cares",
    build_file = "third_party/cares/cares.BUILD",
)

bind(
    name = "cares",
    actual = "@submodule_cares//:ares",
)

new_local_repository(
  name = "grpc",
  path = "third_party/grpc",
  build_file = "third_party/grpc/BUILD",
)

bind(
  name = "nanopb",
  actual = "@grpc//third_party/nanopb",
)

# Protobuf compiler binary
bind(
  name = "protoc",
  actual = "@com_google_protobuf//:protoc",
)

bind(
  name = "protocol_compiler",
  actual = "@com_google_protobuf//:protoc",
)

# Library needed to build protobuf codegen plugin.
bind(
  name = "protobuf_clib",
  actual = "@com_google_protobuf//:protoc_lib",
)

# Protobuf runtime
bind(
  name = "protobuf",
  actual = "@com_google_protobuf//:protobuf",
)

bind(
  name = "protobuf_java_lib",
  actual = "@com_google_protobuf//:protobuf_java",
)

bind(
  name = "protobuf_java_util",
  actual = "@com_google_protobuf//:protobuf_java_util",
)

# GRPC codegen plugin
bind(
  name = "grpc_cpp_plugin",
  actual = "@grpc//:grpc_cpp_plugin"
)

# GRPC C++ runtime library
bind(
  name = "grpc++",
  actual = "@grpc//:grpc++"
)

bind(
  name = "grpc++_codegen_proto",
  actual = "@grpc//:grpc++_codegen_proto"
)

maven_jar(
  name = "apache_commons_lang2_maven",
  artifact = "commons-lang:commons-lang:2.6"
)

bind(
  name = "apache_commons_lang2",
  actual = "@apache_commons_lang2_maven//jar"
)

maven_jar(
  name = "apache_commons_lang3_maven",
  artifact = "org.apache.commons:commons-lang3:3.4"
)

bind(
  name = "apache_commons_lang3",
  actual = "@apache_commons_lang3_maven//jar"
)

bind(
  name = "apache_commons_logging",
  actual = "//third_party/java/commons-logging"
)

bind(
  name = "apache_log4j",
  actual = "//third_party/java/log4j"
)

maven_jar(
    name = "gson_maven",
    artifact = "com.google.code.gson:gson:2.7",
)

bind(
    name = "gson",
    actual = "@gson_maven//jar",
)

bind(
    name = "guava",
    actual = "//third_party/java/guava",
)

maven_jar(
  name = "hpack_maven",
  artifact = "com.twitter:hpack:v1.0.1"
)

bind(
  name = "hpack",
  actual = "@hpack_maven//jar"
)

bind(
  name = "javassist",
  actual = "//third_party/java/javassist",
)

maven_jar(
  name = "jetty_alpn_maven",
  artifact = "org.eclipse.jetty.alpn:alpn-api:1.1.2.v20150522"
)

bind(
  name = "jetty_alpn",
  actual = "@jetty_alpn_maven//jar"
)

maven_jar(
  name = "jetty_npn_maven",
  artifact = "org.mortbay.jetty.npn:npn-boot:1.1.11.v20150415"
)

bind(
  name = "jetty_npn",
  actual = "@jetty_npn_maven//jar"
)

maven_jar(
  name = "joda_time_maven",
  artifact = "joda-time:joda-time:2.3"
)

bind(
  name = "joda_time",
  actual = "@joda_time_maven//jar"
)

maven_jar(
  name = "jzlib_maven",
  artifact = "com.jcraft:jzlib:1.1.3"
)

bind(
  name = "jzlib",
  actual = "@jzlib_maven//jar"
)

maven_jar(
  name = "netty_tcnative_maven",
  artifact = "io.netty:netty-tcnative:1.1.33.Fork7"
)

bind(
  name = "netty_tcnative",
  actual = "@netty_tcnative_maven//jar"
)

bind(
  name = "slf4j",
  actual = "//third_party/java/slf4j"
)

# grpc-java dependencies
bind(
  name = "jsr305",
  actual = "//third_party/java/jsr305"
)

maven_jar(
  name = "google_auth_library_oauth2_http_maven",
  artifact = "com.google.auth:google-auth-library-oauth2-http:0.2.0"
)

bind(
  name = "google_auth_library_oauth2_http",
  actual = "@google_auth_library_oauth2_http_maven//jar"
)

maven_jar(
  name = "google_auth_library_credentials_maven",
  artifact = "com.google.auth:google-auth-library-credentials:0.2.0"
)

bind(
  name = "google_auth_library_credentials",
  actual = "@google_auth_library_credentials_maven//jar"
)

maven_jar(
  name = "guice_maven",
  artifact = "com.google.inject:guice:4.0",
)

bind(
  name = "guice",
  actual = "@guice_maven//jar"
)

maven_jar(
  name = "guice_multibindings_maven",
  artifact = "com.google.inject.extensions:guice-multibindings:4.0",
)

bind(
  name = "guice_multibindings",
  actual = "@guice_multibindings_maven//jar"
)

maven_jar(
  name = "hamcrest_maven",
  artifact = "org.hamcrest:hamcrest-core:1.3",
)

bind(
  name = "hamcrest",
  actual = "@hamcrest_maven//jar"
)

maven_jar(
  name = "junit_maven",
  artifact = "junit:junit:4.11"
)

bind(
  name = "junit",
  actual = "@junit_maven//jar"
)

maven_jar(
  name = "objenesis_maven",
  artifact = "org.objenesis:objenesis:2.1",
)

bind(
  name = "objenesis",
  actual = "@objenesis_maven//jar"
)

maven_jar(
  name = "mockito_maven",
  artifact = "org.mockito:mockito-core:1.10.19",
)

bind(
  name = "mockito",
  actual = "@mockito_maven//jar"
)

maven_jar(
  name = "okhttp_maven",
  artifact = "com.squareup.okhttp:okhttp:2.4.0",
)

bind(
  name = "okhttp",
  actual = "@okhttp_maven//jar"
)

maven_jar(
  name = "okio_maven",
  artifact = "com.squareup.okio:okio:1.5.0",
)

bind(
  name = "okio",
  actual = "@okio_maven//jar"
)

maven_jar(
  name = "commons_cli_maven",
  artifact = "commons-cli:commons-cli:1.2",
)

bind(
  name = "commons_cli",
  actual = "@commons_cli_maven//jar"
)

# Disable loading of any android depenedency rule
bind(name = "android/aar_generator")
bind(name = "android/incremental_split_stub_application")
bind(name = "android/incremental_stub_application")
bind(name = "android/resources_processor")
