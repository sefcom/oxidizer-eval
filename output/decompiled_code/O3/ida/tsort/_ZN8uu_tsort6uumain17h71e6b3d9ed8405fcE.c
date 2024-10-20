__int64 __fastcall uu_tsort::uumain(__int64 a1, __int64 a2)
{
  _OWORD *v2; // r14
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r15
  __int64 v5; // rax
  char v6; // bl
  int *p_fd; // rdx
  __int64 (__fastcall **v8)(); // rcx
  __int64 v9; // rdx
  __int64 (__fastcall **v10)(); // rdx
  __int64 v11; // r14
  __int64 v12; // r15
  _OWORD *v13; // rax
  __int128 v14; // xmm0
  __int128 *v15; // rax
  __int128 v16; // xmm0
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r9
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int8 v23; // r10
  unsigned __int64 v24; // rcx
  unsigned __int8 v25; // r11
  __int64 v26; // rdx
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // rdx
  __int64 v30; // r13
  __int128 v31; // rax
  __int64 v32; // rbx
  __int64 *v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int128 v38; // xmm0
  _OWORD *v39; // rax
  __int128 v40; // xmm0
  __int64 (__fastcall *v41)(); // rdx
  __int64 (__fastcall *v42)(); // rdx
  unsigned int v43; // ebx
  __int128 v44; // kr00_16
  __int64 v45; // rsi
  char v46; // bl
  __int128 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rbx
  __int64 (__fastcall *v50)(); // rdx
  __int128 v51; // xmm0
  char v53; // [rsp+Bh] [rbp-4EDh]
  int fd; // [rsp+Ch] [rbp-4ECh] BYREF
  __int128 v55; // [rsp+10h] [rbp-4E8h] BYREF
  __int128 v56; // [rsp+20h] [rbp-4D8h]
  __int64 v57; // [rsp+30h] [rbp-4C8h]
  __int128 v58; // [rsp+40h] [rbp-4B8h] BYREF
  __int64 v59; // [rsp+50h] [rbp-4A8h]
  __int64 v60; // [rsp+60h] [rbp-498h] BYREF
  __int64 v61; // [rsp+68h] [rbp-490h] BYREF
  __int128 v62; // [rsp+70h] [rbp-488h]
  __int128 v63; // [rsp+80h] [rbp-478h] BYREF
  __int128 v64; // [rsp+90h] [rbp-468h]
  __int128 v65; // [rsp+A0h] [rbp-458h]
  __int64 v66; // [rsp+B0h] [rbp-448h]
  __int16 v67; // [rsp+B8h] [rbp-440h]
  __int128 v68; // [rsp+C0h] [rbp-438h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-428h]
  __int128 v70; // [rsp+E0h] [rbp-418h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-408h]
  __int128 *v72; // [rsp+100h] [rbp-3F8h] BYREF
  __int64 (__fastcall *v73)(); // [rsp+108h] [rbp-3F0h]
  __int128 *v74; // [rsp+110h] [rbp-3E8h] BYREF
  __int64 (__fastcall *v75)(); // [rsp+118h] [rbp-3E0h]
  _OWORD v76[3]; // [rsp+148h] [rbp-3B0h] BYREF
  __int64 v77; // [rsp+178h] [rbp-380h]
  __int64 v78; // [rsp+180h] [rbp-378h] BYREF
  __int64 v79; // [rsp+188h] [rbp-370h] BYREF
  __int64 v80; // [rsp+190h] [rbp-368h] BYREF
  __int128 v81; // [rsp+198h] [rbp-360h]
  __int64 v82; // [rsp+1A8h] [rbp-350h]
  _OWORD v83[3]; // [rsp+1B0h] [rbp-348h] BYREF
  __int128 v84; // [rsp+1E0h] [rbp-318h] BYREF
  __int128 v85; // [rsp+1F0h] [rbp-308h]
  unsigned __int64 v86; // [rsp+200h] [rbp-2F8h]
  unsigned __int64 v87; // [rsp+208h] [rbp-2F0h]
  __int64 v88; // [rsp+210h] [rbp-2E8h] BYREF
  unsigned __int8 v89; // [rsp+218h] [rbp-2E0h]
  __int16 v90; // [rsp+220h] [rbp-2D8h]
  _BYTE v91[648]; // [rsp+228h] [rbp-2D0h] BYREF
  __int128 v92; // [rsp+4B0h] [rbp-48h] BYREF
  __int64 v93; // [rsp+4C0h] [rbp-38h]

  uu_tsort::uu_app(&v84);
  clap_builder::builder::command::Command::try_get_matches_from(&v63, &v84, a1, a2);
  if ( (_QWORD)v63 == 0x8000000000000000LL )
  {
    v2 = (_OWORD *)uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v63 + 1));
    v4 = v3;
    if ( !v2 )
      return (unsigned int)uucore::mods::error::get_exit_code();
    goto LABEL_60;
  }
  v77 = v66;
  v76[2] = v65;
  v76[1] = v64;
  v76[0] = v63;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v84, v76, aFile, 4LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, &v84);
  if ( !v5 )
    core::option::expect_failed(aValueIsRequire, 25LL, &off_E4A80);
  v60 = v5;
  v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), asc_10D69, 1LL);
  if ( v6 )
  {
    v78 = std::io::stdio::stdin();
    p_fd = (int *)&v78;
    v8 = (__int64 (__fastcall **)())&unk_E4BB8;
LABEL_7:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v74, 0x2000LL, p_fd, v8);
    v61 = 0LL;
    v62 = 1uLL;
    if ( !<std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(&v74, &v61) )
    {
      v53 = v6;
      if ( __readfsqword(0xFFFFFFD0) )
      {
        v15 = (__int128 *)(__readfsqword(0) - 48 + 8);
      }
      else
      {
        v15 = (__int128 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 48, 0LL);
        if ( !v15 )
          core::result::unwrap_failed(aCannotAccessAT, 70LL, &v84, &unk_E4958, &off_E4C10);
      }
      v16 = *v15;
      ++*(_QWORD *)v15;
      v83[1] = xmmword_E4C38;
      v83[0] = *(_OWORD *)&off_E4C28;
      v83[2] = v16;
      *(_QWORD *)&v84 = 0LL;
      *((_QWORD *)&v84 + 1) = *((_QWORD *)&v62 + 1);
      v85 = v62;
      v86 = 0LL;
      v87 = *((_QWORD *)&v62 + 1);
      v88 = 0xA0000000ALL;
      v89 = 1;
      v90 = 0;
LABEL_19:
      v17 = v86;
      v18 = v87;
      if ( v87 >= v86 )
      {
        v19 = *((_QWORD *)&v85 + 1);
        if ( v87 <= *((_QWORD *)&v85 + 1) )
        {
          v20 = v85;
          do
          {
            v21 = v18 - v17;
            v22 = v17 + v85;
            v23 = v89;
            v24 = v89;
            v25 = *((_BYTE *)&v87 + v89 + 7);
            if ( v18 - v17 > 0xF )
            {
              v27 = core::slice::memchr::memchr_aligned(v25, v22, v21);
              if ( v27 != 1 )
              {
                v86 = v87;
                if ( !v27 )
                  break;
LABEL_52:
                v29 = v17 - v84;
                v30 = v84 + v20;
                *(_QWORD *)&v84 = v17;
LABEL_43:
                *(_QWORD *)&v31 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(
                                    v91,
                                    v30,
                                    v29);
                if ( (_QWORD)v31 )
                {
                  *(_QWORD *)&v63 = 0LL;
                  *((_QWORD *)&v63 + 1) = *((_QWORD *)&v31 + 1);
                  v64 = v31;
                  *(_QWORD *)&v65 = v31;
                  *((_QWORD *)&v65 + 1) = *((_QWORD *)&v31 + 1) + v31;
                  v66 = 0LL;
                  v67 = 1;
                  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v58, &v63);
                  v32 = v59;
                  if ( v59 )
                  {
                    v33 = (__int64 *)(*((_QWORD *)&v58 + 1) + 24LL);
                    while ( v32 )
                    {
                      if ( v32 == 1 )
                      {
                        v38 = *(_OWORD *)(v60 + 8);
                        v80 = 0LL;
                        v81 = v38;
                        LOBYTE(v82) = 0;
                        *(_QWORD *)&v68 = &v80;
                        *((_QWORD *)&v68 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
                        *(_QWORD *)&v55 = &unk_E4CC0;
                        *((_QWORD *)&v55 + 1) = 2LL;
                        v57 = 0LL;
                        *(_QWORD *)&v56 = &v68;
                        *((_QWORD *)&v56 + 1) = 1LL;
                        alloc::fmt::format::format_inner(&v70, &v55);
                        DWORD2(v56) = 1;
                        v55 = v70;
                        *(_QWORD *)&v56 = v71;
                        v39 = (_OWORD *)_rust_alloc(32LL, 8LL);
                        v6 = v53;
                        if ( !v39 )
                          alloc::alloc::handle_alloc_error(8LL, 32LL);
                        v2 = v39;
                        v40 = v55;
                        v39[1] = v56;
                        *v39 = v40;
                        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v58);
                        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v58);
                        <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(v83);
                        v4 = &off_E4B48;
                        goto LABEL_55;
                      }
                      v32 -= 2LL;
                      v34 = *(v33 - 3);
                      v35 = *(v33 - 2);
                      v36 = *(v33 - 1);
                      v37 = *v33;
                      v33 += 4;
                      uu_tsort::Graph::add_edge(v83, v34, v35, v36, v37);
                    }
                    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v58);
                    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v58);
                    if ( !HIBYTE(v90) )
                      goto LABEL_19;
                  }
                  else
                  {
                    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v58);
                  }
                }
                goto LABEL_69;
              }
              v19 = *((_QWORD *)&v85 + 1);
              v17 = v86;
              v23 = v89;
              v24 = v89;
            }
            else
            {
              if ( v18 == v17 )
              {
LABEL_38:
                v86 = v18;
                break;
              }
              v26 = 0LL;
              while ( *(_BYTE *)(v22 + v26) != v25 )
              {
                if ( v21 == ++v26 )
                  goto LABEL_38;
              }
            }
            v17 += v26 + 1;
            v86 = v17;
            if ( v17 >= v24 && v17 <= v19 )
            {
              if ( v23 >= 5u )
                core::slice::index::slice_end_index_len_fail(v24, 4LL, &off_E4A08);
              v28 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v85 + v17 - v24, v24, &v88, v24);
              v17 = v86;
              if ( v28 )
                goto LABEL_52;
              v19 = *((_QWORD *)&v85 + 1);
            }
            v18 = v87;
          }
          while ( v87 >= v17 && v87 <= v19 );
        }
      }
      if ( !HIBYTE(v90) )
      {
        HIBYTE(v90) = 1;
        if ( (_BYTE)v90 || *((_QWORD *)&v84 + 1) != (_QWORD)v84 )
        {
          v29 = *((_QWORD *)&v84 + 1) - v84;
          v30 = v85 + v84;
          goto LABEL_43;
        }
      }
