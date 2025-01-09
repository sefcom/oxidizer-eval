__int64 __fastcall uu_tail::parse::parse_obsolete(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // r13
  char is_contained_in; // r14
  unsigned __int8 v28; // al
  int v29; // ebp
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned __int8 v38; // al
  unsigned __int64 v39; // rdx
  bool v40; // cl
  __int64 v41; // [rsp+0h] [rbp-58h] BYREF
  __int64 v42; // [rsp+8h] [rbp-50h]
  __int64 v43; // [rsp+10h] [rbp-48h]
  __int64 v44; // [rsp+18h] [rbp-40h]
  unsigned __int64 v45; // [rsp+20h] [rbp-38h]

  std::sys::os_str::bytes::Slice::to_str(&v41, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( !v41 )
  {
    v3 = v42;
    v4 = v43;
    LODWORD(v41) = 0;
    v5 = core::char::methods::encode_utf8_raw(45LL, &v41);
    v6 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v5, v3, v4);
    v8 = v6;
    if ( v6 )
    {
      v9 = v7;
      v10 = v6;
    }
    else
    {
      LODWORD(v41) = 0;
      v11 = core::char::methods::encode_utf8_raw(43LL, &v41);
      v12 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v11, v3, v4);
      if ( !v12 )
        goto LABEL_38;
      v10 = v12;
      v9 = v13;
    }
    v14 = core::str::<impl str>::find(v10, v9);
    v16 = v15;
    if ( !v14 )
      v16 = v9;
    if ( !v16 )
    {
      v44 = v8;
      v17 = 10LL;
LABEL_20:
      v45 = v17;
      v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              v16,
              v10,
              v9);
      if ( !v18 )
        core::str::slice_error_fail(v10, v9, v16, v9, &off_1BCB68);
      v20 = v18;
      v21 = v19;
      LODWORD(v41) = 0;
      v22 = core::char::methods::encode_utf8_raw(108LL, &v41);
      v23 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v22, v20, v21);
      if ( v23 )
      {
        v25 = v23;
        v26 = v24;
        is_contained_in = <char as core::str::pattern::Pattern>::is_contained_in(v23, v24);
        v41 = v25;
        v42 = v26 + v25;
        v28 = core::iter::traits::iterator::Iterator::try_fold(&v41);
        if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v28) )
        {
          v29 = 108;
          v30 = v44;
          goto LABEL_39;
        }
      }
      else
      {
        LODWORD(v41) = 0;
        v29 = 99;
        v31 = core::char::methods::encode_utf8_raw(99LL, &v41);
        v32 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v31, v20, v21);
        if ( v32 )
        {
          v34 = v32;
        }
        else
        {
          LODWORD(v41) = 0;
          v35 = core::char::methods::encode_utf8_raw(98LL, &v41);
          v36 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v35, v20, v21);
          v29 = 108;
          if ( v36 )
            v29 = 98;
          else
            v33 = v21;
          if ( v36 )
            v20 = v36;
          v34 = v20;
        }
        v37 = v33;
        is_contained_in = <char as core::str::pattern::Pattern>::is_contained_in(v34, v33);
        v41 = v34;
        v42 = v34 + v37;
        v38 = core::iter::traits::iterator::Iterator::try_fold(&v41);
        if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v38) )
        {
          v30 = v44;
          if ( v29 == 98 )
          {
            v39 = 512LL;
            v40 = 0;
LABEL_40:
            if ( is_mul_ok(v39, v45) )
            {
              *(_QWORD *)a1 = v39 * v45;
              *(_BYTE *)(a1 + 8) = v30 == 0;
              *(_BYTE *)(a1 + 9) = v40;
              *(_BYTE *)(a1 + 10) = is_contained_in;
              return a1;
            }
            *(_BYTE *)a1 = 1;
            goto LABEL_3;
          }
LABEL_39:
          v40 = v29 == 108;
          v39 = 1LL;
          goto LABEL_40;
        }
      }
      if ( v44 && v16 )
      {
        *(_BYTE *)a1 = 2;
        goto LABEL_3;
      }
LABEL_38:
      *(_BYTE *)(a1 + 10) = 3;
      return a1;
    }
    if ( v16 >= v9 )
    {
      if ( v16 == v9 )
        goto LABEL_14;
    }
    else if ( *(char *)(v10 + v16) > -65 )
    {
LABEL_14:
      core::num::<impl core::str::traits::FromStr for u64>::from_str(&v41, v10, v16);
      if ( (_BYTE)v41 )
      {
        *(_BYTE *)a1 = 0;
        goto LABEL_3;
      }
      v44 = v8;
      v17 = v42;
      goto LABEL_20;
    }
    core::str::slice_error_fail(v10, v9, 0LL, v16, &off_1BCB50);
  }
  *(_BYTE *)a1 = 3;
LABEL_3:
  *(_BYTE *)(a1 + 10) = 2;
  return a1;
}
