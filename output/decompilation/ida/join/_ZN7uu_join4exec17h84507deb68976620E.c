__int64 __fastcall uu_join::exec(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int128 *a5, char a6)
{
  __int64 v9; // r15
  char v10; // bp
  int v11; // ecx
  __int64 v12; // r9
  char v13; // al
  int v14; // eax
  char v15; // cl
  char v16; // dl
  int v17; // eax
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rdx
  int v21; // eax
  char v22; // al
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 line; // rax
  const void *current_key; // r14
  size_t v27; // rdx
  size_t v28; // r15
  const void *v29; // rax
  size_t v30; // rdx
  __int64 v31; // r9
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r12
  char *v40; // r13
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // r12
  __int128 v45; // rax
  char v46; // [rsp+4h] [rbp-244h] BYREF
  char v47[3]; // [rsp+5h] [rbp-243h] BYREF
  int v48; // [rsp+8h] [rbp-240h]
  char v49; // [rsp+Fh] [rbp-239h]
  __int128 v50; // [rsp+10h] [rbp-238h] BYREF
  _BYTE v51[40]; // [rsp+20h] [rbp-228h]
  __int128 v52; // [rsp+48h] [rbp-200h]
  __int128 v53; // [rsp+58h] [rbp-1F0h]
  __int64 v54; // [rsp+68h] [rbp-1E0h]
  _BYTE v55[40]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v56; // [rsp+98h] [rbp-1B0h] BYREF
  __int128 v57; // [rsp+A0h] [rbp-1A8h] BYREF
  __int128 v58; // [rsp+B0h] [rbp-198h]
  __int128 v59; // [rsp+C0h] [rbp-188h]
  __int128 v60; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v61; // [rsp+E0h] [rbp-168h]
  __int128 v62; // [rsp+E8h] [rbp-160h]
  char v63; // [rsp+F8h] [rbp-150h]
  char v64; // [rsp+F9h] [rbp-14Fh]
  __int128 v65; // [rsp+100h] [rbp-148h]
  __int64 v66; // [rsp+110h] [rbp-138h]
  __int64 v67; // [rsp+118h] [rbp-130h] BYREF
  __int128 v68; // [rsp+120h] [rbp-128h] BYREF
  __int128 v69; // [rsp+130h] [rbp-118h]
  __int128 v70; // [rsp+140h] [rbp-108h]
  __int128 v71; // [rsp+158h] [rbp-F0h] BYREF
  __int64 v72; // [rsp+168h] [rbp-E0h]
  __int128 v73; // [rsp+170h] [rbp-D8h]
  __int128 v74; // [rsp+180h] [rbp-C8h]
  __int128 v75; // [rsp+190h] [rbp-B8h]
  __int128 v76; // [rsp+1A0h] [rbp-A8h]
  __int64 v77; // [rsp+1B0h] [rbp-98h]
  __int128 v78; // [rsp+1B8h] [rbp-90h] BYREF
  __int64 v79; // [rsp+1C8h] [rbp-80h]
  __int128 v80; // [rsp+1D0h] [rbp-78h]
  __int128 v81; // [rsp+1E0h] [rbp-68h]
  __int128 v82; // [rsp+1F0h] [rbp-58h]
  __int128 v83; // [rsp+200h] [rbp-48h]
  __int64 v84; // [rsp+210h] [rbp-38h]

  v46 = a6;
  v56 = std::io::stdio::stdin();
  uu_join::State::new(
    (__int64)&v50,
    0,
    a1,
    a2,
    (__int64)&v56,
    *((_QWORD *)a5 + 9),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 88));
  v9 = *((_QWORD *)&v50 + 1);
  if ( (_QWORD)v50 == 0x8000000000000000LL )
  {
    v10 = 1;
    goto LABEL_43;
  }
  v11 = v54;
  v77 = v54;
  v76 = v53;
  v75 = v52;
  v74 = *(_OWORD *)&v51[24];
  v73 = *(_OWORD *)&v51[8];
  v71 = v50;
  v72 = *(_QWORD *)v51;
  v12 = *((_QWORD *)a5 + 10);
  v13 = *((_BYTE *)a5 + 89);
  LOBYTE(v11) = 1;
  v48 = v11;
  uu_join::State::new((__int64)&v50, 1, a3, a4, (__int64)&v56, v12, *((_BYTE *)a5 + 95), v13);
  v9 = *((_QWORD *)&v50 + 1);
  v14 = v50;
  if ( (_QWORD)v50 == 0x8000000000000000LL )
  {
    LOBYTE(v14) = 1;
    v48 = v14;
    goto LABEL_42;
  }
  v84 = v54;
  v83 = v53;
  v82 = v52;
  v81 = *(_OWORD *)&v51[24];
  v80 = *(_OWORD *)&v51[8];
  v78 = v50;
  v79 = *(_QWORD *)v51;
  v15 = *((_BYTE *)a5 + 91);
  v16 = *((_BYTE *)a5 + 94);
  v47[2] = v46;
  v47[0] = v15;
  v47[1] = v16;
  v17 = *((unsigned __int8 *)a5 + 92);
  v49 = v17;
  if ( (_BYTE)v17 )
  {
    v18 = alloc::alloc::Global::alloc_impl(16LL);
    if ( !v18 )
    {
      v48 = 1;
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    }
    *(_BYTE *)v18 = 0;
    v19 = v50;
    v20 = *(_QWORD *)((char *)&v50 + 7);
    *(_QWORD *)(v18 + 1) = v50;
    *(_QWORD *)(v18 + 8) = v20;
    LOBYTE(v19) = 1;
    v48 = v19;
    alloc::slice::hack::into_vec(&v57, v18, 1LL);
    *(_QWORD *)&v50 = &v46;
    *((_QWORD *)&v50 + 1) = (char *)a5 + 92;
    *(_QWORD *)v51 = &v57;
    uu_join::exec::{{closure}}(&v50, &v71);
    uu_join::exec::{{closure}}(&v50, &v78);
    v21 = v58;
    v66 = v58;
    v65 = v57;
    LOBYTE(v21) = 1;
    v48 = v21;
  }
  else
  {
    LOBYTE(v17) = 1;
    v48 = v17;
    uu_join::State::initialize((__int64)&v71, (__int64)&v46, 0);
    uu_join::State::initialize((__int64)&v78, (__int64)&v46, *((_BYTE *)a5 + 92));
    v66 = *((_QWORD *)a5 + 2);
    v65 = *a5;
    v48 = 0;
  }
  v22 = *((_BYTE *)a5 + 95);
  v60 = v65;
  v61 = v66;
  v23 = a5[2];
  v63 = v22;
  v64 = v46;
  v62 = v23;
  v67 = std::io::stdio::stdout();
  v24 = std::io::stdio::Stdout::lock(&v67);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v55, 0x2000LL, v24);
  if ( *((_BYTE *)a5 + 93) )
  {
    line = uu_join::State::print_headers(&v71, (__int64)v55, &v78, (__int64)&v60);
    if ( line )
      goto LABEL_36;
    line = uu_join::State::reset_read_line((__int64)&v71, (__int64)v47);
    if ( line )
      goto LABEL_36;
    line = uu_join::State::reset_read_line((__int64)&v78, (__int64)v47);
    if ( line )
      goto LABEL_36;
  }
  if ( !v72 || !v79 )
  {
LABEL_29:
    v9 = uu_join::State::finalize((__int64)&v71, (__int64)v55, v47, (__int64)&v60);
    v34 = v36;
    if ( v9 )
    {
      v37 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v55);
      if ( v37 )
        goto LABEL_40;
      goto LABEL_41;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v36);
    v9 = uu_join::State::finalize((__int64)&v78, (__int64)v55, v47, (__int64)&v60);
    v34 = v38;
    if ( v9 )
    {
      v37 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v55);
      if ( v37 )
        goto LABEL_40;
      goto LABEL_41;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v38);
    line = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v55);
    if ( !line )
    {
      if ( BYTE2(v84) | BYTE2(v77) )
      {
        *(_QWORD *)&v45 = uucore::execution_phrase();
        v57 = v45;
        *(_QWORD *)&v68 = &v57;
        *((_QWORD *)&v68 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v50 = &unk_1325F0;
        *((_QWORD *)&v50 + 1) = 2LL;
        *(_QWORD *)&v51[16] = 0LL;
        *(_QWORD *)v51 = &v68;
        *(_QWORD *)&v51[8] = 1LL;
        std::io::stdio::_eprint(&v50);
        uucore::mods::error::set_exit_code(1LL);
      }
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v55);
      core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(&v60);
      core::ptr::drop_in_place<uu_join::State>(&v78);
      core::ptr::drop_in_place<uu_join::State>(&v71);
      v40 = (char *)a5 + 24;
      core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
      if ( v49 )
        core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
      v9 = 0LL;
      goto LABEL_46;
    }
