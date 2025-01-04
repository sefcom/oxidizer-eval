__int64 __fastcall uu_join::exec(int a1, int a2, int a3, int a4, __int128 *a5, char a6)
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
  __int64 v25; // rax
  const void *current_key; // r14
  size_t v27; // rdx
  size_t v28; // r15
  const void *v29; // rax
  size_t v30; // rdx
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r12
  __int64 v39; // r13
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r12
  __int128 v44; // rax
  char v45; // [rsp+4h] [rbp-244h] BYREF
  char v46[3]; // [rsp+5h] [rbp-243h] BYREF
  int v47; // [rsp+8h] [rbp-240h]
  char v48; // [rsp+Fh] [rbp-239h]
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
  char v63; // [rsp+F9h] [rbp-14Fh]
  __int128 v64; // [rsp+100h] [rbp-148h]
  __int64 v65; // [rsp+110h] [rbp-138h]
  __int64 v66; // [rsp+118h] [rbp-130h] BYREF
  __int128 v67; // [rsp+120h] [rbp-128h] BYREF
  __int128 v68; // [rsp+130h] [rbp-118h]
  __int128 v69; // [rsp+140h] [rbp-108h]
  __int128 v70; // [rsp+158h] [rbp-F0h] BYREF
  __int64 v71; // [rsp+168h] [rbp-E0h]
  __int128 v72; // [rsp+170h] [rbp-D8h]
  __int128 v73; // [rsp+180h] [rbp-C8h]
  __int128 v74; // [rsp+190h] [rbp-B8h]
  __int128 v75; // [rsp+1A0h] [rbp-A8h]
  __int64 v76; // [rsp+1B0h] [rbp-98h]
  __int128 v77; // [rsp+1B8h] [rbp-90h] BYREF
  __int64 v78; // [rsp+1C8h] [rbp-80h]
  __int128 v79; // [rsp+1D0h] [rbp-78h]
  __int128 v80; // [rsp+1E0h] [rbp-68h]
  __int128 v81; // [rsp+1F0h] [rbp-58h]
  __int128 v82; // [rsp+200h] [rbp-48h]
  __int64 v83; // [rsp+210h] [rbp-38h]

  v45 = a6;
  v55 = std::io::stdio::stdin();
  uu_join::State::new(
    (unsigned int)&v49,
    0,
    a1,
    a2,
    (unsigned int)&v55,
    *((_QWORD *)a5 + 9),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 88));
  v9 = *((_QWORD *)&v49 + 1);
  if ( (_QWORD)v49 == 0x8000000000000000LL )
  {
    v10 = 1;
    goto LABEL_43;
  }
  v11 = v53;
  v76 = v53;
  v75 = v52;
  v74 = v51;
  v73 = *(_OWORD *)&v50[24];
  v72 = *(_OWORD *)&v50[8];
  v70 = v49;
  v71 = *(_QWORD *)v50;
  v12 = *((_QWORD *)a5 + 10);
  v13 = *((_BYTE *)a5 + 89);
  LOBYTE(v11) = 1;
  v47 = v11;
  uu_join::State::new((unsigned int)&v49, 1, a3, a4, (unsigned int)&v55, v12, *((_BYTE *)a5 + 95), v13);
  v9 = *((_QWORD *)&v49 + 1);
  v14 = v49;
  if ( (_QWORD)v49 == 0x8000000000000000LL )
  {
    LOBYTE(v14) = 1;
    v47 = v14;
    goto LABEL_42;
  }
  v83 = v53;
  v82 = v52;
  v81 = v51;
  v80 = *(_OWORD *)&v50[24];
  v79 = *(_OWORD *)&v50[8];
  v77 = v49;
  v78 = *(_QWORD *)v50;
  v15 = *((_BYTE *)a5 + 91);
  v16 = *((_BYTE *)a5 + 94);
  v46[2] = v45;
  v46[0] = v15;
  v46[1] = v16;
  v17 = *((unsigned __int8 *)a5 + 92);
  v48 = v17;
  if ( (_BYTE)v17 )
  {
    v18 = alloc::alloc::Global::alloc_impl(16LL);
    if ( !v18 )
    {
      v47 = 1;
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    }
    *(_BYTE *)v18 = 0;
    v19 = v49;
    v20 = *(_QWORD *)((char *)&v49 + 7);
    *(_QWORD *)(v18 + 1) = v49;
    *(_QWORD *)(v18 + 8) = v20;
    LOBYTE(v19) = 1;
    v47 = v19;
    alloc::slice::hack::into_vec(&v56, v18, 1LL);
    *(_QWORD *)&v49 = &v45;
    *((_QWORD *)&v49 + 1) = (char *)a5 + 92;
    *(_QWORD *)v50 = &v56;
    uu_join::exec::{{closure}}(&v49, &v70);
    uu_join::exec::{{closure}}(&v49, &v77);
    v21 = v57;
    v65 = v57;
    v64 = v56;
    LOBYTE(v21) = 1;
    v47 = v21;
  }
  else
  {
    LOBYTE(v17) = 1;
    v47 = v17;
    uu_join::State::initialize(&v70, &v45, 0LL);
    uu_join::State::initialize(&v77, &v45, *((unsigned __int8 *)a5 + 92));
    v65 = *((_QWORD *)a5 + 2);
    v64 = *a5;
    v47 = 0;
  }
  v22 = *((_BYTE *)a5 + 95);
  v59 = v64;
  v60 = v65;
  v23 = a5[2];
  v62 = v22;
  v63 = v45;
  v61 = v23;
  v66 = std::io::stdio::stdout();
  v24 = std::io::stdio::Stdout::lock(&v66);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v54, 0x2000LL, v24);
  if ( *((_BYTE *)a5 + 93) )
  {
    v25 = uu_join::State::print_headers(&v70, v54, &v77, &v59);
    if ( v25 )
      goto LABEL_36;
    v25 = uu_join::State::reset_read_line(&v70, v46);
    if ( v25 )
      goto LABEL_36;
    v25 = uu_join::State::reset_read_line(&v77, v46);
    if ( v25 )
      goto LABEL_36;
  }
  if ( !v71 || !v78 )
  {
LABEL_29:
    v9 = uu_join::State::finalize(&v70, v54, v46, &v59);
    v33 = v35;
    if ( v9 )
    {
      v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
      if ( v36 )
        goto LABEL_40;
      goto LABEL_41;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v35);
    v9 = uu_join::State::finalize(&v77, v54, v46, &v59);
    v33 = v37;
    if ( v9 )
    {
      v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
      if ( v36 )
        goto LABEL_40;
      goto LABEL_41;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v37);
    v25 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
    if ( !v25 )
    {
      if ( BYTE2(v83) | BYTE2(v76) )
      {
        *(_QWORD *)&v44 = uucore::execution_phrase();
        v56 = v44;
        *(_QWORD *)&v67 = &v56;
        *((_QWORD *)&v67 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v49 = &unk_1325F0;
        *((_QWORD *)&v49 + 1) = 2LL;
        *(_QWORD *)&v50[16] = 0LL;
        *(_QWORD *)v50 = &v67;
        *(_QWORD *)&v50[8] = 1LL;
        std::io::stdio::_eprint(&v49);
        uucore::mods::error::set_exit_code(1LL);
      }
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v54);
      core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(&v59);
      core::ptr::drop_in_place<uu_join::State>(&v77);
      core::ptr::drop_in_place<uu_join::State>(&v70);
      v39 = (__int64)a5 + 24;
      core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
      if ( v48 )
        core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
      v9 = 0LL;
      goto LABEL_46;
    }
LABEL_36:
    v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
    goto LABEL_41;
  }
  while ( 1 )
  {
    current_key = (const void *)uu_join::State::get_current_key(&v70);
    v28 = v27;
    v29 = (const void *)uu_join::State::get_current_key(&v77);
    v31 = uu_join::Input<Sep>::compare(v46[0], current_key, v28, v29, v30);
    if ( !v31 )
      break;
    if ( v31 == 1 )
    {
      v9 = uu_join::State::skip_line(&v77, v54, v46, &v59);
      v33 = v32;
      if ( v9 )
      {
        v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
        if ( !v36 )
          goto LABEL_41;
        goto LABEL_40;
      }
    }
    else
    {
      v9 = uu_join::State::skip_line(&v70, v54, v46, &v59);
      v33 = v32;
      if ( v9 )
      {
        v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
        if ( !v36 )
          goto LABEL_41;
        goto LABEL_40;
      }
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v32);
    BYTE3(v76) = 1;
    BYTE3(v83) = 1;
LABEL_27:
    if ( !v71 || !v78 )
      goto LABEL_29;
  }
  uu_join::State::extend(&v49, &v70, v46);
  if ( (_QWORD)v49 != 0x8000000000000001LL )
  {
    v69 = *(_OWORD *)&v50[16];
    v68 = *(_OWORD *)v50;
    v67 = v49;
    uu_join::State::extend(&v49, &v77, v46);
    if ( (_QWORD)v49 == 0x8000000000000001LL )
    {
      v9 = *((_QWORD *)&v49 + 1);
      v41 = *(_QWORD *)v50;
      v42 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
      if ( v42 )
      {
        v43 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v9,
          v41);
        v9 = v43;
      }
      goto LABEL_52;
    }
    v58 = *(_OWORD *)&v50[16];
    v57 = *(_OWORD *)v50;
    v56 = v49;
    if ( *((_BYTE *)a5 + 90) )
    {
      v34 = uu_join::State::combine(&v70, v54, &v77, &v59);
      if ( v34 )
      {
        v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34);
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v56);
LABEL_52:
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v67);
        goto LABEL_41;
      }
    }
    *(_OWORD *)&v50[16] = v69;
    *(_OWORD *)v50 = v68;
    v49 = v67;
    uu_join::State::reset(&v70, &v49);
    *(_OWORD *)&v50[16] = v58;
    *(_OWORD *)v50 = v57;
    v49 = v56;
    uu_join::State::reset(&v77, &v49);
    goto LABEL_27;
  }
  v9 = *((_QWORD *)&v49 + 1);
  v33 = *(_QWORD *)v50;
  v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v54);
  if ( !v36 )
    goto LABEL_41;
LABEL_40:
  v38 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v9, v33);
  v9 = v38;
LABEL_41:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v54);
  core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(&v59);
  core::ptr::drop_in_place<uu_join::State>(&v77);
LABEL_42:
  v10 = v47;
  core::ptr::drop_in_place<uu_join::State>(&v70);
LABEL_43:
  core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
  if ( v10 )
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
  v39 = (__int64)a5 + 24;
LABEL_46:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v39);
  return v9;
}
