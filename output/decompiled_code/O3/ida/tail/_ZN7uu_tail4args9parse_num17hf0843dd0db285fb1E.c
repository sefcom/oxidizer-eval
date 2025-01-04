__int64 __fastcall uu_tail::args::parse_num(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r14
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]

  v3 = core::str::<impl str>::trim_matches(a2, a3);
  v5 = v4;
  v13 = v3;
  v14 = v3 + v4;
  if ( !(unsigned int)core::str::validations::next_code_point(&v13) )
    goto LABEL_6;
  if ( v6 == 43 )
  {
    v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
           v3,
           v5);
    if ( v7 )
    {
      v9 = 1;
      goto LABEL_9;
    }
LABEL_22:
    core::str::slice_error_fail(v3, v5, 1LL, v5, &off_1BB690);
  }
  if ( v6 != 45 )
  {
LABEL_6:
    v9 = 0;
    goto LABEL_10;
  }
  v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v3, v5);
  if ( !v7 )
    goto LABEL_22;
  v9 = 0;
LABEL_9:
  v5 = v8;
  v3 = v7;
LABEL_10:
  uucore::parser::parse_size::parse_size_u64(&v13, v3, v5);
  if ( (_DWORD)v13 == 3 )
  {
    v10 = v14;
    if ( v14 )
    {
      if ( v9 )
        a1[1] = 1LL;
      else
        a1[1] = 0LL;
      a1[2] = v10;
    }
    else if ( v9 )
    {
      a1[1] = 2LL;
    }
    else
    {
      a1[1] = 3LL;
    }
    v11 = 3LL;
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v15, v3, v5);
    a1[3] = v16;
    *(_OWORD *)(a1 + 1) = v15;
    v11 = 1LL;
  }
  *a1 = v11;
  return core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(&v13);
}
