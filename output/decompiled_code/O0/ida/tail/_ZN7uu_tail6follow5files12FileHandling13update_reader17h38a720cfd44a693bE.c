_OWORD *__fastcall uu_tail::follow::files::FileHandling::update_reader(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 mut; // rbx
  _OWORD *result; // rax
  __int128 v6; // xmm0
  _OWORD *v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rsi
  __int128 v13; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+10h] [rbp-68h]
  _DWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  _OWORD v17[4]; // [rsp+30h] [rbp-48h] BYREF

  mut = uu_tail::follow::files::FileHandling::get_mut(a1);
  *(_QWORD *)&v13 = 0x1B600000000LL;
  DWORD2(v13) = 1;
  WORD6(v13) = 0;
  std::fs::OpenOptions::_open(v15, &v13, a2, a3);
  if ( v15[0] )
  {
    *(_QWORD *)&v13 = 0x8000000000000000LL;
    *((_QWORD *)&v14 + 1) = v16;
    result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v6 = v13;
    result[1] = v14;
    *result = v6;
  }
  else
  {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v17, 0x2000LL, v15[1]);
    v7 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v8 = v17[0];
    v9 = v17[1];
    v7[2] = v17[2];
    v7[1] = v9;
    *v7 = v8;
    v10 = *(_QWORD *)(mut + 200);
    v11 = *(_QWORD *)(mut + 208);
    *(_QWORD *)(mut + 200) = v7;
    *(_QWORD *)(mut + 208) = &anon_05a4d4ca64bdea474ebd4b0eb3197a7a_35_llvm_11384070901547909942;
    if ( v10 )
    {
      if ( *(_QWORD *)v11 )
        (*(void (__fastcall **)(__int64))v11)(v10);
      v12 = *(_QWORD *)(v11 + 8);
      if ( v12 )
        _rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16));
    }
    return 0LL;
  }
  return result;
}
