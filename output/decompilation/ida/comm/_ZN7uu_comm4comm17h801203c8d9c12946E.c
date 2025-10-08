__int64 __fastcall uu_comm::comm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 line; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rdx
  unsigned __int8 v14; // bp
  char v15; // bp
  __int64 v16; // r12
  __int64 v17; // r14
  char v18; // bp
  char v19; // bl
  bool v20; // cl
  bool v21; // al
  int v22; // ebp
  char v23; // r13
  __int64 v24; // r14
  __int64 v25; // r12
  char v26; // al
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r12
  char v33; // al
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // r14
  char v42; // al
  __int64 v43; // r12
  unsigned __int8 flag; // [rsp+7h] [rbp-1D1h]
  __int64 v46; // [rsp+8h] [rbp-1D0h]
  __int128 v47; // [rsp+10h] [rbp-1C8h]
  __int64 v48; // [rsp+20h] [rbp-1B8h]
  char v49; // [rsp+2Ch] [rbp-1ACh]
  __int64 v50; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-1A0h]
  __int64 v52; // [rsp+40h] [rbp-198h]
  __int64 v53; // [rsp+48h] [rbp-190h] BYREF
  __int64 v54; // [rsp+50h] [rbp-188h]
  __int64 v55; // [rsp+58h] [rbp-180h]
  int v56; // [rsp+64h] [rbp-174h]
  int v57; // [rsp+68h] [rbp-170h]
  int v58; // [rsp+6Ch] [rbp-16Ch] BYREF
  int v59; // [rsp+70h] [rbp-168h] BYREF
  int v60; // [rsp+74h] [rbp-164h] BYREF
  __int128 *v61; // [rsp+78h] [rbp-160h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+80h] [rbp-158h]
  __int128 v63; // [rsp+90h] [rbp-148h] BYREF
  __int128 *v64; // [rsp+A0h] [rbp-138h]
  __int128 v65; // [rsp+A8h] [rbp-130h]
  __int64 (__fastcall *v66)(); // [rsp+B8h] [rbp-120h]
  int *v67; // [rsp+C0h] [rbp-118h]
  __int64 (__fastcall *v68)(); // [rsp+C8h] [rbp-110h]
  __int128 **v69; // [rsp+D0h] [rbp-108h]
  __int64 (__fastcall *v70)(); // [rsp+D8h] [rbp-100h]
  __int128 v71; // [rsp+E0h] [rbp-F8h] BYREF
  __int128 *v72; // [rsp+F0h] [rbp-E8h]
  __int64 (__fastcall *v73)(); // [rsp+F8h] [rbp-E0h]
  void *v74; // [rsp+100h] [rbp-D8h]
  __int64 v75; // [rsp+108h] [rbp-D0h]
  __int64 v76; // [rsp+110h] [rbp-C8h]
  __int64 v77; // [rsp+118h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+120h] [rbp-B8h]
  __int64 v79; // [rsp+128h] [rbp-B0h]
  char v80; // [rsp+130h] [rbp-A8h]
  unsigned __int8 v81; // [rsp+131h] [rbp-A7h]
  char v82; // [rsp+132h] [rbp-A6h]
  __int64 v83; // [rsp+138h] [rbp-A0h] BYREF
  __int64 v84; // [rsp+140h] [rbp-98h]
  __int64 v85; // [rsp+148h] [rbp-90h]
  char v86; // [rsp+150h] [rbp-88h]
  unsigned __int8 v87; // [rsp+151h] [rbp-87h]
  char v88; // [rsp+152h] [rbp-86h]
  __int64 v89; // [rsp+158h] [rbp-80h]
  __int128 v90; // [rsp+160h] [rbp-78h] BYREF
  __int128 *v91; // [rsp+170h] [rbp-68h]
  _QWORD v92[3]; // [rsp+180h] [rbp-58h] BYREF
  _QWORD v93[8]; // [rsp+198h] [rbp-40h] BYREF

  v76 = a2;
  v93[0] = a3;
  v93[1] = a4;
  v8 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a5, ::a1, 1LL) ^ 1u;
  v48 = a5;
  v9 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a5, ::a2, 1LL) ^ 1u;
  alloc::slice::<impl [T]>::repeat(v92, a3, a4, v8);
  alloc::slice::<impl [T]>::repeat(&v63, a3, a4, v8 + v9);
  v91 = v64;
  v90 = v63;
  v50 = 0LL;
  v51 = 1LL;
  v52 = 0LL;
  line = uu_comm::LineReader::read_line(a1, (__int64)&v50);
  *(_QWORD *)&v47 = v11;
  v12 = line;
  v53 = 0LL;
  v54 = 1LL;
  v55 = 0LL;
  v46 = uu_comm::LineReader::read_line(v76, (__int64)&v53);
  *((_QWORD *)&v47 + 1) = v13;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aCheckOrder, 11LL);
  v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aNocheckOrder, 13LL);
  if ( v14 | flag )
  {
    v15 = v14 ^ 1;
  }
  else
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v63, v48, aFile1);
    v16 = clap_builder::parser::error::MatchesError::unwrap(aFile1, &v63);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v63, v48, aFile2);
    v17 = clap_builder::parser::error::MatchesError::unwrap(aFile2, &v63);
    v15 = 1;
    if ( v16 != 0 && v17 != 0 )
    {
      if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(v16, v17) )
      {
        v15 = 0;
      }
      else
      {
        uu_comm::are_files_identical(
          (__int64)&v63,
          *(_QWORD *)(v16 + 8),
          *(_QWORD *)(v16 + 16),
          *(_QWORD *)(v17 + 8),
          *(_QWORD *)(v17 + 16));
        v18 = v63;
        v19 = BYTE1(v63);
        if ( (_BYTE)v63 == 1 )
          core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(1LL, *((_QWORD *)&v63 + 1));
        v15 = v19 ^ 1 | v18;
      }
    }
  }
  v49 = v15;
  v77 = 0LL;
  v78 = 1LL;
  v79 = 0LL;
  v80 = 0;
  v81 = flag;
  v82 = 0;
  v83 = 0LL;
  v84 = 1LL;
  v85 = 0LL;
  v86 = 1;
  v87 = flag;
  v88 = 0;
  v20 = v12 == 0;
  v21 = v46 == 0;
  v22 = 0;
  if ( v46 == 0 || v12 == 0 )
  {
    v89 = a1;
    v57 = 0;
    v56 = 0;
    v23 = 0;
    while ( v20 )
    {
      if ( !v21 )
        goto LABEL_18;
      if ( v47 == 0 )
        goto LABEL_46;
      if ( !(_QWORD)v47 )
        goto LABEL_25;
      if ( !*((_QWORD *)&v47 + 1) )
        goto LABEL_18;
      v24 = v51;
      v25 = v52;
      v26 = <alloc::vec::Vec<T,A> as core::cmp::Ord>::cmp(v51, v52, v54, v55);
      if ( v26 )
      {
        if ( v26 != 1 )
        {
LABEL_18:
          if ( (v49 & 1) != 0 && !uu_comm::OrderChecker::verify_order(&v77, v51, v52) )
            goto LABEL_46;
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, ::a1, 1LL) )
          {
            alloc::string::String::from_utf8_lossy(&v71, v51, v52);
            v61 = &v71;
            v62 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
            *(_QWORD *)&v63 = &unk_17EF0;
            *((_QWORD *)&v63 + 1) = 1LL;
            v64 = (__int128 *)&v61;
            v65 = 1uLL;
            std::io::stdio::_print(&v63);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v71, *((_QWORD *)&v71 + 1));
          }
          v52 = 0LL;
          v27 = uu_comm::LineReader::read_line(v89, (__int64)&v50);
          v29 = v28;
          core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(
            v12,
            v47);
          v58 = ++v57;
          *(_QWORD *)&v47 = v29;
          v12 = v27;
          if ( v82 )
            goto LABEL_31;
          goto LABEL_30;
        }
        goto LABEL_25;
      }
      if ( (v49 & 1) != 0
        && (!uu_comm::OrderChecker::verify_order(&v77, v24, v25) || !uu_comm::OrderChecker::verify_order(&v83, v54, v55)) )
      {
        goto LABEL_46;
      }
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, ::a3, 1LL) )
      {
        alloc::string::String::from_utf8_lossy(&v61, v51, v52);
        *(_QWORD *)&v71 = &v90;
        *((_QWORD *)&v71 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v72 = (__int128 *)&v61;
        v73 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        *(_QWORD *)&v63 = &unk_190E8;
        *((_QWORD *)&v63 + 1) = 2LL;
        v64 = &v71;
        v65 = 2uLL;
        std::io::stdio::_print(&v63);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v61, v62);
      }
      v52 = 0LL;
      v55 = 0LL;
      v35 = uu_comm::LineReader::read_line(v89, (__int64)&v50);
      v37 = v36;
      v38 = v35;
      core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(
        v12,
        v47);
      v39 = uu_comm::LineReader::read_line(v76, (__int64)&v53);
      v41 = v40;
      core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(
        v46,
        *((_QWORD *)&v47 + 1));
      v60 = ++v56;
      *((_QWORD *)&v47 + 1) = v41;
      v46 = v39;
      *(_QWORD *)&v47 = v37;
      v12 = v38;
      if ( v82 )
      {
LABEL_31:
        v33 = v23;
        v34 = (v23 & 1) == 0;
        v23 = 1;
        if ( !v34 )
          v23 = v33;
        if ( flag )
          v23 = v33;
        goto LABEL_35;
      }
