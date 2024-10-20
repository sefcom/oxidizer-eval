__int64 __fastcall uu_wc::wc(__int64 *a1, _BYTE *a2)
{
  int v2; // r15d
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __m128i *v12; // rax
  __m128i *v13; // rsi
  __int64 (__fastcall **v14)(); // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int128 v18; // xmm2
  __int64 result; // rax
  __m128i *v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __int64 v24; // r14
  __m128i *v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbp
  _BYTE *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // r15
  __int64 v34; // rbx
  __int64 (__fastcall **v35)(); // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  _BYTE *v38; // rbp
  _QWORD *v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // rsi
  __int64 v42; // rax
  const char *v43; // rcx
  unsigned __int64 v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rbx
  __m128i v48; // kr10_16
  __int64 v49; // rsi
  unsigned __int64 v50; // rcx
  __m128i v51; // xmm1
  signed __int64 v52; // r15
  __int64 v53; // r13
  _BYTE *v54; // rdi
  __int64 v55; // r12
  const char *v56; // r14
  __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD *v59; // rbx
  __int64 v60; // rsi
  void *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rsi
  unsigned __int64 v65; // rdx
  int v66; // ecx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  const char *v69; // [rsp+0h] [rbp-258h]
  unsigned __int64 v70; // [rsp+8h] [rbp-250h]
  _QWORD *v71; // [rsp+10h] [rbp-248h] BYREF
  _BYTE *v72; // [rsp+18h] [rbp-240h]
  __int64 v73; // [rsp+20h] [rbp-238h]
  unsigned __int64 v74; // [rsp+28h] [rbp-230h]
  __int128 v75; // [rsp+30h] [rbp-228h] BYREF
  __int64 v76; // [rsp+40h] [rbp-218h]
  __m128i v77; // [rsp+48h] [rbp-210h] BYREF
  _QWORD **v78; // [rsp+58h] [rbp-200h]
  __int64 (__fastcall *v79)(); // [rsp+60h] [rbp-1F8h]
  unsigned __int64 v80; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v81; // [rsp+70h] [rbp-1E8h]
  __m128i v82; // [rsp+78h] [rbp-1E0h] BYREF
  __m128i *v83; // [rsp+88h] [rbp-1D0h] BYREF
  _BYTE v84[56]; // [rsp+90h] [rbp-1C8h]
  __m128i v85; // [rsp+C8h] [rbp-190h] BYREF
  _BYTE dest[24]; // [rsp+D8h] [rbp-180h] BYREF
  _BYTE v87[56]; // [rsp+F0h] [rbp-168h]
  __int64 v88; // [rsp+128h] [rbp-130h]
  __int64 v89; // [rsp+188h] [rbp-D0h]
  __m128i v90; // [rsp+190h] [rbp-C8h] BYREF
  unsigned __int64 v91; // [rsp+1A0h] [rbp-B8h]
  __m128i *v92; // [rsp+1A8h] [rbp-B0h]
  __int64 (__fastcall **v93)(); // [rsp+1B0h] [rbp-A8h]
  __int64 v94; // [rsp+1B8h] [rbp-A0h]
  _OWORD v95[2]; // [rsp+1C0h] [rbp-98h] BYREF
  __int64 v96; // [rsp+1E0h] [rbp-78h]
  __m128i v97; // [rsp+1F0h] [rbp-68h] BYREF
  __m128i v98; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v99; // [rsp+210h] [rbp-48h]
  unsigned __int64 v100; // [rsp+220h] [rbp-38h]

  v98 = 0LL;
  v97 = 0LL;
  v99 = 0LL;
  v72 = a2;
  v2 = (unsigned __int8)a2[29];
  v3 = *a1;
  v70 = 1LL;
  v89 = (unsigned __int8)a2[29];
  if ( v2 != 2 )
  {
    if ( !v3 )
    {
      v11 = 7LL;
      if ( v72[24]
         + (unsigned __int8)_mm_cvtsi128_si32(_mm_sad_epu8((__m128i)0LL, _mm_cvtsi32_si128(*(_DWORD *)(v72 + 25)))) == 1 )
        v11 = 1LL;
      v70 = v11;
      goto LABEL_24;
    }
    if ( v3 != 1 )
    {
      v70 = 1LL;
LABEL_27:
      if ( a1[1] == 0x8000000000000001LL )
      {
        uu_wc::files0_iter_stdin((__int64)dest);
        v15 = _rust_alloc(88LL, 8LL);
        if ( !v15 )
          alloc::alloc::handle_alloc_error(8LL, 88LL);
        v13 = (__m128i *)v15;
        *(_QWORD *)(v15 + 80) = v88;
        *(_OWORD *)(v15 + 64) = *(_OWORD *)&v87[40];
        v16 = _mm_loadu_si128((const __m128i *)dest);
        v17 = _mm_loadu_si128((const __m128i *)&dest[16]);
        v18 = *(_OWORD *)&v87[8];
        *(_OWORD *)(v15 + 48) = *(_OWORD *)&v87[24];
        *(_OWORD *)(v15 + 32) = v18;
        *(__m128i *)(v15 + 16) = v17;
        *(__m128i *)v15 = v16;
        v14 = &off_F3238;
      }
      else
      {
        uu_wc::files0_iter_file((__int64)dest, a1[2], a1[3]);
        result = *(_QWORD *)&dest[8];
        if ( *(_QWORD *)dest == 0x8000000000000001LL )
          return result;
        *(_QWORD *)&v84[48] = *(_QWORD *)&v87[48];
        *(_OWORD *)&v84[32] = *(_OWORD *)&v87[32];
        *(_OWORD *)&v84[16] = *(_OWORD *)&v87[16];
        *(_OWORD *)v84 = *(_OWORD *)v87;
        v82 = *(__m128i *)dest;
        v83 = *(__m128i **)&dest[16];
        v20 = (__m128i *)_rust_alloc(80LL, 8LL);
        if ( !v20 )
          alloc::alloc::handle_alloc_error(8LL, 80LL);
        v13 = v20;
        v20[4] = *(__m128i *)&v84[40];
        v21 = _mm_loadu_si128(&v82);
        v22 = _mm_loadu_si128((const __m128i *)&v83);
        v23 = *(__m128i *)&v84[8];
        v20[3] = *(__m128i *)&v84[24];
        v20[2] = v23;
        v20[1] = v22;
        *v20 = v21;
        v14 = &off_F3200;
      }
      goto LABEL_36;
    }
    v4 = a1[3];
    if ( v72[24]
       + (unsigned __int8)_mm_cvtsi128_si32(_mm_sad_epu8((__m128i)0LL, _mm_cvtsi32_si128(*(_DWORD *)(v72 + 25)))) == 1
      && v4 == 1
      || !v4 )
    {
      v70 = 1LL;
      goto LABEL_34;
    }
    v5 = a1[2];
    v6 = 24 * v4;
    v70 = 1LL;
    v7 = 0LL;
    v74 = 0LL;
    do
    {
      if ( *(_QWORD *)(v5 + v7) == 0x8000000000000001LL )
      {
        v70 = 7LL;
      }
      else
      {
        v8 = *(_QWORD *)(v5 + v7 + 8);
        std::sys::pal::unix::fs::stat(dest);
        if ( *(_DWORD *)dest == 2 )
        {
          core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)&dest[8], v8);
        }
        else
        {
          v9 = v88;
          if ( (*(_WORD *)&v87[32] & 0xF000) != 0x8000 )
            v9 = 0LL;
          v10 = v70;
          if ( (*(_WORD *)&v87[32] & 0xF000) != 0x8000 )
            v10 = 7LL;
          v70 = v10;
          v74 += v9;
        }
      }
      v7 += 24LL;
    }
    while ( v6 != v7 );
    if ( v74 )
    {
      v65 = v74 / 0x2540BE400LL;
      v66 = 10;
      if ( v74 >> 10 < 0x9502F9 )
      {
        v66 = 0;
        v65 = v74;
      }
      if ( v65 >= (unsigned __int64)&unk_186A0 )
      {
        v65 /= 0x186A0uLL;
        v66 |= 5u;
      }
      v67 = v66
          + (((unsigned int)((unsigned int)&loc_5FFF6 + v65) & ((_DWORD)v65 + 524188) ^ ((_DWORD)v65 + 916504) & ((_DWORD)v65 + 514288)) >> 17)
          + 1;
      v68 = v70;
      if ( v67 > v70 )
        v68 = v67;
      v70 = v68;
    }
  }
  if ( !v3 )
  {
LABEL_24:
    *(_QWORD *)dest = 0x8000000000000001LL;
    dest[8] = 1;
    v12 = (__m128i *)_rust_alloc(24LL, 8LL);
    if ( !v12 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v13 = v12;
    v12[1].m128i_i64[0] = *(_QWORD *)&dest[16];
    *v12 = _mm_loadu_si128((const __m128i *)dest);
    v14 = &off_F3190;
    goto LABEL_36;
  }
  if ( v3 == 2 )
    goto LABEL_27;
  v4 = a1[3];
LABEL_34:
  v24 = a1[2];
  v25 = (__m128i *)_rust_alloc(16LL, 8LL);
  if ( !v25 )
    alloc::alloc::handle_alloc_error(8LL, 16LL);
  v13 = v25;
  v25->m128i_i64[0] = v24;
  v25->m128i_i64[1] = v24 + 24 * v4;
  v14 = (__int64 (__fastcall **)())&unk_F31C8;
LABEL_36:
  v26 = *(_QWORD *)v72;
  v27 = 0x8000000000000001LL;
  v28 = 0x8000000000000002LL;
  if ( *(_QWORD *)v72 == 0x8000000000000001LL )
  {
    v28 = (unsigned __int8)v72[8];
    v26 = 0x8000000000000001LL;
  }
  else if ( v26 != 0x8000000000000002LL )
  {
    v28 = *((_QWORD *)v72 + 1);
    v27 = *((_QWORD *)v72 + 2);
    v26 = 0x8000000000000000LL;
  }
  v90.m128i_i64[0] = v26;
  v90.m128i_i64[1] = v28;
  v100 = v27;
  v91 = v27;
  v92 = v13;
  v93 = v14;
  v94 = 0LL;
  v29 = 0LL;
  v30 = dest;
  v74 = 0x8000000000000003LL;
  v81 = 0x8000000000000001LL;
  while ( 1 )
  {
    ((void (__fastcall *)(_BYTE *))v14[3])(v30);
    v33 = *(_QWORD *)dest;
    if ( *(_QWORD *)dest == v74 )
      break;
    v34 = *(_QWORD *)&dest[8];
    v35 = *(__int64 (__fastcall ***)())&dest[16];
    v36 = ++v94;
    if ( *(_QWORD *)dest < v81 && !*(_QWORD *)&dest[16] )
    {
      if ( v90.m128i_i64[0] == 0x8000000000000001LL )
      {
        v42 = 1LL;
        v43 = anon_8ae93ed5783cc3dfed1aac42e59f686c_18_llvm_7002947973987599328;
        v44 = 0x8000000000000000LL;
      }
      else
      {
        if ( v90.m128i_i64[0] == 0x8000000000000002LL )
        {
          *(_QWORD *)dest = v74;
          goto LABEL_65;
        }
        uucore::features::quoting_style::escape_name_inner(
          v30,
          v90.m128i_i64[1],
          v91,
          &anon_8ae93ed5783cc3dfed1aac42e59f686c_19_llvm_7002947973987599328,
          0LL);
        v43 = *(const char **)&dest[8];
        v44 = *(_QWORD *)dest;
        v42 = *(_QWORD *)&dest[16];
      }
      *(_OWORD *)dest = __PAIR128__((unsigned __int64)v43, v44);
      *(_QWORD *)&dest[16] = v42;
      *(_QWORD *)v87 = v36;
LABEL_65:
      v37 = _rust_alloc(32LL, 8LL);
      if ( !v37 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v45 = _mm_loadu_si128((const __m128i *)dest);
      *(__m128i *)(v37 + 16) = _mm_loadu_si128((const __m128i *)&dest[16]);
      *(__m128i *)v37 = v45;
      if ( 2 * v33 )
      {
        v46 = v34;
        v47 = v37;
        _rust_dealloc(v46, v33, 1LL);
        v37 = v47;
      }
      ++v29;
      v35 = &off_F3120;
LABEL_69:
      v77.m128i_i64[0] = v37;
      v77.m128i_i64[1] = (__int64)v35;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, ((__int64 (__fastcall *)(__int64))v35[12])(v37));
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v95[0] = _mm_loadu_si128((const __m128i *)&xmmword_F8220);
      v82.m128i_i64[0] = (__int64)v95;
      v82.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v83 = &v77;
      *(_QWORD *)v84 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_F3358;
      *(_QWORD *)&dest[8] = 3LL;
      *(_QWORD *)&v87[8] = 0LL;
      *(_QWORD *)&dest[16] = &v82;
      *(_QWORD *)v87 = 2LL;
      std::io::stdio::_eprint(v30);
      v48 = v77;
      if ( *(_QWORD *)v77.m128i_i64[1] )
        (*(void (__fastcall **)(__int64))v77.m128i_i64[1])(v77.m128i_i64[0]);
      v41 = *(_QWORD *)(v48.m128i_i64[1] + 8);
      if ( v41 )
      {
        v31 = *(_QWORD *)(v48.m128i_i64[1] + 16);
        v32 = v48.m128i_i64[0];
LABEL_43:
        _rust_dealloc(v32, v41, v31);
        goto LABEL_44;
      }
      goto LABEL_44;
    }
    ++v29;
    if ( *(_QWORD *)dest == 0x8000000000000002LL )
    {
      v37 = *(_QWORD *)&dest[8];
      goto LABEL_69;
    }
    v73 = 0x8000000000000002LL;
    v80 = v29;
    v75 = *(_OWORD *)dest;
    v76 = *(_QWORD *)&dest[16];
    v38 = v30;
    uu_wc::word_count_from_input((__int64)v30, &v75, v72);
    if ( *(_QWORD *)dest )
    {
      if ( *(_DWORD *)dest == 2 )
      {
        v71 = (_QWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                          *(_QWORD *)&dest[8],
                          &v75);
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v85 = _mm_loadu_si128((const __m128i *)&xmmword_F8220);
        v77.m128i_i64[0] = (__int64)&v85;
        v77.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v78 = &v71;
        v79 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v82.m128i_i64[0] = (__int64)&unk_F3358;
        v82.m128i_i64[1] = 3LL;
        *(_QWORD *)&v84[8] = 0LL;
        v83 = &v77;
        *(_QWORD *)v84 = 2LL;
        std::io::stdio::_eprint(&v82);
        v39 = v71;
        v40 = *v71;
        if ( *v71 != 0x8000000000000000LL && v40 )
          _rust_dealloc(v71[1], v40, 1LL);
        core::ptr::drop_in_place<std::io::error::Error>(v39[3], v40);
        v29 = v80;
        _rust_dealloc(v39, 32LL, 8LL);
        v41 = v75;
        if ( (__int64)v75 < v73 )
          goto LABEL_44;
        goto LABEL_117;
      }
      v71 = (_QWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                        *(_QWORD *)&v87[24],
                        &v75);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v85 = _mm_loadu_si128((const __m128i *)&xmmword_F8220);
      v77.m128i_i64[0] = (__int64)&v85;
      v77.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v78 = &v71;
      v79 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v82.m128i_i64[0] = (__int64)&unk_F3358;
      v82.m128i_i64[1] = 3LL;
      *(_QWORD *)&v84[8] = 0LL;
      v83 = &v77;
      *(_QWORD *)v84 = 2LL;
      std::io::stdio::_eprint(&v82);
      v34 = (__int64)v71;
      v49 = *v71;
      if ( *v71 != 0x8000000000000000LL && v49 )
        _rust_dealloc(v71[1], v49, 1LL);
      core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)(v34 + 24), v49);
      _rust_dealloc(v34, 32LL, 8LL);
    }
    v50 = v99;
    if ( v99 <= *(_QWORD *)&v87[16] )
      v50 = *(_QWORD *)&v87[16];
    v96 = *(_QWORD *)&v87[16];
    v95[1] = *(_OWORD *)v87;
    v95[0] = *(_OWORD *)&dest[8];
    v51 = _mm_add_epi64(_mm_load_si128(&v98), *(__m128i *)v87);
    v97 = _mm_add_epi64(_mm_load_si128(&v97), *(__m128i *)&dest[8]);
    v98 = v51;
    v99 = v50;
    if ( (_DWORD)v89 == 2 )
    {
      v29 = v80;
      goto LABEL_116;
    }
    if ( (_QWORD)v75 == v81 )
    {
      if ( !BYTE8(v75) )
      {
        v34 = 1LL;
        v56 = anon_8ae93ed5783cc3dfed1aac42e59f686c_18_llvm_7002947973987599328;
        v69 = anon_8ae93ed5783cc3dfed1aac42e59f686c_18_llvm_7002947973987599328;
        v52 = 0x8000000000000000LL;
        goto LABEL_104;
      }
      v52 = v81;
    }
    else
    {
      v53 = *((_QWORD *)&v75 + 1);
      v54 = v30;
      v55 = v76;
      std::sys::os_str::bytes::Slice::to_str(v54, *((_QWORD *)&v75 + 1));
      v69 = *(const char **)&dest[8];
      if ( !*(_QWORD *)dest )
      {
        v34 = *(_QWORD *)&dest[16];
        if ( *(_QWORD *)&dest[16] > 0xFuLL )
        {
          v52 = 0x8000000000000000LL;
          v56 = *(const char **)&dest[8];
          if ( core::slice::memchr::memchr_aligned(10LL, *(_QWORD *)&dest[8], *(_QWORD *)&dest[16]) != 1 )
            goto LABEL_104;
        }
        else
        {
          if ( !*(_QWORD *)&dest[16] )
          {
            v52 = 0x8000000000000000LL;
            v34 = 0LL;
            goto LABEL_103;
          }
          v57 = 0LL;
          while ( *(_BYTE *)(*(_QWORD *)&dest[8] + v57) != 10 )
          {
            if ( *(_QWORD *)&dest[16] == ++v57 )
            {
              v52 = 0x8000000000000000LL;
              goto LABEL_103;
            }
          }
        }
      }
      uucore::features::quoting_style::escape_name_inner(
        v38,
        v53,
        v55,
        &anon_8ae93ed5783cc3dfed1aac42e59f686c_19_llvm_7002947973987599328,
        0LL);
      v69 = *(const char **)&dest[8];
      v52 = *(_QWORD *)dest;
      v34 = *(_QWORD *)&dest[16];
      if ( *(_QWORD *)dest == 0x8000000000000000LL )
      {
        v52 = 0x8000000000000000LL;
LABEL_103:
        v56 = v69;
        goto LABEL_104;
      }
      if ( *(_QWORD *)dest != 0x8000000000000001LL )
        goto LABEL_103;
    }
    v56 = 0LL;
