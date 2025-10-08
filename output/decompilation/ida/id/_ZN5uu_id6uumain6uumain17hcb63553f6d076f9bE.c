__int64 __fastcall uu_id::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // xmm0_8
  char flag; // r15
  char v6; // r12
  char v7; // bp
  char v8; // bl
  unsigned __int8 v9; // r14
  unsigned __int8 v10; // r13
  const char *v11; // rsi
  unsigned __int8 v12; // al
  unsigned __int8 v13; // bp
  const char *v14; // rdx
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r12
  const char *v20; // rax
  char v21; // al
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(); // rdx
  __int64 v25; // rax
  __int64 (__fastcall *v26)(); // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r13
  __uid_t v31; // r15d
  __gid_t v32; // r14d
  __uid_t v33; // ebx
  __gid_t v34; // eax
  __uid_t v35; // ebx
  __gid_t v36; // eax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  _BOOL8 v43; // rcx
  char v44; // cl
  __int64 v45; // rbx
  char v46; // [rsp+Bh] [rbp-7FDh] BYREF
  __uid_t v47; // [rsp+Ch] [rbp-7FCh] BYREF
  unsigned __int64 v48; // [rsp+10h] [rbp-7F8h]
  __gid_t v49; // [rsp+1Ch] [rbp-7ECh] BYREF
  _DWORD v50[5]; // [rsp+20h] [rbp-7E8h] BYREF
  char v51; // [rsp+34h] [rbp-7D4h] BYREF
  char v52; // [rsp+35h] [rbp-7D3h]
  char v53; // [rsp+36h] [rbp-7D2h]
  char v54; // [rsp+37h] [rbp-7D1h]
  unsigned __int8 v55; // [rsp+38h] [rbp-7D0h]
  unsigned __int8 v56; // [rsp+39h] [rbp-7CFh]
  unsigned __int8 v57; // [rsp+3Ah] [rbp-7CEh]
  char v58; // [rsp+3Bh] [rbp-7CDh]
  bool v59; // [rsp+3Ch] [rbp-7CCh]
  __int128 v60; // [rsp+40h] [rbp-7C8h] BYREF
  __int128 v61; // [rsp+50h] [rbp-7B8h]
  __int128 v62; // [rsp+60h] [rbp-7A8h]
  __int64 v63; // [rsp+70h] [rbp-798h]
  __int128 *v64; // [rsp+80h] [rbp-788h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+88h] [rbp-780h]
  __int64 v66; // [rsp+90h] [rbp-778h]
  char v67; // [rsp+98h] [rbp-770h]
  __int128 v68; // [rsp+A0h] [rbp-768h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-758h]
  __int64 v70; // [rsp+B8h] [rbp-750h] BYREF
  __int128 v71; // [rsp+C0h] [rbp-748h]
  __int64 v72; // [rsp+D0h] [rbp-738h] BYREF
  __int128 v73; // [rsp+D8h] [rbp-730h]
  const char *v74; // [rsp+E8h] [rbp-720h]
  __int64 v75; // [rsp+F0h] [rbp-718h]
  _OWORD v76[3]; // [rsp+F8h] [rbp-710h] BYREF
  __int64 v77; // [rsp+128h] [rbp-6E0h]
  __int64 v78; // [rsp+130h] [rbp-6D8h] BYREF
  __int64 v79; // [rsp+138h] [rbp-6D0h]
  __int64 v80; // [rsp+140h] [rbp-6C8h]
  const char *v81; // [rsp+148h] [rbp-6C0h]
  _BOOL8 v82; // [rsp+150h] [rbp-6B8h]
  _QWORD v83[2]; // [rsp+158h] [rbp-6B0h] BYREF
  char v84; // [rsp+168h] [rbp-6A0h]
  _QWORD v85[2]; // [rsp+170h] [rbp-698h] BYREF
  __m256i src; // [rsp+180h] [rbp-688h] BYREF
  __int128 v87; // [rsp+1A0h] [rbp-668h]
  __int128 v88; // [rsp+1B0h] [rbp-658h]
  __int128 v89; // [rsp+1C0h] [rbp-648h]
  __int128 v90; // [rsp+1D0h] [rbp-638h]
  __int128 v91; // [rsp+1E0h] [rbp-628h]
  __int128 v92; // [rsp+1F0h] [rbp-618h]
  __m256i dest; // [rsp+450h] [rbp-3B8h] BYREF
  __int128 v94; // [rsp+470h] [rbp-398h]
  __int128 v95; // [rsp+480h] [rbp-388h]
  __int128 v96; // [rsp+490h] [rbp-378h]
  __int128 v97; // [rsp+4A0h] [rbp-368h]
  __int128 v98; // [rsp+4B0h] [rbp-358h]
  __int128 v99; // [rsp+4C0h] [rbp-348h]
  _QWORD v100[8]; // [rsp+718h] [rbp-F0h] BYREF
  _QWORD v101[22]; // [rsp+758h] [rbp-B0h] BYREF

  uu_id::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v60, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v60, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v60 + 1),
             &dest,
             v2,
             -(__int64)v60);
  v77 = v63;
  v4 = v61;
  v76[2] = v62;
  v76[1] = v61;
  v76[0] = v60;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, v76);
  clap_builder::parser::error::MatchesError::unwrap(v100, &src);
  if ( v100[0]
    && (core::iter::traits::iterator::Iterator::collect(&src, v100),
        v4 = src.m256i_i64[1],
        *(_OWORD *)dest.m256i_i8 = *(_OWORD *)&src.m256i_u64[1],
        src.m256i_i64[0] != 0x8000000000000000LL) )
  {
    v4 = dest.m256i_i64[0];
    v73 = *(_OWORD *)dest.m256i_i8;
    v72 = src.m256i_i64[0];
  }
  else
  {
    v72 = 0LL;
    v73 = 8uLL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v76, aName, 4LL);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v76, aUser, 4LL);
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v76, aGroup, 5LL);
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v76, aGroups, 6LL);
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v76, aReal, 4LL);
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v76, aZero_0, 4LL);
  v11 = aContext;
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v76, aContext, 7LL);
  v48 = *((_QWORD *)&v73 + 1);
  v51 = flag;
  v52 = v6;
  v53 = v7;
  v54 = v8;
  v55 = v9;
  v56 = v10;
  v57 = v12;
  v58 = 0;
  v50[0] = 0;
  v59 = *((_QWORD *)&v73 + 1) != 0LL;
  v13 = v6 | v8 | v7;
  if ( flag )
  {
    if ( !(v12 | v13) )
      goto LABEL_22;
  }
  else
  {
    if ( !(v13 | v9 ^ 1) )
    {
      if ( !v12 )
      {
LABEL_22:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &dest,
          "printing only names or real IDs requires -u, -g, or -Goption --zero not permitted in default formatcannot prin"
          "t security context when user specified--context (-Z) works only on an SELinux-enabled kernel: no such user\n"
          "\x01",
          54LL);
        src.m256i_i64[2] = dest.m256i_i64[2];
        v4 = dest.m256i_i64[0];
        *(_OWORD *)src.m256i_i8 = *(_OWORD *)dest.m256i_i8;
        src.m256i_i32[6] = 1;
        v17 = alloc::boxed::Box<T>::new(&src);
        goto LABEL_89;
      }
      if ( v48 )
      {
LABEL_21:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &dest,
          "cannot print security context when user specified--context (-Z) works only on an SELinux-enabled kernel: no such user\n\x01",
          49LL);
        src.m256i_i64[2] = dest.m256i_i64[2];
        v4 = dest.m256i_i64[0];
        *(_OWORD *)src.m256i_i8 = *(_OWORD *)dest.m256i_i8;
        src.m256i_i32[6] = 1;
        v17 = alloc::boxed::Box<T>::new(&src);
        goto LABEL_89;
      }
      v44 = 10;
      if ( v10 )
        v44 = 0;
      v46 = v44;
      goto LABEL_88;
    }
    if ( !(v13 | v12 | v10 ^ 1) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
        &dest,
        "option --zero not permitted in default formatcannot print security context when user specified--context (-Z) wor"
        "ks only on an SELinux-enabled kernel: no such user\n"
        "\x01",
        45LL);
      src.m256i_i64[2] = dest.m256i_i64[2];
      v4 = dest.m256i_i64[0];
      *(_OWORD *)src.m256i_i8 = *(_OWORD *)dest.m256i_i8;
      src.m256i_i32[6] = 1;
      v17 = alloc::boxed::Box<T>::new(&src);
      goto LABEL_89;
    }
  }
  if ( !v48 )
  {
    v11 = (const char *)&unk_189CA;
    v14 = 0LL;
    if ( v10 )
      v11 = "";
    v74 = v11;
    v15 = 10LL;
    if ( v10 )
      v15 = 0LL;
    v46 = v15;
    if ( !v12 )
      goto LABEL_28;
LABEL_88:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
      &dest,
      "--context (-Z) works only on an SELinux-enabled kernel: no such user\n\x01",
      54LL);
    src.m256i_i64[2] = dest.m256i_i64[2];
    v4 = dest.m256i_i64[0];
    *(_OWORD *)src.m256i_i8 = *(_OWORD *)dest.m256i_i8;
    src.m256i_i32[6] = 1;
    v17 = alloc::boxed::Box<T>::new(&src);
