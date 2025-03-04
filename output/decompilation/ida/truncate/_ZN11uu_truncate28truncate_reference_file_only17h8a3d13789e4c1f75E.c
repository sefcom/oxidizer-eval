__int64 __fastcall uu_truncate::truncate_reference_file_only(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-D0h]
  __int64 v13; // [rsp+50h] [rbp-88h]

  std::fs::metadata(&v11, a1, a2);
  if ( (_DWORD)v11 == 2 )
    return uu_truncate::truncate_reference_file_only::{{closure}}(a1, a2, v12);
  v9 = v13;
  v11 = a3;
  v12 = a3 + 24 * a4;
  while ( 1 )
  {
    v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v11);
    if ( !v10 )
      break;
    result = uu_truncate::file_truncate(*(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16), a5, v9);
    if ( result )
      return result;
  }
  return 0LL;
}
