__int64 __fastcall uu_mktemp::find_last_contiguous_block_of_xs(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx

  result = core::str::<impl str>::rfind(a2, a3);
  v6 = result;
  if ( result )
  {
    v7 = v5 + 3;
    if ( v7 )
    {
      if ( v7 >= a3 )
      {
        if ( v7 != a3 )
LABEL_5:
          core::str::slice_error_fail(a2, a3, 0LL, v7, &off_136A28);
      }
      else if ( *(char *)(a2 + v7) <= -65 )
      {
        goto LABEL_5;
      }
    }
    v8 = v7;
    v9 = core::str::<impl str>::rfind(a2, v7);
    result = core::option::Option<T>::map_or(v9, v10);
    a1[1] = result;
    a1[2] = v8;
  }
  *a1 = v6;
  return result;
}
