void *__fastcall uu_du::du(_QWORD *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  const void *v6; // r15
  void *v7; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // r14
  char v21; // bl
  char v22; // bl
  __int8 v23; // bl
  __int64 v24; // rax
  __int128 v25; // kr00_16
  __m128i v26; // xmm0
  __int64 v27; // rsi
  __m128i v28; // xmm1
  char v30; // [rsp+Bh] [rbp-44Dh]
  char v31; // [rsp+Ch] [rbp-44Ch]
  char v32; // [rsp+Dh] [rbp-44Bh]
  unsigned __int8 v33; // [rsp+Eh] [rbp-44Ah]
  char v34; // [rsp+Fh] [rbp-449h]
  __int64 v36; // [rsp+20h] [rbp-438h]
  __int64 v38; // [rsp+28h] [rbp-430h]
  __int64 v40; // [rsp+38h] [rbp-420h]
  __int64 v41; // [rsp+40h] [rbp-418h]
  _OWORD v43[10]; // [rsp+50h] [rbp-408h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-368h] BYREF
  __int8 v45; // [rsp+F8h] [rbp-360h]
  _QWORD v46[2]; // [rsp+100h] [rbp-358h] BYREF
  __m128i v47; // [rsp+110h] [rbp-348h]
  __int64 v48; // [rsp+120h] [rbp-338h]
  char v49[8]; // [rsp+128h] [rbp-330h] BYREF
  __int64 v50; // [rsp+130h] [rbp-328h]
  __int64 v51; // [rsp+138h] [rbp-320h]
  _OWORD v52[10]; // [rsp+140h] [rbp-318h] BYREF
  __int64 v53; // [rsp+1E8h] [rbp-270h]
  __int64 v54; // [rsp+1F0h] [rbp-268h]
  __int64 v55; // [rsp+1F8h] [rbp-260h]
  __int64 v56; // [rsp+200h] [rbp-258h]
  _OWORD *v57; // [rsp+208h] [rbp-250h] BYREF
  __m128i v58; // [rsp+210h] [rbp-248h] BYREF
  __int64 v59; // [rsp+220h] [rbp-238h]
  __m128i si128; // [rsp+230h] [rbp-228h] BYREF
  __int64 v61; // [rsp+240h] [rbp-218h]
  int v62; // [rsp+250h] [rbp-208h] BYREF
  __int64 v63; // [rsp+258h] [rbp-200h]
  __int64 v64; // [rsp+260h] [rbp-1F8h]
  __m128i v65; // [rsp+268h] [rbp-1F0h] BYREF
  __int64 v66; // [rsp+278h] [rbp-1E0h]
  __m128i v67; // [rsp+280h] [rbp-1D8h] BYREF
  __int128 v68; // [rsp+290h] [rbp-1C8h]
  __int128 v69; // [rsp+2A0h] [rbp-1B8h]
  __int128 v70; // [rsp+2B0h] [rbp-1A8h]
  __int128 v71; // [rsp+2C0h] [rbp-198h]
  __int128 v72; // [rsp+2D0h] [rbp-188h]
  __m128i v73[9]; // [rsp+2E0h] [rbp-178h] BYREF
  _BYTE v74[24]; // [rsp+378h] [rbp-E0h] BYREF
  __m128i v75[12]; // [rsp+390h] [rbp-C8h] BYREF

  v6 = a2;
  v7 = a1;
  if ( !a2[128] )
  {
LABEL_44:
    memcpy(v7, v6, 0x90uLL);
    return v7;
  }
  std::fs::read_dir(v73, a2 + 64);
  if ( v73[0].m128i_i8[8] == 2 )
  {
    *(_QWORD *)&v43[1] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                           v73[0].m128i_i64[0],
                           *((_QWORD *)a2 + 9),
                           *((_QWORD *)a2 + 10));
    *((_QWORD *)&v43[1] + 1) = &off_145C80;
    v43[0] = 2uLL;
    std::sync::mpmc::Sender<T>::send(v52, *a6, a6[1], v43);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v52), (__m128i)xmmword_1D8E0)) != 0xFFFF )
    {
      memcpy(&v43[1], &v52[1], 0x90uLL);
      v43[0] = v52[0];
      a1[2] = alloc::boxed::Box<T>::new(v43);
      a1[1] = 0LL;
      *a1 = 2LL;
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  v44 = v73[0].m128i_i64[0];
  v45 = v73[0].m128i_i8[8];
  v9 = *(_QWORD *)(a3 + 8);
  v10 = *(_QWORD *)(a3 + 16);
  v11 = 56LL;
  if ( !v10 )
    v11 = 0LL;
  v55 = *(_QWORD *)(a3 + 8);
  v53 = v11 + v9;
  v34 = *(_BYTE *)(a3 + 52);
  v32 = *(_BYTE *)(a3 + 51);
  v30 = *(_BYTE *)(a3 + 48);
  v38 = a4 + 1;
  v12 = *a6;
  v13 = a6[1];
  v33 = *(_BYTE *)(a3 + 50);
  v31 = *(_BYTE *)(a3 + 49);
  v56 = v10;
  v54 = v11 - 56 * v10;
  v36 = a3;
  v41 = v12;
  v40 = v13;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v62, &v44);
        if ( v62 != 1 )
        {
          v6 = a2;
          core::ptr::drop_in_place<std::fs::ReadDir>(&v44);
          v7 = a1;
          goto LABEL_44;
        }
        if ( v63 )
          break;
        *(_QWORD *)&v43[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v64);
        *((_QWORD *)&v43[1] + 1) = v14;
        v43[0] = 2uLL;
        std::sync::mpmc::Sender<T>::send(v52, v12, v13, v43);
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v52), (__m128i)xmmword_1D8E0)) != 0xFFFF )
        {
          memcpy(&v43[1], &v52[1], 0x90uLL);
          v43[0] = v52[0];
          v6 = a2;
          v7 = a1;
          a1[2] = alloc::boxed::Box<T>::new(v43);
          a1[1] = 0LL;
          *a1 = 2LL;
          goto LABEL_47;
        }
      }
      v46[0] = v63;
      v46[1] = v64;
      v48 = v66;
      v47 = _mm_loadu_si128(&v65);
      std::fs::DirEntry::path(v49, v46);
      uu_du::Stat::new((__int64)v75, v50, v51, (__int64)v46, (_QWORD *)a3);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v75), (__m128i)xmmword_1D730)) == 0xFFFF )
      {
        *(_QWORD *)&v43[1] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                               v75[1].m128i_i64[0],
                               v46);
        *((_QWORD *)&v43[1] + 1) = &off_145C80;
        v43[0] = 2uLL;
        std::sync::mpmc::Sender<T>::send(v52, v12, v13, v43);
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v52), (__m128i)xmmword_1D8E0)) != 0xFFFF )
        {
          memcpy(&v43[1], &v52[1], 0x90uLL);
          v43[0] = v52[0];
          v7 = a1;
          a1[2] = alloc::boxed::Box<T>::new(v43);
          a1[1] = 0LL;
          *a1 = 2LL;
          v6 = a2;
          goto LABEL_46;
        }
        goto LABEL_42;
      }
      memcpy(v73, v75, sizeof(v73));
      if ( !v56 )
        break;
      v15 = v73[4].m128i_i64[1];
      v16 = v73[5].m128i_i64[0];
      v17 = v53;
      v18 = v54;
      v19 = v55;
      while ( 1 )
      {
        v20 = v17;
        alloc::string::String::from_utf8_lossy(v43, v15, v16);
        v21 = glob::Pattern::matches(v19, *((_QWORD *)&v43[0] + 1), *(_QWORD *)&v43[1]);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v43);
        if ( v21 )
          break;
        std::fs::DirEntry::file_name(v74, v46);
        alloc::string::String::from_utf8(v43, v74);
        v58 = _mm_loadu_si128((const __m128i *)((char *)v43 + 8 * __OFSUB__(0LL, *(_QWORD *)&v43[0])));
        v59 = *((_QWORD *)&v43[1] + __OFSUB__(0LL, *(_QWORD *)&v43[0]));
        *((_QWORD *)&v52[1] + 1) = v59;
        *(__m128i *)((char *)v52 + 8) = v58;
        *(_QWORD *)&v52[0] = !__OFSUB__(0LL, *(_QWORD *)&v43[0]);
        core::result::Result<T,E>::unwrap(v43, v52);
        v22 = glob::Pattern::matches(v19, *((_QWORD *)&v43[0] + 1), *(_QWORD *)&v43[1]);
        core::ptr::drop_in_place<alloc::string::String>(v43);
        if ( v22 )
          break;
        v18 += 56LL;
        v17 = v20 + 56;
        v19 = v20;
        if ( v18 == 56 )
          goto LABEL_22;
      }
      if ( (v34 & 1) != 0 )
      {
        *(_QWORD *)&v52[0] = 1LL;
        *((_QWORD *)&v52[0] + 1) = v15;
        *(_QWORD *)&v52[1] = v16;
        BYTE8(v52[1]) = 1;
        v57 = v52;
        v58.m128i_i64[0] = (__int64)&v57;
        v58.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v43[0] = &unk_145C28;
        *((_QWORD *)&v43[0] + 1) = 2LL;
        *(_QWORD *)&v43[2] = 0LL;
        *(_QWORD *)&v43[1] = &v58;
        *((_QWORD *)&v43[1] + 1) = 1LL;
        std::io::stdio::_print(v43);
      }
