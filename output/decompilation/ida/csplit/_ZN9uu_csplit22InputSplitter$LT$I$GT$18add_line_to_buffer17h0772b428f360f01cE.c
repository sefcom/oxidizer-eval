__int64 __fastcall uu_csplit::InputSplitter<I>::add_line_to_buffer(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  __int64 v11; // [rsp+18h] [rbp-40h]
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 88) )
  {
    v9 = a3;
    v10 = *a4;
    v11 = *((_QWORD *)a4 + 2);
    ((void (__fastcall *)(__int64, __int64 *))alloc::vec::Vec<T,A>::insert)(a2, &v9);
LABEL_5:
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  if ( *(_QWORD *)(a2 + 16) < *(_QWORD *)(a2 + 80) )
  {
    v9 = a3;
    v10 = *a4;
    v11 = *((_QWORD *)a4 + 2);
    ((void (__fastcall *)(__int64, __int64 *, char **, __int128 *, __int64, __int64))alloc::vec::Vec<T,A>::push)(
      a2,
      &v9,
      &off_241CA0,
      a4,
      a5,
      a6);
    goto LABEL_5;
  }
  alloc::vec::Vec<T,A>::remove(&v9, a2, &off_241CB8);
  v13 = v11;
  v12 = v10;
  v9 = a3;
  v10 = *a4;
  v11 = *((_QWORD *)a4 + 2);
  ((void (__fastcall *)(__int64, __int64 *, char **))alloc::vec::Vec<T,A>::push)(a2, &v9, &off_241CD0);
  return core::result::Result<T,E>::unwrap(a1, &v12, &off_241CE8);
}