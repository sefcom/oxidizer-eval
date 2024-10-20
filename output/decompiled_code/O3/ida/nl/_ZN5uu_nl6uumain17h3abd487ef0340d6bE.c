__int64 __fastcall uu_nl::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall **v3)(); // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _OWORD *v7; // r12
  __int64 (__fastcall **v8)(); // r14
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // rax
  __int128 v12; // rax
  unsigned int v13; // ebx
  __int128 v14; // kr10_16
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbp
  char ***v27; // r13
  char ***v28; // r14
  bool v29; // of
  __int128 v30; // rax
  __int64 v31; // rbp
  char ***v32; // r15
  char ***v33; // r14
  __int64 result; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  _OWORD *v37; // rax
  __int128 v38; // xmm0
  __int64 v39; // rdi
  __int64 v40; // rax
  _OWORD *v41; // rax
  __int128 v42; // xmm0
  __int128 v43; // [rsp+0h] [rbp-538h] BYREF
  __m256i v44; // [rsp+10h] [rbp-528h]
  __int64 v45; // [rsp+30h] [rbp-508h]
  __int128 v46; // [rsp+48h] [rbp-4F0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-4E0h]
  __int64 v48; // [rsp+60h] [rbp-4D8h]
  _BOOL8 v49; // [rsp+68h] [rbp-4D0h]
  __int128 v50; // [rsp+70h] [rbp-4C8h] BYREF
  __int128 v51; // [rsp+80h] [rbp-4B8h]
  __int128 v52; // [rsp+90h] [rbp-4A8h]
  __int128 v53; // [rsp+A0h] [rbp-498h]
  _QWORD v54[3]; // [rsp+B0h] [rbp-488h] BYREF
  __int128 *v55; // [rsp+C8h] [rbp-470h] BYREF
  unsigned __int64 v56; // [rsp+D0h] [rbp-468h]
  __int64 v57; // [rsp+D8h] [rbp-460h]
  __int64 v58; // [rsp+E0h] [rbp-458h]
  __int64 v59; // [rsp+E8h] [rbp-450h]
  __int64 v60; // [rsp+F0h] [rbp-448h]
  __int64 v61; // [rsp+F8h] [rbp-440h]
  __int64 v62; // [rsp+100h] [rbp-438h]
  __int128 v63; // [rsp+108h] [rbp-430h] BYREF
  __int64 v64; // [rsp+118h] [rbp-420h]
  int fd; // [rsp+130h] [rbp-408h]
  __int128 v66; // [rsp+138h] [rbp-400h] BYREF
  __int64 v67; // [rsp+148h] [rbp-3F0h]
  _BYTE v68[8]; // [rsp+150h] [rbp-3E8h] BYREF
  __int64 v69; // [rsp+158h] [rbp-3E0h]
  __int64 v70; // [rsp+160h] [rbp-3D8h]
  _BYTE v71[8]; // [rsp+168h] [rbp-3D0h] BYREF
  __int64 v72; // [rsp+170h] [rbp-3C8h]
  __int64 v73; // [rsp+178h] [rbp-3C0h]
  unsigned __int64 v74; // [rsp+180h] [rbp-3B8h]
  __int128 v75; // [rsp+188h] [rbp-3B0h] BYREF
  __m256i v76; // [rsp+198h] [rbp-3A0h]
  __int64 v77; // [rsp+1B8h] [rbp-380h]
  __int128 v78; // [rsp+1C0h] [rbp-378h] BYREF
  __int64 v79; // [rsp+1D0h] [rbp-368h]
  __int64 v80; // [rsp+1D8h] [rbp-360h]
  _OWORD v81[4]; // [rsp+1E0h] [rbp-358h] BYREF
  __int128 v82; // [rsp+228h] [rbp-310h] BYREF
  __int64 v83; // [rsp+238h] [rbp-300h]
  char **v84; // [rsp+240h] [rbp-2F8h] BYREF
  __int64 v85; // [rsp+248h] [rbp-2F0h]
  __int128 *v86; // [rsp+250h] [rbp-2E8h] BYREF
  __int64 v87; // [rsp+258h] [rbp-2E0h]
  _QWORD v88[3]; // [rsp+260h] [rbp-2D8h] BYREF
  __int64 v89; // [rsp+278h] [rbp-2C0h]
  __int64 v90; // [rsp+280h] [rbp-2B8h]
  _BYTE v91[24]; // [rsp+288h] [rbp-2B0h] BYREF
  __int64 v92; // [rsp+2A0h] [rbp-298h]
  __int64 v93; // [rsp+2A8h] [rbp-290h]
  unsigned __int64 v94; // [rsp+2B0h] [rbp-288h]
  __int64 v95; // [rsp+2B8h] [rbp-280h]
  char v96; // [rsp+2C0h] [rbp-278h]
  _BYTE v97[631]; // [rsp+2C1h] [rbp-277h] BYREF

  uu_nl::uu_app(&v84);
  clap_builder::builder::command::Command::try_get_matches_from(&v43, &v84, a1, a2);
  v74 = 0x8000000000000000LL;
  if ( (_QWORD)v43 == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v43 + 1));
    if ( v2 )
    {
      v7 = (_OWORD *)v2;
      v8 = v3;
      goto LABEL_8;
    }
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v77 = v45;
  v76 = v44;
  v75 = v43;
  <uu_nl::Settings as core::default::Default>::default(&v84);
  uu_nl::helper::parse_options(v71, &v84, &v75);
  if ( v73 )
  {
    alloc::str::join_generic_copy(&v43, v72, v73, asc_59426, 1LL);
    *(_QWORD *)&v51 = v44.m256i_i64[0];
    v50 = v43;
    v54[0] = &v50;
    v54[1] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v43 = &off_26BB18;
    *((_QWORD *)&v43 + 1) = 1LL;
    v44.m256i_i64[0] = (__int64)v54;
    *(_OWORD *)&v44.m256i_u64[1] = 1uLL;
    ((void (__fastcall *)(__int128 *, __int128 *))alloc::fmt::format::format_inner)(&v63, &v43);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v50);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v50);
    v44.m256i_i64[0] = v64;
    v43 = v63;
    v44.m256i_i32[2] = 1;
    v9 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v9 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v7 = v9;
    v10 = v43;
    v9[1] = *(_OWORD *)v44.m256i_i8;
    *v9 = v10;
    v8 = &off_26BA28;
    goto LABEL_7;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v43, &v75, "filemode{", 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&v50, "filemode{", 4LL, &v43);
  if ( (_QWORD)v50 )
  {
    v81[3] = v53;
    v81[2] = v52;
    v81[1] = v51;
    v81[0] = v50;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v68, v81);
  }
  else
  {
    v16 = _rust_alloc(24LL, 8LL);
    if ( !v16 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v17 = (_QWORD *)v16;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v43, 1LL, 0LL);
    v18 = *((_QWORD *)&v43 + 1);
    if ( (_QWORD)v43 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v43 + 1), v44.m256i_i64[0]);
    v19 = v44.m256i_i64[0];
    *(_BYTE *)v44.m256i_i64[0] = 45;
    *v17 = v18;
    v17[1] = v19;
    v17[2] = 1LL;
    alloc::slice::hack::into_vec(v68, v17, 1LL);
  }
  if ( !v70 )
  {
LABEL_90:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v68);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v68);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v71);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v71);
    core::ptr::drop_in_place<uu_nl::Settings>(&v84);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v75);
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v20 = v69;
  v80 = v69 + 24 * v70;
  v48 = v92;
  v49 = 1LL;
  v21 = 0LL;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v20 + 8);
    v23 = *(_QWORD *)(v20 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             v22,
                             v23,
                             "-: Is a directory\nInvalid arguments supplied.\nUSimpleErrormessage",
                             1LL) )
    {
      if ( (unsigned __int8)std::path::Path::is_dir(v22, v23) )
      {
        *(_QWORD *)&v30 = uucore::util_name();
        v50 = v30;
        *(_QWORD *)&v63 = &v50;
        *((_QWORD *)&v63 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v43 = &unk_26BA98;
        *((_QWORD *)&v43 + 1) = 2LL;
        v44.m256i_i64[0] = (__int64)&v63;
        *(_OWORD *)&v44.m256i_u64[1] = 1uLL;
        std::io::stdio::_eprint(&v43);
        *(_QWORD *)&v50 = v22;
        *((_QWORD *)&v50 + 1) = v23;
        *(_QWORD *)&v63 = &v50;
        *((_QWORD *)&v63 + 1) = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&v43 = &unk_26BAF8;
        *((_QWORD *)&v43 + 1) = 2LL;
        v44.m256i_i64[0] = (__int64)&v63;
        *(_OWORD *)&v44.m256i_u64[1] = 1uLL;
        std::io::stdio::_eprint(&v43);
        uucore::mods::error::set_exit_code(1LL);
      }
      else
      {
        std::fs::File::open(&v43, v22, v23);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          &v50,
          &v43,
          v20);
        v7 = (_OWORD *)v50;
        if ( (_QWORD)v50 )
        {
          v8 = (__int64 (__fastcall **)())*((_QWORD *)&v50 + 1);
          goto LABEL_105;
        }
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v63, 0x2000LL, DWORD2(v50));
        v55 = &v63;
        <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v66, &v55);
        if ( (_QWORD)v66 != 0x8000000000000001LL )
        {
          v62 = v89;
          v31 = v90;
          LOBYTE(v61) = v96;
          v60 = v92;
          v56 = v94;
          v58 = v95;
          v59 = v95 + 1;
          v57 = v93;
          v32 = (char ***)&v86;
          while ( 1 )
          {
            v79 = v67;
            v78 = v66;
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
              &v43,
              &v78);
            v7 = (_OWORD *)*((_QWORD *)&v43 + 1);
            v8 = (__int64 (__fastcall **)())v44.m256i_i64[0];
            if ( (_QWORD)v43 == v74 )
              break;
            v46 = v43;
            v47 = v44.m256i_i64[0];
            ++v21;
            if ( v44.m256i_i64[0] )
              v21 = 0LL;
            v33 = &v84;
            switch ( (unsigned __int8)uu_nl::SectionDelimiter::parse(*((_QWORD *)&v43 + 1), v44.m256i_i64[0], v62, v31) )
            {
              case 0u:
                goto LABEL_63;
              case 1u:
                v33 = (char ***)&v86;
LABEL_63:
                if ( (_BYTE)v61 )
                  goto LABEL_64;
                goto LABEL_65;
              case 2u:
                v33 = (char ***)v88;
                if ( !(_BYTE)v61 )
                  goto LABEL_65;
LABEL_64:
                v49 = 1LL;
                v48 = v60;
LABEL_65:
                *(_QWORD *)&v43 = &off_26B958;
                *((_QWORD *)&v43 + 1) = 1LL;
                v44.m256i_i64[0] = 8LL;
                *(_OWORD *)&v44.m256i_u64[1] = 0LL;
                std::io::stdio::_print(&v43);
                v32 = v33;
                goto LABEL_66;
              case 3u:
                switch ( (unsigned __int64)*v32 )
                {
                  case 0uLL:
                    if ( v47 )
                      goto LABEL_77;
                    if ( !v56 )
                      core::panicking::panic_const::panic_const_rem_by_zero(&off_26B968);
                    if ( (v56 | v21) >> 32 )
                    {
                      if ( v21 % v56 )
                        goto LABEL_80;
                    }
                    else if ( (unsigned int)v21 % (unsigned int)v56 )
                    {
LABEL_80:
                      alloc::str::<impl str>::repeat(v54, asc_5947A, 1LL, v59);
                      *(_QWORD *)&v50 = v54;
                      *((_QWORD *)&v50 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
                      *(_QWORD *)&v51 = &v46;
                      *((_QWORD *)&v51 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
                      *(_QWORD *)&v43 = &unk_26B980;
                      *((_QWORD *)&v43 + 1) = 3LL;
                      v44.m256i_i64[0] = (__int64)&v50;
                      *(_OWORD *)&v44.m256i_u64[1] = 2uLL;
                      std::io::stdio::_print(&v43);
                      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v54);
                      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v54);
                      goto LABEL_66;
                    }
LABEL_77:
                    if ( !v49 )
                    {
                      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v43, 20LL, 0LL);
                      v39 = *((_QWORD *)&v43 + 1);
                      if ( (_QWORD)v43 )
                        alloc::raw_vec::handle_error(*((_QWORD *)&v43 + 1), v44.m256i_i64[0]);
                      v40 = v44.m256i_i64[0];
                      *(_OWORD *)v44.m256i_i64[0] = unk_5947B;
                      *(_DWORD *)(v40 + 16) = 2003790950;
                      v44.m256i_i32[2] = 1;
                      *(_QWORD *)&v43 = v39;
                      *((_QWORD *)&v43 + 1) = v40;
                      v44.m256i_i64[0] = 20LL;
                      v41 = (_OWORD *)_rust_alloc(32LL, 8LL);
                      if ( !v41 )
                        alloc::alloc::handle_alloc_error(8LL, 32LL);
                      v7 = v41;
                      v42 = v43;
                      v41[1] = *(_OWORD *)v44.m256i_i8;
                      *v41 = v42;
                      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
                      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
                      v8 = &off_26BA28;
                      goto LABEL_102;
                    }
                    uu_nl::NumberFormat::format(v54, v97, v48, v58);
                    *(_QWORD *)&v43 = v54;
                    *((_QWORD *)&v43 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
                    v44.m256i_i64[0] = (__int64)v91;
                    v44.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
                    v44.m256i_i64[2] = (__int64)&v46;
                    v44.m256i_i64[3] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
                    *(_QWORD *)&v50 = &unk_26B9B0;
                    *((_QWORD *)&v50 + 1) = 4LL;
                    *(_QWORD *)&v52 = 0LL;
                    *(_QWORD *)&v51 = &v43;
                    *((_QWORD *)&v51 + 1) = 3LL;
                    std::io::stdio::_print(&v50);
                    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v54);
                    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v54);
                    v29 = __OFADD__(v57, v48);
                    v48 += v57;
                    v49 = !v29;
LABEL_66:
                    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
                    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
                    <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v66, &v55);
                    if ( (_QWORD)v66 == 0x8000000000000001LL )
                      goto LABEL_87;
                    break;
                  case 1uLL:
                    if ( v47 )
                      goto LABEL_77;
                    goto LABEL_80;
                  case 2uLL:
                    goto LABEL_80;
                  case 3uLL:
                    JUMPOUT(0xE3CAELL);
                }
                return result;
            }
          }
          if ( *((_QWORD *)&v43 + 1) )
          {
LABEL_102:
            if ( *((_QWORD *)&v63 + 1) )
              _rust_dealloc(v63, *((_QWORD *)&v63 + 1), 1LL);
            close(fd);
            goto LABEL_105;
          }
        }
