__int64 __fastcall uu_shuf::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r14
  const char *v6; // rsi
  void (__fastcall __noreturn *v7)(); // rax
  const char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rax
  const char *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r14
  const char *v25; // rsi
  void (__fastcall __noreturn *v26)(); // rax
  const char *v27; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // r15
  __int64 v36; // rax
  unsigned __int64 v37; // rbp
  __int64 v38; // r13
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  char flag; // r14
  __int64 v42; // r12
  bool v43; // zf
  char v44; // al
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 (__fastcall **v48)(); // rdx
  char v49; // bp
  char v50; // r15
  __int128 v51; // kr60_16
  __int64 v52; // r13
  __int64 v53; // rbp
  __int128 v55; // [rsp+0h] [rbp-438h] BYREF
  __int128 v56; // [rsp+10h] [rbp-428h]
  __int128 v57; // [rsp+20h] [rbp-418h]
  __int128 v58; // [rsp+30h] [rbp-408h]
  __int64 v59; // [rsp+48h] [rbp-3F0h]
  __int128 v60; // [rsp+50h] [rbp-3E8h] BYREF
  const char *v61; // [rsp+60h] [rbp-3D8h]
  __int64 v62; // [rsp+68h] [rbp-3D0h]
  __int128 v63; // [rsp+70h] [rbp-3C8h] BYREF
  __int128 v64; // [rsp+80h] [rbp-3B8h] BYREF
  __int128 v65; // [rsp+90h] [rbp-3A8h]
  __int128 v66; // [rsp+A0h] [rbp-398h]
  _DWORD v67[2]; // [rsp+B8h] [rbp-380h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-378h]
  __int128 *v69; // [rsp+C8h] [rbp-370h] BYREF
  __int64 (__fastcall *v70)(); // [rsp+D0h] [rbp-368h]
  __int64 v71; // [rsp+D8h] [rbp-360h]
  __int64 v72; // [rsp+E0h] [rbp-358h]
  _OWORD v73[3]; // [rsp+E8h] [rbp-350h] BYREF
  __int64 v74; // [rsp+118h] [rbp-320h]
  __int64 v75; // [rsp+120h] [rbp-318h]
  __int128 v76; // [rsp+128h] [rbp-310h] BYREF
  __int64 v77; // [rsp+138h] [rbp-300h]
  __int128 dest; // [rsp+140h] [rbp-2F8h] BYREF
  __int128 v79; // [rsp+150h] [rbp-2E8h]
  __int128 v80; // [rsp+160h] [rbp-2D8h]
  const char *v81; // [rsp+170h] [rbp-2C8h]
  __int64 v82; // [rsp+178h] [rbp-2C0h]

  uu_shuf::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v55, &dest, a1, a2);
  if ( !__OFSUB__(-(__int64)v55, 1LL) )
  {
    v74 = v58;
    v73[2] = v57;
    v73[1] = v56;
    v73[0] = v55;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            v73,
                            aEcho,
                            *(&uu_shuf::options::ECHO + 1)) )
    {
      v5 = (__int64)*(&uu_shuf::options::FILE_OR_ARGS + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v73, aFileOrArgs, v5);
      v6 = aFileOrArgs;
      clap_builder::parser::error::MatchesError::unwrap(&v55, aFileOrArgs, v5, &dest);
      v7 = (void (__fastcall __noreturn *)())v55;
      if ( (_QWORD)v55 )
      {
        v8 = (const char *)*((_QWORD *)&v55 + 1);
        v9 = v56;
        v10 = v57;
        v11 = *((_QWORD *)&v58 + 1);
        v6 = (const char *)v58;
      }
      else
      {
        v10 = 0LL;
        v9 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
        v8 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
        v7 = core::ops::function::FnOnce::call_once;
        v11 = 0LL;
      }
      *(_QWORD *)&dest = v7;
      *((_QWORD *)&dest + 1) = v8;
      v79 = v9;
      v80 = v10;
      v81 = v6;
      v82 = v11;
      core::iter::traits::iterator::Iterator::collect(&v55, &dest);
      v60 = v55;
      v61 = (const char *)v56;
      v59 = 1LL;
      v16 = 1LL;
    }
    else
    {
      v12 = (__int64)*(&uu_shuf::options::INPUT_RANGE + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v73, aInputRange, v12);
      v13 = clap_builder::parser::error::MatchesError::unwrap(aInputRange, v12, &dest);
      if ( v13
        && (<core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(&dest, v13),
            v55 = dest,
            LODWORD(v63) = *(_DWORD *)((char *)&v79 + 1),
            *(_DWORD *)((char *)&v63 + 3) = DWORD1(v79),
            (_BYTE)v79 != 2) )
      {
        v60 = v55;
        *(_DWORD *)((char *)&v61 + 1) = v63;
        HIDWORD(v61) = *(_DWORD *)((char *)&v63 + 3);
        LOBYTE(v61) = v79;
        v59 = 2LL;
        v16 = 2LL;
      }
      else
      {
        v14 = aFileOrArgs;
        v15 = (__int64)*(&uu_shuf::options::FILE_OR_ARGS + 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v73, aFileOrArgs, v15);
        clap_builder::parser::error::MatchesError::unwrap(&v55, aFileOrArgs, v15, &dest);
        if ( (_QWORD)v55 )
        {
          v66 = v58;
          v65 = v57;
          v64 = v56;
          v63 = v55;
        }
        else
        {
          *(_QWORD *)&v63 = core::ops::function::FnOnce::call_once;
          *((_QWORD *)&v63 + 1) = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
          *(_QWORD *)&v64 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
          *((_QWORD *)&v64 + 1) = 0LL;
          *((_QWORD *)&v65 + 1) = 0LL;
          *((_QWORD *)&v66 + 1) = 0LL;
        }
        v17 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v63);
        if ( v17 )
        {
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&dest, *(_QWORD *)(v17 + 8), *(_QWORD *)(v17 + 16));
          v2 = *((_QWORD *)&dest + 1);
          v18 = dest;
          v14 = (const char *)v79;
        }
        else
        {
          v18 = 0x8000000000000000LL;
        }
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, asc_19B45, 1LL);
        v20 = *((_QWORD *)&dest + 1);
        v19 = dest;
        if ( v18 == 0x8000000000000000LL )
        {
          v14 = (const char *)v79;
        }
        else
        {
          core::ptr::drop_in_place<std::ffi::os_str::OsString>(dest, *((_QWORD *)&dest + 1));
          v20 = v2;
          v19 = v18;
        }
        v21 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v63);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 8);
          v23 = *(_QWORD *)(v21 + 16);
          *(_QWORD *)&v55 = 1LL;
          *((_QWORD *)&v55 + 1) = v22;
          *(_QWORD *)&v56 = v23;
          BYTE8(v56) = 1;
          v69 = &v55;
          v70 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&dest = &off_F8FA0;
          *((_QWORD *)&dest + 1) = 2LL;
          *(_QWORD *)&v80 = 0LL;
          *(_QWORD *)&v79 = &v69;
          *((_QWORD *)&v79 + 1) = 1LL;
          core::option::Option<T>::map_or_else(&v76, &dest);
          DWORD2(v79) = 1;
          dest = v76;
          *(_QWORD *)&v79 = v77;
          v4 = alloc::boxed::Box<T>::new(&dest);
          core::ptr::drop_in_place<std::ffi::os_str::OsString>(v19, v20);
