__int64 __fastcall uu_hashsum::create_algorithm_from_flags::{{closure}}(_QWORD **a1, __int128 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v11; // [rsp+0h] [rbp-28h]
  __int64 v12; // [rsp+10h] [rbp-18h]

  v3 = *a1;
  if ( **a1 )
  {
    *(_QWORD *)&v11 = 0x800000000000000DLL;
    v4 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
    v5 = v4;
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    *(_QWORD *)(v4 + 16) = v12;
    *(_OWORD *)v4 = v11;
    v6 = *((_QWORD *)a2 + 3);
    if ( *(_QWORD *)v6 )
    {
      (*(void (__fastcall **)(_QWORD))v6)(*((_QWORD *)a2 + 2));
      v6 = *((_QWORD *)a2 + 3);
    }
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
      _rust_dealloc(*((_QWORD *)a2 + 2), v7, *(_QWORD *)(v6 + 16));
  }
  else
  {
    v8 = *a2;
    v9 = a2[1];
    v3[4] = *((_QWORD *)a2 + 4);
    *((_OWORD *)v3 + 1) = v9;
    *(_OWORD *)v3 = v8;
    return 0LL;
  }
  return v5;
}
