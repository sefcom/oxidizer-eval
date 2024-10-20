__int64 __fastcall uu_df::Options::from(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // r14
  const void *v9; // r13
  size_t v10; // rbp
  const void *v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rax
  char flag; // bl
  __int64 v16; // rbx
  char v17; // r15
  char v18; // r13
  __int64 v19; // rsi
  char v20; // r12
  __int128 *v21; // rdi
  unsigned __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v25; // [rsp+0h] [rbp-2F8h] BYREF
  unsigned __int64 v26; // [rsp+10h] [rbp-2E8h]
  __int128 v27; // [rsp+20h] [rbp-2D8h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-2C8h]
  __int64 v29; // [rsp+38h] [rbp-2C0h]
  unsigned __int64 v30; // [rsp+40h] [rbp-2B8h]
  _BYTE v31[24]; // [rsp+48h] [rbp-2B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-298h]
  __int64 v33; // [rsp+68h] [rbp-290h]
  __int64 v34; // [rsp+78h] [rbp-280h]
  __int64 v35; // [rsp+80h] [rbp-278h]
  __int64 v36; // [rsp+88h] [rbp-270h]
  _BYTE v37[72]; // [rsp+90h] [rbp-268h] BYREF
  __int128 v38; // [rsp+E0h] [rbp-218h] BYREF
  unsigned __int64 v39; // [rsp+F0h] [rbp-208h]
  __int128 v40; // [rsp+100h] [rbp-1F8h] BYREF
  __int128 v41; // [rsp+110h] [rbp-1E8h]
  __int128 v42; // [rsp+120h] [rbp-1D8h]
  __int128 v43; // [rsp+130h] [rbp-1C8h]
  const char *v44; // [rsp+140h] [rbp-1B8h] BYREF
  __int64 v45; // [rsp+148h] [rbp-1B0h]
  __int128 v46; // [rsp+150h] [rbp-1A8h] BYREF
  unsigned __int64 v47; // [rsp+160h] [rbp-198h]
  const char **v48; // [rsp+168h] [rbp-190h] BYREF
  __int64 (__fastcall *v49)(); // [rsp+170h] [rbp-188h]
  __int128 *v50; // [rsp+178h] [rbp-180h]
  __int64 (__fastcall *v51)(); // [rsp+180h] [rbp-178h]
  __int64 v52; // [rsp+188h] [rbp-170h]
  _OWORD v53[2]; // [rsp+190h] [rbp-168h] BYREF
  __int128 v54; // [rsp+1B0h] [rbp-148h]
  __int128 v55; // [rsp+1C0h] [rbp-138h]
  __int128 v56; // [rsp+1D0h] [rbp-128h]
  __int64 v57; // [rsp+1E0h] [rbp-118h]
  __int128 v58; // [rsp+1F0h] [rbp-108h]
  __int128 v59; // [rsp+200h] [rbp-F8h]
  __int128 v60; // [rsp+210h] [rbp-E8h]
  __int64 v61; // [rsp+220h] [rbp-D8h]
  __int128 v62; // [rsp+230h] [rbp-C8h]
  __int64 v63; // [rsp+240h] [rbp-B8h]
  __int128 v64; // [rsp+248h] [rbp-B0h]
  unsigned __int64 v65; // [rsp+258h] [rbp-A0h]
  __int128 v66; // [rsp+260h] [rbp-98h]
  unsigned __int64 v67; // [rsp+270h] [rbp-88h]
  __int128 v68; // [rsp+280h] [rbp-78h]
  __int128 v69; // [rsp+290h] [rbp-68h]
  __int64 v70; // [rsp+2A8h] [rbp-50h] BYREF
  __int128 v71; // [rsp+2B0h] [rbp-48h]
  __int64 v72; // [rsp+2C0h] [rbp-38h]

  v2 = a1;
  v29 = a2;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v37, a2, &unk_189A0, 4LL);
  v44 = (const char *)&unk_189A0;
  v45 = 4LL;
  if ( *(_QWORD *)v37 )
  {
    v43 = *(_OWORD *)&v37[56];
    v42 = *(_OWORD *)&v37[40];
    v41 = *(_OWORD *)&v37[24];
    v40 = *(_OWORD *)&v37[8];
    v48 = &v44;
    v49 = <&T as core::fmt::Display>::fmt;
    v50 = &v40;
    v51 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v31 = &anon_6218007a20280e3719fcdd1ea18f6230_8_llvm_8855673205947102191;
    *(_QWORD *)&v31[8] = 2LL;
    v33 = 0LL;
    *(_QWORD *)&v31[16] = &v48;
    v32 = 2LL;
    core::panicking::panic_fmt(v31, &off_12BA40);
  }
  v54 = *(_OWORD *)&v37[16];
  v55 = *(_OWORD *)&v37[32];
  v56 = *(_OWORD *)&v37[48];
  v57 = *(_QWORD *)&v37[64];
  if ( *(_QWORD *)&v37[8] )
  {
    *(_QWORD *)v37 = *(_QWORD *)&v37[8];
    *(_OWORD *)&v37[8] = v54;
    *(_OWORD *)&v37[24] = v55;
    *(_OWORD *)&v37[40] = v56;
    *(_QWORD *)&v37[56] = v57;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v40, v37);
    v25 = v40;
    v26 = v41;
  }
  else
  {
    *(_QWORD *)&v25 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v37, v29, aExcludeType, 12LL);
  v44 = aExcludeType;
  v45 = 12LL;
  if ( *(_QWORD *)v37 )
  {
    v43 = *(_OWORD *)&v37[56];
    v42 = *(_OWORD *)&v37[40];
    v41 = *(_OWORD *)&v37[24];
    v40 = *(_OWORD *)&v37[8];
    v48 = &v44;
    v49 = <&T as core::fmt::Display>::fmt;
    v50 = &v40;
    v51 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)v31 = &anon_6218007a20280e3719fcdd1ea18f6230_8_llvm_8855673205947102191;
    *(_QWORD *)&v31[8] = 2LL;
    v33 = 0LL;
    *(_QWORD *)&v31[16] = &v48;
    v32 = 2LL;
    core::panicking::panic_fmt(v31, &off_12BA58);
  }
  v58 = *(_OWORD *)&v37[16];
  v59 = *(_OWORD *)&v37[32];
  v60 = *(_OWORD *)&v37[48];
  v61 = *(_QWORD *)&v37[64];
  if ( !*(_QWORD *)&v37[8] )
  {
    *(_QWORD *)&v27 = 0x8000000000000000LL;
    v3 = v29;
    goto LABEL_34;
  }
  *(_QWORD *)v37 = *(_QWORD *)&v37[8];
  *(_OWORD *)&v37[8] = v58;
  *(_OWORD *)&v37[24] = v59;
  *(_OWORD *)&v37[40] = v60;
  *(_QWORD *)&v37[56] = v61;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v40, v37);
  v27 = v40;
  v28 = v41;
  v3 = v29;
  if ( (_QWORD)v25 != 0x8000000000000000LL && (_QWORD)v27 != 0x8000000000000000LL )
  {
    v4 = *((_QWORD *)&v25 + 1);
    if ( !*((_QWORD *)&v25 + 1)
      || (BYTE8(v25) & 7) != 0
      || v26 > 0x555555555555555LL
      || (v34 = *((_QWORD *)&v27 + 1)) == 0
      || (v34 & 7) != 0
      || (v30 = v28, v28 > 0x555555555555555LL) )
    {
      core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
    }
    *(_QWORD *)v31 = 0LL;
    *(_QWORD *)&v31[8] = 8LL;
    *(_QWORD *)&v31[16] = 0LL;
    if ( v26 )
    {
      v52 = a1;
      v35 = *((_QWORD *)&v25 + 1) + 24 * v26;
      v36 = v34 + 24 * v30;
      do
      {
        if ( v30 )
        {
          v8 = v34;
          while ( v8 )
          {
            v9 = *(const void **)(v8 + 8);
            v10 = *(_QWORD *)(v8 + 16);
            core::slice::raw::from_raw_parts::precondition_check(v9, 1LL, 1LL, v10);
            v11 = *(const void **)(v4 + 8);
            v12 = *(_QWORD *)(v4 + 16);
            core::slice::raw::from_raw_parts::precondition_check(v11, 1LL, 1LL, v12);
            if ( v10 == v12 && !bcmp(v9, v11, v10) )
            {
              <alloc::string::String as core::clone::Clone>::clone(&v40, v4);
              v13 = *(_QWORD *)&v31[16];
              if ( *(_QWORD *)&v31[16] == *(_QWORD *)v31 )
                alloc::raw_vec::RawVec<T,A>::grow_one(v31);
              v5 = *(_QWORD *)&v31[8];
              v6 = 3 * v13;
              v7 = v40;
              *(_QWORD *)(*(_QWORD *)&v31[8] + 8 * v6 + 16) = v41;
              *(_OWORD *)(v5 + 8 * v6) = v7;
              *(_QWORD *)&v31[16] = v13 + 1;
              break;
            }
            v8 += 24LL;
            if ( v8 == v36 )
              break;
          }
        }
        v4 += 24LL;
      }
      while ( v4 != v35 );
      *(_OWORD *)v37 = *(_OWORD *)v31;
      *(_QWORD *)&v37[16] = *(_QWORD *)&v31[16];
      v2 = v52;
      v3 = v29;
      if ( *(_QWORD *)&v31[16] )
      {
        v14 = *(_QWORD *)v31;
        v68 = *(_OWORD *)&v31[8];
        if ( *(_QWORD *)v31 != 0x8000000000000000LL )
        {
          *(_QWORD *)(v52 + 8) = 4LL;
          *(_QWORD *)(v2 + 16) = v14;
          *(_OWORD *)(v2 + 24) = v68;
          *(_QWORD *)v2 = 0x8000000000000000LL;
          if ( (_QWORD)v27 == 0x8000000000000000LL )
            goto LABEL_51;
LABEL_50:
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v27);
LABEL_51:
          if ( (_QWORD)v25 != 0x8000000000000000LL )
          {
            v21 = &v25;
            goto LABEL_53;
          }
          return v2;
        }
        goto LABEL_34;
      }
    }
    else
    {
      *(_QWORD *)&v37[16] = *(_QWORD *)&v31[16];
      *(_OWORD *)v37 = *(_OWORD *)v31;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v37);
  }