LABEL_104:
    v58 = uu_wc::print_stats(v72, v95, v56, v34, v70);
    v30 = v38;
    v29 = v80;
    if ( v58 )
    {
      if ( !v56 )
      {
        v56 = (const char *)&unk_19FD6;
        v34 = 7LL;
      }
      v85.m128i_i64[0] = (__int64)v56;
      v85.m128i_i64[1] = v34;
      v71 = (_QWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                        v58,
                        &v85);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v77 = _mm_loadu_si128((const __m128i *)&xmmword_F8220);
      v82.m128i_i64[0] = (__int64)&v77;
      v82.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v83 = (__m128i *)&v71;
      *(_QWORD *)v84 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_F3358;
      *(_QWORD *)&dest[8] = 3LL;
      *(_QWORD *)&v87[8] = 0LL;
      *(_QWORD *)&dest[16] = &v82;
      *(_QWORD *)v87 = 2LL;
      std::io::stdio::_eprint(v30);
      v59 = v71;
      v60 = *v71;
      if ( *v71 != 0x8000000000000000LL && v60 )
        _rust_dealloc(v71[1], v60, 1LL);
      core::ptr::drop_in_place<std::io::error::Error>(v59[3], v60);
      _rust_dealloc(v59, 32LL, 8LL);
    }
    if ( v52 >= (__int64)0x8000000000000002LL && v52 )
      _rust_dealloc(v69, v52, 1LL);