LABEL_89:
    v45 = v17;
LABEL_90:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v72, *(double *)&v4);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v76);
    return v45;
  }
  if ( v12 )
    goto LABEL_21;
  v14 = (const char *)&unk_189CA;
  v15 = 0LL;
  if ( v10 )
    v14 = "";
  v74 = v14;
  v16 = 10;
  if ( v10 )
    v16 = 0;
  v46 = v16;
LABEL_28:
  v83[0] = 0LL;
  v83[1] = v48;
  v84 = 0;
  if ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(
          v83,
          v11,
          v14,
          v15) & 1) == 0 )
    goto LABEL_95;
  v19 = v18;
  v75 = v73;
  v82 = v48 >= 2;
  v20 = "";
  if ( v48 < 2 )
    v20 = (_BYTE *)(&dword_0 + 1);
  v81 = v20;
  while ( 1 )
  {
    if ( !v59 )
    {
      dest.m256i_i64[0] = 0x8000000000000000LL;
      goto LABEL_40;
    }
    if ( v19 >= v48 )
      core::panicking::panic_bounds_check(v19, v48, &off_E82F0);
    v23 = *(_QWORD *)(v75 + 24 * v19 + 8);
    <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(
      &src,
      v23,
      *(_QWORD *)(v75 + 24 * v19 + 16));
    if ( src.m256i_i64[0] == 0x8000000000000000LL )
      break;
    v99 = v92;
    v98 = v91;
    v97 = v90;
    v96 = v89;
    v4 = src.m256i_i64[0];
    v95 = v88;
    v94 = v87;
    dest = src;
LABEL_40:
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v76, aPassword, 8LL) )
    {
      uu_id::pline(dest.m256i_i64[0] != 0x8000000000000000LL, DWORD2(v99));
LABEL_92:
      core::ptr::drop_in_place<core::option::Option<uucore::features::entries::Passwd>>(&dest);
      v45 = 0LL;
      goto LABEL_90;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v76, aHumanReadable, 14LL) )
    {
      v92 = v99;
      v91 = v98;
      v90 = v97;
      v89 = v96;
      v4 = dest.m256i_i64[0];
      v88 = v95;
      v87 = v94;
      src = dest;
      uu_id::pretty(&src);
      v45 = 0LL;
      goto LABEL_90;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v76, aAudit, 5LL) )
      goto LABEL_92;
    v30 = dest.m256i_i64[0];
    v31 = DWORD2(v99);
    v32 = HIDWORD(v99);
    if ( !v55 && (v52 || v53 || v54) )
    {
      v33 = uucore::features::process::geteuid();
      v34 = uucore::features::process::getegid();
    }
    else
    {
      v33 = uucore::features::process::getuid();
      v34 = uucore::features::process::getgid();
    }
    if ( v30 == 0x8000000000000000LL )
    {
      v31 = v33;
      v32 = v34;
    }
    v47 = v31;
    v49 = v32;
    v35 = uucore::features::process::geteuid();
    v36 = uucore::features::process::getegid();
    v50[0] = 1;
    v50[1] = v47;
    v50[2] = v49;
    v50[3] = v35;
    v50[4] = v36;
    if ( v53 )
    {
      if ( v51 )
      {
        <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(&src);
        if ( src.m256i_i64[0] == 0x8000000000000000LL )
        {
          uu_id::uumain::uumain::{{closure}}(&v60, &v49, src.m256i_i64[1]);
        }
        else
        {
          v60 = *(_OWORD *)src.m256i_i8;
          *(_QWORD *)&v61 = src.m256i_i64[2];
        }
      }
      else
      {
        v37 = core::fmt::num::imp::<impl u32>::_fmt(v49, &v64, 10LL);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&src, v37, v38);
        *(_QWORD *)&v61 = src.m256i_i64[2];
        v4 = src.m256i_i64[0];
        v60 = *(_OWORD *)src.m256i_i8;
      }
      v64 = &v60;
      v65 = <alloc::string::String as core::fmt::Display>::fmt;
      src.m256i_i64[0] = (__int64)&unk_182C0;
      src.m256i_i64[1] = 1LL;
      *(_QWORD *)&v87 = 0LL;
      src.m256i_i64[2] = (__int64)&v64;
      src.m256i_i64[3] = 1LL;
      std::io::stdio::_print(&src);
      core::ptr::drop_in_place<alloc::string::String>(v60, *((_QWORD *)&v60 + 1));
    }
    if ( !v52 )
      goto LABEL_67;
    if ( v51 )
    {
      <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v101, v47);
      if ( v101[0] == 0x8000000000000000LL )
      {
        v39 = v101[1];
      }
      else
      {
        uucore::features::entries::uid2usr::{{closure}}(&src, v101);
        v39 = src.m256i_i64[1];
        if ( src.m256i_i64[0] != 0x8000000000000000LL )
        {
          v60 = *(_OWORD *)src.m256i_i8;
          *(_QWORD *)&v61 = src.m256i_i64[2];
          goto LABEL_66;
        }
      }
      uu_id::uumain::uumain::{{closure}}(&v60, &v47, v39);
    }
    else
    {
      v40 = core::fmt::num::imp::<impl u32>::_fmt(v47, &v64, 10LL);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&src, v40, v41);
      *(_QWORD *)&v61 = src.m256i_i64[2];
      v4 = src.m256i_i64[0];
      v60 = *(_OWORD *)src.m256i_i8;
    }