LABEL_87:
        if ( *((_QWORD *)&v63 + 1) )
          _rust_dealloc(v63, *((_QWORD *)&v63 + 1), 1LL);
        close(fd);
      }
      goto LABEL_24;
    }
    v24 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v63, 0x2000LL, v24);
    v55 = &v63;
    <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v66, &v55);
    v60 = v20;
    if ( (_QWORD)v66 != 0x8000000000000001LL )
      break;
LABEL_84:
    if ( *((_QWORD *)&v63 + 1) )
      _rust_dealloc(v63, *((_QWORD *)&v63 + 1), 1LL);
    v20 = v60;
LABEL_24:
    v20 += 24LL;
    if ( v20 == v80 )
      goto LABEL_90;
  }
  v25 = v89;
  v26 = v90;
  LOBYTE(v62) = v96;
  v61 = v92;
  v56 = v94;
  v58 = v95;
  v59 = v95 + 1;
  v57 = v93;
  v27 = (char ***)&v86;
  while ( 2 )
  {
    v79 = v67;
    v78 = v66;
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v43,
      &v78);
    v7 = (_OWORD *)*((_QWORD *)&v43 + 1);
    v8 = (__int64 (__fastcall **)())v44.m256i_i64[0];
    if ( (_QWORD)v43 == v74 )
    {
      if ( *((_QWORD *)&v43 + 1) )
        goto LABEL_96;
      goto LABEL_84;
    }
    v46 = v43;
    v47 = v44.m256i_i64[0];
    ++v21;
    if ( v44.m256i_i64[0] )
      v21 = 0LL;
    v28 = &v84;
    switch ( (unsigned __int8)uu_nl::SectionDelimiter::parse(*((_QWORD *)&v43 + 1), v44.m256i_i64[0], v25, v26) )
    {
      case 0u:
        goto LABEL_33;
      case 1u:
        v28 = (char ***)&v86;
LABEL_33:
        if ( (_BYTE)v62 )
          goto LABEL_34;
        goto LABEL_35;
      case 2u:
        v28 = (char ***)v88;
        if ( !(_BYTE)v62 )
          goto LABEL_35;
LABEL_34:
        v49 = 1LL;
        v48 = v61;
LABEL_35:
        *(_QWORD *)&v43 = &off_26B958;
        *((_QWORD *)&v43 + 1) = 1LL;
        v44.m256i_i64[0] = 8LL;
        *(_OWORD *)&v44.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v43);
        v27 = v28;
        goto LABEL_36;
      case 3u:
        switch ( (unsigned __int64)*v27 )
        {
          case 0uLL:
            if ( v47 )
              goto LABEL_47;
            if ( !v56 )
              core::panicking::panic_const::panic_const_rem_by_zero(&off_26B968);
            if ( (v56 | v21) >> 32 )
            {
              if ( v21 % v56 )
                goto LABEL_50;
            }
            else if ( (unsigned int)v21 % (unsigned int)v56 )
            {
LABEL_50:
              alloc::str::<impl str>::repeat(v54, asc_5947A, 1LL, v59);
              *(_QWORD *)&v50 = v54;
              *((_QWORD *)&v50 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)&v51 = &v46;
              *((_QWORD *)&v51 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)&v43 = &unk_26B980;
              *((_QWORD *)&v43 + 1) = 3LL;
              v44.m256i_i64[0] = (__int64)&v50;
              *(_OWORD *)&v44.m256i_u64[1] = 2uLL;
              std::io::stdio::_print(&v43);
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v54);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v54);
              goto LABEL_36;
            }
