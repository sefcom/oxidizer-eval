__int64 __fastcall uu_fmt::parasplit::ParaWords::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  char **v13; // r8
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  __int128 v24; // xmm0
  char **v26; // rdx
  __int128 v27; // [rsp+0h] [rbp-118h] BYREF
  __int128 v28; // [rsp+10h] [rbp-108h]
  _QWORD *v29; // [rsp+20h] [rbp-F8h]
  _QWORD v30[5]; // [rsp+28h] [rbp-F0h] BYREF
  char v31; // [rsp+50h] [rbp-C8h]
  __int128 v32; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v33; // [rsp+68h] [rbp-B0h]
  __int128 v34; // [rsp+78h] [rbp-A0h]
  __int128 v35; // [rsp+88h] [rbp-90h]
  char v36; // [rsp+A1h] [rbp-77h]
  char v37; // [rsp+A8h] [rbp-70h]
  char v38; // [rsp+D8h] [rbp-40h]
  char v39; // [rsp+E1h] [rbp-37h]

  *((_QWORD *)&v28 + 1) = a2;
  v29 = (_QWORD *)a3;
  *(_QWORD *)&v27 = 0LL;
  *((_QWORD *)&v27 + 1) = 8LL;
  *(_QWORD *)&v28 = 0LL;
  if ( *(_BYTE *)(a3 + 104) )
  {
    v5 = *(_QWORD *)(a3 + 8) + 24LL * *(_QWORD *)(a3 + 16);
    *(_QWORD *)&v32 = *(_QWORD *)(a3 + 8);
    *((_QWORD *)&v32 + 1) = v5;
    v36 = 2;
    v39 = 2;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v27, &v32);
    goto LABEL_24;
  }
  v6 = *(_QWORD *)(a3 + 16);
  if ( !*(_WORD *)(a2 + 72) )
  {
    if ( v6 )
    {
      v7 = a2;
      v8 = *(_QWORD *)(a3 + 8);
      v9 = *(_QWORD *)(a3 + 96);
      v10 = *(_QWORD *)(v8 + 8);
      v11 = *(_QWORD *)(v8 + 16);
      if ( v9 )
      {
        if ( v11 <= v9 )
        {
          if ( v11 != v9 )
          {
LABEL_15:
            v13 = &off_EC458;
            goto LABEL_29;
          }
        }
        else if ( *(char *)(v10 + v9) <= -65 )
        {
          goto LABEL_15;
        }
      }
      goto LABEL_17;
    }
    v26 = &off_EC440;
LABEL_27:
    core::panicking::panic_bounds_check(0LL, 0LL, v26, a4);
  }
  if ( !v6 )
  {
    v26 = &off_EC470;
    goto LABEL_27;
  }
  v7 = a2;
  v12 = *(_QWORD *)(a3 + 8);
  v9 = *(_QWORD *)(a3 + 80);
  v10 = *(_QWORD *)(v12 + 8);
  v11 = *(_QWORD *)(v12 + 16);
  if ( v9 )
  {
    if ( v11 <= v9 )
    {
      if ( v11 == v9 )
        goto LABEL_17;
    }
    else if ( *(char *)(v10 + v9) > -65 )
    {
      goto LABEL_17;
    }
    v13 = &off_EC488;
LABEL_29:
    core::str::slice_error_fail(v10, v11, v9, v11, v13);
  }
LABEL_17:
  v14 = v11 - v9;
  v30[0] = v7;
  v30[1] = core::str::<impl str>::trim_start_matches(v9 + v10, v14);
  v30[2] = v15;
  v30[3] = v14;
  v30[4] = 0LL;
  v31 = 0;
  <uu_fmt::parasplit::WordSplit as core::iter::traits::iterator::Iterator>::next(&v32, v30);
  if ( (_DWORD)v32 != 2 )
  {
    v16 = v28;
    v17 = (_QWORD)v28 << 6;
    do
    {
      if ( v16 == (_QWORD)v27 )
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v27, v16, 1LL);
      v18 = *((_QWORD *)&v27 + 1);
      v19 = v32;
      v20 = v33;
      v21 = v34;
      *(_OWORD *)(*((_QWORD *)&v27 + 1) + v17 + 48) = v35;
      *(_OWORD *)(v18 + v17 + 32) = v21;
      *(_OWORD *)(v18 + v17 + 16) = v20;
      *(_OWORD *)(v18 + v17) = v19;
      *(_QWORD *)&v28 = ++v16;
      <uu_fmt::parasplit::WordSplit as core::iter::traits::iterator::Iterator>::next(&v32, v30);
      v17 += 64LL;
    }
    while ( (_DWORD)v32 != 2 );
  }
  v22 = v29[2];
  if ( v22 > 1 )
  {
    v30[0] = v29[12];
    v23 = v29[1] + 24 * v22;
    *(_QWORD *)&v32 = v29[1];
    *((_QWORD *)&v32 + 1) = v23;
    *(_QWORD *)&v33 = 1LL;
    *((_QWORD *)&v33 + 1) = *((_QWORD *)&v28 + 1);
    *(_QWORD *)&v34 = v30;
    v37 = 2;
    v38 = 2;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v27, &v32);
  }
LABEL_24:
  *(_QWORD *)(a1 + 32) = v29;
  v24 = v27;
  *(_OWORD *)(a1 + 16) = v28;
  *(_OWORD *)a1 = v24;
  return a1;
}
