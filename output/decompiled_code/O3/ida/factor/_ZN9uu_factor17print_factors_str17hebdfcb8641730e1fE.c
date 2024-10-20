__int64 __fastcall uu_factor::print_factors_str(__int64 a1, __int128 *a2, _QWORD *a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int128 v8; // rax
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  void *v15; // rax
  _OWORD *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // r15
  __int64 v20; // rcx
  __int128 *v21; // rsi
  _BOOL8 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  size_t v25; // r15
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int128 v29; // [rsp+0h] [rbp-1F8h] BYREF
  __int128 *v30; // [rsp+10h] [rbp-1E8h]
  __int128 v31; // [rsp+18h] [rbp-1E0h]
  __int64 v32; // [rsp+28h] [rbp-1D0h]
  __int128 v33; // [rsp+30h] [rbp-1C8h] BYREF
  _BYTE v34[24]; // [rsp+40h] [rbp-1B8h]
  __int64 v35; // [rsp+58h] [rbp-1A0h]
  __int128 v36; // [rsp+60h] [rbp-198h]
  __int128 *v37; // [rsp+70h] [rbp-188h]
  __int128 v38; // [rsp+80h] [rbp-178h] BYREF
  __int64 v39; // [rsp+90h] [rbp-168h]
  __int128 v40; // [rsp+A0h] [rbp-158h] BYREF
  unsigned __int64 *v41; // [rsp+B0h] [rbp-148h]
  __int64 (__fastcall *v42)(); // [rsp+B8h] [rbp-140h]
  __int128 v43; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-128h]
  unsigned __int64 v45; // [rsp+D8h] [rbp-120h] BYREF
  __int128 v46; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-108h]
  __int128 v48; // [rsp+100h] [rbp-F8h] BYREF
  unsigned __int64 *v49; // [rsp+110h] [rbp-E8h]
  __int64 v50; // [rsp+118h] [rbp-E0h]
  __int128 v51; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+130h] [rbp-C8h]
  unsigned __int64 v53; // [rsp+138h] [rbp-C0h]
  __int128 v54; // [rsp+140h] [rbp-B8h] BYREF
  __int128 *v55; // [rsp+150h] [rbp-A8h]
  __int128 v56; // [rsp+160h] [rbp-98h] BYREF
  __int128 *v57; // [rsp+170h] [rbp-88h]
  char v58[8]; // [rsp+180h] [rbp-78h] BYREF
  void *src; // [rsp+188h] [rbp-70h]
  size_t n; // [rsp+190h] [rbp-68h]
  __int128 v61; // [rsp+198h] [rbp-60h] BYREF
  __int64 v62; // [rsp+1A8h] [rbp-50h]
  __int128 *v63; // [rsp+1B0h] [rbp-48h] BYREF
  _QWORD v64[8]; // [rsp+1B8h] [rbp-40h] BYREF

  v6 = core::str::<impl str>::trim_matches();
  num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(
    &v61,
    v6,
    v7,
    10LL);
  if ( (_QWORD)v61 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v8 = uucore::util_name();
    v29 = v8;
    *(_QWORD *)&v40 = &v29;
    *((_QWORD *)&v40 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v33 = &unk_136CD8;
    *((_QWORD *)&v33 + 1) = 2LL;
    *(_QWORD *)&v34[16] = 0LL;
    *(_QWORD *)v34 = &v40;
    *(_QWORD *)&v34[8] = 1LL;
    std::io::stdio::_eprint(&v33);
    *(_QWORD *)&v29 = 0LL;
    *((_QWORD *)&v29 + 1) = a1;
    v30 = a2;
    LOBYTE(v31) = 0;
    LOBYTE(v51) = BYTE8(v61) != 0;
    *(_QWORD *)&v40 = &v29;
    *((_QWORD *)&v40 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v41 = (unsigned __int64 *)&v51;
    v42 = <num_bigint::ParseBigIntError as core::fmt::Display>::fmt;
    *(_QWORD *)&v33 = &unk_136CF8;
    *((_QWORD *)&v33 + 1) = 3LL;
    *(_QWORD *)&v34[16] = 0LL;
    *(_QWORD *)v34 = &v40;
    *(_QWORD *)&v34[8] = 2LL;
    std::io::stdio::_eprint(&v33);
    uucore::mods::error::set_exit_code(1LL);
    return 0LL;
  }
  v44 = v62;
  v43 = v61;
  v33 = *(_OWORD *)&byte_151A0;
  *(_QWORD *)v34 = 0LL;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v33);
  **((_QWORD **)&v33 + 1) = 1LL;
  v29 = v33;
  v30 = (_OWORD *)(&dword_0 + 1);
  v10 = v44 == 0 ? -1 : v44 != 1;
  if ( !v10 )
    v10 = core::iter::traits::iterator::Iterator::cmp_by(
            *((_QWORD *)&v43 + 1),
            *((_QWORD *)&v43 + 1) + 8 * v44,
            *((_QWORD *)&v29 + 1),
            *((_QWORD *)&v29 + 1) + 8LL);
  if ( v10 == 1 )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v29);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v33, &v43);
    v41 = *(unsigned __int64 **)v34;
    v40 = v33;
    *(_QWORD *)&v33 = 2LL;
    num_prime::nt_funcs::factors(&v29, &v40, &v33);
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v29);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29);
    *(_QWORD *)&v29 = 0LL;
    v30 = 0LL;
    *(_QWORD *)&v31 = 0x8000000000000000LL;
  }
  v55 = v30;
  v54 = v29;
  v39 = v32;
  v38 = v31;
  v50 = v31;
  if ( (_QWORD)v31 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(
      &v33,
      44LL,
      0LL,
      0x8000000000000000LL,
      v12,
      v13,
      v38,
      *((_QWORD *)&v38 + 1),
      v39);
    v14 = *((_QWORD *)&v33 + 1);
    if ( (_QWORD)v33 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v33 + 1), *(_QWORD *)v34);
    v15 = *(void **)v34;
    *(_OWORD *)(*(_QWORD *)v34 + 28LL) = unk_152CB;
    qmemcpy(v15, "Factorization incomplete. Remain", 32);
    *(_DWORD *)&v34[8] = 1;
    *(_QWORD *)&v33 = v14;
    *((_QWORD *)&v33 + 1) = v15;
    *(_QWORD *)v34 = 44LL;
    v16 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v16 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v9 = (__int64)v16;
    v17 = v33;
    v16[1] = *(_OWORD *)v34;
    *v16 = v17;
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v29);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29);
    <alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop(&v54);