LABEL_34:
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aLocal, 5LL, &off_12BA70);
  LOBYTE(v36) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aAll, 3LL, &off_12BA88);
  LOBYTE(v30) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aSync_0, 4LL, &off_12BAA0);
  uu_df::blocks::read_block_size(v53, v3);
  LOBYTE(v35) = flag;
  if ( *(_QWORD *)&v53[0] == 3LL )
  {
    v16 = *((_QWORD *)&v53[0] + 1);
  }
  else
  {
    *(_OWORD *)&v37[16] = v53[1];
    *(_OWORD *)v37 = v53[0];
    uu_df::Options::from::{{closure}}(&v40, v3, v37);
    v16 = *((_QWORD *)&v40 + 1);
    v69 = v41;
    if ( (_QWORD)v40 != 5LL )
    {
      *(_OWORD *)(v2 + 8) = v40;
      *(_OWORD *)(v2 + 24) = v69;
      *(_QWORD *)v2 = 0x8000000000000000LL;
      if ( (_QWORD)v27 == 0x8000000000000000LL )
        goto LABEL_51;
      goto LABEL_50;
    }
  }
  v17 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           v3,
                           aHumanReadableB,
                           21LL,
                           &off_12BAB8)
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           v3,
                           aHumanReadableD,
                           22LL,
                           &off_12BAD0) )
  {
    v17 = 2;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             v3,
                             anon_6295e1784fd24e8d722933e78c148adb_74_llvm_17845274406068090511,
                             11LL,
                             &off_12BAE8) )
      v17 = 3
          * ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                                v3,
                                anon_6295e1784fd24e8d722933e78c148adb_72_llvm_17845274406068090511,
                                6LL,
                                &off_12BB00) == 2);
  }
  v18 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           v3,
                           aHumanReadableB,
                           21LL,
                           &off_12BB18) )
    v18 = 2
        * (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aHumanReadableD, 22LL, &off_12BB30) ^ 1);
  v39 = v26;
  v38 = v25;
  v46 = v27;
  v47 = v28;
  v19 = v3;
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v3, aTotal, 5LL, &off_12BB48);
  uu_df::columns::Column::from_matches(&v70, v19);
  if ( v70 )
  {
    *(_QWORD *)(v2 + 8) = 3LL;
    *(_OWORD *)(v2 + 16) = v71;
    *(_QWORD *)(v2 + 32) = v72;
    *(_QWORD *)v2 = 0x8000000000000000LL;
    if ( (_QWORD)v46 != 0x8000000000000000LL )
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v46);
    if ( (_QWORD)v38 != 0x8000000000000000LL )
    {
      v21 = &v38;
LABEL_53:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v21);
    }
  }
  else
  {
    v63 = v72;
    v62 = v71;
    v65 = v39;
    v64 = v38;
    v22 = v47;
    v67 = v47;
    v23 = v46;
    v66 = v46;
    *(_OWORD *)v2 = v71;
    *(_QWORD *)(v2 + 64) = v22;
    *(_OWORD *)(v2 + 48) = v23;
    *(_QWORD *)(v2 + 16) = v63;
    *(_OWORD *)(v2 + 24) = v64;
    *(_QWORD *)(v2 + 40) = v65;
    *(_QWORD *)(v2 + 72) = v16;
    *(_BYTE *)(v2 + 80) = v35;
    *(_BYTE *)(v2 + 81) = v36;
    *(_BYTE *)(v2 + 82) = v30;
    *(_BYTE *)(v2 + 83) = v20;
    *(_BYTE *)(v2 + 84) = v18;
    *(_BYTE *)(v2 + 85) = v17;
  }
  return v2;
}
