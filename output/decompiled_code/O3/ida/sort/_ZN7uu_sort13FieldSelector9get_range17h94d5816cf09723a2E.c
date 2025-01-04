__int64 __fastcall uu_sort::FieldSelector::get_range(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // edx
  __int64 v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  char **v20; // [rsp+8h] [rbp-60h] BYREF
  __int64 v21; // [rsp+10h] [rbp-58h]
  __int64 *v22; // [rsp+18h] [rbp-50h]
  __int128 v23; // [rsp+20h] [rbp-48h]

  v8 = uu_sort::FieldSelector::get_range::resolve_index(a2, a3, a4, a5, a1 + 24);
  if ( v8 )
  {
    v10 = a3;
    if ( v8 != 3 )
    {
      v20 = &off_1FFB28;
      v21 = 1LL;
      v22 = &v19;
      v23 = 0LL;
      core::panicking::panic_fmt(&v20, &off_1FFB50, v9, a3);
    }
  }
  else
  {
    v10 = v9;
    if ( *(_BYTE *)(a1 + 16) != 2 )
    {
      v11 = v9;
      switch ( uu_sort::FieldSelector::get_range::resolve_index(a2, a3, a4, a5, a1) )
      {
        case 0LL:
          v13 = v12;
          v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                  v12,
                  a2,
                  a3);
          if ( !v14 )
            core::str::slice_error_fail(a2, a3, v13, a3, &off_1FFB38);
          v20 = (char **)v14;
          v21 = v14 + v15;
          v17 = 1114112LL;
          if ( (unsigned int)core::str::validations::next_code_point(&v20) )
            v17 = v16;
          core::option::Option<T>::map_or(v17);
          goto LABEL_11;
        case 1LL:
        case 3LL:
LABEL_11:
          v10 = v11;
          break;
        case 2LL:
          v10 = 0LL;
          break;
      }
    }
  }
  return v10;
}