LABEL_17:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v43);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v43);
    return v9;
  }
  v57 = v55;
  v56 = v54;
  v63 = &v43;
  *(_QWORD *)&v29 = &v63;
  *((_QWORD *)&v29 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v33 = &unk_136BD0;
  *((_QWORD *)&v33 + 1) = 2LL;
  *(_QWORD *)&v34[16] = 0LL;
  *(_QWORD *)v34 = &v29;
  *(_QWORD *)&v34[8] = 1LL;
  v18 = std::io::Write::write_fmt(a3, &v33, v11, 0x8000000000000000LL);
  if ( v18 )
  {
    <alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop(&v56);
  }
  else
  {
    v20 = *((_QWORD *)&v56 + 1);
    v21 = (__int128 *)v56;
    v22 = v56 != 0;
    if ( (_QWORD)v56 )
      v21 = v57;
    v33 = (_QWORD)v56 != 0LL;
    *(_OWORD *)v34 = v56;
    *(_QWORD *)&v34[16] = v56 != 0;
    v35 = 0LL;
    v36 = v56;
    v37 = v21;
    if ( a4 )
    {
      while ( 1 )
      {
        <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(
          &v51,
          &v33,
          v22,
          v20);
        if ( (_QWORD)v51 == 0x8000000000000000LL )
          break;
        v47 = v52;
        v46 = v51;
        v45 = v53;
        *(_QWORD *)&v40 = &v46;
        *((_QWORD *)&v40 + 1) = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
        if ( v53 <= 1 )
        {
          *(_QWORD *)&v29 = &off_136C00;
          *((_QWORD *)&v29 + 1) = 1LL;
          v30 = &v40;
          v31 = 1uLL;
        }
        else
        {
          v41 = &v45;
          v42 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v29 = &off_136C10;
          *((_QWORD *)&v29 + 1) = 2LL;
          v30 = &v40;
          v31 = 2uLL;
        }
        v18 = std::io::Write::write_fmt(a3, &v29, v23, v24);
        if ( v18 )
          goto LABEL_39;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
      }
    }
    else
    {
      while ( 1 )
      {
        <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(
          &v51,
          &v33,
          v22,
          v20);
        if ( (_QWORD)v51 == 0x8000000000000000LL )
          break;
        v47 = v52;
        v46 = v51;
        v45 = v53;
        v64[0] = &v46;
        v64[1] = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
        *(_QWORD *)&v29 = &off_136C00;
        *((_QWORD *)&v29 + 1) = 1LL;
        v30 = (__int128 *)v64;
        v31 = 1uLL;
        ((void (__fastcall *)(__int128 *, __int128 *))alloc::fmt::format::format_inner)(&v40, &v29);
        v48 = v40;
        v49 = v41;
        alloc::str::<impl str>::repeat(&v58, *((_QWORD *)&v40 + 1), v41, v45);
        v25 = n;
        v26 = a3[2];
        if ( n >= *a3 - v26 )
        {
          v18 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, src, n);
          if ( v18 )
          {
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v58);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v58);
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v48);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v48);
LABEL_39:
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
            <alloc::collections::btree::map::IntoIter<K,V,A> as core::ops::drop::Drop>::drop(&v33);
            goto LABEL_14;
          }
        }
        else
        {
          memcpy((void *)(v26 + a3[1]), src, n);
          a3[2] = v25 + v26;
        }
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v58);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v58);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v48);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v48);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
      }
    }
    <alloc::collections::btree::map::IntoIter<K,V,A> as core::ops::drop::Drop>::drop(&v33);
    *(_QWORD *)&v33 = &off_136BF0;
    *((_QWORD *)&v33 + 1) = 1LL;
    *(_QWORD *)v34 = 8LL;
    *(_OWORD *)&v34[8] = 0LL;
    v18 = std::io::Write::write_fmt(a3, &v33, v27, v28);
    if ( !v18 )
      v18 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a3);
  }
LABEL_14:
  v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v18);
  if ( v9 )
  {
    if ( (_QWORD)v38 != 0x8000000000000000LL )
    {
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v38);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38);
    }
    goto LABEL_17;
  }
  if ( (_QWORD)v38 != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v38);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38);
  }
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v43);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v43);
  return 0LL;
}
