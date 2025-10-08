__int64 __fastcall just::compiler::Compiler::compile(char *dest, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  char *v4; // r15
  __int128 v5; // rax
  __int64 v6; // rdx
  __int128 v7; // rax
  __int64 v8; // rbx
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int8 v12; // al
  __int64 v13; // r12
  __int128 v14; // kr00_16
  __int8 v15; // cl
  __int64 v16; // r9
  __int64 v17; // rax
  _BYTE *v18; // r8
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 i; // rbp
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // r12
  __int8 v27; // al
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // r12
  __int8 v36; // al
  __int8 v37; // al
  __int64 v38; // rbx
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int128 v44; // xmm3
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  char v48; // r15
  int v49; // ecx
  __int64 v50; // rcx
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  __int128 v56; // xmm3
  __int64 v57; // rax
  __int64 v58; // rcx
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm2
  __int128 v62; // xmm1
  __int128 v63; // xmm2
  __int128 v64; // xmm3
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // ecx
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm3
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int32 v73; // esi
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  __int128 v76; // xmm3
  int v77; // edx
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm2
  char **v81; // rdi
  _BYTE v82[24]; // [rsp+30h] [rbp-A18h] BYREF
  __int128 v83; // [rsp+50h] [rbp-9F8h] BYREF
  __int64 v84; // [rsp+60h] [rbp-9E8h]
  __int64 v85; // [rsp+68h] [rbp-9E0h]
  __int64 v86; // [rsp+70h] [rbp-9D8h]
  unsigned __int128 v87; // [rsp+78h] [rbp-9D0h]
  _BYTE v88[7]; // [rsp+88h] [rbp-9C0h]
  __int64 v89; // [rsp+90h] [rbp-9B8h] BYREF
  __int64 v90; // [rsp+98h] [rbp-9B0h]
  __int64 v91; // [rsp+A0h] [rbp-9A8h]
  __int64 v92; // [rsp+A8h] [rbp-9A0h]
  __m256i v93; // [rsp+B0h] [rbp-998h] BYREF
  __m256i v94; // [rsp+D0h] [rbp-978h]
  __int64 v95; // [rsp+F0h] [rbp-958h]
  __int64 v96; // [rsp+128h] [rbp-920h] BYREF
  __int64 v97; // [rsp+130h] [rbp-918h]
  __int64 v98; // [rsp+138h] [rbp-910h]
  __int64 v99; // [rsp+140h] [rbp-908h]
  __int64 v100; // [rsp+148h] [rbp-900h] BYREF
  __int128 v101; // [rsp+150h] [rbp-8F8h]
  __int128 v102; // [rsp+160h] [rbp-8E8h]
  __int64 v103; // [rsp+170h] [rbp-8D8h]
  __int64 v104; // [rsp+178h] [rbp-8D0h]
  __m256i v105; // [rsp+180h] [rbp-8C8h] BYREF
  __int128 v106; // [rsp+1A0h] [rbp-8A8h]
  __m256i v107; // [rsp+1B0h] [rbp-898h] BYREF
  __int128 v108; // [rsp+1D0h] [rbp-878h]
  __int128 v109; // [rsp+1E0h] [rbp-868h]
  __int128 v110; // [rsp+1F0h] [rbp-858h]
  __int128 v111; // [rsp+200h] [rbp-848h]
  __int128 v112; // [rsp+210h] [rbp-838h]
  __int128 v113; // [rsp+220h] [rbp-828h]
  _OWORD v114[2]; // [rsp+230h] [rbp-818h] BYREF
  __int64 v115; // [rsp+250h] [rbp-7F8h]
  __int64 v116; // [rsp+258h] [rbp-7F0h]
  __int128 v117; // [rsp+260h] [rbp-7E8h] BYREF
  __m256i v118; // [rsp+270h] [rbp-7D8h]
  __int128 v119; // [rsp+290h] [rbp-7B8h]
  __int128 v120; // [rsp+2A0h] [rbp-7A8h]
  __int128 v121; // [rsp+2B0h] [rbp-798h]
  __int128 v122; // [rsp+2C0h] [rbp-788h]
  __int128 v123; // [rsp+2D0h] [rbp-778h]
  __int128 v124; // [rsp+2E0h] [rbp-768h]
  __int128 v125; // [rsp+2F0h] [rbp-758h]
  __int128 v126; // [rsp+300h] [rbp-748h]
  __int128 v127; // [rsp+310h] [rbp-738h]
  __int128 v128; // [rsp+320h] [rbp-728h]
  __m256i v129[27]; // [rsp+330h] [rbp-718h] BYREF
  __int128 v130; // [rsp+690h] [rbp-3B8h] BYREF
  __int64 v131; // [rsp+6A0h] [rbp-3A8h]
  _BYTE v132[744]; // [rsp+6B0h] [rbp-398h] BYREF
  __int64 v133; // [rsp+9A0h] [rbp-A8h] BYREF
  __int128 v134; // [rsp+9A8h] [rbp-A0h]
  __int128 v135; // [rsp+9B8h] [rbp-90h]
  __int128 v136; // [rsp+9C8h] [rbp-80h]
  __int128 v137; // [rsp+9D8h] [rbp-70h]
  __int128 v138; // [rsp+9E8h] [rbp-60h]
  __int128 v139; // [rsp+9F8h] [rbp-50h]
  __int128 v140; // [rsp+A08h] [rbp-40h]

  v87 = __PAIR128__(a4, a3);
  v104 = a2;
  v4 = dest;
  *(_QWORD *)&v5 = std::thread::local::LocalKey<T>::with();
  v105 = off_42BD10;
  v106 = v5;
  v96 = 0LL;
  v97 = 8LL;
  v98 = 0LL;
  v114[1] = *(&off_42BD10 + 1);
  v114[0] = off_42BD10;
  v115 = std::thread::local::LocalKey<T>::with();
  v116 = v6;
  *(_QWORD *)&v7 = std::thread::local::LocalKey<T>::with();
  *(_OWORD *)v118.m256i_i8 = *(&off_42BD10 + 1);
  v117 = off_42BD10;
  *(_OWORD *)&v118.m256i_u64[2] = v7;
  v89 = 0LL;
  v90 = 8LL;
  v91 = 0LL;
  just::source::Source::root(v129, v87, *((_QWORD *)&v87 + 1));
  alloc::vec::Vec<T,A>::push(&v89, v129, &off_42E520);
  v8 = v91;
  if ( v91 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v91 = --v8;
        v9 = *(_OWORD *)(v90 + (v8 << 7) + 16);
        v10 = *(_OWORD *)(v90 + (v8 << 7) + 32);
        v11 = *(_OWORD *)(v90 + (v8 << 7) + 48);
        *(_OWORD *)v107.m256i_i8 = *(_OWORD *)(v90 + (v8 << 7));
        *(_OWORD *)&v107.m256i_u64[2] = v9;
        v108 = v10;
        v109 = v11;
        v110 = *(_OWORD *)(v90 + (v8 << 7) + 64);
        v111 = *(_OWORD *)(v90 + (v8 << 7) + 80);
        v112 = *(_OWORD *)(v90 + (v8 << 7) + 96);
        v113 = *(_OWORD *)(v90 + (v8 << 7) + 112);
        if ( v107.m256i_i64[0] == 0x8000000000000000LL )
          goto LABEL_39;
        *(_OWORD *)&v132[112] = v113;
        *(_OWORD *)&v132[96] = v112;
        *(_OWORD *)&v132[80] = v111;
        *(_OWORD *)&v132[64] = v110;
        *(_OWORD *)&v132[48] = v109;
        *(_OWORD *)&v132[32] = v108;
        *(__m256i *)v132 = v107;
        if ( !hashbrown::map::HashMap<K,V,S,A>::get_inner(v114, &v132[48]) )
          break;
        core::ptr::drop_in_place<just::source::Source>(v132);
        if ( !v8 )
          goto LABEL_38;
      }
      just::loader::Loader::load(v129, v104, v87, *((_QWORD *)&v87 + 1), *(_QWORD *)&v132[56], *(_QWORD *)&v132[64]);
      v12 = v129[0].m256i_i8[0];
      if ( v129[0].m256i_i8[0] != 56 )
        break;
      v13 = v129[0].m256i_i64[1];
      v14 = *(_OWORD *)&v129[0].m256i_u64[2];
      v86 = v129[1].m256i_i64[0];
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v129, v129[0].m256i_i64[1]);
      v93.m256i_i64[2] = v129[0].m256i_i64[2];
      *(_OWORD *)v93.m256i_i8 = *(_OWORD *)v129[0].m256i_i8;
      alloc::vec::Vec<T,A>::push(&v96, &v93, &off_42E538);
      just::lexer::Lexer::lex(v129, v13, v14, *((_QWORD *)&v14 + 1), v86);
      v15 = v129[2].m256i_i8[8];
      v16 = v129[0].m256i_i64[1];
      v85 = v129[0].m256i_i64[0];
      v17 = v129[0].m256i_i64[2];
      if ( v129[2].m256i_i8[8] != 37 )
      {
        v71 = *(_OWORD *)&v129[0].m256i_u64[3];
        v72 = *(_OWORD *)&v129[1].m256i_u64[1];
        *(_OWORD *)(v4 + 72) = *(_OWORD *)&v129[1].m256i_u64[3];
        *(_OWORD *)(v4 + 56) = v72;
        *(_OWORD *)(v4 + 40) = v71;
        v73 = v129[2].m256i_i32[3];
        *(_DWORD *)(v4 + 89) = *(__int32 *)((char *)&v129[2].m256i_i32[2] + 1);
        *((_DWORD *)v4 + 23) = v73;
        v4[8] = 12;
        *((_QWORD *)v4 + 2) = v85;
        *((_QWORD *)v4 + 3) = v16;
        *((_QWORD *)v4 + 4) = v17;
        v4[88] = v15;
        goto LABEL_54;
      }
      v18 = &v132[96];
      if ( *(_QWORD *)&v132[96] == 0x8000000000000000LL )
        LODWORD(v18) = 0;
      v92 = v129[0].m256i_i64[1];
      just::parser::Parser::parse(
        (unsigned int)v129,
        *(_DWORD *)&v132[120],
        *(_DWORD *)&v132[32],
        *(_DWORD *)&v132[40],
        (_DWORD)v18,
        v129[0].m256i_i32[2],
        v129[0].m256i_i64[2],
        *(__int64 *)&v132[80],
        *(__int64 *)&v132[88]);
      v119 = *(_OWORD *)&v129[0].m256i_u64[1];
      v120 = *(_OWORD *)&v129[0].m256i_u64[3];
      v121 = *(_OWORD *)&v129[1].m256i_u64[1];
      v122 = *(_OWORD *)&v129[1].m256i_u64[3];
      v123 = *(_OWORD *)&v129[2].m256i_u64[1];
      if ( v129[0].m256i_i64[0] == 0x8000000000000000LL )
      {
        *(_OWORD *)((char *)&v129[2].m256i_u32[1] + 3) = v123;
        *(_OWORD *)((char *)&v129[1].m256i_u64[2] + 7) = v122;
        *(_OWORD *)((char *)&v129[1].m256i_u32[1] + 3) = v121;
        *(_OWORD *)((char *)&v129[0].m256i_u64[2] + 7) = v120;
        *(_OWORD *)((char *)&v129[0].m256i_u32[1] + 3) = v119;
        dest[8] = 12;
        v74 = *(_OWORD *)&v129[0].m256i_u64[2];
        v75 = *(_OWORD *)v129[1].m256i_i8;
        v76 = *(_OWORD *)&v129[1].m256i_u64[2];
        *(_OWORD *)(dest + 9) = *(_OWORD *)v129[0].m256i_i8;
        *(_OWORD *)(dest + 25) = v74;
        *(_OWORD *)(dest + 41) = v75;
        *(_OWORD *)(dest + 57) = v76;
        *(_OWORD *)(dest + 73) = *(_OWORD *)v129[2].m256i_i8;
        *((_QWORD *)dest + 11) = *(__int64 *)((char *)&v129[2].m256i_i64[1] + 7);
        *(_QWORD *)dest = 0x8000000000000000LL;
        v48 = 1;
        goto LABEL_50;
      }
      v140 = *(_OWORD *)&v129[3].m256i_u64[1];
      v139 = *(_OWORD *)&v129[2].m256i_u64[3];
      v138 = v123;
      v137 = v122;
      v136 = v121;
      v135 = v120;
      v134 = v119;
      v133 = v129[0].m256i_i64[0];
      <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
        v129,
        *(_QWORD *)&v132[56],
        *(_QWORD *)&v132[64]);
      v84 = v129[0].m256i_i64[2];
      v83 = *(_OWORD *)v129[0].m256i_i8;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v129, v13);
      v93.m256i_i64[2] = v129[0].m256i_i64[2];
      *(_OWORD *)v93.m256i_i8 = *(_OWORD *)v129[0].m256i_i8;
      hashbrown::map::HashMap<K,V,S,A>::insert(v129, v114, &v83, &v93);
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v129);
      <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
        v129,
        *(_QWORD *)&v132[56],
        *(_QWORD *)&v132[64]);
      v93.m256i_i64[2] = v129[0].m256i_i64[2];
      *(_OWORD *)v93.m256i_i8 = *(_OWORD *)v129[0].m256i_i8;
      hashbrown::map::HashMap<K,V,S,A>::insert(&v117, &v93, *((_QWORD *)&v14 + 1), v86);
      if ( *((_QWORD *)&v134 + 1) )
      {
        v19 = v134 + 200;
        v103 = v134 + 32;
        v99 = v134;
        v86 = v134 + 56;
        v20 = *((_QWORD *)&v134 + 1) << 8;
        for ( i = 0LL; v20 != i; i += 256LL )
        {
          v22 = *(_QWORD *)(v19 + i - 200) ^ 0x8000000000000000LL;
          if ( v22 == 3 )
          {
            v34 = std::path::Path::parent(*(_QWORD *)&v132[56], *(_QWORD *)&v132[64]);
            if ( !v34 )
            {
              v81 = &off_42E550;
LABEL_62:
              core::option::unwrap_failed(v81);
            }
            v35 = v33;
            just::compiler::Compiler::expand_tilde(v129, *(_QWORD *)(v19 + i - 184), *(_QWORD *)(v19 + i - 176));
            v36 = v129[0].m256i_i8[0];
            if ( v129[0].m256i_i8[0] != 56 )
            {
              v46 = *(_OWORD *)v129[1].m256i_i8;
              v47 = *(_OWORD *)&v129[1].m256i_u64[2];
              *(_OWORD *)((char *)&v93.m256i_u64[1] + 7) = *(_OWORD *)&v129[0].m256i_u64[2];
              *(_OWORD *)v93.m256i_i8 = *(_OWORD *)&v129[0].m256i_i8[1];
              *((_QWORD *)dest + 13) = v129[3].m256i_i64[0];
              *(__m256i *)(dest + 72) = v129[2];
              *(_OWORD *)(dest + 56) = v47;
              *(_OWORD *)(dest + 40) = v46;
              *(_OWORD *)(dest + 24) = *(_OWORD *)((char *)&v93.m256i_u64[1] + 7);
              *(_OWORD *)(dest + 9) = *(_OWORD *)v93.m256i_i8;
              dest[8] = v36;
              *(_QWORD *)dest = 0x8000000000000000LL;
              v48 = 1;
              goto LABEL_49;
            }
            *(__int64 *)((char *)&v93.m256i_i64[2] + 7) = v129[0].m256i_i64[3];
            *(_OWORD *)((char *)&v93.m256i_u32[1] + 3) = *(_OWORD *)&v129[0].m256i_u64[1];
            v130 = *(_OWORD *)&v129[0].m256i_u64[1];
            v131 = v129[0].m256i_i64[3];
            std::path::Path::join(&v83, v34, v35, &v130);
            <&std::path::Path as lexiclean::Lexiclean>::lexiclean(v82, *((_QWORD *)&v83 + 1), v84);
            core::ptr::drop_in_place<std::path::PathBuf>(&v83);
            if ( (unsigned __int8)std::path::Path::is_file(*(_QWORD *)&v82[8], *(_QWORD *)&v82[16]) )
            {
              if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(
                                      v82,
                                      *(_QWORD *)&v132[8],
                                      *(_QWORD *)&v132[16]) )
              {
                *((_QWORD *)dest + 7) = *(_QWORD *)&v82[16];
                *(_OWORD *)(dest + 40) = *(_OWORD *)v82;
                *(_OWORD *)((char *)&v129[0].m256i_u32[1] + 3) = *(_OWORD *)&v132[48];
                *(__int64 *)((char *)&v129[0].m256i_i64[2] + 7) = *(_QWORD *)&v132[64];
                dest[8] = 8;
                v57 = *(__int64 *)((char *)&v129[0].m256i_i64[1] + 7);
                v58 = *(__int64 *)((char *)&v129[0].m256i_i64[2] + 7);
                *(_OWORD *)(dest + 9) = *(_OWORD *)v129[0].m256i_i8;
                *((_QWORD *)dest + 3) = v57;
                *((_QWORD *)dest + 4) = v58;
                *(_QWORD *)dest = 0x8000000000000000LL;
                v48 = 0;
                goto LABEL_49;
              }
              <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
                v129,
                *(_QWORD *)&v82[8],
                *(_QWORD *)&v82[16]);
              v93.m256i_i64[2] = v129[0].m256i_i64[2];
              *(_OWORD *)v93.m256i_i8 = *(_OWORD *)v129[0].m256i_i8;
              core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v86 + i);
              *(_QWORD *)(v19 + i - 128) = v93.m256i_i64[2];
              *(_OWORD *)(v19 + i - 144) = *(_OWORD *)v93.m256i_i8;
              v93.m256i_i64[2] = *(_QWORD *)&v82[16];
              *(_OWORD *)v93.m256i_i8 = *(_OWORD *)v82;
              just::source::Source::import(v129, v132, &v93, *(_QWORD *)(v19 + i - 64));
              alloc::vec::Vec<T,A>::push(&v89, v129, &off_42E568);
            }
            else
            {
              if ( !*(_BYTE *)(v19 + i - 48) )
              {
                *(__int64 *)((char *)v129[2].m256i_i64 + 7) = *(_QWORD *)(v99 + i + 144);
                v51 = *(_OWORD *)(v99 + i + 80);
                v52 = *(_OWORD *)(v99 + i + 96);
                v53 = *(_OWORD *)(v99 + i + 112);
                *(_OWORD *)((char *)&v129[1].m256i_u64[2] + 7) = *(_OWORD *)(v99 + i + 128);
                *(_OWORD *)((char *)&v129[1].m256i_u32[1] + 3) = v53;
                *(_OWORD *)((char *)&v129[0].m256i_u64[2] + 7) = v52;
                *(_OWORD *)((char *)&v129[0].m256i_u32[1] + 3) = v51;
                dest[8] = 33;
                v54 = *(_OWORD *)&v129[0].m256i_u64[2];
                v55 = *(_OWORD *)v129[1].m256i_i8;
                v56 = *(_OWORD *)&v129[1].m256i_u64[2];
                *(_OWORD *)(dest + 9) = *(_OWORD *)v129[0].m256i_i8;
                *(_OWORD *)(dest + 25) = v54;
                *(_OWORD *)(dest + 41) = v55;
                *(_OWORD *)(dest + 57) = v56;
                *(_OWORD *)(dest + 72) = *(_OWORD *)((char *)&v129[1].m256i_u64[3] + 7);
                *(_QWORD *)dest = 0x8000000000000000LL;
                core::ptr::drop_in_place<std::path::PathBuf>(v82);
                v48 = 1;
                goto LABEL_49;
              }
              core::ptr::drop_in_place<std::path::PathBuf>(v82);
            }
          }
          else if ( v22 == 4 )
          {
            v24 = std::path::Path::parent(*(_QWORD *)&v132[56], *(_QWORD *)&v132[64]);
            if ( !v24 )
            {
              v81 = &off_42E580;
              goto LABEL_62;
            }
            v25 = 0x8000000000000000LL;
            if ( *(_QWORD *)(v19 + i - 120) != 0x8000000000000000LL )
            {
              v26 = v23;
              just::compiler::Compiler::expand_tilde(v129, *(_QWORD *)(v19 + i - 112), *(_QWORD *)(v19 + i - 104));
              v23 = v26;
              v27 = v129[0].m256i_i8[0];
              *(_DWORD *)&v88[3] = v129[0].m256i_i32[1];
              *(_DWORD *)v88 = *(__int32 *)((char *)v129[0].m256i_i32 + 1);
              v28 = v129[0].m256i_i64[1];
              v83 = *(_OWORD *)&v129[0].m256i_u64[2];
              v95 = v129[3].m256i_i64[0];
              v94 = v129[2];
              v93 = v129[1];
              v25 = 0x8000000000000000LL;
              if ( v129[0].m256i_u8[0] != 57 )
              {
                if ( v129[0].m256i_u8[0] != 56 )
                {
                  v77 = *(_DWORD *)v88;
                  *((_DWORD *)dest + 3) = *(_DWORD *)&v88[3];
                  *(_DWORD *)(dest + 9) = v77;
                  *(_OWORD *)v82 = v83;
                  *((_QWORD *)dest + 13) = v95;
                  v78 = *(_OWORD *)v93.m256i_i8;
                  v79 = *(_OWORD *)&v93.m256i_u64[2];
                  v80 = *(_OWORD *)v94.m256i_i8;
                  *(_OWORD *)(dest + 88) = *(_OWORD *)&v94.m256i_u64[2];
                  *(_OWORD *)(dest + 72) = v80;
                  *(_OWORD *)(dest + 56) = v79;
                  *(_OWORD *)(dest + 40) = v78;
                  v102 = *(_OWORD *)v82;
                  *(_OWORD *)(dest + 24) = *(_OWORD *)v82;
                  dest[8] = v27;
                  *((_QWORD *)dest + 2) = v28;
                  *(_QWORD *)dest = 0x8000000000000000LL;
                  v48 = 1;
                  goto LABEL_49;
                }
                *(_OWORD *)v82 = v83;
                v25 = v129[0].m256i_i64[1];
              }
            }
            v102 = *(_OWORD *)v82;
            v101 = *(_OWORD *)v82;
            v100 = v25;
            v95 = *(_QWORD *)(v19 + i - 8);
            v29 = *(_OWORD *)(v19 + i - 72);
            v30 = *(_OWORD *)(v19 + i - 56);
            v31 = *(_OWORD *)(v19 + i - 40);
            *(_OWORD *)&v94.m256i_u64[2] = *(_OWORD *)(v19 + i - 24);
            *(_OWORD *)v94.m256i_i8 = v31;
            *(_OWORD *)&v93.m256i_u64[2] = v30;
            *(_OWORD *)v93.m256i_i8 = v29;
            if ( v25 == 0x8000000000000000LL )
              v32 = 0LL;
            else
              v32 = v101;
            just::compiler::Compiler::find_module_file(v129, v24, v23, &v93, v32, *((_QWORD *)&v101 + 1));
            v37 = v129[0].m256i_i8[0];
            if ( v129[0].m256i_i8[0] != 56 )
            {
              v49 = *(__int32 *)((char *)v129[0].m256i_i32 + 1);
              *((_DWORD *)dest + 3) = v129[0].m256i_i32[1];
              *(_DWORD *)(dest + 9) = v49;
              v50 = v129[0].m256i_i64[1];
              v83 = *(_OWORD *)&v129[0].m256i_u64[2];
              *((_QWORD *)dest + 13) = v129[3].m256i_i64[0];
              *(__m256i *)(dest + 72) = v129[2];
              *(__m256i *)(dest + 40) = v129[1];
              *(_OWORD *)(dest + 24) = v83;
              dest[8] = v37;
              *((_QWORD *)dest + 2) = v50;
              *(_QWORD *)dest = 0x8000000000000000LL;
              v48 = 1;
              goto LABEL_48;
            }
            v102 = *(_OWORD *)&v129[0].m256i_u64[2];
            if ( v129[0].m256i_i64[1] == 0x8000000000000000LL )
            {
              if ( !*(_BYTE *)(v19 + i) )
              {
                *(__int64 *)((char *)v129[2].m256i_i64 + 7) = *(_QWORD *)(v99 + i + 192);
                v59 = *(_OWORD *)(v99 + i + 128);
                v60 = *(_OWORD *)(v99 + i + 144);
                v61 = *(_OWORD *)(v99 + i + 160);
                *(_OWORD *)((char *)&v129[1].m256i_u64[2] + 7) = *(_OWORD *)(v99 + i + 176);
                *(_OWORD *)((char *)&v129[1].m256i_u32[1] + 3) = v61;
                *(_OWORD *)((char *)&v129[0].m256i_u64[2] + 7) = v60;
                *(_OWORD *)((char *)&v129[0].m256i_u32[1] + 3) = v59;
                dest[8] = 34;
                v62 = *(_OWORD *)&v129[0].m256i_u64[2];
                v63 = *(_OWORD *)v129[1].m256i_i8;
                v64 = *(_OWORD *)&v129[1].m256i_u64[2];
                *(_OWORD *)(dest + 9) = *(_OWORD *)v129[0].m256i_i8;
                *(_OWORD *)(dest + 25) = v62;
                *(_OWORD *)(dest + 41) = v63;
                *(_OWORD *)(dest + 57) = v64;
                *(_OWORD *)(dest + 72) = *(_OWORD *)((char *)&v129[1].m256i_u64[3] + 7);
                *(_QWORD *)dest = 0x8000000000000000LL;
                v48 = 1;
                goto LABEL_48;
              }
            }
            else
            {
              *(_QWORD *)v82 = v129[0].m256i_i64[1];
              *(_OWORD *)&v82[8] = v102;
              if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(
                                      v82,
                                      *(_QWORD *)&v132[8],
                                      *(_QWORD *)&v132[16]) )
              {
                *((_QWORD *)dest + 7) = *(_QWORD *)&v82[16];
                *(_OWORD *)(dest + 40) = *(_OWORD *)v82;
                *(_OWORD *)((char *)&v129[0].m256i_u32[1] + 3) = *(_OWORD *)&v132[48];
                *(__int64 *)((char *)&v129[0].m256i_i64[2] + 7) = *(_QWORD *)&v132[64];
                dest[8] = 8;
                v65 = *(__int64 *)((char *)&v129[0].m256i_i64[1] + 7);
                v66 = *(__int64 *)((char *)&v129[0].m256i_i64[2] + 7);
                *(_OWORD *)(dest + 9) = *(_OWORD *)v129[0].m256i_i8;
                *((_QWORD *)dest + 3) = v65;
                *((_QWORD *)dest + 4) = v66;
                *(_QWORD *)dest = 0x8000000000000000LL;
                v48 = 0;
LABEL_48:
                core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v100);
LABEL_49:
                core::ptr::drop_in_place<just::ast::Ast>(&v133);
LABEL_50:
                core::ptr::drop_in_place<alloc::vec::Vec<just::name::Name>>(v85, v92);
                core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v132);
                core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(
                  *(_QWORD *)&v132[24],
                  *(_QWORD *)&v132[32]);
                core::ptr::drop_in_place<core::option::Option<just::namepath::Namepath>>(&v132[96]);
                if ( !v48 )
                {
LABEL_56:
                  core::ptr::drop_in_place<std::path::PathBuf>(&v132[72]);
LABEL_57:
                  core::ptr::drop_in_place<alloc::vec::Vec<just::source::Source>>(&v89);
                  core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,&str>>(&v117);
                  core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,std::path::PathBuf>>(v114);
                  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v96);
                  return core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,just::ast::Ast>>(&v105);
                }
