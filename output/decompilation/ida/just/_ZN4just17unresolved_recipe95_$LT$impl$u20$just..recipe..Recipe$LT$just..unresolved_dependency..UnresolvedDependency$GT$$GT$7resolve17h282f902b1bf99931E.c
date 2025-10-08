__int64 __fastcall just::unresolved_recipe::<impl just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>::resolve(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r14
  __int64 v11; // r13
  _QWORD *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // ebx
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int64 v24; // r14
  __int16 v25; // bp
  char v26; // r15
  __int64 v28; // r12
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int64 v37; // [rsp+8h] [rbp-210h]
  __int128 v38; // [rsp+20h] [rbp-1F8h] BYREF
  __int128 v39; // [rsp+30h] [rbp-1E8h]
  __int128 v40; // [rsp+40h] [rbp-1D8h]
  __int128 v41; // [rsp+50h] [rbp-1C8h]
  __int128 v42; // [rsp+60h] [rbp-1B8h]
  __int64 v43; // [rsp+78h] [rbp-1A0h]
  __int64 v44; // [rsp+80h] [rbp-198h]
  __int64 v45; // [rsp+88h] [rbp-190h] BYREF
  __int64 v46; // [rsp+90h] [rbp-188h] BYREF
  __int64 v47; // [rsp+98h] [rbp-180h] BYREF
  _QWORD v48[2]; // [rsp+A0h] [rbp-178h] BYREF
  _QWORD v49[2]; // [rsp+B0h] [rbp-168h] BYREF
  _OWORD src[15]; // [rsp+C0h] [rbp-158h] BYREF
  __int128 v51; // [rsp+1B0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+1C0h] [rbp-58h]

  v6 = *(_QWORD *)(a2 + 40);
  v45 = v6;
  v7 = *(_QWORD *)(a5 + 16);
  v46 = v7;
  v37 = a5;
  if ( v6 != v7 )
  {
    v47 = v6;
    *(_QWORD *)&v51 = v7;
    *(_QWORD *)&v38 = &v47;
    *((_QWORD *)&v38 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v39 = &v51;
    *((_QWORD *)&v39 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&src[0] = &off_431928;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[1] = &v38;
    *(_OWORD *)((char *)&src[1] + 8) = 2uLL;
    core::panicking::assert_failed(0LL, &v45, &v46, src, &off_431948);
  }
  v43 = a3;
  v44 = a4;
  core::iter::traits::iterator::Iterator::zip(
    &v51,
    *(_QWORD *)(a2 + 32),
    *(_QWORD *)(a2 + 32) + 48 * v6,
    *(_QWORD *)(a5 + 8));
  v8 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v51);
  if ( v8 )
  {
    v10 = (_QWORD *)v8;
    v11 = v9;
    while ( 1 )
    {
      v12 = (_QWORD *)just::namepath::Namepath::last(v10[4], v10[5]);
      v13 = just::token::Token::lexeme(v12);
      v15 = v14;
      v48[0] = v13;
      v48[1] = v14;
      v49[0] = just::token::Token::lexeme((_QWORD *)(*(_QWORD *)v11 + 160LL));
      v49[1] = v16;
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v15, v49[0], v16) )
      {
        *(_QWORD *)&src[0] = 0LL;
        core::panicking::assert_failed(0LL, v48, v49, src, &off_431960);
      }
      just::recipe::Recipe<D>::argument_range(
        (__int64)src,
        *(_QWORD *)(*(_QWORD *)v11 + 96LL),
        *(_QWORD *)(*(_QWORD *)v11 + 104LL));
      if ( !(unsigned __int8)core::ops::range::RangeBounds::contains(src, v10[2]) )
        break;
      v10 = (_QWORD *)<core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v51);
      v11 = v17;
      if ( !v10 )
        goto LABEL_7;
    }
    v28 = just::namepath::Namepath::last(v10[4], v10[5]);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v10[4], v10[5]);
    *(_QWORD *)&v39 = *(_QWORD *)&src[1];
    v38 = src[0];
    v29 = v10[2];
    v30 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
    v31 = *(_QWORD *)(*(_QWORD *)v11 + 104LL);
    v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v30, v30 + 208 * v31);
    v33 = just::recipe::Recipe<D>::max_arguments(v30, v31);
    *(_OWORD *)((char *)src + 8) = v38;
    *((_QWORD *)&src[1] + 1) = v39;
    *(_QWORD *)&src[2] = v29;
    *((_QWORD *)&src[2] + 1) = v32;
    *(_QWORD *)&src[3] = v33;
    *(_QWORD *)&src[0] = 0x8000000000000019LL;
    just::token::Token::error((__int64)&v38, v28, (__int64)src);
    *(_OWORD *)(a1 + 72) = v42;
    v34 = v38;
    v35 = v39;
    v36 = v40;
    *(_OWORD *)(a1 + 56) = v41;
    *(_OWORD *)(a1 + 40) = v36;
    *(_OWORD *)(a1 + 24) = v35;
    *(_OWORD *)(a1 + 8) = v34;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::sync::Arc<just::recipe::Recipe>>>(v37);
    return core::ptr::drop_in_place<just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>(a2);
  }
  else
  {
LABEL_7:
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v38, a2 + 24);
    core::iter::traits::iterator::Iterator::zip(src, &v38, v37);
    core::iter::traits::iterator::Iterator::collect(&v51, src);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, v43);
    *(_QWORD *)&v39 = *(_QWORD *)&src[1];
    v38 = src[0];
    if ( *(_QWORD *)&src[1] )
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v38,
        asc_6E4EE,
        asc_6E4F0);
    v18 = just::token::Token::lexeme((_QWORD *)(a2 + 144));
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v38,
      v18,
      v18 + v19);
    *((_QWORD *)&src[14] + 1) = *(_QWORD *)(a2 + 232);
    *(_OWORD *)((char *)&src[13] + 8) = *(_OWORD *)(a2 + 216);
    *((_QWORD *)&src[2] + 1) = v52;
    *(_OWORD *)((char *)&src[1] + 8) = v51;
    src[6] = *(_OWORD *)(a2 + 96);
    *(_QWORD *)&src[7] = *(_QWORD *)(a2 + 112);
    v20 = *(_DWORD *)(a2 + 248);
    *(_QWORD *)&src[4] = *(_QWORD *)(a2 + 64);
    src[3] = *(_OWORD *)(a2 + 48);
    v21 = *(_OWORD *)(a2 + 160);
    v22 = *(_OWORD *)(a2 + 176);
    v23 = *(_OWORD *)(a2 + 192);
    src[9] = *(_OWORD *)(a2 + 144);
    src[10] = v21;
    src[11] = v22;
    src[12] = v23;
    *(_QWORD *)&src[13] = *(_QWORD *)(a2 + 208);
    *(_OWORD *)((char *)&src[7] + 8) = v38;
    *((_QWORD *)&src[8] + 1) = v39;
    *(_OWORD *)((char *)&src[4] + 8) = *(_OWORD *)(a2 + 72);
    *((_QWORD *)&src[5] + 1) = *(_QWORD *)(a2 + 88);
    v24 = *(_QWORD *)(a2 + 240);
    v25 = *(_WORD *)(a2 + 252);
    v26 = *(_BYTE *)(a2 + 254);
    src[0] = *(_OWORD *)a2;
    *(_QWORD *)&src[1] = *(_QWORD *)(a2 + 16);
    memcpy((void *)a1, src, 0xF0uLL);
    *(_QWORD *)(a1 + 240) = v24;
    *(_DWORD *)(a1 + 248) = v20;
    *(_WORD *)(a1 + 252) = v25;
    *(_BYTE *)(a1 + 254) = v26;
    return core::ptr::drop_in_place<regex::error::Error>(a2 + 120);
  }
}