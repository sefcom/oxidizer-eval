_QWORD *__fastcall uu_du::du(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
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
  __int64 v25; // [rsp+28h] [rbp-410h]
  __int64 v28; // [rsp+40h] [rbp-3F8h] BYREF
  char v29; // [rsp+48h] [rbp-3F0h]
  _BYTE v30[160]; // [rsp+50h] [rbp-3E8h] BYREF
  _BYTE v31[8]; // [rsp+F0h] [rbp-348h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-340h]
  __int64 v33; // [rsp+100h] [rbp-338h]
  __int64 v34; // [rsp+108h] [rbp-330h]
  __int64 v35; // [rsp+110h] [rbp-328h]
  _QWORD v36[2]; // [rsp+118h] [rbp-320h] BYREF
  __m128i v37; // [rsp+128h] [rbp-310h]
  __int64 v38; // [rsp+138h] [rbp-300h]
  _QWORD v39[2]; // [rsp+140h] [rbp-2F8h] BYREF
  _BYTE **v40; // [rsp+150h] [rbp-2E8h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+158h] [rbp-2E0h]
  __int64 v42; // [rsp+160h] [rbp-2D8h]
  _BYTE *v43; // [rsp+168h] [rbp-2D0h] BYREF
  _BYTE v44[160]; // [rsp+170h] [rbp-2C8h] BYREF
  __m128i si128; // [rsp+210h] [rbp-228h] BYREF
  __int64 v46; // [rsp+220h] [rbp-218h]
  _OWORD v47[9]; // [rsp+230h] [rbp-208h] BYREF
  __m128i v48; // [rsp+2C0h] [rbp-178h] BYREF
  __int128 v49; // [rsp+2D0h] [rbp-168h]
  __int128 v50; // [rsp+2E0h] [rbp-158h]
  __int128 v51; // [rsp+2F0h] [rbp-148h]
  __int128 v52; // [rsp+300h] [rbp-138h]
  __int128 v53; // [rsp+310h] [rbp-128h]
  __int64 v54; // [rsp+328h] [rbp-110h] BYREF
  __int64 v55; // [rsp+330h] [rbp-108h]
  __int64 v56; // [rsp+338h] [rbp-100h]
  __m128i v57; // [rsp+340h] [rbp-F8h] BYREF
  __int64 v58; // [rsp+350h] [rbp-E8h]
  _BYTE v59[24]; // [rsp+358h] [rbp-E0h] BYREF
  __m128i v60[12]; // [rsp+370h] [rbp-C8h] BYREF

  if ( !*((_BYTE *)a2 + 128) )
  {
LABEL_44:
    memcpy(a1, a2, 0x90uLL);
    return a1;
  }
  std::fs::read_dir(v47, a2 + 8);
  if ( BYTE8(v47[0]) == 2 )
  {
    *(_QWORD *)&v30[16] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                            *(_QWORD *)&v47[0],
                            a2 + 8);
    *(_QWORD *)&v30[24] = &off_183E90;
    *(_OWORD *)v30 = 2uLL;
    std::sync::mpmc::Sender<T>::send(v44, a6, v30);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v44), (__m128i)xmmword_EF90)) != 0xFFFF )
    {
      memcpy(&v30[16], &v44[16], 0x90uLL);
      *(_OWORD *)v30 = *(_OWORD *)v44;
      a1[2] = alloc::boxed::Box<T>::new(v30);
      a1[1] = 0LL;
      *a1 = 2LL;
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  v28 = *(_QWORD *)&v47[0];
  v29 = BYTE8(v47[0]);
  v8 = 56LL * *(_QWORD *)(a3 + 16);
  v35 = *(_QWORD *)(a3 + 8);
  v34 = v35 + v8;
  v23 = *(_BYTE *)(a3 + 52);
  v21 = *(_BYTE *)(a3 + 51);
  v19 = *(_BYTE *)(a3 + 48);
  v22 = *(_BYTE *)(a3 + 50);
  v25 = a4 + 1;
  v20 = *(_BYTE *)(a3 + 49);
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_6:
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v54, &v28);
      if ( !v54 )
      {
        core::ptr::drop_in_place<std::fs::ReadDir>(&v28);
        goto LABEL_44;
      }
      if ( v55 )
        break;
      *(_QWORD *)&v30[16] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v56);
      *(_QWORD *)&v30[24] = v9;
      *(_OWORD *)v30 = 2uLL;
      std::sync::mpmc::Sender<T>::send(v44, a6, v30);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v44), (__m128i)xmmword_EF90)) != 0xFFFF )
      {
        memcpy(&v30[16], &v44[16], 0x90uLL);
        *(_OWORD *)v30 = *(_OWORD *)v44;
        a1[2] = alloc::boxed::Box<T>::new(v30);
        a1[1] = 0LL;
        *a1 = 2LL;
        goto LABEL_47;
      }
    }
    v36[0] = v55;
    v36[1] = v56;
    v38 = v58;
    v37 = _mm_loadu_si128(&v57);
    std::fs::DirEntry::path(v31, v36);
    uu_du::Stat::new((__int64)v60, v32, v33, (__int64)v36, (_QWORD *)a3);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v60), (__m128i)xmmword_EE00)) == 0xFFFF )
    {
      *(_QWORD *)&v30[16] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                              v60[1].m128i_i64[0],
                              v36);
      *(_QWORD *)&v30[24] = &off_183E90;
      *(_OWORD *)v30 = 2uLL;
      std::sync::mpmc::Sender<T>::send(v44, a6, v30);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v44), (__m128i)xmmword_EF90)) != 0xFFFF )
        goto LABEL_45;
      goto LABEL_10;
    }
    memcpy(v47, v60, sizeof(v47));
    v39[0] = v35;
    v39[1] = v34;
    while ( 1 )
    {
      v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v39);
      if ( !v10 )
        break;
      std::sys::os_str::bytes::Slice::to_string_lossy(v30, *((_QWORD *)&v47[4] + 1), *(_QWORD *)&v47[5]);
      if ( (unsigned __int8)glob::Pattern::matches(v10, *(_QWORD *)&v30[8], *(_QWORD *)&v30[16]) )
      {
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v30);
LABEL_35:
        if ( v23 )
        {
          v16 = _mm_loadu_si128((const __m128i *)((char *)&v47[4] + 8));
          *(_QWORD *)v44 = 1LL;
          *(__m128i *)&v44[8] = v16;
          v44[24] = 1;
          v43 = v44;
          v40 = &v43;
          v41 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)v30 = &unk_183E38;
          *(_QWORD *)&v30[8] = 2LL;
          *(_QWORD *)&v30[32] = 0LL;
          *(_QWORD *)&v30[16] = &v40;
          *(_QWORD *)&v30[24] = 1LL;
          std::io::stdio::_print(v30);
        }