LABEL_55:
                core::ptr::drop_in_place<std::path::PathBuf>(&v132[48]);
                goto LABEL_56;
              }
              <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
                v129,
                *(_QWORD *)&v82[8],
                *(_QWORD *)&v82[16]);
              v38 = v19 + i - 72;
              v93.m256i_i64[2] = v129[0].m256i_i64[2];
              *(_OWORD *)v93.m256i_i8 = *(_OWORD *)v129[0].m256i_i8;
              core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v103 + i);
              *(_QWORD *)(v19 + i - 152) = v93.m256i_i64[2];
              *(_OWORD *)(v19 + i - 168) = *(_OWORD *)v93.m256i_i8;
              v95 = *(_QWORD *)(v38 + 64);
              v39 = *(_OWORD *)v38;
              v40 = *(_OWORD *)(v38 + 16);
              v41 = *(_OWORD *)(v38 + 32);
              *(_OWORD *)&v94.m256i_u64[2] = *(_OWORD *)(v38 + 48);
              *(_OWORD *)v94.m256i_i8 = v41;
              *(_OWORD *)&v93.m256i_u64[2] = v40;
              *(_OWORD *)v93.m256i_i8 = v39;
              v84 = *(_QWORD *)&v82[16];
              v83 = *(_OWORD *)v82;
              just::source::Source::module(v129, v132, &v93, &v83);
              alloc::vec::Vec<T,A>::push(&v89, v129, &off_42E598);
            }
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v100);
          }
        }
      }
      v84 = *(_QWORD *)&v132[64];
      v83 = *(_OWORD *)&v132[48];
      <just::ast::Ast as core::clone::Clone>::clone(v129, &v133);
      hashbrown::map::HashMap<K,V,S,A>::insert(&v93, &v105, &v83, v129);
      core::ptr::drop_in_place<core::option::Option<just::ast::Ast>>(&v93);
      core::ptr::drop_in_place<just::ast::Ast>(&v133);
      core::ptr::drop_in_place<alloc::vec::Vec<just::name::Name>>(v85, v92);
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v132);
      core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(
        *(_QWORD *)&v132[24],
        *(_QWORD *)&v132[32]);
      core::ptr::drop_in_place<core::option::Option<just::namepath::Namepath>>(&v132[96]);
      core::ptr::drop_in_place<std::path::PathBuf>(&v132[72]);
      v8 = v91;
      v4 = dest;
      if ( !v91 )
        goto LABEL_38;
    }
    v67 = *(__int32 *)((char *)v129[0].m256i_i32 + 1);
    *((_DWORD *)v4 + 3) = v129[0].m256i_i32[1];
    *(_DWORD *)(v4 + 9) = v67;
    v68 = *(_OWORD *)&v129[0].m256i_u64[1];
    v69 = *(_OWORD *)&v129[0].m256i_u64[3];
    v70 = *(_OWORD *)&v129[1].m256i_u64[3];
    *((_OWORD *)v4 + 3) = *(_OWORD *)&v129[1].m256i_u64[1];
    *((_OWORD *)v4 + 4) = v70;
    *((_OWORD *)v4 + 5) = *(_OWORD *)&v129[2].m256i_u64[1];
    *((_OWORD *)v4 + 6) = *(_OWORD *)&v129[2].m256i_u64[3];
    v4[8] = v12;
    *((_OWORD *)v4 + 1) = v68;
    *((_OWORD *)v4 + 2) = v69;
