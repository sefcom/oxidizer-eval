__int64 __fastcall uu_hostname::display_hostname(char *a1)
{
  char *v1; // r15
  __m128i v2; // kr00_16
  __int64 result; // rax
  const void *v4; // rbp
  size_t v5; // rbx
  __int64 v6; // rax
  void *v7; // r14
  unsigned int flag; // eax
  size_t v10; // rsi
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // r15
  const __m128i *v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rax
  int v18; // ecx
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  char *v23; // r12
  __int64 i; // r14
  __m128i v25; // xmm1
  __int64 v27; // rsi
  int v28; // eax
  char *v29; // rax
  void **v30; // r15
  void *v31; // r13
  size_t v32; // rbx
  size_t v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rbx
  __m128i v36; // xmm0
  __int64 v37; // r12
  char *v38; // r13
  unsigned __int8 *v39; // rsi
  unsigned __int8 *v40; // rcx
  unsigned __int8 *v41; // rdi
  char *v42; // rbp
  int v43; // edx
  int v44; // esi
  int v45; // r9d
  int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rbx
  char **v51; // r8
  char *v52; // rdx
  char *v53; // rbp
  char v54; // [rsp+7h] [rbp-151h]
  __int64 v55; // [rsp+8h] [rbp-150h] BYREF
  __int64 v56; // [rsp+10h] [rbp-148h]
  __int64 v57; // [rsp+18h] [rbp-140h]
  __m128i v58; // [rsp+20h] [rbp-138h] BYREF
  __m128i v59; // [rsp+30h] [rbp-128h]
  void ***v60; // [rsp+40h] [rbp-118h]
  __int64 (__fastcall **v61)(); // [rsp+48h] [rbp-110h]
  __int64 v62; // [rsp+50h] [rbp-108h]
  char v63; // [rsp+58h] [rbp-100h]
  void **v64; // [rsp+68h] [rbp-F0h] BYREF
  void *src; // [rsp+70h] [rbp-E8h]
  size_t n; // [rsp+78h] [rbp-E0h]
  void *v67[2]; // [rsp+80h] [rbp-D8h] BYREF
  size_t v68[2]; // [rsp+90h] [rbp-C8h]
  __m128i v69; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i v70; // [rsp+B0h] [rbp-A8h] BYREF
  size_t v71; // [rsp+C0h] [rbp-98h]
  __int64 v72; // [rsp+C8h] [rbp-90h]
  __int64 v73; // [rsp+D0h] [rbp-88h]
  __int64 v74; // [rsp+D8h] [rbp-80h]
  char *v75; // [rsp+E0h] [rbp-78h]
  __int16 v76; // [rsp+E8h] [rbp-70h] BYREF
  _BYTE v77[28]; // [rsp+EAh] [rbp-6Eh] BYREF
  __int16 v78; // [rsp+106h] [rbp-52h]
  __int64 v79; // [rsp+108h] [rbp-50h]
  _QWORD v80[2]; // [rsp+110h] [rbp-48h] BYREF
  __int64 v81; // [rsp+120h] [rbp-38h]

  v1 = a1;
  hostname::get(&v58);
  v2 = v58;
  if ( v58.m128i_i64[0] == 0x8000000000000000LL )
    return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v58.m128i_i64[1]);
  std::sys::os_str::bytes::Slice::to_string_lossy(v67, v58.m128i_i64[1], v59.m128i_i64[0]);
  if ( v67[0] != (void *)0x8000000000000000LL )
  {
    v71 = v68[0];
    v70 = _mm_loadu_si128((const __m128i *)v67);
    if ( !v2.m128i_i64[0] )
      goto LABEL_10;
    goto LABEL_9;
  }
  v75 = a1;
  v4 = v67[1];
  v5 = v68[0];
  if ( v68[0] )
  {
    if ( (v68[0] & 0x8000000000000000LL) != 0LL )
    {
      v73 = 0LL;
    }
    else
    {
      v73 = 1LL;
      v6 = _rust_alloc(v68[0], 1LL);
      if ( v6 )
      {
        v7 = (void *)v6;
        goto LABEL_78;
      }
    }
    alloc::raw_vec::handle_error(v73, v5);
  }
  v7 = &dword_0 + 1;
