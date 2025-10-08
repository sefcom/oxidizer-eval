__int64 __fastcall uu_truncate::truncate_reference_file_only(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  int v12; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-D0h]
  __int64 v14; // [rsp+50h] [rbp-88h]

  std::fs::metadata(&v12);
  if ( v12 == 2 )
    return uu_truncate::truncate_reference_and_size::{{closure}}(a1, a2, v13);
  if ( !a4 )
    return 0LL;
  v9 = v14;
  v10 = 24 * a4;
  v11 = 0LL;
  while ( 1 )
  {
    result = uu_truncate::file_truncate(*(_QWORD *)(a3 + v11 + 8), *(_QWORD *)(a3 + v11 + 16), a5, v9);
    if ( result )
      break;
    v11 += 24LL;
    if ( v10 == v11 )
      return 0LL;
  }
  return result;
}