LABEL_63:
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v73);
          return v4;
        }
        *(_QWORD *)&v60 = v19;
        *((_QWORD *)&v60 + 1) = v20;
        v61 = v14;
        v59 = 0LL;
        v16 = 0LL;
      }
    }
    v62 = v16;
    v24 = (__int64)*(&uu_shuf::options::HEAD_COUNT + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v73, aHeadCount, v24);
    v25 = aHeadCount;
    clap_builder::parser::error::MatchesError::unwrap(&v55, aHeadCount, v24, &dest);
    v26 = (void (__fastcall __noreturn *)())v55;
    if ( (_QWORD)v55 )
    {
      v27 = (const char *)*((_QWORD *)&v55 + 1);
      v28 = v56;
      v29 = v57;
      v30 = *((_QWORD *)&v58 + 1);
      v25 = (const char *)v58;
    }
    else
    {
      v29 = 0LL;
      v28 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
      v27 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
      v26 = core::ops::function::FnOnce::call_once;
      v30 = 0LL;
    }
    *(_QWORD *)&dest = v26;
    *((_QWORD *)&dest + 1) = v27;
    v79 = v28;
    v80 = v29;
    v81 = v25;
    v82 = v30;
    v31 = core::iter::traits::iterator::Iterator::reduce(&dest);
    v33 = v32;
    v34 = -(__int64)((v31 & 1) == 0);
    v35 = (__int64)*(&uu_shuf::options::OUTPUT + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v73, aOutput, v35);
    v36 = clap_builder::parser::error::MatchesError::unwrap(aOutput, v35, &dest);
    if ( v36 )
    {
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&dest, *(_QWORD *)(v36 + 8), *(_QWORD *)(v36 + 16));
      v72 = *((_QWORD *)&dest + 1);
      v37 = dest;
      v75 = v79;
    }
    else
    {
      v37 = 0x8000000000000000LL;
    }
    v38 = (__int64)*(&uu_shuf::options::RANDOM_SOURCE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v73, aRandomSource, v38);
    v39 = clap_builder::parser::error::MatchesError::unwrap(aRandomSource, v38, &dest);
    if ( v39 )
    {
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&dest, *(_QWORD *)(v39 + 8), *(_QWORD *)(v39 + 16));
      v71 = *((_QWORD *)&dest + 1);
      v40 = dest;
      v35 = v79;
    }
    else
    {
      v40 = 0x8000000000000000LL;
    }
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v73,
             aRepeat,
             *(&uu_shuf::options::REPEAT + 1));
    v42 = v33 | v34;
    v43 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             v73,
                             aZeroTerminated,
                             *(&uu_shuf::options::ZERO_TERMINATED + 1)) == 0;
    v44 = 10;
    if ( !v43 )
      v44 = 0;
    *(_QWORD *)&v66 = v42;
    *(_QWORD *)&v63 = v37;
    *((_QWORD *)&v63 + 1) = v72;
    *(_QWORD *)&v64 = v75;
    *((_QWORD *)&v64 + 1) = v40;
    *(_QWORD *)&v65 = v71;
    *((_QWORD *)&v65 + 1) = v35;
    BYTE8(v66) = flag;
    BYTE9(v66) = v44;
    if ( v37 == 0x8000000000000000LL )
    {
      v45 = v62;
      v46 = std::io::stdio::stdout();
      v47 = alloc::boxed::Box<T>::new(v46);
      v48 = (__int64 (__fastcall **)())&unk_F9048;
    }
    else
    {
      v45 = v62;
      std::fs::File::create(&v55, &v63);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v69,
        &v55,
        *((_QWORD *)&v63 + 1),
        v64);
      v4 = (__int64)v69;
      v49 = 1;
      if ( v69 )
      {
        v50 = 1;
        goto LABEL_57;
      }
      v47 = alloc::boxed::Box<T>::new((unsigned int)v70);
      v48 = &off_F90A0;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&dest, v47, v48);
    if ( (_QWORD)v66 )
    {
      if ( *((_QWORD *)&v64 + 1) == 0x8000000000000000LL )
      {
        v68 = rand::rngs::thread::rng();
        v67[0] = 1;
        if ( v45 )
          goto LABEL_42;
        goto LABEL_51;
      }
      std::fs::File::open(&v55, (char *)&v64 + 8);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v69,
        &v55,
        v65,
        *((_QWORD *)&v65 + 1));
      v4 = (__int64)v69;
      v49 = 1;
      if ( !v69 )
      {
        v67[1] = (_DWORD)v70;
        v67[0] = 0;
        if ( v45 )
        {
LABEL_42:
          if ( (_DWORD)v45 == 1 )
          {
            core::iter::traits::iterator::Iterator::collect(
              &v55,
              *((_QWORD *)&v60 + 1),
              *((_QWORD *)&v60 + 1) + 24LL * (_QWORD)v61);
            v4 = uu_shuf::shuf_exec(&v55, &v63, v67, &dest);
            if ( v4 )
            {
              core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v55, *((_QWORD *)&v55 + 1));
              core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v60);
              v50 = 1;
              v49 = 0;
LABEL_55:
              core::ptr::drop_in_place<uu_shuf::WrappedRng>(v67);
              goto LABEL_56;
            }
            core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v55, *((_QWORD *)&v55 + 1));
            core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v60);
          }
          else
          {
            *(_QWORD *)&v56 = v61;
            v55 = v60;
            v4 = ((__int64 (__fastcall *)(__int128 *, __int128 *, _DWORD *, __int128 *))uu_shuf::shuf_exec)(
                   &v55,
                   &v63,
                   v67,
                   &dest);
            if ( v4 )
            {
              v49 = 1;
              v50 = 1;
              goto LABEL_55;
            }
          }
