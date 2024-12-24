        unsigned __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // edx
  unsigned __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-68h] BYREF
  char **v19; // [rsp+8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+10h] [rbp-58h]
  __int64 *v21; // [rsp+18h] [rbp-50h]
  __int128 v22; // [rsp+20h] [rbp-48h]

  v8 = uu_sort::FieldSelector::get_range::resolve_index(a2, a3, a4, a5, (unsigned __int64 *)(a1 + 24));
  if ( v8 )
  {
    v9 = a3;
    if ( v8 != 3 )
    {
      v19 = &off_1FF018;
      v20 = 1LL;
      v21 = &v18;
      v22 = 0LL;
      core::panicking::panic_fmt(&v19, &off_1FF028, a3);
    }
  }
  else if ( *(_BYTE *)(a1 + 16) != 2 )
  {
    v10 = v9;
    switch ( uu_sort::FieldSelector::get_range::resolve_index(a2, a3, a4, a5, (unsigned __int64 *)a1) )
    {
      case 0LL:
        v12 = v11;
        v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                v11,
                a2,
                a3);
        if ( !v13 )
          core::str::slice_error_fail(a2, a3, v12, a3, &off_1FF000);
        v19 = (char **)v13;
        v20 = v13 + v14;
        v16 = (unsigned __int64)&loc_110000;
        if ( (unsigned int)core::str::validations::next_code_point(&v19) )
          v16 = v15;
        core::option::Option<T>::map_or(v16);
        goto LABEL_11;
      case 1LL:
      case 3LL:
LABEL_11:
        v9 = v10;
        break;
      case 2LL:
        v9 = 0LL;
        break;
    }
  }
  return v9;
}