LABEL_69:
      uu_tsort::Graph::run_tsort(&v80, v83);
      v46 = v53;
      if ( v80 )
      {
        v69 = v82;
        v68 = v81;
        *(_QWORD *)&v47 = uucore::util_name();
        v58 = v47;
        *(_QWORD *)&v55 = &v58;
        *((_QWORD *)&v55 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v56 = &v60;
        *((_QWORD *)&v56 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v84 = &unk_E4C48;
        *((_QWORD *)&v84 + 1) = 3LL;
        v86 = 0LL;
        *(_QWORD *)&v85 = &v55;
        *((_QWORD *)&v85 + 1) = 2LL;
        alloc::fmt::format::format_inner(&v70, &v84);
        v58 = v70;
        v59 = v71;
        if ( v69 )
        {
          v48 = *((_QWORD *)&v68 + 1);
          v49 = 16 * v69;
          do
          {
            v79 = v48;
            v72 = (__int128 *)uucore::util_name();
            v73 = v50;
            *(_QWORD *)&v55 = &v72;
            *((_QWORD *)&v55 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v56 = &v79;
            *((_QWORD *)&v56 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v84 = &unk_E4C78;
            *((_QWORD *)&v84 + 1) = 3LL;
            v86 = 0LL;
            *(_QWORD *)&v85 = &v55;
            *((_QWORD *)&v85 + 1) = 2LL;
            if ( (unsigned __int8)core::fmt::write(&v58, &off_E49D8, &v84) )
              core::result::unwrap_failed(aCalledResultUn, 43LL, &v84, &unk_E4978, &off_E4CA8);
            v48 += 16LL;
            v49 -= 16LL;
          }
          while ( v49 );
        }
        *(_QWORD *)&v55 = &v58;
        *((_QWORD *)&v55 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v84 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        *((_QWORD *)&v84 + 1) = 1LL;
        v86 = 0LL;
        *(_QWORD *)&v85 = &v55;
        *((_QWORD *)&v85 + 1) = 1LL;
        std::io::stdio::_eprint(&v84);
        alloc::str::join_generic_copy(&v84, *((_QWORD *)&v68 + 1), v69, asc_10CD2, 1LL);
        *(_QWORD *)&v56 = v85;
        v55 = v84;
        v72 = &v55;
        v73 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v84 = &unk_E4A40;
        *((_QWORD *)&v84 + 1) = 2LL;
        v86 = 0LL;
        *(_QWORD *)&v85 = &v72;
        *((_QWORD *)&v85 + 1) = 1LL;
        std::io::stdio::_print(&v84);
        core::ptr::drop_in_place<alloc::string::String>(&v55);
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v55);
        *(_QWORD *)&v85 = v56;
        v84 = v55;
        DWORD2(v85) = 1;
        v46 = v53;
        v2 = (_OWORD *)alloc::alloc::exchange_malloc();
        v51 = v84;
        v2[1] = v85;
        *v2 = v51;
        core::ptr::drop_in_place<alloc::string::String>(&v58);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v68);
      }
      else
      {
        v71 = v82;
        v70 = v81;
        alloc::str::join_generic_copy(&v84, *((_QWORD *)&v81 + 1), v82, asc_10CD2, 1LL);
        *(_QWORD *)&v56 = v85;
        v55 = v84;
        *(_QWORD *)&v58 = &v55;
        *((_QWORD *)&v58 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v84 = &unk_E4A40;
        *((_QWORD *)&v84 + 1) = 2LL;
        v86 = 0LL;
        *(_QWORD *)&v85 = &v58;
        *((_QWORD *)&v85 + 1) = 1LL;
        std::io::stdio::_print(&v84);
        core::ptr::drop_in_place<alloc::string::String>(&v55);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v70);
        v2 = 0LL;
      }
      <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(v83);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v61);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v61);
      if ( v75 )
        _rust_dealloc(v74, v75, 1LL);
      if ( !v46 )
        close(fd);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v76);
      v4 = &off_E4B48;
      if ( !v2 )
        return (unsigned int)uucore::mods::error::get_exit_code();
      goto LABEL_60;
    }
    v2 = (_OWORD *)uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
    v4 = v10;