LABEL_36:
    v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(line);
    goto LABEL_41;
  }
  while ( 1 )
  {
    current_key = (const void *)uu_join::State::get_current_key((__int64)&v71);
    v28 = v27;
    v29 = (const void *)uu_join::State::get_current_key((__int64)&v78);
    v32 = uu_join::Input<Sep>::compare(v47[0], current_key, v28, v29, v30, v31);
    if ( !v32 )
      break;
    if ( v32 == 1 )
    {
      v9 = uu_join::State::skip_line((__int64)&v78, (__int64)v55, v47, (__int64)&v60);
      v34 = v33;
      if ( v9 )
      {
        v37 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v55);
        if ( !v37 )
          goto LABEL_41;
        goto LABEL_40;
      }
    }
    else
    {
      v9 = uu_join::State::skip_line((__int64)&v71, (__int64)v55, v47, (__int64)&v60);
      v34 = v33;
      if ( v9 )
      {
        v37 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v55);
        if ( !v37 )
          goto LABEL_41;
        goto LABEL_40;
      }
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v33);
    BYTE3(v77) = 1;
    BYTE3(v84) = 1;
LABEL_27:
    if ( !v72 || !v79 )
      goto LABEL_29;
  }
  uu_join::State::extend((unsigned __int64)&v50, (__int64)&v71, v47);
  if ( (_QWORD)v50 != 0x8000000000000001LL )
  {
    v70 = *(_OWORD *)&v51[16];
    v69 = *(_OWORD *)v51;
    v68 = v50;
    uu_join::State::extend((unsigned __int64)&v50, (__int64)&v78, v47);
    if ( (_QWORD)v50 == 0x8000000000000001LL )
    {
      v9 = *((_QWORD *)&v50 + 1);
      v42 = *(_QWORD *)v51;
      v43 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v55);
      if ( v43 )
      {
        v44 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v43);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v9,
          v42);
        v9 = v44;
      }
      goto LABEL_52;
    }
    v59 = *(_OWORD *)&v51[16];
    v58 = *(_OWORD *)v51;
    v57 = v50;
    if ( *((_BYTE *)a5 + 90) )
    {
      v35 = uu_join::State::combine(&v71, (__int64)v55, &v78, (__int64)&v60);
      if ( v35 )
      {
        v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v57);
LABEL_52:
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v68);
        goto LABEL_41;
      }
    }
    *(_OWORD *)&v51[16] = v70;
    *(_OWORD *)v51 = v69;
    v50 = v68;
    uu_join::State::reset((__int64)&v71, &v50);
    *(_OWORD *)&v51[16] = v59;
    *(_OWORD *)v51 = v58;
    v50 = v57;
    uu_join::State::reset((__int64)&v78, &v50);
    goto LABEL_27;
  }
  v9 = *((_QWORD *)&v50 + 1);
  v34 = *(_QWORD *)v51;
  v37 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v55);
  if ( !v37 )
    goto LABEL_41;
LABEL_40:
  v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v37);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v9, v34);
  v9 = v39;
LABEL_41:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v55);
  core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(&v60);
  core::ptr::drop_in_place<uu_join::State>(&v78);
LABEL_42:
  v10 = v48;
  core::ptr::drop_in_place<uu_join::State>(&v71);
LABEL_43:
  core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
  if ( v10 )
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
  v40 = (char *)a5 + 24;
LABEL_46:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v40);
  return v9;
}
