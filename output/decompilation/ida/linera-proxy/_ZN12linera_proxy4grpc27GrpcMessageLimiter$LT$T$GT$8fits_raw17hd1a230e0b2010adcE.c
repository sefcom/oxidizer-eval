bool __fastcall linera_proxy::grpc::GrpcMessageLimiter<T>::fits_raw(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *a1;
  if ( *a1 >= a2 )
    *a1 -= a2;
  return v2 >= a2;
}