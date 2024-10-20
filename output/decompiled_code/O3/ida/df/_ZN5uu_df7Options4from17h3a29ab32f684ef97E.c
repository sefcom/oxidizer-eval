__int64 __fastcall uu_df::Options::from(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbp
  _QWORD *v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // rbx
  const void *v8; // rbp
  size_t v9; // r13
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rsi
  char flag; // bl
  char v19; // r12
  char v20; // r13
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r15
  _QWORD *v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rbx
  _QWORD *v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // r15
  _QWORD *v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rdi
  _QWORD *v45; // rbx
  __int64 v46; // r15
  __int64 v47; // r12
  __int64 v48; // rsi
  char v49; // bp
  __int64 v50; // rbx
  __int64 v51; // r14
  __int64 v52; // r12
  char v53; // r13
  __int64 v54; // rcx
  _QWORD *v55; // r13
  __int64 v56; // rsi
  __int64 v57; // rax
  __int128 v58; // xmm1
  __int64 v59; // rcx
  _QWORD *v60; // r15
  __int64 v61; // rsi
  __int64 v63; // [rsp+8h] [rbp-200h]
  char v64; // [rsp+8h] [rbp-200h]
  __int64 v65; // [rsp+10h] [rbp-1F8h]
  __int64 v66; // [rsp+18h] [rbp-1F0h]
  __int64 v67; // [rsp+18h] [rbp-1F0h]
  __int64 v68; // [rsp+18h] [rbp-1F0h]
  __m256i v69; // [rsp+20h] [rbp-1E8h] BYREF
  __int128 v70; // [rsp+40h] [rbp-1C8h]
  __int64 v71; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v72; // [rsp+58h] [rbp-1B0h]
  __int64 v73; // [rsp+60h] [rbp-1A8h]
  __int64 v74; // [rsp+68h] [rbp-1A0h]
  __int128 v75; // [rsp+70h] [rbp-198h]
  __int64 v76; // [rsp+80h] [rbp-188h]
  __int64 v77; // [rsp+90h] [rbp-178h]
  __int128 v78; // [rsp+98h] [rbp-170h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-160h]
  _BYTE v80[64]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-118h]
  __int128 v82; // [rsp+100h] [rbp-108h] BYREF
  __int128 v83; // [rsp+110h] [rbp-F8h]
  __int64 v84; // [rsp+120h] [rbp-E8h]
  __int64 v85; // [rsp+130h] [rbp-D8h]
  __int64 v86; // [rsp+138h] [rbp-D0h]
  const char **v87; // [rsp+140h] [rbp-C8h] BYREF
  __int64 (__fastcall *v88)(); // [rsp+148h] [rbp-C0h]
  __int128 *v89; // [rsp+150h] [rbp-B8h]
  __int64 (__fastcall *v90)(); // [rsp+158h] [rbp-B0h]
  __int128 v91; // [rsp+160h] [rbp-A8h] BYREF
  __int128 v92; // [rsp+170h] [rbp-98h]
  __int64 v93; // [rsp+180h] [rbp-88h]
  const char *v94; // [rsp+190h] [rbp-78h] BYREF
  __int64 v95; // [rsp+198h] [rbp-70h]
  __int64 v96; // [rsp+1A0h] [rbp-68h]
  __int64 v97; // [rsp+1A8h] [rbp-60h]
  _QWORD v98[11]; // [rsp+1B0h] [rbp-58h] BYREF

  v74 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v80, a2, &unk_AE70, 4LL);
  v87 = (const char **)&unk_AE70;
  v88 = (__int64 (__fastcall *)())&byte_4;
  if ( *(_QWORD *)v80 )
  {
    v84 = *(_QWORD *)&v80[40];
    v83 = *(_OWORD *)&v80[24];
    v82 = *(_OWORD *)&v80[8];
    *(_QWORD *)&v91 = &v87;
    *((_QWORD *)&v91 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v92 = &v82;
    *((_QWORD *)&v92 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v69.m256i_i64[0] = (__int64)&anon_37e8404f29ea422d3c165b81a7597284_5_llvm_3498370989897006048;
    v69.m256i_i64[1] = 2LL;
    *(_QWORD *)&v70 = 0LL;
    v69.m256i_i64[2] = (__int64)&v91;
    v69.m256i_i64[3] = 2LL;
    core::panicking::panic_fmt(&v69, &anon_37e8404f29ea422d3c165b81a7597284_7_llvm_3498370989897006048);
  }
  v69 = *(__m256i *)&v80[16];
  v70 = *(_OWORD *)&v80[48];
  v71 = v81;
  if ( *(_QWORD *)&v80[8] )
  {
    *(_QWORD *)v80 = *(_QWORD *)&v80[8];
    *(__m256i *)&v80[8] = v69;
    *(_OWORD *)&v80[40] = v70;
    *(_QWORD *)&v80[56] = v71;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v78, v80);
  }
  else
  {
    *(_QWORD *)&v78 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v80, a2, aExcludeType, 12LL);
  v94 = aExcludeType;
  v95 = 12LL;
  if ( *(_QWORD *)v80 )
  {
    v93 = *(_QWORD *)&v80[40];
    v92 = *(_OWORD *)&v80[24];
    v91 = *(_OWORD *)&v80[8];
    v87 = &v94;
    v88 = <&T as core::fmt::Display>::fmt;
    v89 = &v91;
    v90 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v82 = &anon_37e8404f29ea422d3c165b81a7597284_5_llvm_3498370989897006048;
    *((_QWORD *)&v82 + 1) = 2LL;
    v84 = 0LL;
    *(_QWORD *)&v83 = &v87;
    *((_QWORD *)&v83 + 1) = 2LL;
    core::panicking::panic_fmt(&v82, &anon_37e8404f29ea422d3c165b81a7597284_7_llvm_3498370989897006048);
  }
  v69 = *(__m256i *)&v80[16];
  v70 = *(_OWORD *)&v80[48];
  v71 = v81;
  if ( *(_QWORD *)&v80[8] )
  {
    *(_QWORD *)v80 = *(_QWORD *)&v80[8];
    *(__m256i *)&v80[8] = v69;
    *(_OWORD *)&v80[40] = v70;
    *(_QWORD *)&v80[56] = v71;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v82, v80);
    v75 = v82;
    v76 = v83;
    v2 = v82;
    if ( (_QWORD)v78 == 0x8000000000000000LL )
    {
      v3 = a2;
    }
    else
    {
      v3 = a2;
      if ( (_QWORD)v82 != 0x8000000000000000LL )
      {
        v86 = v78;
        v72 = v82;
        v4 = *((_QWORD *)&v75 + 1);
        v5 = v76;
        v69.m256i_i64[0] = 0LL;
        *(_OWORD *)&v69.m256i_u64[1] = 8uLL;
        if ( v79 )
        {
          v85 = v79;
          v66 = *((_QWORD *)&v78 + 1) + 24 * v79;
          v6 = *((_QWORD *)&v78 + 1);
          v7 = 24 * v76;
          v73 = 0LL;
          v77 = *((_QWORD *)&v78 + 1);
          v63 = v76;
          do
          {
            if ( v5 )
            {
              v8 = *(const void **)(v6 + 8);
              v9 = *(_QWORD *)(v6 + 16);
              v10 = 0LL;
              while ( *(_QWORD *)(v4 + v10 + 16) != v9 || bcmp(*(const void **)(v4 + v10 + 8), v8, v9) )
              {
                v10 += 24LL;
                if ( v7 == v10 )
                {
                  v5 = v63;
                  goto LABEL_12;
                }
              }
              <alloc::string::String as core::clone::Clone>::clone(v80, v6);
              v11 = v69.m256i_i64[2];
              v5 = v63;
              if ( v69.m256i_i64[2] == v69.m256i_i64[0] )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v69);
              v12 = v69.m256i_i64[1];
              v13 = 3 * v11;
              *(_QWORD *)(v69.m256i_i64[1] + 8 * v13 + 16) = *(_QWORD *)&v80[16];
              *(_OWORD *)(v12 + 8 * v13) = *(_OWORD *)v80;
              v73 = v11 + 1;
              v69.m256i_i64[2] = v11 + 1;
            }
LABEL_12:
            v6 += 24LL;
          }
          while ( v6 != v66 );
          v14 = v69.m256i_i64[0];
          v3 = a2;
          if ( v73 )
          {
            v82 = *(_OWORD *)&v69.m256i_u64[1];
            if ( v69.m256i_i64[0] != 0x8000000000000000LL )
            {
              v15 = (_QWORD *)v74;
              *(_OWORD *)(v74 + 24) = v82;
              v15[1] = 4LL;
              v15[2] = v14;
              *v15 = 0x8000000000000000LL;
              if ( v5 )
              {
                v16 = (_QWORD *)(v4 + 8);
                do
                {
                  v17 = *(v16 - 1);
                  if ( v17 )
                    _rust_dealloc(*v16, v17, 1LL);
                  v16 += 3;
                  --v5;
                }
                while ( v5 );
              }
              if ( v72 )
                _rust_dealloc(v4, 24 * v72, 8LL);
              v45 = (_QWORD *)(v77 + 8);
              v46 = v86;
              v47 = v85;
              do
              {
                v48 = *(v45 - 1);
                if ( v48 )
                  _rust_dealloc(*v45, v48, 1LL);
                v45 += 3;
                --v47;
              }
              while ( v47 );
              if ( v46 )
              {
                v43 = 24 * v46;
                v44 = v77;
                goto LABEL_98;
              }
              return v74;
            }
          }
          else if ( v69.m256i_i64[0] )
          {
            _rust_dealloc(v69.m256i_i64[1], 24 * v69.m256i_i64[0], 8LL);
          }
        }
        v2 = v72;
      }
    }
  }
  else
  {
    *(_QWORD *)&v75 = 0x8000000000000000LL;
    v2 = 0x8000000000000000LL;
    v3 = a2;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aLocal, 5LL);
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aAll, 3LL);
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aSync_0, 4LL);
  uu_df::blocks::read_block_size(&v94, v3);
  v21 = v95;
  if ( v94 == (_BYTE *)&dword_0 + 3 )
  {
    v64 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aHumanReadableB, 21LL)
      && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aHumanReadableD, 22LL) )
    {
      v64 = 2;
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               v3,
                               anon_5f995df778c88d2f993662794f843320_12_llvm_13646445757275454229,
                               11LL) )
      {
        v22 = v3[2];
        if ( v22 )
        {
          v23 = v3[1];
          v24 = 16 * v22;
          v25 = 97LL;
          v26 = 0LL;
          v27 = 0LL;
          while ( *(_QWORD *)(v23 + v26 + 8) != 6LL
               || **(_DWORD **)(v23 + v26) ^ 0x7074756F | *(unsigned __int16 *)(*(_QWORD *)(v23 + v26) + 4LL) ^ 0x7475 )
          {
            v26 += 16LL;
            v25 += 104LL;
            ++v27;
            if ( v24 == v26 )
              goto LABEL_77;
          }
          v28 = v3[5];
          if ( v27 >= v28 )
            core::panicking::panic_bounds_check(
              v27,
              v28,
              &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
              v24,
              1886680431LL);
          v64 = 3 * (*(_BYTE *)(v3[4] + v25) == 2);
        }
        else
        {
LABEL_77:
          v64 = 0;
        }
      }
    }
    v49 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aHumanReadableB, 21LL) )
      v49 = 2 * (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aHumanReadableD, 22LL) ^ 1);
    LOBYTE(v85) = v20;
    LOBYTE(v77) = v19;
    LOBYTE(v86) = flag;
    v68 = v21;
    v73 = *((_QWORD *)&v78 + 1);
    v65 = v78;
    v50 = v79;
    v72 = *((_QWORD *)&v75 + 1);
    v51 = v75;
    v52 = v76;
    v53 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aTotal, 5LL);
    uu_df::columns::Column::from_matches(&v69, v3);
    v82 = *(_OWORD *)&v69.m256i_u64[1];
    *(_QWORD *)&v83 = v69.m256i_i64[3];
    if ( v69.m256i_i64[0] )
    {
      v54 = v74;
      *(_QWORD *)(v74 + 32) = v83;
      *(_OWORD *)(v54 + 16) = v82;
      *(_QWORD *)(v54 + 8) = 3LL;
      *(_QWORD *)v54 = 0x8000000000000000LL;
      if ( v51 != 0x8000000000000000LL )
      {
        if ( v52 )
        {
          v55 = (_QWORD *)(v72 + 8);
          do
          {
            v56 = *(v55 - 1);
            if ( v56 )
              _rust_dealloc(*v55, v56, 1LL);
            v55 += 3;
            --v52;
          }
          while ( v52 );
        }
        if ( v51 )
          _rust_dealloc(v72, 24 * v51, 8LL);
      }
      if ( v65 != 0x8000000000000000LL )
      {
        if ( v50 )
        {
          v60 = (_QWORD *)(v73 + 8);
          do
          {
            v61 = *(v60 - 1);
            if ( v61 )
              _rust_dealloc(*v60, v61, 1LL);
            v60 += 3;
            --v50;
          }
          while ( v50 );
        }
        if ( v65 )
        {
          v43 = 24 * v65;
          v44 = v73;
          goto LABEL_98;
        }
      }
    }
    else
    {
      *(_QWORD *)&v80[16] = v83;
      *(_OWORD *)v80 = v82;
      *(_QWORD *)&v80[40] = v79;
      *(_OWORD *)&v80[24] = v78;
      v57 = v76;
      v81 = v76;
      v58 = v75;
      *(_OWORD *)&v80[48] = v75;
      v59 = v74;
      *(_OWORD *)v74 = v82;
      *(_QWORD *)(v59 + 64) = v57;
      *(_OWORD *)(v59 + 48) = v58;
      *(_QWORD *)(v59 + 16) = *(_QWORD *)&v80[16];
      *(_QWORD *)(v59 + 24) = *(_QWORD *)&v80[24];
      *(_OWORD *)(v59 + 32) = *(_OWORD *)&v80[32];
      *(_QWORD *)(v59 + 72) = v68;
      *(_BYTE *)(v59 + 80) = v86;
      *(_BYTE *)(v59 + 81) = v77;
      *(_BYTE *)(v59 + 82) = v85;
      *(_BYTE *)(v59 + 83) = v53;
      *(_BYTE *)(v59 + 84) = v49;
      *(_BYTE *)(v59 + 85) = v64;
    }
  }
  else
  {
    v29 = v96;
    v30 = v97;
    if ( v94 )
    {
      if ( (_DWORD)v94 == 1 )
      {
        v31 = 1LL;
      }
      else
      {
        v67 = v95;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
          &v91,
          v3,
          &anon_5f995df778c88d2f993662794f843320_2_llvm_13646445757275454229,
          9LL);
        v98[0] = &anon_5f995df778c88d2f993662794f843320_2_llvm_13646445757275454229;
        v98[1] = 9LL;
        if ( (_DWORD)v91 != 2 )
        {
          v84 = v93;
          v83 = v92;
          v82 = v91;
          v87 = (const char **)v98;
          v88 = <&T as core::fmt::Display>::fmt;
          v89 = &v82;
          v90 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
          v69.m256i_i64[0] = (__int64)&anon_37e8404f29ea422d3c165b81a7597284_5_llvm_3498370989897006048;
          v69.m256i_i64[1] = 2LL;
          *(_QWORD *)&v70 = 0LL;
          v69.m256i_i64[2] = (__int64)&v87;
          v69.m256i_i64[3] = 2LL;
          core::panicking::panic_fmt(&v69, &anon_37e8404f29ea422d3c165b81a7597284_7_llvm_3498370989897006048);
        }
        if ( !*((_QWORD *)&v91 + 1) )
          core::option::unwrap_failed(&off_100078);
        <alloc::string::String as core::clone::Clone>::clone(&v69, *((_QWORD *)&v91 + 1));
        v32 = v69.m256i_i64[1];
        v21 = v69.m256i_i64[0];
        v30 = v69.m256i_i64[2];
        if ( v67 )
          _rust_dealloc(v29, v67, 1LL);
        v31 = 0LL;
        v29 = v32;
      }
    }
    else
    {
      v31 = 2LL;
    }
    v33 = (_QWORD *)v74;
    *(_QWORD *)(v74 + 24) = v29;
    v33[4] = v30;
    v33[1] = v31;
    v33[2] = v21;
    *v33 = 0x8000000000000000LL;
    if ( v2 != 0x8000000000000000LL )
    {
      v34 = *((_QWORD *)&v75 + 1);
      v35 = v76;
      if ( v76 )
      {
        v36 = (_QWORD *)(*((_QWORD *)&v75 + 1) + 8LL);
        do
        {
          v37 = *(v36 - 1);
          if ( v37 )
            _rust_dealloc(*v36, v37, 1LL);
          v36 += 3;
          --v35;
        }
        while ( v35 );
      }
      if ( v2 )
        _rust_dealloc(v34, 24 * v2, 8LL);
    }
    v38 = v78;
    if ( (_QWORD)v78 != 0x8000000000000000LL )
    {
      v39 = *((_QWORD *)&v78 + 1);
      v40 = v79;
      if ( v79 )
      {
        v41 = (_QWORD *)(*((_QWORD *)&v78 + 1) + 8LL);
        do
        {
          v42 = *(v41 - 1);
          if ( v42 )
            _rust_dealloc(*v41, v42, 1LL);
          v41 += 3;
          --v40;
        }
        while ( v40 );
      }
      if ( v38 )
      {
        v43 = 24 * v38;
        v44 = v39;
LABEL_98:
        _rust_dealloc(v44, v43, 8LL);
      }
    }
  }
  return v74;
}
