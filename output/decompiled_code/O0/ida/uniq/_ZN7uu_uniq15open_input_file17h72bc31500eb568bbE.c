__int64 *__fastcall uu_uniq::open_input_file(__int64 *a1, _BYTE *a2, __int64 a3)
{
  char v4; // dl
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rdx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v11; // [rsp+8h] [rbp-80h]
  char v12; // [rsp+10h] [rbp-78h]
  __int64 v13; // [rsp+18h] [rbp-70h] BYREF
  int v14; // [rsp+20h] [rbp-68h]
  __int16 v15; // [rsp+24h] [rbp-64h]
  _DWORD v16[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v19[4]; // [rsp+40h] [rbp-48h] BYREF

  if ( !a2 || a3 == 1 && *a2 == 45 )
  {
    v18 = std::io::stdio::stdin();
    v11 = std::io::stdio::Stdin::lock(&v18);
    v12 = v4 & 1;
    v5 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 16LL, 0LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *(_QWORD *)v5 = v11;
    *(_BYTE *)(v5 + 8) = v12 & 1;
    v6 = &off_11CC70;
LABEL_12:
    v7 = 0LL;
    goto LABEL_13;
  }
  v13 = 0x1B600000000LL;
  v14 = 1;
  v15 = 0;
  std::fs::OpenOptions::_open(v16, &v13, a2, a3);
  if ( !v16[0] )
  {
    v6 = (__int64 (__fastcall **)())v16[1];
    goto LABEL_10;
  }
  v5 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
         v17,
         a2,
         a3);
  v6 = &anon_83d8d7daf74a767102df91c4d2be5f63_10_llvm_17956670198652840951;
  if ( !v5 )
  {
LABEL_10:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v19, 0x2000LL, v6);
    v5 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v8 = v19[0];
    v9 = v19[1];
    *(_OWORD *)(v5 + 32) = v19[2];
    *(_OWORD *)(v5 + 16) = v9;
    *(_OWORD *)v5 = v8;
    v6 = &off_11CBE8;
    goto LABEL_12;
  }
  v7 = 1LL;
LABEL_13:
  a1[1] = v5;
  a1[2] = (__int64)v6;
  *a1 = v7;
  return a1;
}
