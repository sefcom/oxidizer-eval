__int64 __fastcall uu_join::exec(int a1, int a2, int a3, int a4, __int128 *a5)
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
  __int64 v24; // rax
  const void *current_key; // r14
  size_t v26; // rdx
  size_t v27; // r15
  const void *v28; // rax
  size_t v29; // rdx
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 v38; // r13
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r12
  __int128 v43; // rax
  char v44[2]; // [rsp+6h] [rbp-242h] BYREF
  int v45; // [rsp+8h] [rbp-240h]
  char v46; // [rsp+Eh] [rbp-23Ah]
  char v47; // [rsp+Fh] [rbp-239h] BYREF
  __int128 v48; // [rsp+10h] [rbp-238h] BYREF
  _BYTE v49[40]; // [rsp+20h] [rbp-228h]
  __int128 v50; // [rsp+48h] [rbp-200h]
  __int128 v51; // [rsp+58h] [rbp-1F0h]
  __int64 v52; // [rsp+68h] [rbp-1E0h]
  _BYTE v53[40]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v54; // [rsp+98h] [rbp-1B0h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-1A8h] BYREF
  __int128 v56; // [rsp+B0h] [rbp-198h]
  __int128 v57; // [rsp+C0h] [rbp-188h]
  __int128 v58; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-168h]
  __int128 v60; // [rsp+E8h] [rbp-160h]
  char v61; // [rsp+F8h] [rbp-150h]
  __int128 v62; // [rsp+100h] [rbp-148h]
  __int64 v63; // [rsp+110h] [rbp-138h]
  __int64 v64; // [rsp+118h] [rbp-130h] BYREF
  __int128 v65; // [rsp+120h] [rbp-128h] BYREF
  __int128 v66; // [rsp+130h] [rbp-118h]
  __int128 v67; // [rsp+140h] [rbp-108h]
  __int128 v68; // [rsp+158h] [rbp-F0h] BYREF
  __int64 v69; // [rsp+168h] [rbp-E0h]
  __int128 v70; // [rsp+170h] [rbp-D8h]
  __int128 v71; // [rsp+180h] [rbp-C8h]
  __int128 v72; // [rsp+190h] [rbp-B8h]
  __int128 v73; // [rsp+1A0h] [rbp-A8h]
  __int64 v74; // [rsp+1B0h] [rbp-98h]
  __int128 v75; // [rsp+1B8h] [rbp-90h] BYREF
  __int64 v76; // [rsp+1C8h] [rbp-80h]
  __int128 v77; // [rsp+1D0h] [rbp-78h]
  __int128 v78; // [rsp+1E0h] [rbp-68h]
  __int128 v79; // [rsp+1F0h] [rbp-58h]
  __int128 v80; // [rsp+200h] [rbp-48h]
  __int64 v81; // [rsp+210h] [rbp-38h]

  v54 = std::io::stdio::stdin();
  uu_join::State::new(
    (unsigned int)&v48,
    0,
    a1,
    a2,
    (unsigned int)&v54,
    *((_QWORD *)a5 + 9),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 88));
  v8 = *((_QWORD *)&v48 + 1);
  if ( (_QWORD)v48 == 0x8000000000000000LL )
  {
    v9 = 1;
    goto LABEL_45;
  }
  v10 = v52;
  v74 = v52;
  v73 = v51;
  v72 = v50;
  v71 = *(_OWORD *)&v49[24];
  v70 = *(_OWORD *)&v49[8];
  v68 = v48;
  v69 = *(_QWORD *)v49;
  v11 = *((_QWORD *)a5 + 10);
  v12 = *((_BYTE *)a5 + 89);
  LOBYTE(v10) = 1;
  v45 = v10;
  uu_join::State::new((unsigned int)&v48, 1, a3, a4, (unsigned int)&v54, v11, *((_BYTE *)a5 + 95), v12);
  v8 = *((_QWORD *)&v48 + 1);
  v13 = v48;
  if ( (_QWORD)v48 == 0x8000000000000000LL )
  {
    LOBYTE(v13) = 1;
    v45 = v13;
    goto LABEL_44;
  }
  v81 = v52;
  v80 = v51;
  v79 = v50;
  v78 = *(_OWORD *)&v49[24];
  v77 = *(_OWORD *)&v49[8];
  v75 = v48;
  v76 = *(_QWORD *)v49;
  v14 = *((_BYTE *)a5 + 94);
  v44[0] = *((_BYTE *)a5 + 91);
  v44[1] = v14;
  v15 = *((unsigned __int8 *)a5 + 92);
  v46 = v15;
  if ( (_BYTE)v15 )
  {
    v16 = alloc::alloc::Global::alloc_impl(16LL);
    if ( !v16 )
    {
      v45 = 1;
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    }
    *(_BYTE *)v16 = 0;
    v17 = *(_QWORD *)((char *)&v48 + 7);
    *(_QWORD *)(v16 + 1) = v48;
    *(_QWORD *)(v16 + 8) = v17;
    alloc::slice::hack::into_vec(&v55, v16, 1LL);
    *(_QWORD *)&v48 = &v47;
    *((_QWORD *)&v48 + 1) = (char *)a5 + 92;
    *(_QWORD *)v49 = &v55;
    uu_join::exec::{{closure}}(&v48, &v68);
    uu_join::exec::{{closure}}(&v48, &v75);
    v18 = v56;
    v63 = v56;
    v62 = v55;
    LOBYTE(v18) = 1;
    v45 = v18;
  }
  else
  {
    LOBYTE(v15) = 1;
    v45 = v15;
    uu_join::State::initialize(&v68, &v47, 0LL);
    uu_join::State::initialize(&v75, &v47, *((unsigned __int8 *)a5 + 92));
    v63 = *((_QWORD *)a5 + 2);
    v62 = *a5;
    v45 = 0;
  }
  v19 = *((_BYTE *)a5 + 95);
  v59 = v63;
  v58 = v62;
  v20 = a5[2];
  v61 = v19;
  v60 = v20;
  v64 = std::io::stdio::stdout();
  v21 = std::io::stdio::Stdout::lock(&v64);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v53, 0x2000LL, v21);
  if ( *((_BYTE *)a5 + 93) )
  {
    v22 = uu_join::State::print_headers(&v68, v53, &v75, &v58);
    if ( v22 )
    {
      v23 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
LABEL_38:
      v8 = v23;
      goto LABEL_43;
    }
    v24 = uu_join::State::reset_read_line(&v68, v44);
    if ( v24 || (v24 = uu_join::State::reset_read_line(&v75, v44)) != 0 )
    {
LABEL_37:
      v23 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
      goto LABEL_38;
    }
  }
  if ( !v69 || !v76 )
  {
LABEL_30:
    v8 = uu_join::State::finalize(&v68, v53, v44, &v58);
    v32 = v34;
    if ( v8 )
    {
      v35 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v53);
      if ( v35 )
        goto LABEL_42;
      goto LABEL_43;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v34);
    v8 = uu_join::State::finalize(&v75, v53, v44, &v58);
    v32 = v36;
    if ( v8 )
    {
      v35 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v53);
      if ( v35 )
        goto LABEL_42;
      goto LABEL_43;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v36);
    v24 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v53);
    if ( !v24 )
    {
      if ( BYTE2(v81) | BYTE2(v74) )
      {
        *(_QWORD *)&v43 = uucore::execution_phrase();
        v55 = v43;
        *(_QWORD *)&v65 = &v55;
        *((_QWORD *)&v65 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v48 = &unk_133190;
        *((_QWORD *)&v48 + 1) = 2LL;
        *(_QWORD *)&v49[16] = 0LL;
        *(_QWORD *)v49 = &v65;
        *(_QWORD *)&v49[8] = 1LL;
        std::io::stdio::_eprint(&v48);
        uucore::mods::error::set_exit_code(1LL);
      }
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v53);
      core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(&v58);
      core::ptr::drop_in_place<uu_join::State>(&v75);
      core::ptr::drop_in_place<uu_join::State>(&v68);
      v38 = (__int64)a5 + 24;
      core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
      if ( v46 )
        core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
      v8 = 0LL;
      goto LABEL_48;
    }
    goto LABEL_37;
  }
  while ( 1 )
  {
    current_key = (const void *)uu_join::State::get_current_key(&v68);
    v27 = v26;
    v28 = (const void *)uu_join::State::get_current_key(&v75);
    v30 = uu_join::Input<Sep>::compare(v44[0], current_key, v27, v28, v29);
    if ( !v30 )
      break;
    if ( v30 == 1 )
    {
      v8 = uu_join::State::skip_line(&v75, v53, v44, &v58);
      v32 = v31;
      if ( v8 )
      {
        v35 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v53);
        if ( !v35 )
          goto LABEL_43;
        goto LABEL_42;
      }
    }
    else
    {
      v8 = uu_join::State::skip_line(&v68, v53, v44, &v58);
      v32 = v31;
      if ( v8 )
      {
        v35 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v53);
        if ( !v35 )
          goto LABEL_43;
        goto LABEL_42;
      }
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v31);
    BYTE3(v74) = 1;
    BYTE3(v81) = 1;
