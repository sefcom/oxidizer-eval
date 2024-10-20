        __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v15[3]; // [rsp+8h] [rbp-60h] BYREF
  __int128 v16; // [rsp+20h] [rbp-48h]

  v8 = uu_sort::FieldSelector::get_range::resolve_index(a2, a3, a4, a5, a1 + 24);
  if ( !v8 )
  {
    v10 = v9;
    if ( *(_BYTE *)(a1 + 16) == 2 )
      return v10;
    v11 = v9;
    switch ( uu_sort::FieldSelector::get_range::resolve_index(a2, a3, a4, a5, a1) )
    {
      case 0LL:
        if ( !v12 )
          return v11;
        if ( v12 >= a3 )
        {
          if ( v12 != a3 )
LABEL_9:
            core::str::slice_error_fail(a2, a3, v12, a3, &off_192B48);
        }
        else if ( *(char *)(a2 + v12) <= -65 )
        {
          goto LABEL_9;
        }
        return v11;
      case 1LL:
      case 3LL:
        return v11;
      case 2LL:
        return 0LL;
    }
  }
  v10 = a3;
  if ( v8 != 3 )
  {
    v15[0] = &off_192B60;
    v15[1] = 1LL;
    v15[2] = &v14;
    v16 = 0LL;
    core::panicking::panic_fmt(v15, &off_192B70, v9, a3);
  }
  return v10;
}