LABEL_47:
            if ( v49 )
            {
              uu_nl::NumberFormat::format(v54, v97, v48, v58);
              *(_QWORD *)&v43 = v54;
              *((_QWORD *)&v43 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
              v44.m256i_i64[0] = (__int64)v91;
              v44.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
              v44.m256i_i64[2] = (__int64)&v46;
              v44.m256i_i64[3] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)&v50 = &unk_26B9B0;
              *((_QWORD *)&v50 + 1) = 4LL;
              *(_QWORD *)&v52 = 0LL;
              *(_QWORD *)&v51 = &v43;
              *((_QWORD *)&v51 + 1) = 3LL;
              std::io::stdio::_print(&v50);
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v54);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v54);
              v29 = __OFADD__(v57, v48);
              v48 += v57;
              v49 = !v29;
LABEL_36:
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
              <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v66, &v55);
              if ( (_QWORD)v66 == 0x8000000000000001LL )
                goto LABEL_84;
              continue;
            }
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v43, 20LL, 0LL);
            v35 = *((_QWORD *)&v43 + 1);
            if ( (_QWORD)v43 )
              alloc::raw_vec::handle_error(*((_QWORD *)&v43 + 1), v44.m256i_i64[0]);
            v36 = v44.m256i_i64[0];
            *(_OWORD *)v44.m256i_i64[0] = unk_5947B;
            *(_DWORD *)(v36 + 16) = 2003790950;
            v44.m256i_i32[2] = 1;
            *(_QWORD *)&v43 = v35;
            *((_QWORD *)&v43 + 1) = v36;
            v44.m256i_i64[0] = 20LL;
            v37 = (_OWORD *)_rust_alloc(32LL, 8LL);
            if ( !v37 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v7 = v37;
            v38 = v43;
            v37[1] = *(_OWORD *)v44.m256i_i8;
            *v37 = v38;
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
            v8 = &off_26BA28;
LABEL_96:
            if ( *((_QWORD *)&v63 + 1) )
              _rust_dealloc(v63, *((_QWORD *)&v63 + 1), 1LL);
LABEL_105:
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v68);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v68);
LABEL_7:
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v71);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v71);
            core::ptr::drop_in_place<uu_nl::Settings>(&v84);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v75);
