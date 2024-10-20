_QWORD *__fastcall uu_hashsum::create_algorithm_from_flags::{{closure}}(__int64 a1, __int128 *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rsi
  __int128 v7; // xmm0

  if ( *(_QWORD *)a1 )
  {
    v2 = (_QWORD *)_rust_alloc(24LL, 8LL);
    if ( !v2 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v3 = v2;
    *v2 = 0x800000000000000DLL;
    v4 = *((_QWORD *)a2 + 2);
    v5 = *((_QWORD *)a2 + 3);
    if ( *(_QWORD *)v5 )
      (*(void (__fastcall **)(__int64))v5)(v4);
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
      _rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16));
  }
  else
  {
    *(_QWORD *)(a1 + 32) = *((_QWORD *)a2 + 4);
    v7 = *a2;
    *(_OWORD *)(a1 + 16) = a2[1];
    *(_OWORD *)a1 = v7;
    return 0LL;
  }
  return v3;
}