LABEL_68:
          core::ptr::drop_in_place<uu_shuf::WrappedRng>(v67);
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn uucore::mods::display::OsWrite>>>(&dest);
          core::ptr::drop_in_place<uu_shuf::Options>(&v63);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v73);
          return 0LL;
        }
LABEL_51:
        v51 = v60;
        uu_shuf::read_input_file(&v55, *((_QWORD *)&v60 + 1), v61);
        v4 = *((_QWORD *)&v55 + 1);
        v52 = v55;
        if ( (_QWORD)v55 != 0x8000000000000000LL )
        {
          uu_shuf::split_seps(&v55, *((_QWORD *)&v55 + 1), v56, BYTE9(v66));
          v53 = uu_shuf::shuf_exec(&v55, &v63, v67, &dest);
          if ( !v53 )
          {
            core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v55, *((_QWORD *)&v55 + 1));
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v52, v4);
            core::mem::drop(v51, *((_QWORD *)&v51 + 1));
            goto LABEL_68;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v55, *((_QWORD *)&v55 + 1));
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v52, v4);
          v4 = v53;
        }
        core::mem::drop(v51, *((_QWORD *)&v51 + 1));
        v49 = 1;
        v50 = 0;
        LODWORD(v45) = v62;
        goto LABEL_55;
      }
      v50 = 1;
    }
    else
    {
      v49 = 1;
      v4 = 0LL;
      v50 = 1;
    }
LABEL_56:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn uucore::mods::display::OsWrite>>>(&dest);
LABEL_57:
    core::ptr::drop_in_place<uu_shuf::Options>(&v63);
    if ( (_DWORD)v45 != 2 )
    {
      if ( (_DWORD)v45 == 1 )
      {
        if ( v49 )
          core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v60);
      }
      else if ( v50 )
      {
        core::mem::drop(v60, *((_QWORD *)&v60 + 1));
      }
    }
    goto LABEL_63;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
           *((_QWORD *)&v55 + 1),
           &dest,
           v3,
           -(__int64)v55);
}