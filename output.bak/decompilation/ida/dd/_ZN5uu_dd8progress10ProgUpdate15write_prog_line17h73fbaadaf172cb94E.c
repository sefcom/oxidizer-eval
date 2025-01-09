__int64 __fastcall uu_dd::progress::ProgUpdate::write_prog_line(unsigned __int64 *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  unsigned int v7; // r14d
  __int128 v8; // rax
  __int128 v9; // rax
  __m128d v10; // xmm0
  double v11; // xmm1_8
  void *v12; // rax
  const char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i v21; // [rsp+10h] [rbp-178h] BYREF
  void *v22; // [rsp+28h] [rbp-160h] BYREF
  __int64 v23; // [rsp+30h] [rbp-158h]
  _QWORD **v24; // [rsp+38h] [rbp-150h]
  __int64 v25; // [rsp+40h] [rbp-148h]
  __int64 v26; // [rsp+48h] [rbp-140h]
  _QWORD *v27; // [rsp+58h] [rbp-130h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+60h] [rbp-128h]
  __m128i *v29; // [rsp+68h] [rbp-120h]
  __int64 (__fastcall *v30)(); // [rsp+70h] [rbp-118h]
  _BYTE *v31; // [rsp+78h] [rbp-110h]
  __int64 (__fastcall *v32)(); // [rsp+80h] [rbp-108h]
  _BYTE *v33; // [rsp+88h] [rbp-100h]
  __int64 (__fastcall *v34)(); // [rsp+90h] [rbp-F8h]
  _QWORD *v35; // [rsp+98h] [rbp-F0h]
  __int64 (__fastcall *v36)(); // [rsp+A0h] [rbp-E8h]
  _BYTE *v37; // [rsp+A8h] [rbp-E0h]
  __int64 (__fastcall *v38)(); // [rsp+B0h] [rbp-D8h]
  _QWORD *v39; // [rsp+B8h] [rbp-D0h]
  __int64 (__fastcall *v40)(); // [rsp+C0h] [rbp-C8h]
  _QWORD v41[2]; // [rsp+C8h] [rbp-C0h] BYREF
  _QWORD v42[2]; // [rsp+D8h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+E8h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-98h]
  __int64 v45; // [rsp+F8h] [rbp-90h]
  _QWORD v46[2]; // [rsp+100h] [rbp-88h] BYREF
  _BYTE v47[24]; // [rsp+110h] [rbp-78h] BYREF
  _BYTE v48[24]; // [rsp+128h] [rbp-60h] BYREF
  _BYTE v49[72]; // [rsp+140h] [rbp-48h] BYREF

  v4 = a1[6];
  v5 = a1[7];
  v21.m128i_i64[0] = v4;
  v21.m128i_i64[1] = v5;
  uu_dd::numbers::to_magnitude_and_suffix((__int64)v47, v4, v5, 1);
  uu_dd::numbers::to_magnitude_and_suffix((__int64)v48, v4, v5, 0);
  v6 = *a1;
  v7 = *((_DWORD *)a1 + 2);
  *(_QWORD *)&v8 = core::cmp::max_by(
                     1000 * *a1 + v7 / 0xF4240uLL,
                     (0x3E8 * (unsigned __int128)*a1 + v7 / 0xF4240uLL) >> 64);
  if ( v8 == 0 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_162478);
  *(_QWORD *)&v9 = _udivti3(v4, v5, v8);
  uu_dd::numbers::to_magnitude_and_suffix((__int64)v49, 1000 * v9, (v9 * (unsigned __int128)0x3E8uLL) >> 64, 1);
  v10 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v6, (__m128i)xmmword_19420), (__m128d)xmmword_193A0);
  v11 = _mm_unpackhi_pd(v10, v10).m128d_f64[0] + v10.m128d_f64[0];
  v12 = &unk_26A85;
  if ( !a3 )
    v12 = &dword_0 + 1;
  v13 = asc_26A84;
  if ( a3 )
    v13 = (_BYTE *)(&dword_0 + 1);
  v41[0] = v12;
  v41[1] = a3;
  v42[0] = v13;
  v42[1] = a3 ^ 1u;
  v43 = 0LL;
  v44 = 1LL;
  v45 = 0LL;
  LOBYTE(v29) = 2;
  v27 = 0LL;
  *(_DWORD *)((char *)&v29 + 1) = 0;
  v28 = (__int64 (__fastcall *)())&byte_6;
  v14 = <uucore::features::format::num_format::Float as uucore::features::format::num_format::Formatter>::fmt(
          &v27,
          &v43,
          (double)(int)v7 / 1000000000.0 + v11);
  if ( !v14 )
  {
    core::str::converts::from_utf8(&v27, v44, v45);
    v46[0] = core::result::Result<T,E>::unwrap(&v27);
    v46[1] = v18;
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v21), (__m128i)xmmword_19580)) == 0xFFFF )
    {
      v27 = v41;
      v28 = <&T as core::fmt::Display>::fmt;
      v29 = &v21;
      v30 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
      v31 = v46;
      v32 = <&T as core::fmt::Display>::fmt;
      v33 = v49;
      v34 = <alloc::string::String as core::fmt::Display>::fmt;
      v35 = v42;
      v36 = <&T as core::fmt::Display>::fmt;
      v22 = &unk_162308;
      v23 = 5LL;
      v26 = 0LL;
      v24 = &v27;
      v25 = 5LL;
      v19 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, &v22);
      if ( v19 )
        goto LABEL_20;
    }
    else if ( *(_OWORD *)&v21 >= 0x3E8uLL )
    {
      if ( *(_OWORD *)&v21 >= 0x400uLL )
      {
        v27 = v41;
        v28 = <&T as core::fmt::Display>::fmt;
        v29 = &v21;
        v30 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v31 = v47;
        v32 = <alloc::string::String as core::fmt::Display>::fmt;
        v33 = v48;
        v34 = <alloc::string::String as core::fmt::Display>::fmt;
        v35 = v46;
        v36 = <&T as core::fmt::Display>::fmt;
        v37 = v49;
        v38 = <alloc::string::String as core::fmt::Display>::fmt;
        v39 = v42;
        v40 = <&T as core::fmt::Display>::fmt;
        v22 = &unk_162408;
        v23 = 7LL;
        v26 = 0LL;
        v24 = &v27;
        v25 = 7LL;
        v19 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, &v22);
        if ( v19 )
        {
LABEL_20:
          v15 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
          goto LABEL_8;
        }
      }
      else
      {
        v27 = v41;
        v28 = <&T as core::fmt::Display>::fmt;
        v29 = &v21;
        v30 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v31 = v47;
        v32 = <alloc::string::String as core::fmt::Display>::fmt;
        v33 = v46;
        v34 = <&T as core::fmt::Display>::fmt;
        v35 = v49;
        v36 = <alloc::string::String as core::fmt::Display>::fmt;
        v37 = v42;
        v38 = <&T as core::fmt::Display>::fmt;
        v22 = &unk_1623A8;
        v23 = 6LL;
        v26 = 0LL;
        v24 = &v27;
        v25 = 6LL;
        v19 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, &v22);
        if ( v19 )
          goto LABEL_20;
      }
    }
    else
    {
      v27 = v41;
      v28 = <&T as core::fmt::Display>::fmt;
      v29 = &v21;
      v30 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
      v31 = v46;
      v32 = <&T as core::fmt::Display>::fmt;
      v33 = v49;
      v34 = <alloc::string::String as core::fmt::Display>::fmt;
      v35 = v42;
      v36 = <&T as core::fmt::Display>::fmt;
      v22 = &unk_162358;
      v23 = 5LL;
      v26 = 0LL;
      v24 = &v27;
      v25 = 5LL;
      v19 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, &v22);
      if ( v19 )
        goto LABEL_20;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v43);
    core::ptr::drop_in_place<alloc::string::String>(v49);
    core::ptr::drop_in_place<alloc::string::String>(v48);
    core::ptr::drop_in_place<alloc::string::String>(v47);
    return 0LL;
  }
  v15 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
LABEL_8:
  v16 = v15;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v43);
  core::ptr::drop_in_place<alloc::string::String>(v49);
  core::ptr::drop_in_place<alloc::string::String>(v48);
  core::ptr::drop_in_place<alloc::string::String>(v47);
  return v16;
}