LABEL_55:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v61);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v61);
    if ( v75 )
      _rust_dealloc(v74, v75, 1LL);
    if ( !v6 )
      close(fd);
    goto LABEL_59;
  }
  v11 = *(_QWORD *)(v60 + 8);
  v12 = *(_QWORD *)(v60 + 16);
  if ( (unsigned __int8)std::path::Path::is_dir(v11, v12) )
  {
    *(_QWORD *)&v55 = &v60;
    *((_QWORD *)&v55 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v84 = &unk_E4AF0;
    *((_QWORD *)&v84 + 1) = 2LL;
    v86 = 0LL;
    *(_QWORD *)&v85 = &v55;
    *((_QWORD *)&v85 + 1) = 1LL;
    alloc::fmt::format::format_inner(&v63, &v84);
    DWORD2(v85) = 1;
    v84 = v63;
    *(_QWORD *)&v85 = v64;
    v13 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v2 = v13;
    v14 = v84;
    v13[1] = v85;
    *v13 = v14;
    v4 = &off_E4B48;
  }
  else
  {
    std::fs::File::open(&v84, v11, v12);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v63,
      &v84,
      v60);
    v2 = (_OWORD *)v63;
    if ( !(_QWORD)v63 )
    {
      fd = DWORD2(v63);
      p_fd = &fd;
      v8 = &off_E4A98;
      goto LABEL_7;
    }
    v4 = (__int64 (__fastcall **)())*((_QWORD *)&v63 + 1);
  }
