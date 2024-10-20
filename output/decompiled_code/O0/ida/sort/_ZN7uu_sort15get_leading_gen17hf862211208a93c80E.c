unsigned __int64 __fastcall uu_sort::get_leading_gen(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r12
  unsigned __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rsi
  int v9; // edx
  char v10; // bl
  char v11; // r13
  unsigned __int64 v12; // rcx
  struct _Unwind_Exception *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  int v19; // ecx
  __int64 v20; // rdx
  int v21; // edx
  bool v22; // cf
  int v24; // [rsp+0h] [rbp-118h]
  unsigned __int64 v25; // [rsp+8h] [rbp-110h] BYREF
  __int64 v26; // [rsp+10h] [rbp-108h]
  __int128 v27; // [rsp+18h] [rbp-100h]
  __int64 v28; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+30h] [rbp-E8h]
  __int64 v30; // [rsp+38h] [rbp-E0h]
  struct _Unwind_Exception *v31; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v32; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v33; // [rsp+50h] [rbp-C8h]
  __int64 v34; // [rsp+58h] [rbp-C0h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-B8h]
  const char *v36; // [rsp+70h] [rbp-A8h]
  __int64 v37; // [rsp+78h] [rbp-A0h]
  const char *v38; // [rsp+80h] [rbp-98h]
  unsigned __int64 v39; // [rsp+88h] [rbp-90h]
  const char *v40; // [rsp+90h] [rbp-88h]
  unsigned __int64 v41; // [rsp+98h] [rbp-80h]
  __int64 v42; // [rsp+A0h] [rbp-78h]
  __int64 v43; // [rsp+A8h] [rbp-70h]
  int v44[2]; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+B8h] [rbp-60h]
  __int64 v46; // [rsp+C0h] [rbp-58h]
  __int64 v47; // [rsp+C8h] [rbp-50h]
  __int64 v48; // [rsp+D0h] [rbp-48h]

  *(_QWORD *)v44 = a1;
  v45 = a2;
  v46 = a1;
  v47 = a1 + a2;
  v48 = 0LL;
  do
    <core::str::pattern::MultiCharEqSearcher<C> as core::str::pattern::Searcher>::next(&v34, v44);
  while ( !v34 );
  v33 = a2;
  if ( v34 == 1 )
  {
    v2 = v35;
    if ( v35 > a2 )
      core::panicking::panic_nounwind(anon_8012e1ef25b0b3807da7d204fab9cdcd_18_llvm_15792747221160264835, 102LL);
  }
  else
  {
    v2 = a2;
  }
  v3 = v2 + a1;
  v36 = aInf_0;
  v37 = 3LL;
  v38 = aInf;
  v39 = 4LL;
  v40 = aNan;
  v41 = 3LL;
  v43 = 3LL;
  v42 = 1LL;
  if ( !aInf_0 )
    goto LABEL_35;
  v4 = v33 - v2;
  v5 = 3LL;
  if ( v33 - v2 <= 3 )
  {
    if ( v4 != 3 )
      goto LABEL_15;
  }
  else if ( *(char *)(v3 + 3) < -64 )
  {
    goto LABEL_15;
  }
  if ( v4 < 3 )
    goto LABEL_74;
  if ( !a1 )
    goto LABEL_73;
  <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::new(
    (int)v44,
    v2 + a1,
    v24,
    v25,
    v26,
    v27,
    SDWORD2(v27),
    v28,
    v29,
    v30,
    v31,
    v32);
  LOBYTE(v34) = core::iter::traits::iterator::Iterator::try_fold(v44);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
                          &v34,
                          &anon_ff3add0fc2121d489142e144a6a370f6_26_llvm_5182399808099546885) )
    goto LABEL_33;
LABEL_15:
  v42 = 2LL;
  if ( !v38 )
    goto LABEL_35;
  v5 = v39;
  if ( v39 )
  {
    if ( v39 >= v4 )
    {
      if ( v39 != v4 )
        goto LABEL_24;
    }
    else if ( *(char *)(v3 + v39) < -64 )
    {
      goto LABEL_24;
    }
  }
  if ( v39 > v4 )
    goto LABEL_74;
  if ( !a1 )
    goto LABEL_73;
  <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::new(
    (int)v44,
    v2 + a1,
    v24,
    v25,
    v26,
    v27,
    SDWORD2(v27),
    v28,
    v29,
    v30,
    v31,
    v32);
  LOBYTE(v34) = core::iter::traits::iterator::Iterator::try_fold(v44);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
                          &v34,
                          &anon_ff3add0fc2121d489142e144a6a370f6_26_llvm_5182399808099546885) )
    goto LABEL_33;
LABEL_24:
  v42 = 3LL;
  if ( !v40 )
    goto LABEL_35;
  v5 = v41;
  if ( v41 )
  {
    if ( v41 >= v4 )
    {
      if ( v41 != v4 )
        goto LABEL_35;
    }
    else if ( *(char *)(v3 + v41) < -64 )
    {
      goto LABEL_35;
    }
  }
  if ( v41 > v4 )
