__int64 __fastcall linera_exporter::runloops::task_manager::ExporterBuilder<F>::new(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _QWORD src[2]; // [rsp+8h] [rbp-130h] BYREF
  __int128 v10; // [rsp+18h] [rbp-120h]
  __int128 v11; // [rsp+28h] [rbp-110h]
  __int128 v12; // [rsp+38h] [rbp-100h]
  __int128 v13; // [rsp+48h] [rbp-F0h]
  __int128 v14; // [rsp+58h] [rbp-E0h]
  __int128 v15; // [rsp+68h] [rbp-D0h]
  __int128 v16; // [rsp+78h] [rbp-C0h]
  __int128 v17; // [rsp+88h] [rbp-B0h]
  _OWORD v18[10]; // [rsp+98h] [rbp-A0h] BYREF

  linera_rpc::grpc::node_provider::GrpcNodeProvider::new(v18);
  src[0] = 1LL;
  src[1] = 1LL;
  v10 = v18[0];
  v11 = v18[1];
  v12 = v18[2];
  v13 = v18[3];
  v14 = v18[4];
  v15 = v18[5];
  v16 = v18[6];
  v17 = v18[7];
  result = alloc::boxed::Box<T>::new(src);
  *(_QWORD *)(a1 + 48) = *((_QWORD *)a2 + 6);
  v7 = *a2;
  v8 = a2[1];
  *(_OWORD *)(a1 + 32) = a2[2];
  *(_OWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  *(_QWORD *)(a1 + 72) = a3;
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a1 + 64) = a4;
  return result;
}