LABEL_8:
            *(_QWORD *)&v75 = v7;
            *((_QWORD *)&v75 + 1) = v8;
            v84 = (char **)&anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
            v85 = 1LL;
            v88[0] = 0LL;
            v86 = &v43;
            v87 = 1LL;
            alloc::fmt::format::format_inner(
              &v82,
              &v84,
              v3,
              v4,
              v5,
              v6,
              &v75,
              <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt,
              v44.m256i_i64[0],
              v44.m256i_i64[1],
              v44.m256i_i64[2]);
            v43 = v82;
            v44.m256i_i64[0] = v83;
            if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                     *((_QWORD *)&v82 + 1),
                                     v83,
                                     1LL,
                                     0LL) )
            {
              *(_QWORD *)&v11 = uucore::util_name();
              v81[0] = v11;
              *(_QWORD *)&v50 = v81;
              *((_QWORD *)&v50 + 1) = <&T as core::fmt::Display>::fmt;
              v84 = (char **)&unk_26BA98;
              v85 = 2LL;
              v88[0] = 0LL;
              v86 = &v50;
              v87 = 1LL;
              std::io::stdio::_eprint(&v84);
              *(_QWORD *)&v81[0] = &v43;
              *((_QWORD *)&v81[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
              v84 = (char **)&unk_26BAB8;
              v85 = 2LL;
              v88[0] = 0LL;
              v86 = v81;
              v87 = 1LL;
              std::io::stdio::_eprint(&v84);
            }
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v75 + 1) + 104LL))(v75) )
            {
              *(_QWORD *)&v12 = uucore::execution_phrase();
              v81[0] = v12;
              *(_QWORD *)&v50 = v81;
              *((_QWORD *)&v50 + 1) = <&T as core::fmt::Display>::fmt;
              v84 = &off_26BAD8;
              v85 = 2LL;
              v88[0] = 0LL;
              v86 = &v50;
              v87 = 1LL;
              std::io::stdio::_eprint(&v84);
            }
            v13 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v75 + 1) + 96LL))(v75);
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v43);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v43);
            v14 = v75;
            if ( **((_QWORD **)&v75 + 1) )
              (**((void (__fastcall ***)(_QWORD))&v75 + 1))(v75);
            v15 = *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL);
            if ( v15 )
              _rust_dealloc(v14, v15, *(_QWORD *)(*((_QWORD *)&v14 + 1) + 16LL));
            return v13;
          case 1uLL:
            if ( v47 )
              goto LABEL_47;
            goto LABEL_50;
          case 2uLL:
            goto LABEL_50;
          case 3uLL:
            JUMPOUT(0xE377FLL);
        }
    }
  }
}