LABEL_74:
    core::panicking::panic_nounwind(anon_ff765ffa8c564fe4079308b568cc8f06_8_llvm_17873003023693898768, 102LL);
  if ( !a1 )
LABEL_73:
    core::str::slice_error_fail(v2 + a1, v4, 0LL, v5, &off_1D3328);
  <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::new(
    (int)v44,
    v2 + a1,
    v24,
    v25,
    v26,
    v27,
    SDWORD2(v27),
    v28,
    v29,
    v30,
    v31,
    v32);
  LOBYTE(v34) = core::iter::traits::iterator::Iterator::try_fold(v44);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
                          &v34,
                          &anon_ff3add0fc2121d489142e144a6a370f6_26_llvm_5182399808099546885) )
  {
LABEL_33:
    if ( __CFADD__(v2, v5) )
      core::panicking::panic_const::panic_const_add_overflow(
        &off_1D3340,
        &anon_ff3add0fc2121d489142e144a6a370f6_26_llvm_5182399808099546885,
        v6,
        v7);
    return v2;
  }
LABEL_35:
  v32 = v2;
  v28 = v2 + a1;
  v29 = a1 + a2;
  v30 = 0LL;
  v25 = 0LL;
  v26 = 8LL;
  v27 = 0LL;
  v8 = &v28;
  <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<T,I>>::spec_extend(
    &v25,
    &v28,
    1LL);
  if ( *((_QWORD *)&v27 + 1) && v26 )
  {
    v8 = 0LL;
    if ( (unsigned __int64)v27 >= v25 )
      v8 = (__int64 *)v25;
    if ( ((*(_DWORD *)(v26 + 16 * (v27 - (_QWORD)v8) + 8) - 43) & 0xFFFFFFFD) == 0 )
    {
      alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v25);
      if ( v9 == 1114112 )
        <core::iter::adapters::fuse::Fuse<I> as core::iter::adapters::fuse::FuseImpl<I>>::next(&v28);
    }
  }
  v10 = 1;
  v11 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        v13 = (struct _Unwind_Exception *)alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v25);
        if ( (_DWORD)v14 == 1114112 )
        {
          v13 = (struct _Unwind_Exception *)<core::iter::adapters::fuse::Fuse<I> as core::iter::adapters::fuse::FuseImpl<I>>::next(&v28);
          if ( (_DWORD)v14 == 1114112 )
          {
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<(usize,char)>>(&v25, v8, v14, v15);
            return v32;
          }
        }
        v12 = (unsigned int)(v14 - 48);
      }
      while ( (unsigned int)v12 < 0xA );
      LOBYTE(v8) = ((_DWORD)v14 == 46) & v10 & (v11 == 0);
      LOBYTE(v12) = 1;
      if ( (_BYTE)v8 != 1 )
        break;
      v11 = 1;
    }
    v31 = v13;
    v16 = (unsigned int)v14 | 0x20;
    if ( (_DWORD)v16 != 101 || (v10 & 1) == 0 )
      break;
    v17 = 0LL;
    if ( *((_QWORD *)&v27 + 1) <= 1uLL )
      v17 = 1LL - *((_QWORD *)&v27 + 1);
    v8 = &v28;
    <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<T,I>>::spec_extend(
      &v25,
      &v28,
      v17);
    if ( !*((_QWORD *)&v27 + 1) )
      break;
    v12 = v26;
    if ( !v26 )
      break;
    v16 = v25;
    v18 = 0LL;
    if ( (unsigned __int64)v27 >= v25 )
      v18 = v25;
    v8 = (__int64 *)(16 * (v27 - v18));
    v19 = v8[(unsigned __int64)v26 / 8 + 1];
    if ( v19 == 45 || v19 == 43 )
    {
      v20 = 0LL;
      if ( *((_QWORD *)&v27 + 1) <= 3uLL )
        v20 = 3LL - *((_QWORD *)&v27 + 1);
      v8 = &v28;
      <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<T,I>>::spec_extend(
        &v25,
        &v28,
        v20);
      if ( *((_QWORD *)&v27 + 1) < 3uLL || !v26 )
        break;
      v12 = v25;
      v8 = 0LL;
      if ( (__int64)v27 + 2 >= v25 )
        v8 = (__int64 *)v25;
      v16 = 16 * (v27 + 2 - (_QWORD)v8);
      if ( (unsigned int)(*(_DWORD *)(v26 + v16 + 8) - 48) > 9 )
        break;
      alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v25);
      v10 = 0;
      if ( v21 == 1114112 )
      {
        v10 = 0;
        <core::iter::adapters::fuse::Fuse<I> as core::iter::adapters::fuse::FuseImpl<I>>::next(&v28);
      }
    }
    else
    {
      v12 = (unsigned int)(v19 - 48);
      v10 = 0;
      if ( (unsigned int)v12 >= 0xA )
        break;
    }
  }
  v2 = v32;
  v22 = __CFADD__(v32, v31);
  v31 = (struct _Unwind_Exception *)((char *)v31 + v32);
  if ( v22 )
    core::panicking::panic_const::panic_const_add_overflow(&off_1D3310, v8, v16, v12);
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<(usize,char)>>(&v25, v8, v16, v12);
  return v2;
}
