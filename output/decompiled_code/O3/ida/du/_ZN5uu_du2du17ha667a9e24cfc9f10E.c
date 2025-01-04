_QWORD *__fastcall uu_du::du(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const void *v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int128 v12; // kr00_16
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  char v19; // [rsp+Bh] [rbp-42Dh]
  char v20; // [rsp+Ch] [rbp-42Ch]
  char v21; // [rsp+Dh] [rbp-42Bh]
  char v22; // [rsp+Eh] [rbp-42Ah]
  char v23; // [rsp+Fh] [rbp-429h]
  __int64 v26; // [rsp+28h] [rbp-410h]
  __int64 v29; // [rsp+40h] [rbp-3F8h] BYREF
  char v30; // [rsp+48h] [rbp-3F0h]
  _BYTE v31[160]; // [rsp+50h] [rbp-3E8h] BYREF
  _BYTE v32[8]; // [rsp+F0h] [rbp-348h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-340h]
  __int64 v34; // [rsp+100h] [rbp-338h]
  __int64 v35; // [rsp+108h] [rbp-330h]
  __int64 v36; // [rsp+110h] [rbp-328h]
  _QWORD v37[2]; // [rsp+118h] [rbp-320h] BYREF
  __m128i v38; // [rsp+128h] [rbp-310h]
  __int64 v39; // [rsp+138h] [rbp-300h]
  _QWORD v40[2]; // [rsp+140h] [rbp-2F8h] BYREF
  _BYTE **v41; // [rsp+150h] [rbp-2E8h] BYREF
  __int64 (__fastcall *v42)(); // [rsp+158h] [rbp-2E0h]
  __int64 v43; // [rsp+160h] [rbp-2D8h]
  _BYTE *v44; // [rsp+168h] [rbp-2D0h] BYREF
  _BYTE v45[160]; // [rsp+170h] [rbp-2C8h] BYREF
  __m128i si128; // [rsp+210h] [rbp-228h] BYREF
  __int64 v47; // [rsp+220h] [rbp-218h]
  _OWORD v48[9]; // [rsp+230h] [rbp-208h] BYREF
  __m128i v49; // [rsp+2C0h] [rbp-178h] BYREF
  __int128 v50; // [rsp+2D0h] [rbp-168h]
  __int128 v51; // [rsp+2E0h] [rbp-158h]
  __int128 v52; // [rsp+2F0h] [rbp-148h]
  __int128 v53; // [rsp+300h] [rbp-138h]
  __int128 v54; // [rsp+310h] [rbp-128h]
  __int64 v55; // [rsp+328h] [rbp-110h] BYREF
  __int64 v56; // [rsp+330h] [rbp-108h]
  __int64 v57; // [rsp+338h] [rbp-100h]
  __m128i v58; // [rsp+340h] [rbp-F8h] BYREF
  __int64 v59; // [rsp+350h] [rbp-E8h]
  _BYTE v60[24]; // [rsp+358h] [rbp-E0h] BYREF
  __m128i v61[12]; // [rsp+370h] [rbp-C8h] BYREF

  v6 = a2;
  if ( !*((_BYTE *)a2 + 128) )
  {
LABEL_44:
    memcpy(a1, v6, 0x90uLL);
    return a1;
  }
  std::fs::read_dir(v48, a2 + 8);
  if ( BYTE8(v48[0]) == 2 )
  {
    *(_QWORD *)&v31[16] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                            *(_QWORD *)&v48[0],
                            a2 + 8);
    *(_QWORD *)&v31[24] = &off_1843F0;
    *(_OWORD *)v31 = 2uLL;
    std::sync::mpmc::Sender<T>::send(v45, a6, v31);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v45), (__m128i)xmmword_F110)) != 0xFFFF )
    {
      memcpy(&v31[16], &v45[16], 0x90uLL);
      *(_OWORD *)v31 = *(_OWORD *)v45;
      a1[2] = alloc::boxed::Box<T>::new(v31);
      a1[1] = 0LL;
      *a1 = 2LL;
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  v29 = *(_QWORD *)&v48[0];
  v30 = BYTE8(v48[0]);
  v8 = 56LL * *(_QWORD *)(a3 + 16);
  v36 = *(_QWORD *)(a3 + 8);
  v35 = v36 + v8;
  v23 = *(_BYTE *)(a3 + 52);
  v21 = *(_BYTE *)(a3 + 51);
  v19 = *(_BYTE *)(a3 + 48);
  v22 = *(_BYTE *)(a3 + 50);
  v26 = a4 + 1;
  v20 = *(_BYTE *)(a3 + 49);
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_6:
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v55, &v29);
      if ( !v55 )
      {
        v6 = a2;
        core::ptr::drop_in_place<std::fs::ReadDir>(&v29);
        goto LABEL_44;
      }
      if ( v56 )
        break;
      *(_QWORD *)&v31[16] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v57);
      *(_QWORD *)&v31[24] = v9;
      *(_OWORD *)v31 = 2uLL;
      std::sync::mpmc::Sender<T>::send(v45, a6, v31);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v45), (__m128i)xmmword_F110)) != 0xFFFF )
      {
        memcpy(&v31[16], &v45[16], 0x90uLL);
        *(_OWORD *)v31 = *(_OWORD *)v45;
        v6 = a2;
        a1[2] = alloc::boxed::Box<T>::new(v31);
        a1[1] = 0LL;
        *a1 = 2LL;
        goto LABEL_47;
      }
    }
    v37[0] = v56;
    v37[1] = v57;
    v39 = v59;
    v38 = _mm_loadu_si128(&v58);
    std::fs::DirEntry::path(v32, v37);
    uu_du::Stat::new((__int64)v61, v33, v34, (__int64)v37, (_QWORD *)a3);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v61), (__m128i)xmmword_EF80)) == 0xFFFF )
    {
      *(_QWORD *)&v31[16] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                              v61[1].m128i_i64[0],
                              v37);
      *(_QWORD *)&v31[24] = &off_1843F0;
      *(_OWORD *)v31 = 2uLL;
      std::sync::mpmc::Sender<T>::send(v45, a6, v31);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v45), (__m128i)xmmword_F110)) != 0xFFFF )
        goto LABEL_45;
      goto LABEL_10;
    }
    memcpy(v48, v61, sizeof(v48));
    v40[0] = v36;
    v40[1] = v35;
    while ( 1 )
    {
      v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v40);
      if ( !v10 )
        break;
      std::sys::os_str::bytes::Slice::to_string_lossy(v31, *((_QWORD *)&v48[4] + 1), *(_QWORD *)&v48[5]);
      if ( (unsigned __int8)glob::Pattern::matches(v10, *(_QWORD *)&v31[8], *(_QWORD *)&v31[16]) )
      {
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v31);
LABEL_35:
        if ( v23 )
        {
          v16 = _mm_loadu_si128((const __m128i *)((char *)&v48[4] + 8));
          *(_QWORD *)v45 = 1LL;
          *(__m128i *)&v45[8] = v16;
          v45[24] = 1;
          v44 = v45;
          v41 = &v44;
          v42 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)v31 = &unk_184380;
          *(_QWORD *)&v31[8] = 2LL;
          *(_QWORD *)&v31[32] = 0LL;
          *(_QWORD *)&v31[16] = &v41;
          *(_QWORD *)&v31[24] = 1LL;
          std::io::stdio::_print(v31);
        }
