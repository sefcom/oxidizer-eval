__int64 __fastcall rg::print_stats(char a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r14
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128d v29; // xmm0
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbx
  __m128d v34; // xmm0
  __m128d v35; // xmm0
  __int128 *v36; // rsi
  __int64 v37; // rdi
  __int128 v38; // [rsp+0h] [rbp-1E8h] BYREF
  _BYTE *v39; // [rsp+10h] [rbp-1D8h]
  int v40; // [rsp+24h] [rbp-1C4h] BYREF
  _BYTE v41[24]; // [rsp+28h] [rbp-1C0h] BYREF
  __int128 v42; // [rsp+40h] [rbp-1A8h]
  __int64 (__fastcall *v43)(); // [rsp+50h] [rbp-198h]
  __int128 *v44; // [rsp+58h] [rbp-190h]
  __int64 (__fastcall *v45)(); // [rsp+60h] [rbp-188h]
  __int128 *v46; // [rsp+68h] [rbp-180h]
  __int64 (__fastcall *v47)(); // [rsp+70h] [rbp-178h]
  __int128 *v48; // [rsp+78h] [rbp-170h]
  __int64 (__fastcall *v49)(); // [rsp+80h] [rbp-168h]
  __int128 *v50; // [rsp+88h] [rbp-160h]
  __int64 (__fastcall *v51)(); // [rsp+90h] [rbp-158h]
  double *v52; // [rsp+98h] [rbp-150h]
  __int64 (__fastcall *v53)(); // [rsp+A0h] [rbp-148h]
  __int128 v54; // [rsp+A8h] [rbp-140h] BYREF
  _BYTE *v55; // [rsp+B8h] [rbp-130h]
  __int64 v56; // [rsp+C0h] [rbp-128h]
  void *v57; // [rsp+C8h] [rbp-120h]
  __int64 v58; // [rsp+D0h] [rbp-118h]
  __int128 v59; // [rsp+D8h] [rbp-110h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-100h]
  __int64 v61; // [rsp+F0h] [rbp-F8h] BYREF
  __int128 v62; // [rsp+F8h] [rbp-F0h] BYREF
  __int64 v63; // [rsp+108h] [rbp-E0h]
  __int128 v64; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+120h] [rbp-C8h]
  __int64 v66; // [rsp+128h] [rbp-C0h] BYREF
  __int128 v67; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+140h] [rbp-A8h]
  double v69; // [rsp+150h] [rbp-98h] BYREF
  __int128 v70; // [rsp+158h] [rbp-90h]
  __int64 v71; // [rsp+168h] [rbp-80h]
  __int128 v72; // [rsp+170h] [rbp-78h] BYREF
  __int64 v73; // [rsp+180h] [rbp-68h]
  __int128 v74; // [rsp+190h] [rbp-58h] BYREF
  __int64 v75; // [rsp+1A0h] [rbp-48h]
  __int64 v76; // [rsp+1A8h] [rbp-40h] BYREF
  double v77; // [rsp+1B0h] [rbp-38h] BYREF

  v76 = a2;
  v61 = a5;
  *(_QWORD *)v41 = std::time::Instant::now();
  *(_DWORD *)&v41[8] = v8;
  v9 = std::time::Instant::saturating_duration_since(v41, a3, a4);
  v11 = v9;
  v12 = v10;
  if ( a1 == 5 )
  {
    *(_QWORD *)&v62 = 0LL;
    v63 = 0LL;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v41, aType);
    serde_json::value::to_value(v41, aType, v13, v14, v15, v16, *(_QWORD *)v41, *(_QWORD *)&v41[8], *(_QWORD *)&v41[16]);
    core::result::Result<T,E>::unwrap(&v54, v41);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v41, &v62, &v38, &v54);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v41);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v41, aData);
    v73 = *(_QWORD *)&v41[16];
    v72 = *(_OWORD *)v41;
    *(_QWORD *)&v64 = 0LL;
    v65 = 0LL;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v41, aStats);
    serde_json::value::to_value(v41, &v76, v17, v18, v19, v20, *(_QWORD *)v41, *(_QWORD *)&v41[8], *(_QWORD *)&v41[16]);
    core::result::Result<T,E>::unwrap(&v54, v41);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v41, &v64, &v38, &v54);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v41);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v41, aElapsedTotal);
    v75 = *(_QWORD *)&v41[16];
    v74 = *(_OWORD *)v41;
    *(_QWORD *)&v59 = 0LL;
    v60 = 0LL;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v41, aSecs);
    v66 = v11;
    serde_json::value::to_value(v41, &v66, v21, v22, v23, v24, *(_QWORD *)v41, *(_QWORD *)&v41[8], *(_QWORD *)&v41[16]);
    core::result::Result<T,E>::unwrap(&v54, v41);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v41, &v59, &v38, &v54);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v41);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v41, aNanos);
    v40 = v12;
    serde_json::value::to_value(v41, &v40, v25, v26, v27, v28, *(_QWORD *)v41, *(_QWORD *)&v41[8], *(_QWORD *)&v41[16]);
    core::result::Result<T,E>::unwrap(&v54, v41);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v41, &v59, &v38, &v54);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v41);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v41, aHuman);
    v68 = *(_QWORD *)&v41[16];
    v67 = *(_OWORD *)v41;
    v29 = _mm_sub_pd(
            (__m128d)_mm_unpacklo_ps((__m128)(unsigned __int64)v66, (__m128)xmmword_61E30),
            (__m128d)xmmword_61C30);
    v77 = (double)v40 / 1000000000.0 + _mm_unpackhi_pd(v29, v29).m128d_f64[0] + v29.m128d_f64[0];
    *(_QWORD *)&v38 = &v77;
    *((_QWORD *)&v38 + 1) = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    *(_QWORD *)v41 = &unk_3EBA70;
    *(_QWORD *)&v41[8] = 2LL;
    *((_QWORD *)&v42 + 1) = &unk_88100;
    v43 = (__int64 (__fastcall *)())(&dword_0 + 1);
    *(_QWORD *)&v41[16] = &v38;
    *(_QWORD *)&v42 = 1LL;
    core::option::Option<T>::map_or_else(&v54, 0LL, v30, v41);
    v38 = v54;
    v39 = v55;
    ((void (__fastcall *)(_BYTE *, __int128 *))serde_json::value::to_value)(v41, &v38);
    core::result::Result<T,E>::unwrap(&v54, v41);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v41, &v59, &v67, &v54);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v41);
    core::ptr::drop_in_place<alloc::string::String>(&v38);
    *(_OWORD *)&v41[8] = v59;
    *(_QWORD *)&v42 = v60;
    v41[0] = 5;
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v54, &v64, &v74, v41);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v54);
    *(_OWORD *)&v41[8] = v64;
    *(_QWORD *)&v42 = v65;
    v41[0] = 5;
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v54, &v62, &v72, v41);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v54);
    v70 = v62;
    v71 = v63;
    LOBYTE(v69) = 5;
    v31 = serde_json::ser::to_writer(&v61, &v69);
    if ( v31 )
    {
      v32 = serde_json::error::<impl core::convert::From<serde_json::error::Error> for std::io::error::Error>::from(v31);
      core::ptr::drop_in_place<serde_json::value::Value>(&v69);
      return v32;
    }
    core::ptr::drop_in_place<serde_json::value::Value>(&v69);
    *(_QWORD *)v41 = &off_3EA358;
    *(_QWORD *)&v41[8] = 1LL;
    *(_QWORD *)&v41[16] = 8LL;
    v42 = 0LL;
    v37 = v61;
    v36 = (__int128 *)v41;
  }
  else
  {
    *(_QWORD *)&v62 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)&v72 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)&v64 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)&v74 = *(_QWORD *)a2;
    *(_QWORD *)&v59 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)&v67 = *(_QWORD *)(a2 + 16);
    v34 = _mm_sub_pd(
            (__m128d)_mm_unpacklo_ps((__m128)*(unsigned __int64 *)(a2 + 48), (__m128)0x4530000043300000uLL),
            (__m128d)xmmword_61C30);
    *(double *)&v38 = (double)*(int *)(a2 + 56) / 1000000000.0
                    + _mm_unpackhi_pd(v34, v34).m128d_f64[0]
                    + v34.m128d_f64[0];
    v35 = _mm_sub_pd(
            (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)v9, (__m128i)0x4530000043300000uLL),
            (__m128d)xmmword_61C30);
    v69 = (double)v10 / 1000000000.0 + _mm_unpackhi_pd(v35, v35).m128d_f64[0] + v35.m128d_f64[0];
    *(_QWORD *)v41 = &v62;
    *(_QWORD *)&v41[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v41[16] = &v72;
    *(_QWORD *)&v42 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *((_QWORD *)&v42 + 1) = &v64;
    v43 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v44 = &v74;
    v45 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v46 = &v59;
    v47 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v48 = &v67;
    v49 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v50 = &v38;
    v51 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v52 = &v69;
    v53 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    *(_QWORD *)&v54 = &off_3EBA90;
    *((_QWORD *)&v54 + 1) = 9LL;
    v57 = &unk_88198;
    v58 = 8LL;
    v55 = v41;
    v56 = 8LL;
    v36 = &v54;
    v37 = a5;
  }
  return std::io::impls::<impl std::io::Write for &mut W>::write_fmt(v37, v36);
}