__int64 __fastcall just::subcommand::Subcommand::run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbp
  char v12; // bp
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r13
  char v26; // al
  _OWORD *v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  unsigned __int8 v37; // [rsp+Fh] [rbp-8F9h]
  __int128 v40; // [rsp+40h] [rbp-8C8h]
  __int128 v41; // [rsp+50h] [rbp-8B8h]
  __int128 v42; // [rsp+60h] [rbp-8A8h]
  __int128 v43; // [rsp+70h] [rbp-898h]
  __int128 v44; // [rsp+80h] [rbp-888h]
  __int128 v45; // [rsp+90h] [rbp-878h]
  __int64 v46; // [rsp+A0h] [rbp-868h]
  _BYTE v47[104]; // [rsp+A8h] [rbp-860h] BYREF
  __int64 v48; // [rsp+110h] [rbp-7F8h]
  __int64 v49; // [rsp+118h] [rbp-7F0h]
  __int64 v50; // [rsp+120h] [rbp-7E8h]
  __int64 v51; // [rsp+128h] [rbp-7E0h]
  _BYTE v52[64]; // [rsp+130h] [rbp-7D8h] BYREF
  _BYTE v53[8]; // [rsp+170h] [rbp-798h] BYREF
  __int64 v54; // [rsp+178h] [rbp-790h]
  __int64 v55; // [rsp+180h] [rbp-788h]
  _QWORD v56[2]; // [rsp+188h] [rbp-780h] BYREF
  _OWORD v57[3]; // [rsp+198h] [rbp-770h] BYREF
  __int128 v58; // [rsp+1C8h] [rbp-740h] BYREF
  _BYTE v59[7]; // [rsp+1D8h] [rbp-730h] BYREF
  __m256i v60; // [rsp+1DFh] [rbp-729h]
  __int128 v61; // [rsp+1FFh] [rbp-709h]
  __int128 v62; // [rsp+210h] [rbp-6F8h]
  __int128 v63; // [rsp+220h] [rbp-6E8h]
  __int128 v64; // [rsp+230h] [rbp-6D8h]
  __int128 v65; // [rsp+240h] [rbp-6C8h]
  __int128 v66; // [rsp+250h] [rbp-6B8h]
  __int128 v67; // [rsp+260h] [rbp-6A8h]
  __int64 v68; // [rsp+270h] [rbp-698h]
  _BYTE v69[104]; // [rsp+280h] [rbp-688h] BYREF
  __int64 v70; // [rsp+2E8h] [rbp-620h]
  _BYTE src[752]; // [rsp+2F0h] [rbp-618h] BYREF
  _BYTE dest[752]; // [rsp+5E8h] [rbp-320h] BYREF

  v51 = a3;
  v9 = std::path::Path::parent(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
  if ( !v9 )
    core::option::unwrap_failed(&off_4310B0);
  <&std::path::Path as lexiclean::Lexiclean>::lexiclean(v53, v9, v10);
  v11 = (_QWORD *)a5;
  if ( *(_BYTE *)(a5 + 486) == 1 && *(_QWORD *)(a2 + 264) < (signed __int64)0x8000000000000002LL )
  {
    v50 = *(_QWORD *)(a2 + 136);
    v37 = *(_BYTE *)(a2 + 423);
    v49 = v54;
    v48 = v55;
    while ( 1 )
    {
      just::justfile::Justfile::run((__int64)v47, v11, a2, a4, a8, a6, a7);
      if ( (v47[0] & 0x3E) != 0x34 )
        break;
      v68 = *(_QWORD *)&v47[96];
      v67 = *(_OWORD *)&v47[80];
      v66 = *(_OWORD *)&v47[64];
      v65 = *(_OWORD *)&v47[48];
      v64 = *(_OWORD *)&v47[32];
      v63 = *(_OWORD *)&v47[16];
      v62 = *(_OWORD *)v47;
      just::search::Search::search_parent_directory((__int64)v57, *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      *(_QWORD *)&v69[96] = *(_QWORD *)&v47[96];
      *(_OWORD *)&v69[80] = *(_OWORD *)&v47[80];
      *(_OWORD *)&v69[64] = *(_OWORD *)&v47[64];
      *(_OWORD *)&v69[48] = *(_OWORD *)&v47[48];
      *(_OWORD *)&v69[32] = *(_OWORD *)&v47[32];
      *(_OWORD *)&v69[16] = *(_OWORD *)&v47[16];
      *(_OWORD *)v69 = *(_OWORD *)v47;
      if ( *(_QWORD *)&v57[0] == 0x8000000000000000LL )
      {
        v12 = v69[0];
        core::ptr::drop_in_place<just::search_error::SearchError>((char *)v57 + 8);
        *(_QWORD *)&v52[47] = *(_QWORD *)&v47[48];
        *(_OWORD *)&v52[32] = *(_OWORD *)&v47[33];
        *(_OWORD *)&v52[16] = *(_OWORD *)&v47[17];
        *(_OWORD *)v52 = *(_OWORD *)&v47[1];
        if ( v12 != 56 )
        {
          v33 = *(_OWORD *)&v47[56];
          v34 = *(_OWORD *)&v47[72];
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v47[88];
          *(_OWORD *)(a1 + 72) = v34;
          *(_OWORD *)(a1 + 56) = v33;
          *(_QWORD *)(a1 + 48) = *(_QWORD *)&v47[48];
          v35 = *(_OWORD *)&v47[1];
          v36 = *(_OWORD *)&v47[17];
          *(_OWORD *)(a1 + 33) = *(_OWORD *)&v47[33];
          *(_OWORD *)(a1 + 17) = v36;
          *(_OWORD *)(a1 + 1) = v35;
          *(_BYTE *)a1 = v12;
          goto LABEL_23;
        }
      }
      else
      {
        *(_OWORD *)&v52[39] = v57[2];
        *(_OWORD *)&v52[23] = v57[1];
        *(_OWORD *)&v52[7] = v57[0];
        core::ptr::drop_in_place<just::subcommand::Subcommand::run::{{closure}}>(v69);
      }
      v61 = *(_OWORD *)&v52[39];
      v60 = *(__m256i *)&v52[7];
      core::ptr::drop_in_place<just::search::Search>(a4);
      v13 = *(_OWORD *)v60.m256i_i8;
      v14 = *(_OWORD *)&v60.m256i_u64[2];
      *(_OWORD *)(a4 + 32) = v61;
      *(_OWORD *)(a4 + 16) = v14;
      *(_OWORD *)a4 = v13;
      if ( v37 >= 2u )
      {
        v15 = std::path::Path::parent(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
        if ( !v15 )
          core::option::unwrap_failed(&off_4310C8);
        v17 = std::path::Path::strip_prefix(v49, v48, v15, v16);
        v19 = core::result::Result<T,E>::unwrap(v17, v18, &off_4310E0);
        std::path::Path::components(v69, v19, v20);
        *(_OWORD *)&v52[48] = *(_OWORD *)&v69[48];
        *(_OWORD *)&v52[32] = *(_OWORD *)&v69[32];
        *(_OWORD *)&v52[16] = *(_OWORD *)&v69[16];
        *(_OWORD *)v52 = *(_OWORD *)v69;
        core::iter::traits::iterator::Iterator::collect(v59, v52);
        v21 = *(__int64 *)((char *)v60.m256i_i64 + 1);
        v22 = *(__int64 *)((char *)&v60.m256i_i64[1] + 1);
        v23 = std::path::Path::file_name(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
        if ( !v23 )
          core::option::unwrap_failed(&off_4310F8);
        std::path::Path::join(v52, v21, v22, v23, v24);
        v58 = *(_OWORD *)&v52[8];
        v56[0] = &v58;
        v56[1] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)v69 = &off_431090;
        *(_QWORD *)&v69[8] = 2LL;
        *(_QWORD *)&v69[32] = 0LL;
        *(_QWORD *)&v69[16] = v56;
        *(_QWORD *)&v69[24] = 1LL;
        std::io::stdio::_eprint(v69);
        core::ptr::drop_in_place<std::path::PathBuf>(v52);
        core::ptr::drop_in_place<std::path::PathBuf>(v59);
      }
      just::subcommand::Subcommand::compile(v69);
      v25 = *(_QWORD *)v69;
      v40 = *(_OWORD *)&v69[8];
      v41 = *(_OWORD *)&v69[24];
      v42 = *(_OWORD *)&v69[40];
      v43 = *(_OWORD *)&v69[56];
      v44 = *(_OWORD *)&v69[72];
      v45 = *(_OWORD *)&v69[88];
      v46 = v70;
      if ( *(_QWORD *)v69 == 0x8000000000000000LL )
      {
        v27 = (_OWORD *)a1;
        *(_QWORD *)(a1 + 96) = v70;
        *(_OWORD *)(a1 + 80) = v45;
        *(_OWORD *)(a1 + 64) = v44;
        v28 = v40;
        v29 = v41;
        v30 = v42;
        v31 = v43;
        goto LABEL_22;
      }
      memcpy(dest, src, sizeof(dest));
      v11 = (_QWORD *)a5;
      core::ptr::drop_in_place<just::compilation::Compilation>(a5);
      *(_QWORD *)a5 = v25;
      *(_QWORD *)(a5 + 104) = v46;
      *(_OWORD *)(a5 + 88) = v45;
      *(_OWORD *)(a5 + 72) = v44;
      *(_OWORD *)(a5 + 56) = v43;
      *(_OWORD *)(a5 + 40) = v42;
      *(_OWORD *)(a5 + 24) = v41;
      *(_OWORD *)(a5 + 8) = v40;
      memcpy((void *)(a5 + 112), dest, 0x2F0uLL);
      if ( !*(_BYTE *)(a5 + 486) )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    just::justfile::Justfile::run((__int64)v47, v11, a2, a4, a8, a6, a7);
  }
  if ( *(_BYTE *)(a2 + 406) && (v26 = v47[0], (v47[0] & 0x3E) == 0x34) )
  {
    *(_BYTE *)a1 = 56;
    if ( v26 != 56 )
      core::ptr::drop_in_place<just::error::Error>(v47);
  }
  else
  {
    v27 = (_OWORD *)a1;
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v47[96];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v47[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v47[64];
    v28 = *(_OWORD *)v47;
    v29 = *(_OWORD *)&v47[16];
    v30 = *(_OWORD *)&v47[32];
    v31 = *(_OWORD *)&v47[48];
LABEL_22:
    v27[3] = v31;
    v27[2] = v30;
    v27[1] = v29;
    *v27 = v28;
  }
LABEL_23:
  core::ptr::drop_in_place<std::path::PathBuf>(v53);
  core::ptr::drop_in_place<just::compilation::Compilation>(a5);
  return core::ptr::drop_in_place<just::search::Search>(a4);
}