LABEL_28:
    if ( !v69 || !v76 )
      goto LABEL_30;
  }
  uu_join::State::extend(&v48, &v68, v44);
  if ( (_QWORD)v48 != 0x8000000000000001LL )
  {
    v67 = *(_OWORD *)&v49[16];
    v66 = *(_OWORD *)v49;
    v65 = v48;
    uu_join::State::extend(&v48, &v75, v44);
    if ( (_QWORD)v48 == 0x8000000000000001LL )
    {
      v8 = *((_QWORD *)&v48 + 1);
      v40 = *(_QWORD *)v49;
      v41 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v53);
      if ( v41 )
      {
        v42 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v8,
          v40);
        v8 = v42;
      }
      goto LABEL_54;
    }
    v57 = *(_OWORD *)&v49[16];
    v56 = *(_OWORD *)v49;
    v55 = v48;
    if ( *((_BYTE *)a5 + 90) )
    {
      v33 = uu_join::State::combine(&v68, v53, &v75, &v58);
      if ( v33 )
      {
        v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v33);
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v55);
LABEL_54:
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v65);
        goto LABEL_43;
      }
    }
    *(_OWORD *)&v49[16] = v67;
    *(_OWORD *)v49 = v66;
    v48 = v65;
    uu_join::State::reset(&v68, &v48);
    *(_OWORD *)&v49[16] = v57;
    *(_OWORD *)v49 = v56;
    v48 = v55;
    uu_join::State::reset(&v75, &v48);
    goto LABEL_28;
  }
  v8 = *((_QWORD *)&v48 + 1);
  v32 = *(_QWORD *)v49;
  v35 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v53);
  if ( !v35 )
    goto LABEL_43;
LABEL_42:
  v37 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v8, v32);
  v8 = v37;
LABEL_43:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v53);
  core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(&v58);
  core::ptr::drop_in_place<uu_join::State>(&v75);
LABEL_44:
  v9 = v45;
  core::ptr::drop_in_place<uu_join::State>(&v68);
LABEL_45:
  core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
  if ( v9 )
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
  v38 = (__int64)a5 + 24;
LABEL_48:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v38);
  return v8;
}
