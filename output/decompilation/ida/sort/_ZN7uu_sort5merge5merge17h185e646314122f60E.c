__int64 __fastcall uu_sort::merge::merge(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v7; // rdx
  bool v8; // of
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v12; // rsi

  v7 = 0LL;
  v8 = __OFSUB__(0LL, *a4);
  v9 = a4[2];
  if ( !v8 )
    v7 = a4[1];
  v10 = uu_sort::merge::replace_output_file_in_input_files(a1, a2, v7, v9, a5);
  if ( v10 )
  {
    core::ptr::drop_in_place<uu_sort::Output>(a4);
    return v10;
  }
  else
  {
    v12 = a1 + 24 * a2;
    if ( *(_QWORD *)(a3 + 48) == 0x8000000000000000LL )
      return uu_sort::merge::merge_with_file_limit(a1, v12, a3, a4, a5);
    else
      return uu_sort::merge::merge_with_file_limit(a1, v12, a3, a4, a5);
  }
}