LABEL_37:
        core::ptr::drop_in_place<uu_du::Stat>(v48);
        core::ptr::drop_in_place<std::path::PathBuf>(v32);
        core::ptr::drop_in_place<std::fs::DirEntry>(v37);
        goto LABEL_6;
      }
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v31);
      std::fs::DirEntry::file_name(v60, v37);
      std::sys::os_str::bytes::Buf::into_string(v31, v60);
      *(_QWORD *)&v45[24] = *(_QWORD *)&v31[24];
      *(__m128i *)&v45[8] = _mm_loadu_si128((const __m128i *)&v31[8]);
      *(_QWORD *)v45 = *(_QWORD *)v31;
      core::result::Result<T,E>::unwrap(&v41, v45);
      if ( (unsigned __int8)glob::Pattern::matches(v10, v42, v43) )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v41);
        goto LABEL_35;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v41);
    }
    if ( v48[0] != 0LL )
    {
      si128 = _mm_load_si128((const __m128i *)&v48[1]);
      v47 = *(_QWORD *)&v48[2];
      if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(a5, &si128) )
      {
        if ( !v21 )
          goto LABEL_37;
        if ( !v19 )
        {
          ++a2[13];
          goto LABEL_37;
        }
      }
      hashbrown::map::HashMap<K,V,S,A>::insert(a5, si128.m128i_i64[0], si128.m128i_i64[1], v47);
    }
    if ( LOBYTE(v48[8]) )
      break;
    v17 = _mm_loadu_si128((const __m128i *)((char *)&v48[5] + 8));
    ++a2[13];
    *(__m128i *)(a2 + 11) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a2 + 11)), v17);
    if ( v19 )
    {
      memcpy(v31, v48, 0x90uLL);
      *(_QWORD *)&v31[144] = v26;
      std::sync::mpmc::Sender<T>::send(v45, a6, v31);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v45), (__m128i)xmmword_F110)) != 0xFFFF )
        goto LABEL_45;
    }
    else
    {
      core::ptr::drop_in_place<uu_du::Stat>(v48);
    }