LABEL_9:
      core::ptr::drop_in_place<uu_du::Stat>(v73);
      core::ptr::drop_in_place<std::path::PathBuf>(v49);
      core::ptr::drop_in_place<std::fs::DirEntry>(v46);
      a3 = v36;
      v12 = v41;
      v13 = v40;
    }
LABEL_22:
    v23 = v73[0].m128i_i8[0];
    if ( (v73[0].m128i_i8[0] & 1) != 0 )
    {
      si128 = _mm_load_si128(&v73[1]);
      v61 = v73[2].m128i_i64[0];
      if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(a5, &si128) )
      {
        if ( (v32 & 1) == 0 )
          goto LABEL_9;
        if ( (v30 & 1) == 0 )
        {
          ++*((_QWORD *)a2 + 13);
          goto LABEL_9;
        }
      }
      hashbrown::map::HashMap<K,V,S,A>::insert(a5, si128.m128i_i64[0], si128.m128i_i64[1], v61);
    }
    if ( !v73[8].m128i_i8[0] )
    {
      v6 = a2;
      *(__m128i *)(a2 + 88) = _mm_add_epi64(
                                _mm_loadu_si128((const __m128i *)(a2 + 88)),
                                _mm_loadu_si128((const __m128i *)&v73[5].m128i_u64[1]));
      ++*((_QWORD *)a2 + 13);
      v12 = v41;
      v13 = v40;
      if ( (v30 & 1) != 0 )
      {
        memcpy(v43, v75, 0x90uLL);
        *(_QWORD *)&v43[9] = v38;
        std::sync::mpmc::Sender<T>::send(v52, v41, v40, v43);
        a3 = v36;
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v52), (__m128i)xmmword_1D8E0)) != 0xFFFF )
          break;
      }
      else
      {
        core::ptr::drop_in_place<uu_du::Stat>(v75);
        a3 = v36;
      }
      goto LABEL_42;
    }
    if ( (v33 & (unsigned __int8)v23 & 1) != 0 && (*a2 & 1) != 0 && v73[2].m128i_i64[0] != *((_QWORD *)a2 + 4) )
      goto LABEL_9;
    memcpy(v43, v75, 0x90uLL);
    a3 = v36;
    v6 = a2;
    uu_du::du(v52, v43, v36, v38, a5, a6);
    v12 = v41;
    v13 = v40;
    v24 = *(_QWORD *)&v52[1];
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v52), (__m128i)xmmword_1D730)) == 0xFFFF )
      goto LABEL_45;
    v25 = v52[0];
    v72 = *(_OWORD *)((char *)&v52[4] + 8);
    v71 = *(_OWORD *)((char *)&v52[3] + 8);
    v70 = *(_OWORD *)((char *)&v52[2] + 8);
    v69 = *(_OWORD *)((char *)&v52[1] + 8);
    v26 = _mm_loadu_si128((const __m128i *)((char *)&v52[5] + 8));
    v27 = *((_QWORD *)&v52[6] + 1);
    v67 = _mm_load_si128((const __m128i *)&v52[7]);
    v68 = v52[8];
    if ( (v31 & 1) == 0 )
    {
      *(__m128i *)(a2 + 88) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a2 + 88)), v26);
      *((_QWORD *)a2 + 13) += v27;
    }
    *(_OWORD *)((char *)&v43[4] + 8) = v72;
    *(_OWORD *)((char *)&v43[3] + 8) = v71;
    *(_OWORD *)((char *)&v43[2] + 8) = v70;
    *(_OWORD *)((char *)&v43[1] + 8) = v69;
    v28 = _mm_load_si128(&v67);
    v43[8] = v68;
    v43[7] = v28;
    v43[0] = v25;
    *(_QWORD *)&v43[1] = v24;
    *(__m128i *)((char *)&v43[5] + 8) = v26;
    *((_QWORD *)&v43[6] + 1) = v27;
    *(_QWORD *)&v43[9] = v38;
    std::sync::mpmc::Sender<T>::send(v52, v41, v40, v43);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128((const __m128i *)v52), (__m128i)xmmword_1D8E0)) != 0xFFFF )
      break;
LABEL_42:
    core::ptr::drop_in_place<std::path::PathBuf>(v49);
    core::ptr::drop_in_place<std::fs::DirEntry>(v46);
  }
  memcpy(&v43[1], &v52[1], 0x90uLL);
  v43[0] = v52[0];
  v24 = alloc::boxed::Box<T>::new(v43);
LABEL_45:
  v7 = a1;
  a1[2] = v24;
  a1[1] = 0LL;
  *a1 = 2LL;
LABEL_46:
  core::ptr::drop_in_place<std::path::PathBuf>(v49);
  core::ptr::drop_in_place<std::fs::DirEntry>(v46);
LABEL_47:
  core::ptr::drop_in_place<std::fs::ReadDir>(&v44);
LABEL_48:
  core::ptr::drop_in_place<uu_du::Stat>(v6);
  return v7;
}