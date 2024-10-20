__int64 *__fastcall uu_unexpand::Options::new(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v3; // rbx
  char *v4; // r15
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  char v8; // r12
  char *v9; // r14
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  char *v13; // rbx
  unsigned __int8 *v14; // r13
  __int64 v15; // r14
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // r13
  signed __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbp
  char flag; // r15
  __int64 v29; // rax
  _QWORD *v30; // r12
  _BYTE *v31; // rax
  unsigned __int8 *v32; // r14
  unsigned __int8 *v33; // rbp
  unsigned __int8 *v34; // r15
  int v35; // ecx
  unsigned __int8 *v36; // r12
  unsigned int v37; // edi
  int v38; // edi
  int v39; // edx
  int v40; // eax
  char v41; // cl
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // r14
  __int64 v45; // rax
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r9
  char v48; // dl
  bool v49; // cl
  unsigned __int64 v50; // r8
  __int64 v51; // rsi
  __int64 v52; // rdi
  unsigned __int64 v53; // r8
  __int64 v55; // [rsp+0h] [rbp-1E8h]
  char v56; // [rsp+0h] [rbp-1E8h]
  unsigned __int64 v57; // [rsp+8h] [rbp-1E0h]
  __int64 v58; // [rsp+8h] [rbp-1E0h]
  __int64 v59; // [rsp+10h] [rbp-1D8h]
  __int64 v61; // [rsp+20h] [rbp-1C8h] BYREF
  _BYTE v62[40]; // [rsp+28h] [rbp-1C0h]
  __int128 v63; // [rsp+50h] [rbp-198h]
  __int64 v64; // [rsp+60h] [rbp-188h]
  __int64 v65; // [rsp+68h] [rbp-180h]
  __int128 v66; // [rsp+70h] [rbp-178h] BYREF
  __int128 v67; // [rsp+80h] [rbp-168h]
  __int128 v68; // [rsp+90h] [rbp-158h]
  __int64 v69; // [rsp+A0h] [rbp-148h]
  __int64 v70; // [rsp+A8h] [rbp-140h]
  __int128 v71; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v72; // [rsp+C0h] [rbp-128h]
  __int64 v73; // [rsp+D0h] [rbp-118h]
  __int128 v74; // [rsp+E0h] [rbp-108h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-F8h]
  __int64 v76; // [rsp+100h] [rbp-E8h]
  const char *v77; // [rsp+108h] [rbp-E0h] BYREF
  __int64 (__fastcall *v78)(); // [rsp+110h] [rbp-D8h]
  __int128 *v79; // [rsp+118h] [rbp-D0h]
  __int64 (__fastcall *v80)(); // [rsp+120h] [rbp-C8h]
  _QWORD v81[2]; // [rsp+128h] [rbp-C0h] BYREF
  __int64 v82; // [rsp+138h] [rbp-B0h] BYREF
  __int128 v83; // [rsp+140h] [rbp-A8h]
  __int128 v84; // [rsp+150h] [rbp-98h]
  __int128 v85; // [rsp+160h] [rbp-88h]
  __int64 v86; // [rsp+170h] [rbp-78h]
  __int64 v87; // [rsp+178h] [rbp-70h] BYREF
  __int128 v88; // [rsp+180h] [rbp-68h]
  __int128 v89; // [rsp+190h] [rbp-58h]
  __int128 v90; // [rsp+1A0h] [rbp-48h]
  __int64 v91; // [rsp+1B0h] [rbp-38h]

  v2 = a2;
  v3 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v61, a2, &unk_12D94, 4LL);
  v81[0] = &unk_12D94;
  v81[1] = 4LL;
  if ( v61 )
  {
    v76 = *(_QWORD *)&v62[32];
    v75 = *(_OWORD *)&v62[16];
    v74 = *(_OWORD *)v62;
    v77 = (const char *)v81;
    v78 = <&T as core::fmt::Display>::fmt;
    v79 = &v74;
    v80 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v71 = &anon_04bdc9b40990b0650f2353b3ef88e365_4_llvm_8184296018641731324;
    *((_QWORD *)&v71 + 1) = 2LL;
    v73 = 0LL;
    *(_QWORD *)&v72 = &v77;
    *((_QWORD *)&v72 + 1) = 2LL;
    core::panicking::panic_fmt(&v71, &anon_04bdc9b40990b0650f2353b3ef88e365_6_llvm_8184296018641731324);
  }
  v66 = *(_OWORD *)&v62[8];
  v67 = *(_OWORD *)&v62[24];
  v68 = v63;
  v69 = v64;
  v70 = a2;
  if ( !*(_QWORD *)v62 )
  {
    v17 = (_QWORD *)_rust_alloc(8LL, 8LL);
    if ( !v17 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v18 = v17;
    *v17 = 8LL;
    v7 = 1LL;
    v58 = 1LL;
LABEL_27:
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v2, aAll, 3LL) )
    {
      v23 = *(_QWORD *)(v2 + 16);
      if ( !v23 )
      {
LABEL_41:
        v56 = 0;
        goto LABEL_42;
      }
      v24 = *(_QWORD *)(v2 + 8);
      v25 = 16 * v23;
      v26 = 0LL;
      while ( *(_QWORD *)(v24 + v26 + 8) != 4LL || **(_DWORD **)(v24 + v26) != 1935827316 )
      {
        v26 += 16LL;
        if ( v25 == v26 )
          goto LABEL_41;
      }
    }
    v56 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v2, aFirstOnly, 10LL) ^ 1;
