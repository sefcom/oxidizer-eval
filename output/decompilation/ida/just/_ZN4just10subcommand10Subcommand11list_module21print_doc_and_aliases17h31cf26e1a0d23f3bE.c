__int64 __fastcall just::subcommand::Subcommand::list_module::print_doc_and_aliases(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        __int64 a9,
        __int64 a10)
{
  char v13; // dl
  int v14; // eax
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 i; // rbx
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // r13
  const char ****v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // ecx
  char v29; // bl
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // r15
  __int64 v34; // r14
  __int64 v35; // rax
  const char ****v36; // rdx
  unsigned int v37; // ecx
  __int64 v39; // rsi
  __int64 v40; // rdi
  char **v41; // r8
  char v42; // [rsp+Fh] [rbp-1B9h]
  const char **v43; // [rsp+10h] [rbp-1B8h] BYREF
  const char *v44; // [rsp+18h] [rbp-1B0h]
  __int64 v45; // [rsp+20h] [rbp-1A8h]
  __int64 v46; // [rsp+28h] [rbp-1A0h]
  int v47; // [rsp+30h] [rbp-198h]
  int v48; // [rsp+34h] [rbp-194h]
  __int64 v49; // [rsp+38h] [rbp-190h]
  __int64 v50; // [rsp+40h] [rbp-188h]
  const char *v51; // [rsp+48h] [rbp-180h] BYREF
  __int64 v52; // [rsp+50h] [rbp-178h]
  const char ****v53; // [rsp+58h] [rbp-170h]
  __int64 v54; // [rsp+60h] [rbp-168h]
  void *v55; // [rsp+68h] [rbp-160h]
  __int64 v56; // [rsp+70h] [rbp-158h]
  _BYTE v57[17]; // [rsp+7Eh] [rbp-14Ah] BYREF
  char v58; // [rsp+8Fh] [rbp-139h]
  const char ***v59; // [rsp+90h] [rbp-138h] BYREF
  __int64 (__fastcall *v60)(); // [rsp+98h] [rbp-130h]
  __int128 v61; // [rsp+A0h] [rbp-128h] BYREF
  __m256i v62; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-F8h]
  __int128 v64; // [rsp+E0h] [rbp-E8h]
  __int128 v65; // [rsp+F0h] [rbp-D8h]
  __int64 v66; // [rsp+100h] [rbp-C8h]
  __int64 v67; // [rsp+108h] [rbp-C0h]
  __int64 v68; // [rsp+110h] [rbp-B8h]
  _QWORD v69[3]; // [rsp+118h] [rbp-B0h] BYREF
  __int128 v70; // [rsp+130h] [rbp-98h] BYREF
  __m256i v71; // [rsp+140h] [rbp-88h]
  __int128 v72; // [rsp+160h] [rbp-68h]
  __int128 v73; // [rsp+170h] [rbp-58h]
  __int128 v74; // [rsp+180h] [rbp-48h]
  __int64 v75; // [rsp+190h] [rbp-38h]

  v50 = a5;
  just::color::Color::stdout((__int64)v57, a1 + 388);
  v13 = *(_BYTE *)(a1 + 422);
  v49 = a4;
  if ( a4 || v13 != 2 && a7 != 0 )
  {
    v14 = 4;
    v42 = v13;
    if ( v58 && (v58 != 1 || !v57[0]) )
      v14 = 10;
    v46 = 0LL;
    v47 = v14;
    v48 = 10;
    v43 = (const char **)0x8000000000000000LL;
    v44 = asc_6BFED;
    v45 = 1LL;
    v15 = (_QWORD *)alloc::collections::btree::map::BTreeMap<K,V,A>::get(a9, a10, a2, a3);
    if ( !v15 )
      core::option::expect_failed(aNoEntryFoundFo, 22LL, &off_4313A0);
    v16 = 0LL;
    if ( a8 >= *v15 )
      v16 = a8 - *v15;
    v17 = v16 + 1;
    if ( v17 > 0xFFFF )
    {
      *(_QWORD *)&v61 = &off_42CE08;
      *((_QWORD *)&v61 + 1) = 1LL;
      v62.m256i_i64[0] = 8LL;
      *(_OWORD *)&v62.m256i_u64[1] = 0LL;
      core::panicking::panic_fmt(&v61, &off_431400);
    }
    *(_QWORD *)&v61 = asc_65DB0;
    *((_QWORD *)&v61 + 1) = <&T as core::fmt::Display>::fmt;
    v62.m256i_i64[0] = (__int64)&v43;
    v62.m256i_i64[1] = (__int64)<ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
    v62.m256i_i64[2] = 0LL;
    v62.m256i_i16[12] = v17;
    v51 = "\x01";
    v52 = 2LL;
    v55 = &unk_71130;
    v56 = 2LL;
    v53 = (const char ****)&v61;
    v54 = 3LL;
    std::io::stdio::_print(&v51);
    core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v43);
    v69[0] = v57;
    v69[1] = a6;
    v69[2] = a7;
    if ( v42 == 0 && a7 != 0 )
      just::subcommand::Subcommand::list_module::print_doc_and_aliases::{{closure}}(v69);
    v18 = v49;
    v19 = v50;
    if ( v49 )
    {
      *(_QWORD *)&v61 = &off_42F150;
      *((_QWORD *)&v61 + 1) = 1LL;
      v62.m256i_i64[0] = 8LL;
      *(_OWORD *)&v62.m256i_u64[1] = 0LL;
      std::io::stdio::_print(&v61);
      v20 = just::subcommand::backtick_re();
      regex_automata::meta::regex::Regex::find_iter(&v70, v20, v18, v19);
      v66 = v75;
      v65 = v74;
      v64 = v73;
      v63 = v72;
      v62 = v71;
      v61 = v70;
      v67 = v18;
      v68 = v19;
      for ( i = 0LL; ; i = (__int64)v25 )
      {
        regex_automata::util::iter::Searcher::advance(&v51, &v62.m256i_u64[2], v66, &v61);
        if ( (_DWORD)v51 != 1 )
          break;
        v22 = v67;
        v23 = v68;
        v24 = v52;
        v25 = v53;
        v26 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                i,
                v52,
                v49,
                v50);
        if ( !v26 )
        {
          v39 = v50;
          v40 = v49;
          v41 = &off_4313D0;
          goto LABEL_41;
        }
        if ( v27 )
        {
          v28 = 4;
          if ( v58 && (v58 != 1 || !v57[0]) )
            v28 = 10;
          v46 = 0LL;
          v47 = v28;
          v48 = 10;
          v43 = (const char **)0x8000000000000000LL;
          v44 = (const char *)v26;
          v45 = v27;
          v59 = &v43;
          v60 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
          v51 = asc_65DB0;
          v52 = 1LL;
          v55 = 0LL;
          v53 = &v59;
          v54 = 1LL;
          std::io::stdio::_print(&v51);
          core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v43);
        }
        v29 = v57[0];
        v30 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v24,
                v25,
                v22,
                v23);
        if ( !v30 )
        {
          v40 = v22;
          v39 = v23;
          i = v24;
          v24 = (__int64)v25;
          v41 = &off_4313E8;
LABEL_41:
          core::str::slice_error_fail(v40, v39, i, v24, v41);
        }
        v32 = 6;
        if ( v58 && (v58 == 2 || !v29) )
          v32 = 10;
        v46 = 0LL;
        v47 = v32;
        v48 = 10;
        v43 = (const char **)0x8000000000000000LL;
        v44 = (const char *)v30;
        v45 = v31;
        v59 = &v43;
        v60 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
        v51 = asc_65DB0;
        v52 = 1LL;
        v55 = 0LL;
        v53 = &v59;
        v54 = 1LL;
        std::io::stdio::_print(&v51);
        core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v43);
      }
      core::ptr::drop_in_place<regex::regex::string::Matches>(&v61);
      v33 = v49;
      v34 = v50;
      v35 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              i,
              v49,
              v50);
      if ( !v35 )
        core::str::slice_error_fail(v33, v34, i, v34, &off_4313B8);
      if ( v36 )
      {
        v37 = 4;
        if ( v58 && (v58 == 2 || !v57[0]) )
          v37 = 10;
        v54 = 0LL;
        v55 = (void *)(v37 | 0xA00000000LL);
        v51 = (const char *)0x8000000000000000LL;
        v52 = v35;
        v53 = v36;
        v43 = &v51;
        v44 = (const char *)<ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
        *(_QWORD *)&v61 = asc_65DB0;
        *((_QWORD *)&v61 + 1) = 1LL;
        v62.m256i_i64[0] = (__int64)&v43;
        *(_OWORD *)&v62.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v61);
        core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v51);
      }
    }
    if ( v42 == 1 && a7 != 0 )
      just::subcommand::Subcommand::list_module::print_doc_and_aliases::{{closure}}(v69);
  }
  *(_QWORD *)&v61 = &off_42DBF8;
  *((_QWORD *)&v61 + 1) = 1LL;
  v62.m256i_i64[0] = 8LL;
  *(_OWORD *)&v62.m256i_u64[1] = 0LL;
  return std::io::stdio::_print(&v61);
}