LABEL_78:
  memcpy(v7, v4, v5);
  v70.m128i_i64[0] = v5;
  v70.m128i_i64[1] = (__int64)v7;
  v71 = v5;
  v1 = v75;
  if ( v2.m128i_i64[0] )
LABEL_9:
    _rust_dealloc(v2.m128i_i64[1], v2.m128i_i64[0], 1LL);
LABEL_10:
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v1, aIpAddress, 10LL);
  _RBX = flag;
  if ( !(_BYTE)flag )
  {
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v1, aShort, 5LL)
      && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v1, aDomain, 6LL) )
    {
LABEL_62:
      v67[0] = &v70;
      v67[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v58.m128i_i64[0] = (__int64)&unk_E1E38;
      v58.m128i_i64[1] = 2LL;
      v60 = 0LL;
      v59.m128i_i64[0] = (__int64)v67;
      v59.m128i_i64[1] = 1LL;
      std::io::stdio::_print(&v58);
LABEL_74:
      if ( (_BYTE)_RBX )
        return 0LL;
      v48 = v70.m128i_i64[0];
      if ( !v70.m128i_i64[0] )
        return 0LL;
      v49 = v70.m128i_i64[1];
      goto LABEL_98;
    }
    v37 = v70.m128i_i64[1];
    v38 = (char *)v71;
    v39 = 0LL;
    v40 = (unsigned __int8 *)v70.m128i_i64[1];
    do
    {
      if ( v40 == (unsigned __int8 *)(v70.m128i_i64[1] + v71) )
        goto LABEL_62;
      v42 = (char *)v39;
      v43 = *v40;
      if ( (v43 & 0x80u) == 0 )
      {
        v41 = v40 + 1;
      }
      else
      {
        v44 = v43 & 0x1F;
        v45 = v40[1] & 0x3F;
        if ( (unsigned __int8)v43 <= 0xDFu )
        {
          v41 = v40 + 2;
          v43 = v45 | (v44 << 6);
        }
        else
        {
          v46 = (v45 << 6) | v40[2] & 0x3F;
          if ( (unsigned __int8)v43 < 0xF0u )
          {
            v41 = v40 + 3;
            v43 = (v44 << 12) | v46;
          }
          else
          {
            v41 = v40 + 4;
            v43 = ((v43 & 7) << 18) | (v46 << 6) | v40[3] & 0x3F;
          }
        }
      }
      v39 = &v41[v42 - (char *)v40];
      v40 = v41;
    }
    while ( v43 != 46 );
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v1, aShort, 5LL) )
    {
      if ( v42 )
      {
        if ( v42 >= v38 )
        {
          if ( v42 != v38 )
            goto LABEL_86;
        }
        else if ( v42[v37] <= -65 )
        {
LABEL_86:
          v51 = &off_E1E58;
          v52 = 0LL;
          goto LABEL_91;
        }
      }
      v67[0] = (void *)v37;
      v67[1] = v42;
      v64 = v67;
      src = <&T as core::fmt::Display>::fmt;
      v58.m128i_i64[0] = (__int64)&unk_E1E38;
      v58.m128i_i64[1] = 2LL;
      v60 = 0LL;
      v59.m128i_i64[0] = (__int64)&v64;
      v59.m128i_i64[1] = 1LL;
      std::io::stdio::_print(&v58);
LABEL_96:
      v48 = v70.m128i_i64[0];
      if ( !v70.m128i_i64[0] )
        return 0LL;
      v49 = v37;
LABEL_98:
      _rust_dealloc(v49, v48, 1LL);
      return 0LL;
    }
    v53 = v42 + 1;
    if ( v53 )
    {
      if ( v38 <= v53 )
      {
        if ( v38 != v53 )
          goto LABEL_90;
      }
      else if ( v53[v37] <= -65 )
      {
LABEL_90:
        v51 = &off_E1E20;
        v52 = v53;
        v42 = v38;
LABEL_91:
        core::str::slice_error_fail(v37, v38, v52, v42, v51);
      }
    }
    v67[0] = &v53[v37];
    v67[1] = (void *)(v38 - v53);
    v64 = v67;
    src = <&T as core::fmt::Display>::fmt;
    v58.m128i_i64[0] = (__int64)&unk_E1E38;
    v58.m128i_i64[1] = 2LL;
    v60 = 0LL;
    v59.m128i_i64[0] = (__int64)&v64;
    v59.m128i_i64[1] = 1LL;
    std::io::stdio::_print(&v58);
    goto LABEL_96;
  }
  v58 = _mm_load_si128(&v70);
  v10 = v71;
  v59.m128i_i64[0] = v71;
  if ( v58.m128i_i64[0] - v71 < 2 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v58, v71, 2LL);
    v10 = v59.m128i_i64[0];
  }
  *(_WORD *)(v58.m128i_i64[1] + v10) = 12602;
  v68[0] = v10 + 2;
  *(__m128i *)v67 = _mm_load_si128(&v58);
  <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v58, v67);
  v11 = v58.m128i_i64[1];
  v12 = v58.m128i_i64[0];
  if ( v58.m128i_i64[0] )
  {
    v79 = v59.m128i_i64[1];
    v13 = v59.m128i_i64[0];
    if ( v67[0] )
      _rust_dealloc(v67[1], v67[0], 1LL);
    v14 = (const __m128i *)core::ops::function::FnOnce::call_once(0LL);
    v72 = v13;
    v74 = v12;
    v54 = _RBX;
    if ( !v14 )
      core::result::unwrap_failed(
        anon_abeeb11670d94b201cd314c63a539ca0_3_llvm_10998842519670134139,
        70LL,
        v80,
        &anon_abeeb11670d94b201cd314c63a539ca0_7_llvm_10998842519670134139,
        &anon_abeeb11670d94b201cd314c63a539ca0_5_llvm_10998842519670134139);
    v15 = _mm_loadu_si128(v14);
    ++v14->m128i_i64[0];
    *(_OWORD *)v68 = xmmword_E2008;
    *(__m128i *)v67 = _mm_loadu_si128((const __m128i *)&anon_637b7dc9a87915f3e8bfc94ee1ffa713_2_llvm_11052658419777295833);
    v69 = v15;
    v55 = 0LL;
    v56 = 1LL;
    v57 = 0LL;
    while ( v11 != v79 && *(_WORD *)v11 != 2 )
    {
      v76 = *(_WORD *)v11;
      v16 = _mm_loadu_si128((const __m128i *)(v11 + 2));
      v17 = *(_QWORD *)(v11 + 18);
      v18 = *(_DWORD *)(v11 + 26);
      v81 = v11;
      v78 = *(_WORD *)(v11 + 30);
      *(_DWORD *)&v77[24] = v18;
      *(_QWORD *)&v77[16] = v17;
      *(__m128i *)v77 = v16;
      if ( v68[1] )
      {
        v19 = core::hash::BuildHasher::hash_one(&v69, &v76);
        v20 = v19 & (unsigned __int64)v67[1];
        v21 = _mm_cvtsi32_si128(v19 >> 57);
        v22 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v21, v21), 0), 0);
        v75 = (char *)v67[0];
        v23 = (char *)v67[0] - 32;
        LODWORD(v73) = *(_DWORD *)&v77[22];
        for ( i = 0LL; ; i += 16LL )
        {
          v25 = _mm_loadu_si128((const __m128i *)&v75[v20]);
          _EBP = _mm_movemask_epi8(_mm_cmpeq_epi8(v25, v22));
          if ( _EBP )
          {
            do
            {
              __asm { tzcnt   ebx, ebp }
              _RBX = 32 * ((unsigned __int64)v67[1] & (v20 + _RBX));
              v29 = &v23[-_RBX];
              if ( v76 == *(_WORD *)&v23[-_RBX] )
              {
                if ( v76 )
                {
                  _RBX = *(_QWORD *)&v77[2] ^ *(_QWORD *)(v29 + 4);
                  if ( *(_OWORD *)&v77[2] == *(_OWORD *)(v29 + 4)
                    && *(_WORD *)&v77[26] == *((_WORD *)v29 + 14)
                    && *(_DWORD *)&v77[18] == *((_DWORD *)v29 + 5)
                    && (_DWORD)v73 == *((_DWORD *)v29 + 6) )
                  {
                    goto LABEL_18;
                  }
                }
                else if ( *(_DWORD *)v77 == *(_DWORD *)(v29 + 2) && *((_WORD *)v29 + 3) == *(_WORD *)&v77[4] )
                {
                  goto LABEL_18;
                }
              }
              v28 = _EBP - 1;
              LOWORD(v28) = _EBP & (_EBP - 1);
              _EBP = v28;
            }
            while ( (_WORD)v28 );
          }
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v25, (__m128i)anon_637b7dc9a87915f3e8bfc94ee1ffa713_1_llvm_11052658419777295833)) )
            break;
          v27 = i + v20 + 16;
          v20 = (unsigned __int64)v67[1] & v27;
        }
      }
      v64 = 0LL;
      src = &dword_0 + 1;
      n = 0LL;
      v62 = 32LL;
      v63 = 3;
      v58.m128i_i64[0] = 0LL;
      v59.m128i_i64[0] = 0LL;
      v60 = &v64;
      v61 = &off_E1D90;
      if ( (unsigned __int8)<core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt(&v76, &v58) )
        core::result::unwrap_failed(aADisplayImplem_1, 55LL, v80, &unk_E1DD8, &off_E1DC0);
      v30 = v64;
      v31 = src;
      v32 = n;
      if ( n >= 2 && *(_WORD *)((char *)src + n - 2) == 12602 )
      {
        v33 = n - 2;
        if ( n != 2 && *((char *)src + v33) <= -65 )
          core::panicking::panic(aAssertionFaile_5, 48LL, &off_E1DF8);
        if ( n >= v33 )
          v32 = n - 2;
      }
      v34 = v57;
      if ( v55 - v57 < v32 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v55, v57, v32);
        v34 = v57;
      }
      memcpy((void *)(v56 + v34), v31, v32);
      v35 = v57 + v32;
      v57 = v35;
      if ( v35 == v55 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v55);
      *(_BYTE *)(v56 + v35) = 32;
      _RBX = v35 + 1;
      v57 = _RBX;
      v36 = _mm_loadu_si128((const __m128i *)&v76);
      v59 = _mm_loadu_si128((const __m128i *)&v77[14]);
      v58 = v36;
      hashbrown::map::HashMap<K,V,S,A>::insert(v67, &v58);
      if ( v30 )
        _rust_dealloc(v31, v30, 1LL);
