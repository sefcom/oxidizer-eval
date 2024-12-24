__int64 __fastcall uu_join::exec(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int128 *a5)
{
  __int64 v8; // r15
  char v9; // bp
  int v10; // ecx
  __int64 v11; // r9
  char v12; // al
  int v13; // eax
  char v14; // cl
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  char v19; // al
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 line; // rax
  const void *current_key; // r14
  size_t v26; // rdx
  size_t v27; // r15
  const void *v28; // rax
  size_t v29; // rdx
  __int64 v30; // r9
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r12
  char *v39; // r13
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r12
  __int128 v44; // rax
  char v45[2]; // [rsp+6h] [rbp-242h] BYREF
  int v46; // [rsp+8h] [rbp-240h]
  char v47; // [rsp+Eh] [rbp-23Ah]
  char v48; // [rsp+Fh] [rbp-239h] BYREF
  __int128 v49; // [rsp+10h] [rbp-238h] BYREF
  _BYTE v50[40]; // [rsp+20h] [rbp-228h]
  __int128 v51; // [rsp+48h] [rbp-200h]
  __int128 v52; // [rsp+58h] [rbp-1F0h]
  __int64 v53; // [rsp+68h] [rbp-1E0h]
  _BYTE v54[40]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v55; // [rsp+98h] [rbp-1B0h] BYREF
  __int128 v56; // [rsp+A0h] [rbp-1A8h] BYREF
  __int128 v57; // [rsp+B0h] [rbp-198h]
  __int128 v58; // [rsp+C0h] [rbp-188h]
  __int128 v59; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-168h]
  __int128 v61; // [rsp+E8h] [rbp-160h]
  char v62; // [rsp+F8h] [rbp-150h]
  __int128 v63; // [rsp+100h] [rbp-148h]
  __int64 v64; // [rsp+110h] [rbp-138h]
  __int64 v65; // [rsp+118h] [rbp-130h] BYREF
  __int128 v66; // [rsp+120h] [rbp-128h] BYREF
  __int128 v67; // [rsp+130h] [rbp-118h]
  __int128 v68; // [rsp+140h] [rbp-108h]
  __int128 v69; // [rsp+158h] [rbp-F0h] BYREF
  __int64 v70; // [rsp+168h] [rbp-E0h]
  __int128 v71; // [rsp+170h] [rbp-D8h]
  __int128 v72; // [rsp+180h] [rbp-C8h]
  __int128 v73; // [rsp+190h] [rbp-B8h]
  __int128 v74; // [rsp+1A0h] [rbp-A8h]
  __int64 v75; // [rsp+1B0h] [rbp-98h]
  __int128 v76; // [rsp+1B8h] [rbp-90h] BYREF
  __int64 v77; // [rsp+1C8h] [rbp-80h]
  __int128 v78; // [rsp+1D0h] [rbp-78h]
  __int128 v79; // [rsp+1E0h] [rbp-68h]
  __int128 v80; // [rsp+1F0h] [rbp-58h]
  __int128 v81; // [rsp+200h] [rbp-48h]
  __int64 v82; // [rsp+210h] [rbp-38h]

  v55 = std::io::stdio::stdin();
  uu_join::State::new(
    (__int64)&v49,
    0,
    a1,
    a2,
    (__int64)&v55,
    *((_QWORD *)a5 + 9),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 88));
  v8 = *((_QWORD *)&v49 + 1);
  if ( (_QWORD)v49 == 0x8000000000000000LL )
  {
    v9 = 1;
    goto LABEL_45;
  }
  v10 = v53;
  v75 = v53;
  v74 = v52;
  v73 = v51;
  v72 = *(_OWORD *)&v50[24];
  v71 = *(_OWORD *)&v50[8];
  v69 = v49;
  v70 = *(_QWORD *)v50;
  v11 = *((_QWORD *)a5 + 10);
  v12 = *((_BYTE *)a5 + 89);
  LOBYTE(v10) = 1;
  v46 = v10;
  uu_join::State::new((__int64)&v49, 1, a3, a4, (__int64)&v55, v11, *((_BYTE *)a5 + 95), v12);
  v8 = *((_QWORD *)&v49 + 1);
  v13 = v49;
  if ( (_QWORD)v49 == 0x8000000000000000LL )
  {
    LOBYTE(v13) = 1;
    v46 = v13;
    goto LABEL_44;
  }
  v82 = v53;
  v81 = v52;
  v80 = v51;
  v79 = *(_OWORD *)&v50[24];
  v78 = *(_OWORD *)&v50[8];
  v76 = v49;
  v77 = *(_QWORD *)v50;
  v14 = *((_BYTE *)a5 + 94);
  v45[0] = *((_BYTE *)a5 + 91);
  v45[1] = v14;
  v15 = *((unsigned __int8 *)a5 + 92);
  v47 = v15;
  if ( (_BYTE)v15 )
  {
    v16 = alloc::alloc::Global::alloc_impl(16LL);
    if ( !v16 )
    {
      v46 = 1;
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    }
    *(_BYTE *)v16 = 0;
    v17 = *(_QWORD *)((char *)&v49 + 7);
    *(_QWORD *)(v16 + 1) = v49;
    *(_QWORD *)(v16 + 8) = v17;
    alloc::slice::hack::into_vec(&v56, v16, 1LL);
    *(_QWORD *)&v49 = &v48;
    *((_QWORD *)&v49 + 1) = (char *)a5 + 92;
    *(_QWORD *)v50 = &v56;
    uu_join::exec::{{closure}}(&v49, &v69);
    uu_join::exec::{{closure}}(&v49, &v76);
    v18 = v57;
    v64 = v57;
    v63 = v56;
    LOBYTE(v18) = 1;
    v46 = v18;
  }
  else
  {
    LOBYTE(v15) = 1;
    v46 = v15;
    uu_join::State::initialize((__int64)&v69, (__int64)&v48, 0);
    uu_join::State::initialize((__int64)&v76, (__int64)&v48, *((_BYTE *)a5 + 92));
    v64 = *((_QWORD *)a5 + 2);
    v63 = *a5;
    v46 = 0;
  }
  v19 = *((_BYTE *)a5 + 95);
  v60 = v64;
  v59 = v63;
  v20 = a5[2];
  v62 = v19;
  v61 = v20;
  v65 = std::io::stdio::stdout();
  v21 = std::io::stdio::Stdout::lock(&v65);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v54, 0x2000LL, v21);
  if ( *((_BYTE *)a5 + 93) )
  {
    v22 = uu_join::State::print_headers(&v69, (__int64)v54, &v76, (__int64)&v59);
    if ( v22 )
    {
      v23 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
LABEL_38:
      v8 = v23;
      goto LABEL_43;
    }
    line = uu_join::State::reset_read_line((__int64)&v69, (__int64)v45);
    if ( line || (line = uu_join::State::reset_read_line((__int64)&v76, (__int64)v45)) != 0 )
    {
LABEL_37:
      v23 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(line);
      goto LABEL_38;
    }
  }
  if ( !v70 || !v77 )
  {
LABEL_30:
    v8 = uu_join::State::finalize((__int64)&v69, (__int64)v54, v45, (__int64)&v59);
    v33 = v35;
    if ( v8 )
    {
      v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
      if ( v36 )
        goto LABEL_42;
      goto LABEL_43;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v35);
    v8 = uu_join::State::finalize((__int64)&v76, (__int64)v54, v45, (__int64)&v59);
    v33 = v37;
    if ( v8 )
    {
      v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
      if ( v36 )
        goto LABEL_42;
      goto LABEL_43;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v37);
    line = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
    if ( !line )
    {
      if ( BYTE2(v82) | BYTE2(v75) )
      {
        *(_QWORD *)&v44 = uucore::execution_phrase();
        v56 = v44;
        *(_QWORD *)&v66 = &v56;
        *((_QWORD *)&v66 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v49 = &unk_133190;
        *((_QWORD *)&v49 + 1) = 2LL;
        *(_QWORD *)&v50[16] = 0LL;
        *(_QWORD *)v50 = &v66;
        *(_QWORD *)&v50[8] = 1LL;
        std::io::stdio::_eprint(&v49);
        uucore::mods::error::set_exit_code(1LL);
      }
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v54);
      core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(&v59);
      core::ptr::drop_in_place<uu_join::State>(&v76);
      core::ptr::drop_in_place<uu_join::State>(&v69);
      v39 = (char *)a5 + 24;
      core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
      if ( v47 )
        core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
      v8 = 0LL;
      goto LABEL_48;
    }
    goto LABEL_37;
  }
  while ( 1 )
  {
    current_key = (const void *)uu_join::State::get_current_key((__int64)&v69);
    v27 = v26;
    v28 = (const void *)uu_join::State::get_current_key((__int64)&v76);
    v31 = uu_join::Input<Sep>::compare(v45[0], current_key, v27, v28, v29, v30);
    if ( !v31 )
      break;
    if ( v31 == 1 )
    {
      v8 = uu_join::State::skip_line((__int64)&v76, (__int64)v54, v45, (__int64)&v59);
      v33 = v32;
      if ( v8 )
      {
        v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
        if ( !v36 )
          goto LABEL_43;
        goto LABEL_42;
      }
    }
    else
    {
      v8 = uu_join::State::skip_line((__int64)&v69, (__int64)v54, v45, (__int64)&v59);
      v33 = v32;
      if ( v8 )
      {
        v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
        if ( !v36 )
          goto LABEL_43;
        goto LABEL_42;
      }
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v32);
    BYTE3(v75) = 1;
    BYTE3(v82) = 1;
LABEL_28:
    if ( !v70 || !v77 )
      goto LABEL_30;
  }
  uu_join::State::extend((unsigned __int64)&v49, (__int64)&v69, v45);
  if ( (_QWORD)v49 != 0x8000000000000001LL )
  {
    v68 = *(_OWORD *)&v50[16];
    v67 = *(_OWORD *)v50;
    v66 = v49;
    uu_join::State::extend((unsigned __int64)&v49, (__int64)&v76, v45);
    if ( (_QWORD)v49 == 0x8000000000000001LL )
    {
      v8 = *((_QWORD *)&v49 + 1);
      v41 = *(_QWORD *)v50;
      v42 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
      if ( v42 )
      {
        v43 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v8,
          v41);
        v8 = v43;
      }
      goto LABEL_54;
    }
    v58 = *(_OWORD *)&v50[16];
    v57 = *(_OWORD *)v50;
    v56 = v49;
    if ( *((_BYTE *)a5 + 90) )
    {
      v34 = uu_join::State::combine(&v69, (__int64)v54, &v76, (__int64)&v59);
      if ( v34 )
      {
        v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34);
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v56);
LABEL_54:
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v66);
        goto LABEL_43;
      }
    }
    *(_OWORD *)&v50[16] = v68;
    *(_OWORD *)v50 = v67;
    v49 = v66;
    uu_join::State::reset((__int64)&v69, &v49);
    *(_OWORD *)&v50[16] = v58;
    *(_OWORD *)v50 = v57;
    v49 = v56;
    uu_join::State::reset((__int64)&v76, &v49);
    goto LABEL_28;
  }
  v8 = *((_QWORD *)&v49 + 1);
  v33 = *(_QWORD *)v50;
  v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
  if ( !v36 )
    goto LABEL_43;
LABEL_42:
  v38 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v8, v33);
  v8 = v38;
LABEL_43:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v54);
  core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(&v59);
  core::ptr::drop_in_place<uu_join::State>(&v76);
LABEL_44:
  v9 = v46;
  core::ptr::drop_in_place<uu_join::State>(&v69);
LABEL_45:
  core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
  if ( v9 )
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
  v39 = (char *)a5 + 24;
LABEL_48:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v39);
  return v8;
}