LABEL_59:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v76);
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_60:
  *(_QWORD *)&v55 = v2;
  *((_QWORD *)&v55 + 1) = v4;
  *(_QWORD *)&v63 = &v55;
  *((_QWORD *)&v63 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v84 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v84 + 1) = 1LL;
  v86 = 0LL;
  *(_QWORD *)&v85 = &v63;
  *((_QWORD *)&v85 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v92, &v84);
  v63 = v92;
  *(_QWORD *)&v64 = v93;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v92 + 1), v93, 1LL, 0LL) )
  {
    v74 = (__int128 *)uucore::util_name();
    v75 = v41;
    *(_QWORD *)&v76[0] = &v74;
    *((_QWORD *)&v76[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v84 = &unk_E4A20;
    *((_QWORD *)&v84 + 1) = 2LL;
    v86 = 0LL;
    *(_QWORD *)&v85 = v76;
    *((_QWORD *)&v85 + 1) = 1LL;
    std::io::stdio::_eprint(&v84);
    v74 = &v63;
    v75 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v84 = &unk_E4A40;
    *((_QWORD *)&v84 + 1) = 2LL;
    v86 = 0LL;
    *(_QWORD *)&v85 = &v74;
    *((_QWORD *)&v85 + 1) = 1LL;
    std::io::stdio::_eprint(&v84);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v55 + 1) + 104LL))(v55) )
  {
    v74 = (__int128 *)uucore::execution_phrase();
    v75 = v42;
    *(_QWORD *)&v76[0] = &v74;
    *((_QWORD *)&v76[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v84 = &off_E4A60;
    *((_QWORD *)&v84 + 1) = 2LL;
    v86 = 0LL;
    *(_QWORD *)&v85 = v76;
    *((_QWORD *)&v85 + 1) = 1LL;
    std::io::stdio::_eprint(&v84);
  }
  v43 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v55 + 1) + 96LL))(v55);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v63);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v63);
  v44 = v55;
  if ( **((_QWORD **)&v55 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v55 + 1))(v55);
  v45 = *(_QWORD *)(*((_QWORD *)&v44 + 1) + 8LL);
  if ( v45 )
    _rust_dealloc(v44, v45, *(_QWORD *)(*((_QWORD *)&v44 + 1) + 16LL));
  return v43;
}