LABEL_42:
    v27 = v70;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v70, aNoUtf8, 7LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v61, v27, aFile, 4LL);
    v77 = aFile;
    v78 = (__int64 (__fastcall *)())&byte_4;
    if ( v61 )
    {
      v73 = *(_QWORD *)&v62[32];
      v72 = *(_OWORD *)&v62[16];
      v71 = *(_OWORD *)v62;
      *(_QWORD *)&v74 = &v77;
      *((_QWORD *)&v74 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v75 = &v71;
      *((_QWORD *)&v75 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      *(_QWORD *)&v66 = &anon_04bdc9b40990b0650f2353b3ef88e365_4_llvm_8184296018641731324;
      *((_QWORD *)&v66 + 1) = 2LL;
      *(_QWORD *)&v68 = 0LL;
      *(_QWORD *)&v67 = &v74;
      *((_QWORD *)&v67 + 1) = 2LL;
      core::panicking::panic_fmt(&v66, &anon_04bdc9b40990b0650f2353b3ef88e365_6_llvm_8184296018641731324);
    }
    v66 = *(_OWORD *)&v62[8];
    v67 = *(_OWORD *)&v62[24];
    v68 = v63;
    v69 = v64;
    if ( *(_QWORD *)v62 )
    {
      v87 = *(_QWORD *)v62;
      v88 = v66;
      v89 = v67;
      v90 = v68;
      v91 = v69;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v61, &v87);
    }
    else
    {
      v29 = _rust_alloc(24LL, 8LL);
      if ( !v29 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v30 = (_QWORD *)v29;
      v31 = (_BYTE *)_rust_alloc(1LL, 1LL);
      if ( !v31 )
        alloc::raw_vec::handle_error(1LL, 1LL);
      *v31 = 45;
      *v30 = 1LL;
      v30[1] = v31;
      v30[2] = 1LL;
      v61 = 1LL;
      *(_QWORD *)v62 = v30;
      *(_QWORD *)&v62[8] = 1LL;
    }
    v3[2] = *(_QWORD *)&v62[8];
    *v3 = v61;
    v3[1] = *(_QWORD *)v62;
    v3[3] = v58;
    v3[4] = (__int64)v18;
    v3[5] = v7;
    *((_BYTE *)v3 + 48) = v56;
    *((_BYTE *)v3 + 49) = flag ^ 1;
    return v3;
  }
  v82 = *(_QWORD *)v62;
  v83 = v66;
  v84 = v67;
  v85 = v68;
  v86 = v69;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v71, &v82);
  v65 = *((_QWORD *)&v71 + 1);
  alloc::str::join_generic_copy(&v61, *((_QWORD *)&v71 + 1), v72, asc_19567, 1LL);
  v59 = v61;
  v55 = *(_QWORD *)v62;
  v4 = *(char **)&v62[8];
  v61 = 0LL;
  *(_QWORD *)v62 = 8LL;
  *(_QWORD *)&v62[8] = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  do
  {
    if ( (unsigned __int64)v4 < v5 )
    {
LABEL_6:
      v8 = 0;
      v57 = v6;
      goto LABEL_21;
    }
    v9 = (char *)v5;
    while ( 1 )
    {
      v10 = &v9[v55];
      if ( (unsigned __int64)(v4 - v9) > 0xF )
        break;
      if ( v4 == v9 )
        goto LABEL_20;
      v11 = 0LL;
      while ( v10[v11] != 44 )
      {
        if ( v4 - v9 == ++v11 )
          goto LABEL_20;
      }
LABEL_16:
      v5 = (unsigned __int64)&v9[v11 + 1];
      v9 += v11;
      if ( v9 < v4 && v9[v55] == 44 )
      {
        v8 = 1;
        v57 = v5;
        goto LABEL_22;
      }
      v9 = (char *)v5;
      if ( (unsigned __int64)v4 < v5 )
        goto LABEL_6;
    }
    v12 = core::slice::memchr::memchr_aligned(44LL, v10, v4 - v9);
    if ( v12 == 1 )
      goto LABEL_16;
    v8 = 1;
    v5 = (unsigned __int64)v4;
    if ( v12 )
      goto LABEL_22;
LABEL_20:
    v8 = 0;
    v57 = v6;
    v5 = (unsigned __int64)v4;
LABEL_21:
    v9 = v4;
LABEL_22:
    v13 = &v9[-v6];
    v14 = (unsigned __int8 *)(v55 + v6);
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v74, v14, v13);
    if ( (_BYTE)v74 )
    {
      if ( BYTE1(v74) == 2 )
      {
        v19 = 0x8000000000000001LL;
        v20 = v59;
        goto LABEL_86;
      }
      if ( v13 )
      {
        v32 = (unsigned __int8 *)&v9[v55];
        v33 = 0LL;
        v34 = v14;
        while ( 1 )
        {
          v35 = *v34;
          if ( (v35 & 0x80u) == 0 )
            break;
          v38 = v35 & 0x1F;
          v39 = v34[1] & 0x3F;
          if ( (unsigned __int8)v35 <= 0xDFu )
          {
            v36 = v34 + 2;
            v37 = v39 | (v38 << 6);
          }
          else
          {
            v40 = (v39 << 6) | v34[2] & 0x3F;
            if ( (unsigned __int8)v35 >= 0xF0u )
            {
              v36 = v34 + 4;
              v35 = ((v35 & 7) << 18) | (v40 << 6) | v34[3] & 0x3F;
              goto LABEL_54;
            }
            v36 = v34 + 3;
            v37 = (v38 << 12) | v40;
          }
LABEL_60:
          if ( v37 - 48 >= 0xA && (v37 < 0x80 || !(unsigned __int8)core::unicode::unicode_data::n::lookup()) )
            goto LABEL_68;
          v33 = &v36[v33 - v34];
          v34 = v36;
          if ( v36 == v32 )
          {
            v33 = (unsigned __int8 *)v13;
            v19 = 0LL;
            goto LABEL_73;
          }
        }
        v36 = v34 + 1;
LABEL_54:
        v37 = v35;
        goto LABEL_60;
      }
      v33 = 0LL;
LABEL_68:
      v19 = v13 - (char *)v33;
      if ( v19 )
      {
        if ( v19 < 0 )
        {
          v44 = 0LL;
        }
        else
        {
          v44 = 1LL;
          v45 = _rust_alloc(v19, 1LL);
          if ( v45 )
          {
            v4 = (char *)v45;
LABEL_74:
            memcpy(v4, &v14[(_QWORD)v33], v19);
            v20 = v59;
            goto LABEL_86;
          }
        }
        alloc::raw_vec::handle_error(v44, v19);
      }
LABEL_73:
      v4 = (_BYTE *)(&dword_0 + 1);
      goto LABEL_74;
    }
    v15 = *((_QWORD *)&v74 + 1);
    v16 = *(_QWORD *)&v62[8];
    if ( *(_QWORD *)&v62[8] == v61 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v61);
    *(_QWORD *)(*(_QWORD *)v62 + 8 * v16) = v15;
    v7 = v16 + 1;
    *(_QWORD *)&v62[8] = v16 + 1;
    v6 = v57;
  }
  while ( v8 );
  v18 = *(_QWORD **)v62;
  v21 = 0LL;
  v20 = v59;
  v2 = v70;
  while ( 8 * v16 + 8 != v21 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)v62 + v21) == 0LL;
    v21 += 8LL;
    if ( v22 )
    {
      v19 = 0x8000000000000000LL;
      goto LABEL_86;
    }
  }
  if ( v16 == -1LL )
    goto LABEL_81;
  if ( v16 >= 3 )
  {
    v41 = 1;
    v42 = 0LL;
    v43 = 0LL;
    do
    {
      v46 = *(_QWORD *)(*(_QWORD *)v62 + 8 * v43);
      v47 = *(_QWORD *)(*(_QWORD *)v62 + 8 * v43 + 8);
      v48 = v41 & (v46 > v42);
      v49 = v47 > v46;
      v50 = *(_QWORD *)(*(_QWORD *)v62 + 8 * v43 + 16);
      LOBYTE(v47) = v48 & (v49 && v50 > v47);
      v42 = *(_QWORD *)(*(_QWORD *)v62 + 8 * v43 + 24);
      v41 = v47 & (v42 > v50);
      v43 += 4LL;
    }
    while ( (v7 & 0xFFFFFFFFFFFFFFFCLL) != v43 );
  }
  else
  {
    v41 = 1;
    v42 = 0LL;
    v43 = 0LL;
  }
  if ( (v7 & 3) != 0 )
  {
    v51 = *(_QWORD *)v62 + 8 * v43;
    v52 = 0LL;
    do
    {
      v53 = *(_QWORD *)(v51 + 8 * v52);
      v41 &= v53 > v42;
      ++v52;
      v42 = v53;
    }
    while ( (v7 & 3) != v52 );
  }
  if ( (v41 & 1) != 0 )
  {
LABEL_81:
    v58 = v61;
    if ( v59 )
      _rust_dealloc(v55, v59, 1LL);
    v3 = a1;
    if ( (_QWORD)v71 )
      _rust_dealloc(v65, 16 * v71, 8LL);
    goto LABEL_27;
  }
  v19 = 0x8000000000000002LL;
LABEL_86:
  if ( v61 )
    _rust_dealloc(*(_QWORD *)v62, 8 * v61, 8LL);
  a1[1] = v19;
  a1[2] = (__int64)v4;
  a1[3] = v19;
  v3 = a1;
  *a1 = 0x8000000000000000LL;
  if ( v20 )
    _rust_dealloc(v55, v20, 1LL);
  if ( (_QWORD)v71 )
    _rust_dealloc(v65, 16 * v71, 8LL);
  return v3;
}
