__int64 __fastcall uu_nproc::available_parallelism(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rsi

  if ( !std::thread::available_parallelism(a1) )
    return v1;
  v2 = 1LL;
  if ( (unsigned __int64)(v1 & 3) - 2 >= 2 && (v1 & 3) != 0 )
  {
    v3 = v1 - 1;
    v4 = *(_QWORD *)(v1 - 1);
    v5 = *(_QWORD *)(v1 + 7);
    if ( *(_QWORD *)v5 )
      (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v1 - 1));
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
      _rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16));
    _rust_dealloc(v3, 24LL, 8LL);
  }
  return v2;
}
