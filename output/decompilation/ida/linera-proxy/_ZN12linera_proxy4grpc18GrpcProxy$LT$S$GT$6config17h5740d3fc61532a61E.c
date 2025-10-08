__int64 __fastcall linera_proxy::grpc::GrpcProxy<S>::config(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  v1 = a1[49];
  if ( v1 >= a1[32] )
    core::option::expect_failed(aNoProxyConfigP, 25LL, &off_14A9598);
  return a1[31] + 32 * v1;
}