LABEL_30:
      if ( v88 == 1 )
        goto LABEL_31;
LABEL_35:
      v21 = v46 == 0;
      v20 = v12 == 0;
      if ( v12 && v46 )
        goto LABEL_46;
    }
    if ( !v21 )
      core::panicking::panic(aInternalErrorE, 40LL, &off_E0CB8);
LABEL_25:
    if ( (v49 & 1) != 0 && !uu_comm::OrderChecker::verify_order(&v83, v54, v55) )
      goto LABEL_46;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, ::a2, 1LL) )
    {
      alloc::string::String::from_utf8_lossy(&v61, v54, v55);
      *(_QWORD *)&v71 = v92;
      *((_QWORD *)&v71 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v72 = (__int128 *)&v61;
      v73 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      *(_QWORD *)&v63 = &unk_190E8;
      *((_QWORD *)&v63 + 1) = 2LL;
      v64 = &v71;
      v65 = 2uLL;
      std::io::stdio::_print(&v63);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v61, v62);
    }
    v55 = 0LL;
    v30 = uu_comm::LineReader::read_line(v76, (__int64)&v53);
    v32 = v31;
    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(
      v46,
      *((_QWORD *)&v47 + 1));
    v59 = ++v22;
    *((_QWORD *)&v47 + 1) = v32;
    v46 = v30;
    if ( v82 )
      goto LABEL_31;
    goto LABEL_30;
  }
  v23 = 0;