LABEL_18:
      v11 = v81 + 32;
    }
    if ( v72 )
      _rust_dealloc(v74, 32 * v72, 4LL);
    LOBYTE(_RBX) = v54;
    if ( v57 )
    {
      v47 = v57 - 1;
      if ( v57 != 1 && *(char *)(v56 + v47) <= -65 )
        core::str::slice_error_fail(v56, v57, 0LL, v47, &off_E1E70);
      v64 = (void **)v56;
      src = (void *)(v57 - 1);
      v80[0] = &v64;
      v80[1] = <&T as core::fmt::Display>::fmt;
      v58.m128i_i64[0] = (__int64)&unk_E1E38;
      v58.m128i_i64[1] = 2LL;
      v60 = 0LL;
      v59.m128i_i64[0] = (__int64)v80;
      v59.m128i_i64[1] = 1LL;
      std::io::stdio::_print(&v58);
    }
    if ( v55 )
      _rust_dealloc(v56, v55, 1LL);
    if ( v67[1] && 33 * (__int64)v67[1] != -49 )
      _rust_dealloc((char *)v67[0] - 32 * (__int64)v67[1] - 32, 33 * (__int64)v67[1] + 49, 16LL);
    goto LABEL_74;
  }
  result = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v58.m128i_i64[1]);
  if ( v67[0] )
  {
    v50 = result;
    _rust_dealloc(v67[1], v67[0], 1LL);
    return v50;
  }
  return result;
}
