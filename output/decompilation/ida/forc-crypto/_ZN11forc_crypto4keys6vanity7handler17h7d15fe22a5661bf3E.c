__int64 __fastcall forc_crypto::keys::vanity::handler(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // bp
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rsi
  char v8; // r13
  char v9; // r13
  int v10; // edx
  __int64 v11; // r14
  bool v12; // r15
  __m128d v13; // xmm0
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // r12
  char v20; // r12
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // [rsp+0h] [rbp-2D8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-2C8h]
  _BYTE v25[64]; // [rsp+18h] [rbp-2C0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-280h]
  __int128 v27; // [rsp+60h] [rbp-278h]
  __int128 v28; // [rsp+70h] [rbp-268h] BYREF
  __int64 v29; // [rsp+80h] [rbp-258h]
  __m256i v30; // [rsp+88h] [rbp-250h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-230h]
  __int128 v32; // [rsp+B0h] [rbp-228h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-218h]
  __int128 v34; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-1F8h]
  __m256i v36; // [rsp+F0h] [rbp-1E8h] BYREF
  __int128 v37; // [rsp+110h] [rbp-1C8h]
  __int128 v38; // [rsp+120h] [rbp-1B8h]
  __int128 v39; // [rsp+130h] [rbp-1A8h] BYREF
  __int64 v40; // [rsp+140h] [rbp-198h]
  __int128 v41; // [rsp+150h] [rbp-188h] BYREF
  __int64 v42; // [rsp+160h] [rbp-178h]
  __int128 v43; // [rsp+170h] [rbp-168h] BYREF
  __int64 v44; // [rsp+180h] [rbp-158h]
  _BYTE v45[24]; // [rsp+188h] [rbp-150h] BYREF
  __int128 v46; // [rsp+1A0h] [rbp-138h] BYREF
  __int64 v47; // [rsp+1B0h] [rbp-128h]
  _BYTE v48[48]; // [rsp+1C0h] [rbp-118h]
  __int128 v49; // [rsp+1F0h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+200h] [rbp-D8h]
  __int64 v51; // [rsp+208h] [rbp-D0h] BYREF
  int v52; // [rsp+210h] [rbp-C8h]
  __int128 v53; // [rsp+218h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+228h] [rbp-B0h]
  __int128 v55; // [rsp+230h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+240h] [rbp-98h]
  __int64 v57; // [rsp+248h] [rbp-90h]
  __int128 v58; // [rsp+250h] [rbp-88h]
  __m256i v59; // [rsp+260h] [rbp-78h]
  __int64 v60; // [rsp+280h] [rbp-58h]
  __int64 v61; // [rsp+288h] [rbp-50h] BYREF
  __int128 v62; // [rsp+290h] [rbp-48h]
  __int64 v63; // [rsp+2A0h] [rbp-38h]

  v2 = forc_crypto::keys::vanity::Arg::validate(a2);
  if ( !v2 )
  {
    v40 = *(_QWORD *)(a2 + 32);
    v39 = *(_OWORD *)(a2 + 16);
    v42 = *(_QWORD *)(a2 + 56);
    v41 = *(_OWORD *)(a2 + 40);
    v47 = *(_QWORD *)(a2 + 80);
    v46 = *(_OWORD *)(a2 + 64);
    v3 = *(_BYTE *)(a2 + 112);
    v4 = *(_QWORD *)a2;
    v5 = *(_QWORD *)(a2 + 8);
    v33 = *(_QWORD *)(a2 + 104);
    v32 = *(_OWORD *)(a2 + 88);
    v31 = v46;
    if ( __OFSUB__(-(__int64)v46, 1LL) )
    {
      v6 = v40;
      if ( (_QWORD)v39 == 0x8000000000000000LL )
        v6 = 0LL;
      v7 = *((_QWORD *)&v39 + 1);
      if ( (_QWORD)v39 == 0x8000000000000000LL )
        v7 = 1LL;
      forc_crypto::keys::vanity::HexMatcher::new(v25, v7, v6);
      if ( *(_QWORD *)v25 == 0x8000000000000000LL )
      {
        *(_QWORD *)(a1 + 8) = *(_QWORD *)&v25[8];
        *(_BYTE *)a1 = 6;
        v8 = 0;
LABEL_20:
        v12 = 0;
        goto LABEL_21;
      }
      *(_OWORD *)&v48[32] = *(_OWORD *)&v25[32];
      *(_OWORD *)&v48[16] = *(_OWORD *)&v25[16];
      *(_OWORD *)v48 = *(_OWORD *)v25;
      v9 = 1;
    }
    else
    {
      forc_crypto::keys::vanity::RegexMatcher::new(v25, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
      if ( !*(_QWORD *)v25 )
      {
        *(_QWORD *)(a1 + 8) = *(_QWORD *)&v25[8];
        *(_BYTE *)a1 = 6;
        core::ptr::drop_in_place<alloc::string::String>(a2 + 64);
        v8 = 1;
        goto LABEL_20;
      }
      *(_OWORD *)&v48[24] = *(_OWORD *)&v25[16];
      *(_OWORD *)&v48[8] = *(_OWORD *)v25;
      *(_QWORD *)v48 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(a2 + 64);
      v9 = 0;
    }
    *(_QWORD *)v25 = &off_62F038;
    *(_QWORD *)&v25[8] = 1LL;
    *(_QWORD *)&v25[16] = 8LL;
    *(_OWORD *)&v25[24] = 0LL;
    std::io::stdio::_print(v25);
    v51 = std::time::Instant::now();
    v52 = v10;
    v37 = *(_OWORD *)&v48[32];
    v36 = *(__m256i *)v48;
    forc_crypto::keys::vanity::find_vanity_address_with_timeout(v25, &v36, v3, v4, v5);
    v11 = v26;
    if ( v26 == 0x8000000000000001LL )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)v25;
      *(_BYTE *)a1 = 6;
      v12 = 0;
      v8 = v9 ^ 1;
      goto LABEL_21;
    }
    v60 = *(_QWORD *)&v25[56];
    v59 = *(__m256i *)&v25[24];
    v58 = *(_OWORD *)&v25[8];
    *(_OWORD *)&v45[8] = v27;
    v61 = *(_QWORD *)v25;
    v62 = *(_OWORD *)&v25[8];
    v63 = *(_QWORD *)&v25[24];
    v56 = *(_QWORD *)&v25[48];
    v57 = *(_QWORD *)&v25[56];
    v55 = *(_OWORD *)&v25[32];
    *(_QWORD *)v45 = v26;
    v13 = _mm_sub_pd(
            (__m128d)_mm_unpacklo_epi32(
                       (__m128i)(unsigned __int64)std::time::Instant::elapsed(&v51),
                       (__m128i)xmmword_7A5B0),
            (__m128d)xmmword_7A420);
    *(double *)v30.m256i_i64 = (double)v14 / 1000000000.0 + _mm_unpackhi_pd(v13, v13).m128d_f64[0] + v13.m128d_f64[0];
    v36.m256i_i64[0] = (__int64)&v30;
    v36.m256i_i64[1] = (__int64)core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    *(_QWORD *)v25 = &off_62F048;
    *(_QWORD *)&v25[8] = 2LL;
    *(_QWORD *)&v25[32] = &unk_809E8;
    *(_QWORD *)&v25[40] = 1LL;
    *(_QWORD *)&v25[16] = &v36;
    *(_QWORD *)&v25[24] = 1LL;
    std::io::stdio::_print(v25);
    <T as alloc::string::SpecToString>::spec_to_string(&v30, &v61);
    fuels_core::types::checksum_address::checksum_encode(&v36, v30.m256i_i64[1], v30.m256i_i64[2]);
    v23 = *(_OWORD *)&v36.m256i_u64[1];
    v24 = v36.m256i_i64[3];
    v12 = v36.m256i_i64[0] == 12;
    if ( v36.m256i_i64[0] != 12 )
    {
      *(_OWORD *)&v25[48] = v38;
      *(_OWORD *)&v25[32] = v37;
      *(_OWORD *)&v25[8] = v23;
      *(_QWORD *)&v25[24] = v24;
      *(_QWORD *)v25 = v36.m256i_i64[0];
      *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v25);
      *(_BYTE *)a1 = 6;
      core::ptr::drop_in_place<alloc::string::String>(&v30);
      v20 = 0;