LABEL_66:
    v64 = &v60;
    v65 = <alloc::string::String as core::fmt::Display>::fmt;
    src.m256i_i64[0] = (__int64)&unk_182C0;
    src.m256i_i64[1] = 1LL;
    *(_QWORD *)&v87 = 0LL;
    src.m256i_i64[2] = (__int64)&v64;
    src.m256i_i64[3] = 1LL;
    std::io::stdio::_print(&src);
    core::ptr::drop_in_place<alloc::string::String>(v60, *((_QWORD *)&v60 + 1));
LABEL_67:
    uucore::features::entries::get_groups_gnu(&src, 1LL, v49);
    core::result::Result<T,E>::unwrap(&v78, &src);
    if ( v59 )
    {
      if ( dest.m256i_i64[0] == 0x8000000000000000LL
        || (uucore::features::entries::Passwd::belongs_to(&src, &dest),
            v60 = *(_OWORD *)&src.m256i_u64[1],
            src.m256i_i64[0] == 0x8000000000000000LL) )
      {
        core::option::unwrap_failed(&off_E8320);
      }
      v70 = src.m256i_i64[0];
      v4 = v60;
      v71 = v60;
    }
    else
    {
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v70, v79, v80);
    }
    if ( v54 )
    {
      src.m256i_i64[0] = v71;
      src.m256i_i64[1] = v71 + 4LL * *((_QWORD *)&v71 + 1);
      src.m256i_i64[2] = (__int64)&v51;
      core::iter::traits::iterator::Iterator::collect(&v64, &src);
      alloc::str::join_generic_copy(&src, v65, v66, v74);
      v69 = src.m256i_i64[2];
      v4 = src.m256i_i64[0];
      v42 = 1LL;
      if ( v59 )
        v42 = (__int64)v81;
      v43 = 0LL;
      if ( v59 )
        v43 = v82;
      if ( !v56 )
      {
        v42 = 1LL;
        v43 = 0LL;
      }
      v68 = *(_OWORD *)src.m256i_i8;
      v85[0] = v42;
      v85[1] = v43;
      *(_QWORD *)&v60 = &v68;
      *((_QWORD *)&v60 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v61 = v85;
      *((_QWORD *)&v61 + 1) = <&T as core::fmt::Display>::fmt;
      src.m256i_i64[0] = (__int64)"\x01";
      src.m256i_i64[1] = 2LL;
      *(_QWORD *)&v87 = 0LL;
      src.m256i_i64[2] = (__int64)&v60;
      src.m256i_i64[3] = 2LL;
      std::io::stdio::_print(&src);
      core::ptr::drop_in_place<alloc::string::String>(v68, *((_QWORD *)&v68 + 1));
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v64, *(double *)&v4);
    }
    if ( !v13 )
      uu_id::id_print(v50, v71, *((_QWORD *)&v71 + 1));
    *(_QWORD *)&v60 = &v46;
    *((_QWORD *)&v60 + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    src.m256i_i64[0] = (__int64)&unk_182C0;
    src.m256i_i64[1] = 1LL;
    *(_QWORD *)&v87 = 0LL;
    src.m256i_i64[2] = (__int64)&v60;
    src.m256i_i64[3] = 1LL;
    std::io::stdio::_print(&src);
    core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v70, v71);
    v23 = v79;
    core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v78, v79);
    core::ptr::drop_in_place<core::option::Option<uucore::features::entries::Passwd>>(&dest);
    if ( v19 + 1 >= v48 )
      goto LABEL_95;
