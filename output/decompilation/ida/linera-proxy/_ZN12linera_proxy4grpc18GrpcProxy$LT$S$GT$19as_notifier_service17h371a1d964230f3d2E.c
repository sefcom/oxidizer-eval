__int64 __fastcall linera_proxy::grpc::GrpcProxy<S>::as_notifier_service(__int64 a1, volatile signed __int64 *a2)
{
  char v2; // of
  __int64 v3; // rt0

  v3 = _InterlockedIncrement64(a2);
  if ( (v3 < 0) ^ v2 | (v3 == 0) )
    BUG();
  return linera_rpc::grpc::api::validator_node_server::ValidatorNodeServer<T>::new(a1);
}