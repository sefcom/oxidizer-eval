__int64 __fastcall uu_seq::fast_print_seq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // r14
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rbx
  _QWORD *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rbp
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v34; // [rsp+8h] [rbp-F0h] BYREF
  __int128 v35; // [rsp+10h] [rbp-E8h] BYREF
  _QWORD *v36; // [rsp+20h] [rbp-D8h]
  __int64 v37; // [rsp+28h] [rbp-D0h]
  __int128 v38; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v39; // [rsp+40h] [rbp-B8h]
  __int64 v40; // [rsp+48h] [rbp-B0h]
  __int64 v41; // [rsp+50h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-98h] BYREF
  __int64 v43; // [rsp+68h] [rbp-90h]
  unsigned __int64 v44; // [rsp+70h] [rbp-88h]
  __int64 v45; // [rsp+78h] [rbp-80h]
  __int64 v46; // [rsp+80h] [rbp-78h]
  char v47[8]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v48; // [rsp+90h] [rbp-68h]
  __int64 v49; // [rsp+98h] [rbp-60h]
  _QWORD v50[3]; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-40h] BYREF

  v37 = a3;
  v51 = a7;
  v11 = *(_QWORD *)(a4 + 8);
  v12 = *(_QWORD *)(a4 + 16);
  if ( (num_bigint::biguint::cmp_slice(v11, v12, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16)) & 0x80u) != 0LL )
  {
    v31 = 0LL;
  }
  else
  {
    v46 = a5;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v38, v11, v12);
    v36 = v39;
    v35 = v38;
    num_bigint::biguint::subtraction::<impl core::ops::arith::Sub<&num_bigint::biguint::BigUint> for num_bigint::biguint::BigUint>::sub(
      &v38,
      &v35,
      a2);
    num_bigint::biguint::division::<impl core::ops::arith::Div<u64> for num_bigint::biguint::BigUint>::div(
      &v35,
      &v38,
      v37);
    v13 = *((_QWORD *)&v35 + 1);
    v14 = num_bigint::biguint::convert::<impl num_traits::cast::ToPrimitive for num_bigint::biguint::BigUint>::to_u64(
            *((_QWORD *)&v35 + 1),
            v36);
    v16 = v15;
    v17 = -(__int64)((v14 & 1) == 0);
    core::ptr::drop_in_place<num_bigint::biguint::BigUint>(v35, v13);
    <T as alloc::string::SpecToString>::spec_to_string(v47, a2);
    v45 = v16;
    <T as alloc::string::SpecToString>::spec_to_string(&v38, a4);
    v18 = v39;
    core::ptr::drop_in_place<alloc::string::String>(&v38);
    v19 = core::cmp::Ord::max(v18);
    <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v42, v19 + a6);
    v20 = v43;
    v21 = v44;
    v22 = v44 - a6;
    v23 = v49;
    v34 = v44 - a6 - v49;
    v24 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v34, v44 - a6, v43, v44);
    core::slice::<impl [T]>::copy_from_slice(v24, v25, v48, v23, &off_11B300);
    if ( v21 < a6 )
      core::slice::index::slice_start_index_len_fail(v22, v21, &off_11B360);
    core::slice::<impl [T]>::copy_from_slice(v20 + v22, a6, v46, a6, &off_11B318);
    v34 = core::cmp::Ord::min(v34, v22 - a8);
    v26 = core::fmt::num::imp::<impl usize>::_fmt(v37, v50, 20LL);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v38, v26);
    v27 = v39;
    v36 = v39;
    v35 = v38;
    v28 = *((_QWORD *)&v38 + 1);
    v29 = (v45 | v17) + 1;
    while ( --v29 )
    {
      if ( v21 < v34 )
        core::slice::index::slice_start_index_len_fail(v34, v21, &off_11B348);
      v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v20 + v34);
      if ( v30 )
        goto LABEL_12;
      uucore::features::fast_inc::fast_inc(v20, v21, &v34, v22, v28, v27);
    }
    v32 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
            v34,
            v22,
            v20,
            v21,
            &off_11B330);
    v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v32);
    if ( !v30 )
    {
      v50[0] = &v51;
      v50[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v38 = &unk_1B0F0;
      *((_QWORD *)&v38 + 1) = 1LL;
      v41 = 0LL;
      v39 = v50;
      v40 = 1LL;
      v30 = std::io::Write::write_fmt(a1, &v38);
      if ( !v30 )
        v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a1);
    }
LABEL_12:
    v31 = v30;
    core::ptr::drop_in_place<alloc::string::String>(&v35);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v42, v43);
    core::ptr::drop_in_place<alloc::string::String>(v47);
  }
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(a1);
  return v31;
}