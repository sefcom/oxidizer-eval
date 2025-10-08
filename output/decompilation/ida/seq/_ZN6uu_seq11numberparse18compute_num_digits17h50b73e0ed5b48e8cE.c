__int64 __fastcall uu_seq::numberparse::compute_num_digits(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 started; // r12
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // r13
  char is_contained_in; // al
  __int64 v16; // rcx
  __int128 *v17; // rbx
  __int64 v18; // r13
  _QWORD *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // kr00_8
  __int128 v29; // xmm0
  _QWORD v31[3]; // [rsp+0h] [rbp-138h] BYREF
  __int128 v32; // [rsp+18h] [rbp-120h] BYREF
  __int128 v33; // [rsp+28h] [rbp-110h]
  __int128 v34; // [rsp+38h] [rbp-100h]
  __int128 v35; // [rsp+48h] [rbp-F0h]
  __int128 v36; // [rsp+58h] [rbp-E0h]
  __int128 v37; // [rsp+68h] [rbp-D0h]
  __int64 v38; // [rsp+78h] [rbp-C0h]
  _OWORD v39[6]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-58h]
  __int64 v41; // [rsp+E8h] [rbp-50h]
  __int64 v42; // [rsp+F0h] [rbp-48h]
  __int16 v43; // [rsp+F8h] [rbp-40h]

  alloc::str::<impl str>::to_lowercase(v31);
  started = core::str::<impl str>::trim_start_matches(v31[1], v31[2]);
  v7 = v6;
  LODWORD(v39[0]) = 0;
  v8 = core::char::methods::encode_utf8_raw(43LL, v39);
  v10 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v8, v9, started, v7);
  v12 = v11;
  if ( v10 )
    started = v10;
  else
    v12 = v7;
  if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(started, v12, a0x, 2LL)
    && !(unsigned __int8)core::slice::<impl [T]>::starts_with(started, v12, a0x_0, 3LL) )
  {
    core::str::pattern::StrSearcher::new(&v32, started, v12, aE, 1LL);
    v40 = v38;
    v39[5] = v37;
    v39[4] = v36;
    v39[3] = v35;
    v39[2] = v34;
    v39[1] = v33;
    v39[0] = v32;
    v41 = 0LL;
    v42 = v12;
    v43 = 1;
    core::iter::traits::iterator::Iterator::collect(&v32, v39);
    v18 = v33;
    if ( !(_QWORD)v33 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_11B2B8);
    v19 = (_QWORD *)*((_QWORD *)&v32 + 1);
    if ( (core::str::<impl str>::find(**((_QWORD **)&v32 + 1), *(_QWORD *)(*((_QWORD *)&v32 + 1) + 8LL)) & 1) != 0 )
    {
      v21 = v20;
      if ( v20 )
      {
        v22 = v20;
        if ( v20 == 1 )
          v22 = (unsigned __int8)core::slice::<impl [T]>::starts_with(*v19, v19[1], asc_1C75C, 1LL) + 1LL;
      }
      else
      {
        v22 = 1LL;
      }
      v23 = v19[1] + ~v21;
      if ( v18 != 2 )
        goto LABEL_27;
    }
    else
    {
      v22 = v19[1];
      v23 = 0LL;
      if ( v18 != 2 )
      {
LABEL_27:
        v26 = v22;
LABEL_28:
        *(_QWORD *)(a1 + 48) = *((_QWORD *)a4 + 4);
        v29 = *a4;
        *(_OWORD *)(a1 + 32) = a4[1];
        *(_OWORD *)(a1 + 16) = v29;
        *(_QWORD *)(a1 + 56) = v26;
        *(_QWORD *)a1 = 1LL;
        *(_QWORD *)(a1 + 8) = v23;
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v32, v19);
        return core::ptr::drop_in_place<alloc::string::String>(v31);
      }
    }
    core::num::<impl i64>::from_ascii_radix(v39, v19[2], v19[3]);
    v24 = 0LL;
    v25 = 0LL;
    if ( !LOBYTE(v39[0]) )
      v25 = *((_QWORD *)&v39[0] + 1);
    if ( v25 > 0 )
      v24 = v25;
    v26 = v22 + v24;
    if ( v25 >= v23 )
    {
      v23 = 0LL;
    }
    else
    {
      v28 = v23 - v25;
      v27 = ((unsigned __int128)(unsigned __int64)v23 - v25) >> 64;
      v23 = v28;
      if ( v27 )
        v23 = 0LL;
    }
    goto LABEL_28;
  }
  v13 = *(_QWORD *)a4;
  v14 = *((_QWORD *)a4 + 1);
  if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(asc_1C759, started, v12)
    || (is_contained_in = <&str as core::str::pattern::Pattern>::is_contained_in(aP, started, v12),
        v16 = 1LL,
        is_contained_in) )
  {
    v16 = 0LL;
  }
  v17 = a4 + 1;
  *(_QWORD *)(a1 + 16) = v13;
  *(_QWORD *)(a1 + 24) = v14;
  *(_OWORD *)(a1 + 32) = *v17;
  *(_QWORD *)(a1 + 48) = *((_QWORD *)v17 + 2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = v16;
  *(_QWORD *)(a1 + 8) = 0LL;
  return core::ptr::drop_in_place<alloc::string::String>(v31);
}