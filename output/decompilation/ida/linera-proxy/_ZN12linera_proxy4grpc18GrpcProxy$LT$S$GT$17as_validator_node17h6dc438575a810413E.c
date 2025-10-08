__int64 __fastcall linera_proxy::grpc::GrpcProxy<S>::as_validator_node(_QWORD *a1, volatile signed __int64 *a2)
{
  char v2; // of
  __int64 v3; // rt0
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]
  __int64 v8; // [rsp+20h] [rbp-10h]

  v3 = _InterlockedIncrement64(a2);
  if ( (v3 < 0) ^ v2 | (v3 == 0) )
    BUG();
  linera_rpc::grpc::api::validator_node_server::ValidatorNodeServer<T>::new(v5);
  v6 = 1LL;
  v7 = 0x1000000LL;
  a1[4] = v8;
  a1[2] = v6;
  result = v7;
  a1[3] = v7;
  *a1 = 1LL;
  a1[1] = 0x1000000LL;
  return result;
}