LABEL_10:
    core::ptr::drop_in_place<std::path::PathBuf>(v32);
    core::ptr::drop_in_place<std::fs::DirEntry>(v37);
  }
  if ( v22 && *(_QWORD *)&v48[0] == 1LL && *a2 == 1LL && *(_QWORD *)&v48[2] != a2[4] )
    goto LABEL_37;
  memcpy(v31, v48, 0x90uLL);
  uu_du::du(v45, v31, a3, v26, a5, a6);
  v11 = *(_QWORD *)&v45[16];
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v45), (__m128i)xmmword_EF80)) == 0xFFFF )
    goto LABEL_46;
  v12 = *(_OWORD *)v45;
  v54 = *(_OWORD *)&v45[72];
  v53 = *(_OWORD *)&v45[56];
  v52 = *(_OWORD *)&v45[40];
  v51 = *(_OWORD *)&v45[24];
  v13 = _mm_loadu_si128((const __m128i *)&v45[88]);
  v14 = *(_QWORD *)&v45[104];
  v49 = _mm_load_si128((const __m128i *)&v45[112]);
  v50 = *(_OWORD *)&v45[128];
  if ( !v20 )
  {
    *(__m128i *)(a2 + 11) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a2 + 11)), v13);
    a2[13] += v14;
  }
  *(_OWORD *)&v31[72] = v54;
  *(_OWORD *)&v31[56] = v53;
  *(_OWORD *)&v31[40] = v52;
  *(_OWORD *)&v31[24] = v51;
  v15 = _mm_load_si128(&v49);
  *(_OWORD *)&v31[128] = v50;
  *(__m128i *)&v31[112] = v15;
  *(_OWORD *)v31 = v12;
  *(_QWORD *)&v31[16] = v11;
  *(__m128i *)&v31[88] = v13;
  *(_QWORD *)&v31[104] = v14;
  *(_QWORD *)&v31[144] = v26;
  std::sync::mpmc::Sender<T>::send(v45, a6, v31);
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v45), (__m128i)xmmword_F110)) == 0xFFFF )
    goto LABEL_10;
LABEL_45:
  memcpy(&v31[16], &v45[16], 0x90uLL);
  *(_OWORD *)v31 = *(_OWORD *)v45;
  v11 = alloc::boxed::Box<T>::new(v31);
LABEL_46:
  a1[2] = v11;
  a1[1] = 0LL;
  *a1 = 2LL;
  v6 = a2;
  core::ptr::drop_in_place<std::path::PathBuf>(v32);
  core::ptr::drop_in_place<std::fs::DirEntry>(v37);
LABEL_47:
  core::ptr::drop_in_place<std::fs::ReadDir>(&v29);
LABEL_48:
  core::ptr::drop_in_place<uu_du::Stat>(v6);
  return a1;
}