LABEL_46:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v48, aTotal, 5LL) )
  {
    v34 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             v48,
                             aZeroTerminated_0,
                             15LL) == 0;
    v42 = 10;
    if ( !v34 )
      v42 = 0;
    LOBYTE(v61) = v42;
    *(_QWORD *)&v63 = &v58;
    *((_QWORD *)&v63 + 1) = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v64 = (__int128 *)v93;
    *(_QWORD *)&v65 = <&T as core::fmt::Display>::fmt;
    *((_QWORD *)&v65 + 1) = &v59;
    v66 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v67 = &v60;
    v68 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v69 = &v61;
    v70 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    *(_QWORD *)&v71 = &unk_E0CD0;
    *((_QWORD *)&v71 + 1) = 7LL;
    v74 = &unk_19288;
    v75 = 7LL;
    v72 = &v63;
    v73 = (__int64 (__fastcall *)())&byte_5;
    std::io::stdio::_print(&v71);
  }
  if ( (v49 & 1) != 0 && (v82 || v88 == 1) )
  {
    if ( (v23 & 1) != 0 )
    {
      *(_QWORD *)&v63 = &off_E0CA8;
      *((_QWORD *)&v63 + 1) = 1LL;
      v64 = (_OWORD *)&byte_8;
      v65 = 0LL;
      std::io::stdio::_eprint(&v63);
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v71);
    v64 = v72;
    v63 = v71;
    LODWORD(v65) = 1;
    v43 = alloc::boxed::Box<T>::new(&v63, 1LL);
  }
  else
  {
    v43 = 0LL;
  }
  core::ptr::drop_in_place<alloc::string::String>(v83, v84);
  core::ptr::drop_in_place<alloc::string::String>(v77, v78);
  core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(
    v46,
    *((_QWORD *)&v47 + 1));
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v53, v54);
  core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(v12, v47);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v50, v51);
  core::ptr::drop_in_place<alloc::string::String>(v90, *((_QWORD *)&v90 + 1));
  core::ptr::drop_in_place<alloc::string::String>(v92[0], v92[1]);
  return v43;
}