_OWORD *__fastcall uu_tail::follow::files::FileHandling::update_reader(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 mut; // rbx
  _OWORD *result; // rax
  __int128 v6; // xmm0
  int v7; // ebp
  __int64 v8; // rax
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rsi
  __int128 v15; // [rsp+8h] [rbp-80h] BYREF
  __int128 v16; // [rsp+18h] [rbp-70h]
  _DWORD v17[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+48h] [rbp-40h]
  __int128 v21; // [rsp+58h] [rbp-30h]

  mut = uu_tail::follow::files::FileHandling::get_mut(a1, a2, a3);
  *(_QWORD *)&v15 = 0x1B600000000LL;
  DWORD2(v15) = 1;
  WORD6(v15) = 0;
  std::fs::OpenOptions::_open(v17, &v15, a2, a3);
  if ( v17[0] )
  {
    *(_QWORD *)&v15 = 0x8000000000000000LL;
    *((_QWORD *)&v16 + 1) = v18;
    result = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v6 = v15;
    result[1] = v16;
    *result = v6;
  }
  else
  {
    v7 = v17[1];
    v8 = _rust_alloc(0x2000LL, 1LL);
    if ( !v8 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    *(_QWORD *)&v19 = v8;
    *((_QWORD *)&v19 + 1) = 0x2000LL;
    v20 = 0LL;
    *(_QWORD *)&v21 = 0LL;
    DWORD2(v21) = v7;
    v9 = (_OWORD *)_rust_alloc(48LL, 8LL);
    if ( !v9 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v10 = v19;
    v11 = v20;
    v9[2] = v21;
    v9[1] = v11;
    *v9 = v10;
    v12 = *(_QWORD *)(mut + 200);
    v13 = *(_QWORD *)(mut + 208);
    *(_QWORD *)(mut + 200) = v9;
    *(_QWORD *)(mut + 208) = &anon_c568fa996e9b1afffbd2fe86e67742f4_14_llvm_893476530518564186;
    if ( v12 )
    {
      if ( *(_QWORD *)v13 )
        (*(void (__fastcall **)(__int64))v13)(v12);
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
        _rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16));
    }
    return 0LL;
  }
  return result;
}