LABEL_32:
    v21 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(
            v83,
            v23,
            v28,
            v29);
    v19 = v22;
    if ( (v21 & 1) == 0 )
      goto LABEL_95;
  }
  v64 = (__int128 *)uucore::util_name();
  v65 = v24;
  *(_QWORD *)&v68 = &v64;
  *((_QWORD *)&v68 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v60 = &unk_E81D0;
  *((_QWORD *)&v60 + 1) = 2LL;
  *(_QWORD *)&v62 = 0LL;
  *(_QWORD *)&v61 = &v68;
  *((_QWORD *)&v61 + 1) = 1LL;
  std::io::stdio::_eprint(&v60);
  v25 = v75 + 24 * v19;
  v26 = *(__int64 (__fastcall **)())(v25 + 8);
  v27 = *(_QWORD *)(v25 + 16);
  v64 = 0LL;
  v65 = v26;
  v66 = v27;
  v67 = 1;
  *(_QWORD *)&v68 = &v64;
  *((_QWORD *)&v68 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v60 = &unk_E8248;
  *((_QWORD *)&v60 + 1) = 2LL;
  *(_QWORD *)&v62 = 0LL;
  *(_QWORD *)&v61 = &v68;
  *((_QWORD *)&v61 + 1) = 1LL;
  std::io::stdio::_eprint(&v60);
  uucore::mods::error::set_exit_code(1LL);
  if ( v19 + 1 < v48 )
  {
    core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&src);
    goto LABEL_32;
  }
  core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&src);
LABEL_95:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v72, *(double *)&v4);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v76);
  return 0LL;
}