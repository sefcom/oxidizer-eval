__int64 __fastcall uu_seq::print_seq(
        __int128 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 *a9)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // rdx
  char v21; // bp
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  double v29; // xmm0_8
  __int64 v30; // rcx
  char v31; // r13
  unsigned __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-208h]
  __int64 v34; // [rsp+8h] [rbp-200h] BYREF
  __int128 v35; // [rsp+10h] [rbp-1F8h] BYREF
  __int128 v36; // [rsp+20h] [rbp-1E8h]
  __int64 v37; // [rsp+30h] [rbp-1D8h]
  __int128 v38; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 *v39; // [rsp+50h] [rbp-1B8h]
  __int64 v40; // [rsp+58h] [rbp-1B0h]
  __int64 v41; // [rsp+60h] [rbp-1A8h]
  unsigned __int64 v42; // [rsp+78h] [rbp-190h]
  __int128 v43; // [rsp+80h] [rbp-188h] BYREF
  __int128 v44; // [rsp+90h] [rbp-178h]
  __int64 v45; // [rsp+A0h] [rbp-168h]
  __int128 v46; // [rsp+B0h] [rbp-158h] BYREF
  __int128 v47; // [rsp+C0h] [rbp-148h]
  __int64 v48; // [rsp+D0h] [rbp-138h]
  __int64 v49; // [rsp+D8h] [rbp-130h]
  unsigned __int64 v50; // [rsp+E0h] [rbp-128h]
  unsigned __int64 v51; // [rsp+E8h] [rbp-120h]
  __int64 v52; // [rsp+F0h] [rbp-118h] BYREF
  __int128 v53; // [rsp+F8h] [rbp-110h] BYREF
  __int128 *v54; // [rsp+108h] [rbp-100h]
  _OWORD v55[2]; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+130h] [rbp-D8h]
  __int128 v57; // [rsp+138h] [rbp-D0h] BYREF
  __int128 v58; // [rsp+148h] [rbp-C0h]
  __int64 v59; // [rsp+158h] [rbp-B0h]
  _QWORD v60[2]; // [rsp+160h] [rbp-A8h] BYREF
  _QWORD v61[2]; // [rsp+170h] [rbp-98h] BYREF
  __int128 v62; // [rsp+180h] [rbp-88h]

  v60[0] = a3;
  v60[1] = a4;
  v61[0] = a5;
  v61[1] = a6;
  v52 = std::io::stdio::stdout();
  v34 = std::io::stdio::Stdout::lock(&v52);
  v37 = *((_QWORD *)a1 + 4);
  v10 = *a1;
  v36 = a1[1];
  v35 = v10;
  v45 = *((_QWORD *)a1 + 9);
  v11 = *(__int128 *)((char *)a1 + 40);
  v44 = *(__int128 *)((char *)a1 + 56);
  v43 = v11;
  v56 = *((_QWORD *)a1 + 14);
  v12 = a1[5];
  v55[1] = a1[6];
  v55[0] = v12;
  v13 = a2 + 1;
  if ( !a2 )
    v13 = 0LL;
  v14 = a8 + v13;
  v15 = 0LL;
  if ( a7 )
    v15 = v14;
  v49 = *a9;
  if ( !(unsigned __int8)uu_seq::done_printing((__int64)&v35, (__int64)&v43, (__int64)v55) )
  {
    v42 = 0x8000000000000000LL;
    if ( v49 == 0x8000000000000000LL )
    {
      v17 = uu_seq::write_value_float((__int64)&v34, (__int64)&v35, v15, a2);
    }
    else
    {
      v18 = 0LL;
      if ( (__int64)v35 < (__int64)0x8000000000000004LL )
        v18 = v35 - 0x7FFFFFFFFFFFFFFFLL;
      switch ( v18 )
      {
        case 0LL:
          if ( !bigdecimal::impl_num::<impl num_traits::cast::ToPrimitive for bigdecimal::BigDecimal>::to_f64(&v35) )
            core::option::unwrap_failed(&off_143C38);
          return result;
        case 1LL:
          *(_QWORD *)&v12 = 0x7FF0000000000000LL;
          break;
        case 2LL:
          *(_QWORD *)&v12 = 0xFFF0000000000000LL;
          break;
        case 3LL:
          *(_QWORD *)&v12 = 0x8000000000000000LL;
          break;
        case 4LL:
          *(_QWORD *)&v12 = 0x7FF8000000000000LL;
          break;
      }
      v17 = uucore::features::format::Format<F>::fmt(a9, &v34, *(double *)&v12);
    }
    v16 = v17;
    if ( v17 )
      goto LABEL_21;
    v48 = v37;
    v47 = v36;
    v20 = 0LL;
    if ( (__int64)v43 < (__int64)0x8000000000000004LL )
      v20 = v43 - 0x7FFFFFFFFFFFFFFFLL;
    v46 = v35;
    switch ( v20 )
    {
      case 0LL:
        v21 = BYTE8(v44);
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v53, &v43, *(double *)&v35);
        v62 = v53;
        v39 = v54;
        v38 = v53;
        LOBYTE(v40) = v21;
        v41 = v45;
        goto LABEL_32;
      case 1LL:
        v22 = v42;
        goto LABEL_31;
      case 2LL:
        *(_QWORD *)&v38 = 0x8000000000000001LL;
        goto LABEL_32;
      case 3LL:
        v22 = 0x8000000000000002LL;
        goto LABEL_31;
      case 4LL:
        v22 = 0x8000000000000003LL;
LABEL_31:
        *(_QWORD *)&v38 = v22;
LABEL_32:
        <uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::ops::arith::Add>::add(&v57, &v46, &v38);
        v35 = v57;
        v36 = v58;
        v37 = v59;
        v51 = 0x8000000000000002LL;
        v50 = 0x8000000000000003LL;
        break;
    }
    while ( !(unsigned __int8)uu_seq::done_printing((__int64)&v35, (__int64)&v43, (__int64)v55) )
    {
      *(_QWORD *)&v46 = v60;
      *((_QWORD *)&v46 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v38 = &unk_176C0;
      *((_QWORD *)&v38 + 1) = 1LL;
      v41 = 0LL;
      v39 = &v46;
      v40 = 1LL;
      v16 = ((__int64 (__fastcall *)(__int64 *, __int128 *, __int64, __int64, __int64, __int64, __int64))std::io::Write::write_fmt)(
              &v34,
              &v38,
              v23,
              v24,
              v25,
              v26,
              v33);
      if ( v16 )
        goto LABEL_21;
      if ( v49 == v42 )
      {
        v27 = uu_seq::write_value_float((__int64)&v34, (__int64)&v35, v15, a2);
      }
      else
      {
        v28 = v35 - 0x7FFFFFFFFFFFFFFFLL;
        if ( (__int64)v35 >= (__int64)0x8000000000000004LL )
          v28 = 0LL;
        v29 = INFINITY;
        switch ( v28 )
        {
          case 0LL:
            JUMPOUT(0xC802DLL);
          case 1LL:
            break;
          case 2LL:
            v29 = -INFINITY;
            break;
          case 3LL:
            v29 = -0.0;
            break;
          case 4LL:
            v29 = NAN;
            break;
        }
        v27 = uucore::features::format::Format<F>::fmt(a9, &v34, v29);
      }
      v16 = v27;
      if ( v27 )
        goto LABEL_21;
      v48 = v37;
      v47 = v36;
      v46 = v35;
      v30 = v43 - 0x7FFFFFFFFFFFFFFFLL;
      if ( (__int64)v43 >= (__int64)0x8000000000000004LL )
        v30 = 0LL;
      switch ( v30 )
      {
        case 0LL:
          v31 = BYTE8(v44);
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v53, &v43, *(double *)&v35);
          v62 = v53;
          v39 = v54;
          v38 = v53;
          LOBYTE(v40) = v31;
          v41 = v45;
          goto LABEL_54;
        case 1LL:
          v32 = v42;
          goto LABEL_53;
        case 2LL:
          *(_QWORD *)&v38 = 0x8000000000000001LL;
          goto LABEL_54;
        case 3LL:
          v32 = v51;
          goto LABEL_53;
        case 4LL:
          v32 = v50;
LABEL_53:
          *(_QWORD *)&v38 = v32;
LABEL_54:
          <uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::ops::arith::Add>::add(&v57, &v46, &v38);
          v35 = v57;
          v36 = v58;
          v37 = v59;
          break;
      }
    }
    *(_QWORD *)&v46 = v61;
    *((_QWORD *)&v46 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v38 = &unk_176C0;
    *((_QWORD *)&v38 + 1) = 1LL;
    v41 = 0LL;
    v39 = &v46;
    v40 = 1LL;
    v16 = ((__int64 (__fastcall *)(__int64 *, __int128 *, __int64, __int64, __int64, __int64, __int64))std::io::Write::write_fmt)(
            &v34,
            &v38,
            v23,
            v24,
            v25,
            v26,
            v33);
    if ( v16 )
      goto LABEL_21;
  }
  v16 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v34);
  if ( v16 )
  {
LABEL_21:
    core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(&v35);
    core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(v55);
    core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(&v43);
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v34);
  }
  else
  {
    core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(&v35);
    core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(v55);
    core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(&v43);
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v34);
    return 0LL;
  }
  return v16;
}
