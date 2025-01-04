        __int64 a7)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx

  v9 = uu_sort::merge::replace_output_file_in_input_files(a2, a3, a5, a6, a7);
  if ( v9 )
  {
    a1[1] = v9;
    a1[2] = v10;
    *a1 = 3LL;
  }
  else
  {
    v11 = a2 + 24 * a3;
    if ( *(_QWORD *)(a4 + 48) == 0x8000000000000000LL )
      uu_sort::merge::merge_with_file_limit(a1, a2, v11, a4, a7);
    else
      uu_sort::merge::merge_with_file_limit(a1, a2, v11, a4, a7);
  }
  return a1;
}