LABEL_37:
        core::ptr::drop_in_place<uu_du::Stat>(v47);
        core::ptr::drop_in_place<std::path::PathBuf>(v31);
        core::ptr::drop_in_place<std::fs::DirEntry>(v36);
        goto LABEL_6;
      }
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v30);
      std::fs::DirEntry::file_name(v59, v36);
      std::sys::os_str::bytes::Buf::into_string(v30, v59);
      *(_QWORD *)&v44[24] = *(_QWORD *)&v30[24];
      *(__m128i *)&v44[8] = _mm_loadu_si128((const __m128i *)&v30[8]);
      *(_QWORD *)v44 = *(_QWORD *)v30;
      core::result::Result<T,E>::unwrap(&v40, v44);
      if ( (unsigned __int8)glob::Pattern::matches(v10, v41, v42) )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v40);
        goto LABEL_35;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v40);
    }
    if ( v47[0] != 0LL )
    {
      si128 = _mm_load_si128((const __m128i *)&v47[1]);
      v46 = *(_QWORD *)&v47[2];
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
      hashbrown::map::HashMap<K,V,S,A>::insert(a5, si128.m128i_i64[0], si128.m128i_i64[1], v46);
    }
    if ( LOBYTE(v47[8]) )
      break;
    v17 = _mm_loadu_si128((const __m128i *)((char *)&v47[5] + 8));
    ++a2[13];
    *(__m128i *)(a2 + 11) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a2 + 11)), v17);
    if ( v19 )
    {
      memcpy(v30, v47, 0x90uLL);
      *(_QWORD *)&v30[144] = v25;
      std::sync::mpmc::Sender<T>::send(v44, a6, v30);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v44), (__m128i)xmmword_EF90)) != 0xFFFF )
        goto LABEL_45;
    }
    else
    {
      core::ptr::drop_in_place<uu_du::Stat>(v47);
    }
LABEL_10:
    core::ptr::drop_in_place<std::path::PathBuf>(v31);
    core::ptr::drop_in_place<std::fs::DirEntry>(v36);
  }
  if ( v22 && *(_QWORD *)&v47[0] == 1LL && *a2 == 1LL && *(_QWORD *)&v47[2] != a2[4] )
    goto LABEL_37;
  memcpy(v30, v47, 0x90uLL);
  uu_du::du(v44, v30, a3, v25, a5, a6);
  v11 = *(_QWORD *)&v44[16];
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v44), (__m128i)xmmword_EE00)) == 0xFFFF )
    goto LABEL_46;
  v12 = *(_OWORD *)v44;
  v53 = *(_OWORD *)&v44[72];
  v52 = *(_OWORD *)&v44[56];
  v51 = *(_OWORD *)&v44[40];
  v50 = *(_OWORD *)&v44[24];
  v13 = _mm_loadu_si128((const __m128i *)&v44[88]);
  v14 = *(_QWORD *)&v44[104];
  v48 = _mm_load_si128((const __m128i *)&v44[112]);
  v49 = *(_OWORD *)&v44[128];
  if ( !v20 )
  {
    *(__m128i *)(a2 + 11) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a2 + 11)), v13);
    a2[13] += v14;
  }
  *(_OWORD *)&v30[72] = v53;
  *(_OWORD *)&v30[56] = v52;
  *(_OWORD *)&v30[40] = v51;
  *(_OWORD *)&v30[24] = v50;
  v15 = _mm_load_si128(&v48);
  *(_OWORD *)&v30[128] = v49;
  *(__m128i *)&v30[112] = v15;
  *(_OWORD *)v30 = v12;
  *(_QWORD *)&v30[16] = v11;
  *(__m128i *)&v30[88] = v13;
  *(_QWORD *)&v30[104] = v14;
  *(_QWORD *)&v30[144] = v25;
  std::sync::mpmc::Sender<T>::send(v44, a6, v30);
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v44), (__m128i)xmmword_EF90)) == 0xFFFF )
    goto LABEL_10;
LABEL_45:
  memcpy(&v30[16], &v44[16], 0x90uLL);
  *(_OWORD *)v30 = *(_OWORD *)v44;
  v11 = alloc::boxed::Box<T>::new(v30);
LABEL_46:
  a1[2] = v11;
  a1[1] = 0LL;
  *a1 = 2LL;
  core::ptr::drop_in_place<std::path::PathBuf>(v31);
  core::ptr::drop_in_place<std::fs::DirEntry>(v36);
LABEL_47:
  core::ptr::drop_in_place<std::fs::ReadDir>(&v28);
LABEL_48:
  core::ptr::drop_in_place<uu_du::Stat>(a2);
  return a1;
}
