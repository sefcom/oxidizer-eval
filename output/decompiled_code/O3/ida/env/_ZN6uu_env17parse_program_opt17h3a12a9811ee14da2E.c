__int64 __fastcall uu_env::parse_program_opt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  void *v8; // rax
  void *v9; // rbx

  if ( *(_BYTE *)(a1 + 153) )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 == *(_QWORD *)(a1 + 72) )
    {
      v4 = a3;
      alloc::raw_vec::RawVec<T,A>::grow_one(a1 + 72);
      a3 = v4;
    }
    v5 = *(_QWORD *)(a1 + 80);
    v6 = 16 * v3;
    *(_QWORD *)(v5 + v6) = a2;
    *(_QWORD *)(v5 + v6 + 8) = a3;
    *(_QWORD *)(a1 + 88) = v3 + 1;
    return 0LL;
  }
  else
  {
    v8 = (void *)_rust_alloc(39LL, 1LL);
    if ( !v8 )
      alloc::raw_vec::handle_error(1LL, 39LL);
    v9 = v8;
    qmemcpy(v8, "cannot specify --null (-0) with command", 39);
    result = _rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)result = 39LL;
    *(_QWORD *)(result + 8) = v9;
    *(_QWORD *)(result + 16) = 39LL;
    *(_DWORD *)(result + 24) = 125;
  }
  return result;
}