LABEL_35:
      if ( !(v20 & 1 | (v11 == 0x8000000000000000LL)) )
        core::ptr::drop_in_place<alloc::string::String>(v45);
      v8 = v9 ^ 1;
LABEL_21:
      if ( !v12 && (_QWORD)v32 != 0x8000000000000000LL )
        core::ptr::drop_in_place<std::path::PathBuf>(&v32);
      if ( v8 & 1 | (v31 == 0x8000000000000000LL) )
        goto LABEL_26;
      goto LABEL_25;
    }
    v43 = v23;
    v44 = v24;
    core::ptr::drop_in_place<alloc::string::String>(&v30);
    if ( v11 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v28 = 0LL;
      v29 = 0LL;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v25, aAddress_0, 7LL);
      v24 = *(_QWORD *)&v25[16];
      v23 = *(_OWORD *)v25;
      serde_json::value::to_value(v25, &v43);
      core::result::Result<T,E>::unwrap(&v36, v25, &off_62F080);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v25, &v28, &v23, &v36);
      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v25);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v25, aPrivatekey, 10LL);
      v35 = *(_QWORD *)&v25[16];
      v34 = *(_OWORD *)v25;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))hex::encode)(
        &v23,
        &v55,
        32LL,
        v15,
        v16,
        v17);
      serde_json::value::to_value(v25, &v23);
      core::result::Result<T,E>::unwrap(&v36, v25, &off_62F080);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v25, &v28, &v34, &v36);
      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v25);
      core::ptr::drop_in_place<alloc::string::String>(&v23);
      *(_OWORD *)&v30.m256i_u64[1] = v28;
      v30.m256i_i64[3] = v29;
      v30.m256i_i8[0] = 5;
      v18 = 1;
      if ( (_QWORD)v32 == 0x8000000000000000LL )
        goto LABEL_38;
    }
    else
    {
      v50 = *(_QWORD *)&v45[16];
      v49 = *(_OWORD *)v45;
      *(_QWORD *)&v28 = 0LL;
      v29 = 0LL;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v25, aAddress_0, 7LL);
      v24 = *(_QWORD *)&v25[16];
      v23 = *(_OWORD *)v25;
      serde_json::value::to_value(v25, &v43);
      core::result::Result<T,E>::unwrap(&v36, v25, &off_62F068);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v25, &v28, &v23, &v36);
      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v25);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v25, aPrivatekey, 10LL);
      v35 = *(_QWORD *)&v25[16];
      v34 = *(_OWORD *)v25;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))hex::encode)(&v23, &v55, 32LL);
      serde_json::value::to_value(v25, &v23);
      core::result::Result<T,E>::unwrap(&v36, v25, &off_62F068);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v25, &v28, &v34, &v36);
      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v25);
      core::ptr::drop_in_place<alloc::string::String>(&v23);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v25, aMnemonic_1, 8LL);
      v24 = *(_QWORD *)&v25[16];
      v23 = *(_OWORD *)v25;
      serde_json::value::to_value(v25, &v49);
      core::result::Result<T,E>::unwrap(&v36, v25, &off_62F068);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v25, &v28, &v23, &v36);
      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v25);
      *(_OWORD *)&v30.m256i_u64[1] = v28;
      v30.m256i_i64[3] = v29;
      v30.m256i_i8[0] = 5;
      core::ptr::drop_in_place<alloc::string::String>(&v49);
      v18 = 0;
      if ( (_QWORD)v32 == 0x8000000000000000LL )
        goto LABEL_38;
    }
    serde_json::ser::to_vec_pretty(v25, &v30);
    if ( *(_QWORD *)v25 == 0x8000000000000000LL )
    {
      *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*(_QWORD *)&v25[8]);
      *(_BYTE *)a1 = 6;
      core::ptr::drop_in_place<std::path::PathBuf>(&v32);
LABEL_34:
      core::ptr::drop_in_place<serde_json::value::Value>(&v30);
      core::ptr::drop_in_place<alloc::string::String>(&v43);
      v20 = v18 ^ 1;
      goto LABEL_35;
    }
    v53 = *(_OWORD *)v25;
    v54 = *(_QWORD *)&v25[16];
    v21 = std::fs::write(&v32, &v53);
    if ( v21 )
    {
      *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v21);
      *(_BYTE *)a1 = 6;
      goto LABEL_34;
    }
LABEL_38:
    v22 = *(_OWORD *)v30.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v30.m256i_u64[2];
    *(_OWORD *)a1 = v22;
    core::ptr::drop_in_place<alloc::string::String>(&v43);
    if ( v11 != 0x8000000000000000LL && v18 )
      core::ptr::drop_in_place<alloc::string::String>(v45);
    if ( v31 == 0x8000000000000000LL || !v9 )
      goto LABEL_26;
LABEL_25:
    core::ptr::drop_in_place<alloc::string::String>(&v46);
LABEL_26:
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v41);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v39);
    return a1;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_BYTE *)a1 = 6;
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a2 + 16);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a2 + 40);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a2 + 64);
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(a2 + 88);
  return a1;
}