LABEL_54:
    *(_QWORD *)v4 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v132);
    core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(
      *(_QWORD *)&v132[24],
      *(_QWORD *)&v132[32]);
    core::ptr::drop_in_place<core::option::Option<just::namepath::Namepath>>(&v132[96]);
    goto LABEL_55;
  }
LABEL_38:
  v107.m256i_i64[0] = 0x8000000000000000LL;
LABEL_39:
  core::ptr::drop_in_place<core::option::Option<just::source::Source>>(&v107);
  v107.m256i_i64[0] = 0x8000000000000000LL;
  v132[64] = 37;
  just::analyzer::Analyzer::analyze(
    (int)v129,
    (int)&v105,
    (int)&v107,
    8,
    0,
    v97,
    v98,
    (__int64)v132,
    (__int64)v114,
    v87,
    *((__int64 *)&v87 + 1));
  v124 = *(_OWORD *)&v129[0].m256i_u64[1];
  v125 = *(_OWORD *)&v129[0].m256i_u64[3];
  v126 = *(_OWORD *)&v129[1].m256i_u64[1];
  v127 = *(_OWORD *)&v129[1].m256i_u64[3];
  v128 = *(_OWORD *)&v129[2].m256i_u64[1];
  if ( v129[0].m256i_i64[0] == 0x8000000000000000LL )
  {
    *(_OWORD *)((char *)&v129[2].m256i_u32[1] + 3) = v128;
    *(_OWORD *)((char *)&v129[1].m256i_u64[2] + 7) = v127;
    *(_OWORD *)((char *)&v129[1].m256i_u32[1] + 3) = v126;
    *(_OWORD *)((char *)&v129[0].m256i_u64[2] + 7) = v125;
    *(_OWORD *)((char *)&v129[0].m256i_u32[1] + 3) = v124;
    v4[8] = 12;
    v42 = *(_OWORD *)&v129[0].m256i_u64[2];
    v43 = *(_OWORD *)v129[1].m256i_i8;
    v44 = *(_OWORD *)&v129[1].m256i_u64[2];
    *(_OWORD *)(v4 + 9) = *(_OWORD *)v129[0].m256i_i8;
    *(_OWORD *)(v4 + 25) = v42;
    *(_OWORD *)(v4 + 41) = v43;
    *(_OWORD *)(v4 + 57) = v44;
    *(_OWORD *)(v4 + 73) = *(_OWORD *)v129[2].m256i_i8;
    *((_QWORD *)v4 + 11) = *(__int64 *)((char *)&v129[2].m256i_i64[1] + 7);
    *(_QWORD *)v4 = 0x8000000000000000LL;
    goto LABEL_57;
  }
  memcpy(&v132[88], &v129[2].m256i_u64[3], 0x290uLL);
  *(_OWORD *)&v132[8] = v124;
  *(_OWORD *)&v132[24] = v125;
  *(_OWORD *)&v132[40] = v126;
  *(_OWORD *)&v132[56] = v127;
  *(_OWORD *)&v132[72] = v128;
  v108 = v106;
  v107 = v105;
  *(_QWORD *)v132 = v129[0].m256i_i64[0];
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v93, v87);
  v129[23].m256i_i64[3] = v93.m256i_i64[2];
  *(_OWORD *)&v129[23].m256i_u64[1] = *(_OWORD *)v93.m256i_i8;
  *(_OWORD *)&v129[25].m256i_u64[2] = v117;
  v129[26] = v118;
  v129[24] = v107;
  *(_OWORD *)v129[25].m256i_i8 = v108;
  memcpy(v129, v132, 0x2E8uLL);
  memcpy(v4, v129, 0x360uLL);
  core::ptr::drop_in_place<alloc::vec::Vec<just::source::Source>>(&v89);
  core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,std::path::PathBuf>>(v114);
  return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v96);
}