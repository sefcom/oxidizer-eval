__int64 __fastcall linera_exporter::runloops::start_block_processor_task(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        int a6,
        _OWORD *a7)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm1
  __int64 result; // rax
  __int64 v19; // [rsp+10h] [rbp-158h]
  __int128 v20; // [rsp+28h] [rbp-140h] BYREF
  __int64 v21; // [rsp+38h] [rbp-130h]
  _OWORD v22[5]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v23; // [rsp+90h] [rbp-D8h]
  __int128 v24; // [rsp+98h] [rbp-D0h]
  __int128 v25; // [rsp+A8h] [rbp-C0h]
  __int64 v26; // [rsp+B8h] [rbp-B0h]
  __int64 v27; // [rsp+C0h] [rbp-A8h]
  __int64 v28; // [rsp+C8h] [rbp-A0h]
  __int128 v29; // [rsp+D0h] [rbp-98h]
  int v30; // [rsp+E0h] [rbp-88h]
  _BYTE v31[24]; // [rsp+F0h] [rbp-78h] BYREF
  _QWORD v32[5]; // [rsp+108h] [rbp-60h] BYREF
  char v33; // [rsp+130h] [rbp-38h]

  v10 = tokio::sync::mpsc::chan::channel();
  v19 = v11;
  v12 = v10;
  <tokio::sync::mpsc::chan::Tx<T,S> as core::clone::Clone>::clone(v10);
  v13 = *a2;
  v25 = a2[1];
  v24 = v13;
  v26 = a3;
  v29 = *a4;
  v14 = *(_OWORD *)(a5 + 16);
  v15 = *(_OWORD *)(a5 + 32);
  v22[2] = *(_OWORD *)a5;
  v22[3] = v14;
  v22[4] = v15;
  v23 = *(_QWORD *)(a5 + 48);
  v30 = a6;
  v27 = v12;
  v28 = v19;
  v16 = a7[1];
  v22[0] = *a7;
  v22[1] = v16;
  v32[2] = 0x8000000000000000LL;
  v32[0] = 0LL;
  v33 = 0;
  std::thread::Builder::spawn_unchecked(v31, v32, v22);
  core::result::Result<T,E>::expect(&v20, v31);
  *(_QWORD *)a1 = v12;
  *(_OWORD *)(a1 + 8) = v20;
  result = v21;
  *(_QWORD *)(a1 + 24) = v21;
  return result;
}