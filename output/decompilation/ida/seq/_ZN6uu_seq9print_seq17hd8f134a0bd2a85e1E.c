__int64 __fastcall uu_seq::print_seq(
        __int128 *a1,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rbx
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r14
  char v20; // bl
  char v21; // bp
  __int64 v23; // rdx
  char v24; // bl
  unsigned __int64 v25; // rax
  char done; // al
  __int64 v27; // r14
  size_t v28; // rcx
  __int64 v29; // rax
  size_t v30; // rbx
  __int128 v31; // [rsp-20h] [rbp-2B8h]
  __int128 v32; // [rsp+0h] [rbp-298h] BYREF
  __int128 v33; // [rsp+10h] [rbp-288h]
  __int64 v34; // [rsp+20h] [rbp-278h]
  __int128 v35; // [rsp+30h] [rbp-268h] BYREF
  __int128 v36; // [rsp+40h] [rbp-258h]
  __int64 v37; // [rsp+50h] [rbp-248h]
  __int128 v38; // [rsp+60h] [rbp-238h] BYREF
  __int128 v39; // [rsp+70h] [rbp-228h]
  __int64 v40; // [rsp+80h] [rbp-218h]
  __int128 v41; // [rsp+88h] [rbp-210h]
  __int64 v42; // [rsp+98h] [rbp-200h]
  void *src; // [rsp+A8h] [rbp-1F0h]
  __int128 v44; // [rsp+B0h] [rbp-1E8h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-1D8h]
  __int64 v46; // [rsp+D0h] [rbp-1C8h]
  __int128 v47; // [rsp+E0h] [rbp-1B8h] BYREF
  __int128 v48; // [rsp+F0h] [rbp-1A8h]
  __int64 v49; // [rsp+100h] [rbp-198h]
  void *v50; // [rsp+108h] [rbp-190h]
  _OWORD v51[2]; // [rsp+110h] [rbp-188h] BYREF
  __int64 v52; // [rsp+130h] [rbp-168h]
  __int128 v53; // [rsp+140h] [rbp-158h] BYREF
  __int128 v54; // [rsp+150h] [rbp-148h]
  __int64 v55; // [rsp+160h] [rbp-138h]
  __int128 v56; // [rsp+170h] [rbp-128h] BYREF
  __int128 v57; // [rsp+180h] [rbp-118h]
  __int64 v58; // [rsp+190h] [rbp-108h]
  size_t n; // [rsp+1A0h] [rbp-F8h]
  unsigned __int64 v60; // [rsp+1A8h] [rbp-F0h]
  unsigned __int64 v61; // [rsp+1B0h] [rbp-E8h]
  unsigned __int64 v62; // [rsp+1B8h] [rbp-E0h]
  unsigned __int64 v63; // [rsp+1C0h] [rbp-D8h]
  __int128 v64; // [rsp+1C8h] [rbp-D0h] BYREF
  __int64 v65; // [rsp+1D8h] [rbp-C0h]
  __int128 v66; // [rsp+1E0h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+1F0h] [rbp-A8h]
  _QWORD v68[3]; // [rsp+1F8h] [rbp-A0h] BYREF
  __int128 v69; // [rsp+210h] [rbp-88h]

  src = a2;
  *(_QWORD *)&v38 = std::io::stdio::stdout();
  v13 = std::io::stdio::Stdout::lock(&v38);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v47, v13);
  v58 = *((_QWORD *)a1 + 4);
  v14 = *a1;
  v57 = a1[1];
  v56 = v14;
  v37 = *((_QWORD *)a1 + 9);
  v15 = *(__int128 *)((char *)a1 + 40);
  v36 = *(__int128 *)((char *)a1 + 56);
  v35 = v15;
  v52 = *((_QWORD *)a1 + 14);
  v16 = a1[5];
  v51[1] = a1[6];
  v51[0] = v16;
  if ( !a7 )
  {
LABEL_6:
    v34 = v58;
    v33 = v57;
    v32 = v56;
    if ( (unsigned __int8)uu_seq::done_printing((__int64)&v32, (__int64)&v35, (__int64)v51) )
      goto LABEL_7;
    v19 = uucore::features::format::Format<F,T>::fmt(a6, &v47, &v32);
    if ( v19 )
    {
LABEL_10:
      core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v32, *((_QWORD *)&v32 + 1));
      v20 = 1;
      v21 = 0;
      goto LABEL_11;
    }
    v46 = v34;
    v45 = v33;
    v23 = 0LL;
    if ( (__int64)v35 < (__int64)0x8000000000000005LL )
      v23 = v35 - 0x7FFFFFFFFFFFFFFFLL;
    v44 = v32;
    switch ( v23 )
    {
      case 0LL:
        v24 = BYTE8(v36);
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v64, *((_QWORD *)&v35 + 1), v36);
        v69 = v64;
        *(_QWORD *)&v39 = v65;
        v38 = v64;
        BYTE8(v39) = v24;
        v40 = v37;
        goto LABEL_29;
      case 1LL:
        *(_QWORD *)&v38 = 0x8000000000000000LL;
        goto LABEL_29;
      case 2LL:
        v25 = 0x8000000000000001LL;
        goto LABEL_28;
      case 3LL:
        v25 = 0x8000000000000002LL;
        goto LABEL_28;
      case 4LL:
        v25 = 0x8000000000000003LL;
        goto LABEL_28;
      case 5LL:
        v25 = 0x8000000000000004LL;
