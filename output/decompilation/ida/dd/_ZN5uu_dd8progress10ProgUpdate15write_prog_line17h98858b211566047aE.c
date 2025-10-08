__int64 __fastcall uu_dd::progress::ProgUpdate::write_prog_line(unsigned __int64 *a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r14
  int v6; // r15d
  unsigned __int128 v7; // rdi
  __int128 v8; // rax
  __int128 v9; // rax
  __m128d v10; // xmm0
  double v11; // xmm1_8
  void *v12; // rax
  const char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  void *v20; // [rsp+10h] [rbp-178h] BYREF
  __int64 v21; // [rsp+18h] [rbp-170h]
  _QWORD **v22; // [rsp+20h] [rbp-168h]
  __int64 v23; // [rsp+28h] [rbp-160h]
  __int64 v24; // [rsp+30h] [rbp-158h]
  _QWORD *v25; // [rsp+40h] [rbp-148h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+48h] [rbp-140h]
  _QWORD *v27; // [rsp+50h] [rbp-138h]
  __int64 (__fastcall *v28)(); // [rsp+58h] [rbp-130h]
  _QWORD *v29; // [rsp+60h] [rbp-128h]
  __int64 (__fastcall *v30)(); // [rsp+68h] [rbp-120h]
  _QWORD *v31; // [rsp+70h] [rbp-118h]
  __int64 (__fastcall *v32)(); // [rsp+78h] [rbp-110h]
  _QWORD *v33; // [rsp+80h] [rbp-108h]
  __int64 (__fastcall *v34)(); // [rsp+88h] [rbp-100h]
  _QWORD *v35; // [rsp+90h] [rbp-F8h]
  __int64 (__fastcall *v36)(); // [rsp+98h] [rbp-F0h]
  _QWORD *v37; // [rsp+A0h] [rbp-E8h]
  __int64 (__fastcall *v38)(); // [rsp+A8h] [rbp-E0h]
  int v39; // [rsp+B4h] [rbp-D4h]
  __int64 v40; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-C8h]
  __int64 v42; // [rsp+C8h] [rbp-C0h]
  _QWORD v43[2]; // [rsp+D0h] [rbp-B8h] BYREF
  _QWORD v44[2]; // [rsp+E0h] [rbp-A8h] BYREF
  _QWORD v45[2]; // [rsp+F0h] [rbp-98h] BYREF
  _QWORD v46[2]; // [rsp+100h] [rbp-88h] BYREF
  _QWORD v47[3]; // [rsp+110h] [rbp-78h] BYREF
  _QWORD v48[3]; // [rsp+128h] [rbp-60h] BYREF
  _QWORD v49[9]; // [rsp+140h] [rbp-48h] BYREF

  v39 = a3;
  v3 = a1[6];
  v4 = a1[7];
  v43[0] = v3;
  v43[1] = v4;
  uu_dd::numbers::to_magnitude_and_suffix((__int64)v47, v3, v4, 1);
  uu_dd::numbers::to_magnitude_and_suffix((__int64)v48, v3, v4, 0);
  v5 = *a1;
  v6 = *((_DWORD *)a1 + 2);
  v7 = 0x3E8 * (unsigned __int128)*a1 + (unsigned int)v6 / 0xF4240uLL;
  *(_QWORD *)&v8 = core::cmp::Ord::max(v7, *((_QWORD *)&v7 + 1));
  if ( v8 == 0 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_13DB00);
  *(_QWORD *)&v9 = _udivti3(v3, v4, v8);
  uu_dd::numbers::to_magnitude_and_suffix((__int64)v49, 1000 * v9, (v9 * (unsigned __int128)0x3E8uLL) >> 64, 1);
  v10 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v5, (__m128i)xmmword_1E230), (__m128d)xmmword_1E1B0);
  v11 = _mm_unpackhi_pd(v10, v10).m128d_f64[0] + v10.m128d_f64[0];
  v12 = &unk_21C2D;
  if ( !(_BYTE)v39 )
    v12 = &dword_0 + 1;
  v13 = asc_21C2C;
  if ( (_BYTE)v39 )
    v13 = (_BYTE *)(&dword_0 + 1);
  v44[0] = v12;
  v44[1] = (unsigned __int8)v39;
  v45[0] = v13;
  v45[1] = (unsigned __int8)v39 ^ 1u;
  v40 = 0LL;
  v41 = 1LL;
  v42 = 0LL;
  BYTE4(v23) = 2;
  v20 = 0LL;
  v22 = 0LL;
  LODWORD(v23) = 0;
  <uucore::features::extendedbigdecimal::ExtendedBigDecimal as core::convert::From<f64>>::from(
    &v25,
    (double)v6 / 1000000000.0 + v11);
  v14 = <uucore::features::format::num_format::Float as uucore::features::format::num_format::Formatter<&uucore::features::extendedbigdecimal::ExtendedBigDecimal>>::fmt(
          &v20,
          &v40,
          &v25);
  if ( !v14 )
  {
    core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v25, v26);
    core::str::converts::from_utf8(&v25, v41, v42);
    v46[0] = core::result::Result<T,E>::unwrap(&v25);
    v46[1] = v16;
    if ( v4 | v3 ^ 1 )
    {
      if ( __PAIR128__(v4, v3) >= 0x3E8 )
      {
        if ( __PAIR128__(v4, v3) >= 0x400 )
        {
          v25 = v44;
          v26 = <&T as core::fmt::Display>::fmt;
          v27 = v43;
          v28 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
          v29 = v47;
          v30 = <alloc::string::String as core::fmt::Display>::fmt;
          v31 = v48;
          v32 = <alloc::string::String as core::fmt::Display>::fmt;
          v33 = v46;
          v34 = <&T as core::fmt::Display>::fmt;
          v35 = v49;
          v36 = <alloc::string::String as core::fmt::Display>::fmt;
          v37 = v45;
          v38 = <&T as core::fmt::Display>::fmt;
          v20 = &unk_13DA90;
          v21 = 7LL;
          v24 = 0LL;
          v22 = &v25;
          v23 = 7LL;
          v17 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, &v20);
          if ( v17 )
          {
LABEL_18:
            v15 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
            goto LABEL_20;
          }
        }
        else
        {
          v25 = v44;
          v26 = <&T as core::fmt::Display>::fmt;
          v27 = v43;
          v28 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
          v29 = v47;
          v30 = <alloc::string::String as core::fmt::Display>::fmt;
          v31 = v46;
          v32 = <&T as core::fmt::Display>::fmt;
          v33 = v49;
          v34 = <alloc::string::String as core::fmt::Display>::fmt;
          v35 = v45;
          v36 = <&T as core::fmt::Display>::fmt;
          v20 = &unk_13DA30;
          v21 = 6LL;
          v24 = 0LL;
          v22 = &v25;
          v23 = 6LL;
          v17 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, &v20);
          if ( v17 )
            goto LABEL_18;
        }
      }
      else
      {
        v25 = v44;
        v26 = <&T as core::fmt::Display>::fmt;
        v27 = v43;
        v28 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v29 = v46;
        v30 = <&T as core::fmt::Display>::fmt;
        v31 = v49;
        v32 = <alloc::string::String as core::fmt::Display>::fmt;
        v33 = v45;
        v34 = <&T as core::fmt::Display>::fmt;
        v20 = &unk_13D9E0;
        v21 = 5LL;
        v24 = 0LL;
        v22 = &v25;
        v23 = 5LL;
        v17 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, &v20);
        if ( v17 )
          goto LABEL_18;
      }
    }
    else
    {
      v25 = v44;
      v26 = <&T as core::fmt::Display>::fmt;
      v27 = v43;
      v28 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
      v29 = v46;
      v30 = <&T as core::fmt::Display>::fmt;
      v31 = v49;
      v32 = <alloc::string::String as core::fmt::Display>::fmt;
      v33 = v45;
      v34 = <&T as core::fmt::Display>::fmt;
      v20 = &unk_13D990;
      v21 = 5LL;
      v24 = 0LL;
      v22 = &v25;
      v23 = 5LL;
      v17 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, &v20);
      if ( v17 )
        goto LABEL_18;
    }
    v15 = 0LL;
    goto LABEL_20;
  }
  v15 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
  core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v25, v26);
LABEL_20:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v40, v41);
  core::ptr::drop_in_place<alloc::string::String>(v49[0], v49[1]);
  core::ptr::drop_in_place<alloc::string::String>(v48[0], v48[1]);
  core::ptr::drop_in_place<alloc::string::String>(v47[0], v47[1]);
  return v15;
}