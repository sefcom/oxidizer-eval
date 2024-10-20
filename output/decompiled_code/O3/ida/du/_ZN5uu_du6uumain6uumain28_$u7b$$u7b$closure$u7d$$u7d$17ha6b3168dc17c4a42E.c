_OWORD *__fastcall uu_du::uumain::uumain::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _OWORD *v5; // rax
  _OWORD *v6; // rax
  _OWORD *v7; // r15
  __int128 v8; // xmm0
  __int64 v9; // rsi
  __int128 v11; // [rsp+0h] [rbp-38h] BYREF
  __int128 v12; // [rsp+10h] [rbp-28h]

  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v11, 25LL, 0LL);
  v4 = *((_QWORD *)&v11 + 1);
  if ( (_QWORD)v11 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v11 + 1), v12);
  v5 = (_OWORD *)v12;
  *(_OWORD *)(v12 + 9) = unk_16E0B;
  *v5 = unk_16E02;
  DWORD2(v12) = 1;
  *(_QWORD *)&v11 = v4;
  *((_QWORD *)&v11 + 1) = v5;
  *(_QWORD *)&v12 = 25LL;
  v6 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v6 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v7 = v6;
  v8 = v11;
  v6[1] = v12;
  *v6 = v8;
  if ( *(_QWORD *)a2 )
    (*(void (__fastcall **)(__int64))a2)(a1);
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 )
    _rust_dealloc(a1, v9, *(_QWORD *)(a2 + 16));
  return v7;
}
