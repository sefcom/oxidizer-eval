        char a8)
{
  char v12; // dl
  __int64 v13; // rax
  __int64 (__fastcall **v14)(); // rcx
  __int64 v15; // rax
  __int64 (__fastcall **v16)(); // rdx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v20; // [rsp+8h] [rbp-90h]
  char v21; // [rsp+10h] [rbp-88h]
  __int64 v22; // [rsp+18h] [rbp-80h] BYREF
  int v23; // [rsp+20h] [rbp-78h]
  __int16 v24; // [rsp+24h] [rbp-74h]
  _DWORD v25[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v26; // [rsp+30h] [rbp-68h]
  _OWORD v27[6]; // [rsp+38h] [rbp-60h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, asc_18381, 1LL) )
  {
    v20 = std::io::stdio::Stdin::lock(a5);
    v21 = v12 & 1;
    v13 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 16LL, 0LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *(_QWORD *)v13 = v20;
    *(_BYTE *)(v13 + 8) = v21 & 1;
    v14 = &off_131200;
LABEL_11:
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 8LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = a3;
    *(_QWORD *)(a1 + 32) = a4;
    *(_QWORD *)(a1 + 40) = v13;
    *(_QWORD *)(a1 + 48) = v14;
    *(_BYTE *)(a1 + 56) = a7;
    *(_QWORD *)(a1 + 64) = a6;
    *(_QWORD *)(a1 + 72) = 1LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_BYTE *)(a1 + 88) = a2;
    *(_BYTE *)(a1 + 89) = a8;
    *(_WORD *)(a1 + 90) = 0;
    return a1;
  }
  v22 = 0x1B600000000LL;
  v23 = 1;
  v24 = 0;
  std::fs::OpenOptions::_open(v25, &v22, a3, a4);
  if ( !v25[0] )
  {
    v16 = (__int64 (__fastcall **)())v25[1];
LABEL_9:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v27, 0x2000LL, v16);
    v13 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v17 = v27[0];
    v18 = v27[1];
    *(_OWORD *)(v13 + 32) = v27[2];
    *(_OWORD *)(v13 + 16) = v18;
    *(_OWORD *)v13 = v17;
    v14 = &off_131178;
    goto LABEL_11;
  }
  v15 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
          v26,
          a3,
          a4);
  if ( !v15 )
  {
    v16 = &anon_88bd953382d64e16d63aef396fcf2aa0_23_llvm_18377431372254846744;
    goto LABEL_9;
  }
  *(_QWORD *)(a1 + 8) = v15;
  *(_QWORD *)(a1 + 16) = &anon_88bd953382d64e16d63aef396fcf2aa0_23_llvm_18377431372254846744;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}