LABEL_116:
    v41 = v75;
    if ( (__int64)v75 < v73 )
      goto LABEL_44;
LABEL_117:
    if ( v41 )
    {
      v32 = *((_QWORD *)&v75 + 1);
      v31 = 1LL;
      goto LABEL_43;
    }
LABEL_44:
    v14 = v93;
  }
  core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<uu_wc::Inputs::try_iter::{{closure}}>>(&v90);
  if ( (unsigned int)(v89 - 1) < 2 || !(_DWORD)v89 && v29 >= 2 )
  {
    v61 = 0LL;
    if ( (_DWORD)v89 != 2 )
      v61 = &unk_19FCE;
    v62 = uu_wc::print_stats(v72, &v97, v61, 5LL, v70);
    if ( v62 )
    {
      *(_QWORD *)&v95[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v62);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v90 = _mm_loadu_si128((const __m128i *)&xmmword_F8220);
      v82.m128i_i64[0] = (__int64)&v90;
      v82.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v83 = (__m128i *)v95;
      *(_QWORD *)v84 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_F3358;
      *(_QWORD *)&dest[8] = 3LL;
      *(_QWORD *)&v87[8] = 0LL;
      *(_QWORD *)&dest[16] = &v82;
      *(_QWORD *)v87 = 2LL;
      std::io::stdio::_eprint(dest);
      v63 = *(_QWORD *)&v95[0];
      v64 = **(_QWORD **)&v95[0];
      if ( **(_QWORD **)&v95[0] != 0x8000000000000000LL && v64 )
        _rust_dealloc(*(_QWORD *)(*(_QWORD *)&v95[0] + 8LL), v64, 1LL);
      core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)(v63 + 24), v64);
      _rust_dealloc(v63, 32LL, 8LL);
    }
  }
  return 0LL;
}