LABEL_28:
        *(_QWORD *)&v38 = v25;
LABEL_29:
        v50 = a4;
        n = a5;
        <uucore::features::extendedbigdecimal::ExtendedBigDecimal as core::ops::arith::Add>::add(&v53, &v44, &v38);
        v63 = 0x8000000000000001LL;
        v62 = 0x8000000000000002LL;
        v61 = 0x8000000000000003LL;
        v60 = 0x8000000000000004LL;
        break;
    }
    while ( 1 )
    {
      v32 = v53;
      v33 = v54;
      v34 = v55;
      done = uu_seq::done_printing((__int64)&v32, (__int64)&v35, (__int64)v51);
      v27 = v48;
      v28 = v47 - v48;
      if ( done )
        break;
      if ( a3 >= v28 )
      {
        v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v47, src, a3);
        if ( v19 )
          goto LABEL_10;
      }
      else
      {
        memcpy((void *)(v48 + *((_QWORD *)&v47 + 1)), src, a3);
        *(_QWORD *)&v48 = a3 + v27;
      }
      v19 = uucore::features::format::Format<F,T>::fmt(a6, &v47, &v32);
      if ( v19 )
        goto LABEL_10;
      v46 = v34;
      v45 = v33;
      v44 = v32;
      v29 = v35 - 0x7FFFFFFFFFFFFFFFLL;
      if ( (__int64)v35 >= (__int64)0x8000000000000005LL )
        v29 = 0LL;
      switch ( v29 )
      {
        case 0LL:
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v64, *((_QWORD *)&v35 + 1), v36);
          v69 = v64;
          JUMPOUT(0x726AFLL);
        case 1LL:
          *(_QWORD *)&v38 = 0x8000000000000000LL;
          <uucore::features::extendedbigdecimal::ExtendedBigDecimal as core::ops::arith::Add>::add(&v53, &v44, &v38);
          break;
        case 2LL:
          JUMPOUT(0x726CBLL);
      }
    }
    v30 = n;
    if ( n >= v28 )
    {
      v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v47, v50, n);
      if ( v19 )
        goto LABEL_10;
    }
    else
    {
      memcpy((void *)(v48 + *((_QWORD *)&v47 + 1)), v50, n);
      *(_QWORD *)&v48 = v30 + v27;
    }
LABEL_7:
    v19 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v47);
    if ( !v19 )
    {
      core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v32, *((_QWORD *)&v32 + 1));
      core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(
        *(_QWORD *)&v51[0],
        *((_QWORD *)&v51[0] + 1));
      core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v35, *((_QWORD *)&v35 + 1));
      v19 = 0LL;
LABEL_14:
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v47);
      return v19;
    }
    goto LABEL_10;
  }
  uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint(&v44, &v56);
  uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint(v68, &v35);
  v17 = 0LL;
  if ( !__OFSUB__(0LL, v68[0]) )
  {
    v17 = uu_seq::print_seq::{{closure}}(v68);
    v8 = v18;
  }
  uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint(&v66, v51);
  v40 = v45;
  v39 = v44;
  *(_QWORD *)&v38 = v17;
  *((_QWORD *)&v38 + 1) = v8;
  v41 = v66;
  v42 = v67;
  if ( (_QWORD)v44 == 0x8000000000000000LL || (v17 & 1) == 0 || (_QWORD)v41 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<(core::option::Option<num_bigint::biguint::BigUint>,core::option::Option<u64>,core::option::Option<num_bigint::biguint::BigUint>)>(&v38);
    goto LABEL_6;
  }
  *(_QWORD *)&v33 = v40;
  v32 = v39;
  *(_QWORD *)&v54 = v67;
  v53 = v66;
  v46 = v49;
  v45 = v48;
  v44 = v47;
  *((_QWORD *)&v31 + 1) = a5;
  *(_QWORD *)&v31 = a4;
  v19 = uu_seq::fast_print_seq((__int64)&v44, (__int64)&v32, v8, (__int64)&v53, (__int64)src, a3, v31, a8);
  core::ptr::drop_in_place<num_bigint::biguint::BigUint>(v53, *((_QWORD *)&v53 + 1));
  core::ptr::drop_in_place<num_bigint::biguint::BigUint>(v32, *((_QWORD *)&v32 + 1));
  v21 = 1;
  v20 = 0;
LABEL_11:
  core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(
    *(_QWORD *)&v51[0],
    *((_QWORD *)&v51[0] + 1));
  core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v35, *((_QWORD *)&v35 + 1));
  if ( v21 )
    core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v56, *((_QWORD *)&v56 + 1));
  if ( v20 )
    goto LABEL_14;
  return v19;
}