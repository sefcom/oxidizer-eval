unsigned __int64 __fastcall uu_tail::parse::parse_obsolete(_BYTE *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // r15
  char is_contained_in; // bp
  __int64 v31; // rax
  unsigned __int8 v32; // al
  char v33; // cl
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // r15
  unsigned __int8 v40; // al
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // r15
  unsigned __int8 v47; // al
  bool v48; // zf
  char **v49; // r8
  __int64 v50; // [rsp+8h] [rbp-60h] BYREF
  __int64 v51; // [rsp+10h] [rbp-58h]
  __int64 v52; // [rsp+18h] [rbp-50h]
  __int64 v53; // [rsp+20h] [rbp-48h]
  unsigned __int64 v54; // [rsp+28h] [rbp-40h]
  __int64 v55; // [rsp+30h] [rbp-38h]

  result = core::str::converts::from_utf8(&v50);
  if ( (_DWORD)v50 == 1 )
  {
    *a1 = 3;
LABEL_34:
    is_contained_in = 2;
    goto LABEL_35;
  }
  v2 = v51;
  v3 = v52;
  LODWORD(v50) = 0;
  v4 = core::char::methods::encode_utf8_raw(45LL, &v50);
  v6 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v4, v5, v2, v3);
  v55 = v6;
  if ( v6 )
  {
    v8 = v7;
    v9 = v6;
  }
  else
  {
    LODWORD(v50) = 0;
    v10 = core::char::methods::encode_utf8_raw(43LL, &v50);
    result = <&str as core::str::pattern::Pattern>::strip_prefix_of(v10, v11, v2, v3);
    if ( !result )
    {
      is_contained_in = 3;
      goto LABEL_35;
    }
    v9 = result;
    v8 = v12;
  }
  v13 = core::str::<impl str>::find(v9, v8);
  v15 = v14;
  if ( (v13 & 1) == 0 )
    v15 = v8;
  if ( !core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          v15,
          v9,
          v8) )
  {
    v49 = &off_1738F0;
    goto LABEL_40;
  }
  v17 = v16;
  if ( !v16 )
  {
    v53 = 0LL;
    v19 = 10LL;
    goto LABEL_16;
  }
  v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          v15,
          v9,
          v8);
  if ( !v18 )
  {
    v49 = &off_173908;
LABEL_40:
    core::str::slice_error_fail(v9, v8, 0LL, v15, v49);
  }
  result = core::num::<impl u64>::from_ascii_radix(&v50, v18);
  if ( (_BYTE)v50 )
  {
    *a1 = 0;
    goto LABEL_34;
  }
  v53 = v17;
  v19 = v51;
LABEL_16:
  v54 = v19;
  v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          v15,
          v9,
          v8);
  if ( !v20 )
    core::str::slice_error_fail(v9, v8, v15, v8, &off_173920);
  v22 = v20;
  v23 = v21;
  LODWORD(v50) = 0;
  v24 = core::char::methods::encode_utf8_raw(108LL, &v50);
  v26 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v24, v25, v22, v23);
  if ( v26 )
  {
    v28 = v26;
    v29 = v27;
    is_contained_in = <char as core::str::pattern::Pattern>::is_contained_in(v26, v27);
    v31 = v29 + v28;
    v50 = v28;
    goto LABEL_19;
  }
  LODWORD(v50) = 0;
  v34 = core::char::methods::encode_utf8_raw(99LL, &v50);
  v36 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v34, v35, v22, v23);
  if ( v36 )
  {
    v38 = v36;
    v39 = v37;
    is_contained_in = <char as core::str::pattern::Pattern>::is_contained_in(v36, v37);
    v50 = v38;
    v51 = v39 + v38;
    v40 = core::iter::traits::iterator::Iterator::try_fold(&v50);
    result = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v40);
    if ( (_BYTE)result )
    {
      v33 = 0;
      result = v54;
      if ( !is_mul_ok(1uLL, v54) )
        goto LABEL_25;
LABEL_30:
      v48 = v55 == 0;
      *(_QWORD *)a1 = result;
      a1[8] = v48;
      a1[9] = v33;
      goto LABEL_35;
    }
  }
  else
  {
    LODWORD(v50) = 0;
    v41 = core::char::methods::encode_utf8_raw(98LL, &v50);
    v43 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v41, v42, v22, v23);
    if ( !v43 )
    {
      is_contained_in = <char as core::str::pattern::Pattern>::is_contained_in(v22, v23);
      v31 = v23 + v22;
      v50 = v22;
LABEL_19:
      v51 = v31;
      v32 = core::iter::traits::iterator::Iterator::try_fold(&v50);
      result = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v32);
      if ( (_BYTE)result )
      {
        v33 = 1;
        result = v54;
        if ( is_mul_ok(1uLL, v54) )
          goto LABEL_30;
LABEL_25:
        *a1 = 1;
        goto LABEL_34;
      }
      goto LABEL_31;
    }
    v45 = v43;
    v46 = v44;
    is_contained_in = <char as core::str::pattern::Pattern>::is_contained_in(v43, v44);
    v50 = v45;
    v51 = v46 + v45;
    v47 = core::iter::traits::iterator::Iterator::try_fold(&v50);
    result = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v47);
    if ( (_BYTE)result )
    {
      v33 = 0;
      result = v54 << 9;
      if ( !is_mul_ok(0x200uLL, v54) )
        goto LABEL_25;
      goto LABEL_30;
    }
  }
LABEL_31:
  is_contained_in = 3;
  if ( v55 && v53 )
  {
    *a1 = 2;
    goto LABEL_34;
  }
LABEL_35:
  a1[10] = is_contained_in;
  return result;
}