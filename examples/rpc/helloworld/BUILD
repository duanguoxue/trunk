load("/third_party/grpc/grpc_proto", "proto_library")

proto_library(
  name = "helloworld",
  src = "helloworld.proto",
  has_service = True,
  generate_cc = True,
)

cc_binary(
  name = "greeter_client",
  srcs = [
    "greeter_client.cc",
  ],
  deps = [
    ":helloworld",
  ],
)

cc_binary(
  name = "greeter_server",
  srcs = [
    "greeter_server.cc",
  ],
  deps = [
    ":helloworld",
  ],
)

cc_binary(
  name = "greeter_async_client",
  srcs = [
    "greeter_async_client.cc",
  ],
  deps = [
    ":helloworld",
  ],
)

cc_binary(
  name = "greeter_async_server",
  srcs = [
    "greeter_async_server.cc",
  ],
  deps = [
    ":helloworld",
  ],
)

