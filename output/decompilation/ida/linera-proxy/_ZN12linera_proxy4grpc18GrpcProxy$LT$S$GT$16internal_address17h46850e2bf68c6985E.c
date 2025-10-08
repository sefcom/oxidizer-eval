__int64 __fastcall linera_proxy::grpc::GrpcProxy<S>::internal_address(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(linera_proxy::grpc::GrpcProxy<S>::config(a2) + 26);
  *(_DWORD *)(a1 + 2) = 0;
  *(_WORD *)(a1 + 6) = result;
  *(_WORD *)a1 = 0;
  return result;
}