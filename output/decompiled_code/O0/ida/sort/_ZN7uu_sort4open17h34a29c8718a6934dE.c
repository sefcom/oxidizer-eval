__int64 *__fastcall uu_sort::open(__int64 *a1, __int64 a2)
{
  _BYTE *v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rcx
  __int64 v7; // r12
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rdx
  int v12; // ebp
  __int64 v14; // [rsp+0h] [rbp-A8h] BYREF
  int v15; // [rsp+8h] [rbp-A0h]
  __int16 v16; // [rsp+Ch] [rbp-9Ch]
  _DWORD v17[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v18; // [rsp+18h] [rbp-90h]
  __int64 v19; // [rsp+20h] [rbp-88h]
  __int128 v20; // [rsp+28h] [rbp-80h]
  __int128 v21; // [rsp+38h] [rbp-70h]
  __int128 v22; // [rsp+48h] [rbp-60h]
  __int128 v23; // [rsp+58h] [rbp-50h]
  __int128 v24; // [rsp+68h] [rbp-40h] BYREF
  __int64 v25; // [rsp+78h] [rbp-30h]

  v2 = *(_BYTE **)(a2 + 8);
  if ( !v2 || (v3 = *(_QWORD *)(a2 + 16), v3 < 0) )
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  if ( v3 == 1 && *v2 == 45 )
  {
    v4 = std::io::stdio::stdin();
    v5 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *(_QWORD *)v5 = v4;
    v6 = (__int64 (__fastcall **)())&unk_1D3500;
LABEL_12:
    v11 = 0LL;
    goto LABEL_13;
  }
  v14 = 0x1B600000000LL;
  v15 = 1;
  v16 = 0;
  std::fs::OpenOptions::_open(v17, &v14, v2, v3);
  if ( !v17[0] )
  {
    v12 = v17[1];
    v5 = alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v5 = v12;
    v6 = &off_1D34A8;
    goto LABEL_12;
  }
  v7 = v18;
  v19 = v18;
  std::path::Path::to_path_buf(&v24, v2, v3);
  *(_QWORD *)&v22 = v25;
  v21 = v24;
  *((_QWORD *)&v20 + 1) = v7;
  LOBYTE(v20) = 2;
  v5 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
  if ( !v5 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v8 = v20;
  v9 = v21;
  v10 = v22;
  *(_OWORD *)(v5 + 48) = v23;
  *(_OWORD *)(v5 + 32) = v10;
  *(_OWORD *)(v5 + 16) = v9;
  *(_OWORD *)v5 = v8;
  v11 = 1LL;
  v6 = &anon_106514630be1c9ef1de9e84b8238e531_22_llvm_16179947721019886102;
LABEL_13:
  a1[1] = v5;
  a1[2] = (__int64)v6;
  *a1 = v11;
  return a1;
}
