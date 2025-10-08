void __fastcall linera_proxy::grpc::GrpcProxy<S>::run(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 56) = a3;
  *(_BYTE *)(a1 + 68) = 0;
}