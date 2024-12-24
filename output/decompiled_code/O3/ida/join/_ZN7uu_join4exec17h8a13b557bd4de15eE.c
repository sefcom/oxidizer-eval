__int64 __fastcall uu_join::exec(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int128 *a5, const void *a6)
{
  __int64 v8; // r12
  char v9; // bl
  __int64 v10; // r14
  char v11; // bl
  char v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 *v15; // r14
  char v16; // bl
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 line; // rax
  const void *current_key; // r15
  size_t v21; // rdx
  size_t v22; // r12
  const void *v23; // rax
  size_t v24; // rdx
  __int64 v25; // r9
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  char *v34; // r14
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // r14
  __int128 v39; // rax
  char v40; // [rsp+8h] [rbp-4C0h]
  char v41; // [rsp+Fh] [rbp-4B9h]
  __int128 v44; // [rsp+20h] [rbp-4A8h] BYREF
  __int128 v45; // [rsp+30h] [rbp-498h]
  __int128 v46; // [rsp+40h] [rbp-488h]
  _BYTE v47[40]; // [rsp+58h] [rbp-470h] BYREF
  unsigned __int64 v48; // [rsp+80h] [rbp-448h]
  __int64 v49; // [rsp+88h] [rbp-440h] BYREF
  __int128 v50; // [rsp+90h] [rbp-438h]
  __int64 v51; // [rsp+A0h] [rbp-428h]
  __int64 v52; // [rsp+B0h] [rbp-418h]
  __int64 v53; // [rsp+B8h] [rbp-410h] BYREF
  __int128 v54; // [rsp+C0h] [rbp-408h] BYREF
  __int128 v55; // [rsp+D0h] [rbp-3F8h]
  __int128 v56; // [rsp+E0h] [rbp-3E8h]
  __int128 v57; // [rsp+F0h] [rbp-3D8h] BYREF
  __int128 v58; // [rsp+100h] [rbp-3C8h]
  __int128 v59; // [rsp+110h] [rbp-3B8h]
  _QWORD v60[2]; // [rsp+120h] [rbp-3A8h] BYREF
  __int64 v61; // [rsp+130h] [rbp-398h]
  __int128 v62; // [rsp+138h] [rbp-390h]
  __int128 v63; // [rsp+148h] [rbp-380h]
  __int128 v64; // [rsp+158h] [rbp-370h]
  __int128 v65; // [rsp+168h] [rbp-360h]
  __int64 v66; // [rsp+178h] [rbp-350h]
  _QWORD v67[2]; // [rsp+180h] [rbp-348h] BYREF
  __int64 v68; // [rsp+190h] [rbp-338h]
  __int128 v69; // [rsp+198h] [rbp-330h]
  __int128 v70; // [rsp+1A8h] [rbp-320h]
  __int128 v71; // [rsp+1B8h] [rbp-310h]
  __int128 v72; // [rsp+1C8h] [rbp-300h]
  __int64 v73; // [rsp+1D8h] [rbp-2F0h]
  _QWORD src[36]; // [rsp+1E0h] [rbp-2E8h] BYREF
  __int128 v75; // [rsp+300h] [rbp-1C8h]
  __int128 v76; // [rsp+310h] [rbp-1B8h]
  __int64 v77; // [rsp+320h] [rbp-1A8h]
  char v78; // [rsp+328h] [rbp-1A0h]
  _BYTE dest[288]; // [rsp+340h] [rbp-188h] BYREF
  char v80; // [rsp+460h] [rbp-68h]
  char v81; // [rsp+461h] [rbp-67h]

  v49 = std::io::stdio::stdin();
  uu_join::State::new(
    (__int64)src,
    0,
    a1,
    a2,
    (__int64)&v49,
    *((_QWORD *)a5 + 9),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 88));
  v8 = src[1];
  if ( src[0] == 0x8000000000000000LL )
  {
    v9 = 1;
    goto LABEL_44;
  }
  v66 = src[11];
  v65 = *(_OWORD *)&src[9];
  v64 = *(_OWORD *)&src[7];
  v63 = *(_OWORD *)&src[5];
  v62 = *(_OWORD *)&src[3];
  v60[0] = src[0];
  v60[1] = src[1];
  v61 = src[2];
  uu_join::State::new(
    (__int64)src,
    1,
    a3,
    a4,
    (__int64)&v49,
    *((_QWORD *)a5 + 10),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 89));
  v10 = src[0];
  v8 = src[1];
  if ( src[0] == 0x8000000000000000LL )
  {
    v40 = 1;
    goto LABEL_43;
  }
  v73 = src[11];
  v72 = *(_OWORD *)&src[9];
  v71 = *(_OWORD *)&src[7];
  v70 = *(_OWORD *)&src[5];
  v69 = *(_OWORD *)&src[3];
  v52 = src[0];
  v67[0] = src[0];
  v67[1] = src[1];
  v68 = src[2];
  <uu_join::MultiByteSep as core::clone::Clone>::clone(src, a6);
  v11 = *((_BYTE *)a5 + 91);
  v12 = *((_BYTE *)a5 + 94);
  memcpy(dest, src, sizeof(dest));
  v80 = v11;
  v81 = v12;
  v41 = *((_BYTE *)a5 + 92);
  if ( v41 )
  {
    v13 = alloc::alloc::Global::alloc_impl(16LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *(_BYTE *)v13 = 0;
    v14 = *(_QWORD *)((char *)src + 7);
    *(_QWORD *)(v13 + 1) = src[0];
    *(_QWORD *)(v13 + 8) = v14;
    alloc::slice::hack::into_vec(&v44, v13, 1LL);
    src[0] = a6;
    src[1] = (char *)a5 + 92;
    src[2] = &v44;
    uu_join::exec::{{closure}}(src, v60);
    uu_join::exec::{{closure}}(src, v67);
    v51 = v45;
    v50 = v44;
    v40 = 1;
    v15 = a5;
  }
  else
  {
    uu_join::State::initialize((__int64)v60, (__int64)a6, 0);
    uu_join::State::initialize((__int64)v67, (__int64)a6, *((_BYTE *)a5 + 92));
    v15 = a5;
    v51 = *((_QWORD *)a5 + 2);
    v50 = *a5;
    v40 = 0;
  }
  v16 = *((_BYTE *)v15 + 95);
  memcpy(src, a6, sizeof(src));
  v76 = v50;
  v77 = v51;
  v17 = v15[2];
  v78 = v16;
  v75 = v17;
  v53 = std::io::stdio::stdout();
  v18 = std::io::stdio::Stdout::lock(&v53);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v47, 0x2000LL, v18);
  if ( *((_BYTE *)a5 + 93) )
  {
    line = uu_join::State::print_headers(v60, (__int64)v47, v67, (__int64)src);
    if ( line )
      goto LABEL_37;
    line = uu_join::State::reset_read_line((__int64)v60, (__int64)dest);
    if ( line )
      goto LABEL_37;
    line = uu_join::State::reset_read_line((__int64)v67, (__int64)dest);
    if ( line )
      goto LABEL_37;
  }
  if ( !v61 || !v68 )
  {
LABEL_30:
    v8 = uu_join::State::finalize((__int64)v60, (__int64)v47, (__int64)dest, (__int64)src);
    v28 = v30;
    if ( v8 )
    {
      v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v47);
      if ( v31 )
        goto LABEL_41;
      goto LABEL_42;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v30);
    v8 = uu_join::State::finalize((__int64)v67, (__int64)v47, (__int64)dest, (__int64)src);
    v28 = v32;
    if ( v8 )
    {
      v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v47);
      if ( v31 )
        goto LABEL_41;
      goto LABEL_42;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v32);
    line = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v47);
    if ( !line )
    {
      if ( BYTE2(v73) | BYTE2(v66) )
      {
        *(_QWORD *)&v39 = uucore::execution_phrase();
        v57 = v39;
        *(_QWORD *)&v54 = &v57;
        *((_QWORD *)&v54 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v44 = &unk_133190;
        *((_QWORD *)&v44 + 1) = 2LL;
        *(_QWORD *)&v46 = 0LL;
        *(_QWORD *)&v45 = &v54;
        *((_QWORD *)&v45 + 1) = 1LL;
        std::io::stdio::_eprint(&v44);
        uucore::mods::error::set_exit_code(1LL);
      }
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v47);
      core::ptr::drop_in_place<uu_join::Repr<uu_join::MultiByteSep>>(src);
      core::ptr::drop_in_place<uu_join::Input<uu_join::MultiByteSep>>(dest);
      core::ptr::drop_in_place<uu_join::State>(v67);
      core::ptr::drop_in_place<uu_join::State>(v60);
      v34 = (char *)a5 + 24;
      core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
      if ( v41 )
        core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
      v8 = 0LL;
      goto LABEL_48;
    }
LABEL_37:
    v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(line);
    goto LABEL_42;
  }
  v48 = 0x8000000000000001LL;
  while ( 1 )
  {
    current_key = (const void *)uu_join::State::get_current_key((__int64)v60);
    v22 = v21;
    v23 = (const void *)uu_join::State::get_current_key((__int64)v67);
    v26 = uu_join::Input<Sep>::compare(v80, current_key, v22, v23, v24, v25);
    if ( !v26 )
      break;
    if ( v26 == 1 )
    {
      v8 = uu_join::State::skip_line((__int64)v67, (__int64)v47, (__int64)dest, (__int64)src);
      v28 = v27;
      if ( v8 )
      {
        v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v47);
        if ( !v31 )
          goto LABEL_42;
        goto LABEL_41;
      }
    }
    else
    {
      v8 = uu_join::State::skip_line((__int64)v60, (__int64)v47, (__int64)dest, (__int64)src);
      v28 = v27;
      if ( v8 )
      {
        v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v47);
        if ( !v31 )
          goto LABEL_42;
        goto LABEL_41;
      }
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v27);
    BYTE3(v66) = 1;
    BYTE3(v73) = 1;
LABEL_28:
    if ( !v61 || !v68 )
      goto LABEL_30;
  }
  uu_join::State::extend((unsigned __int64)&v44, (__int64)v60, (__int64)dest);
  if ( (_QWORD)v44 != v48 )
  {
    v56 = v46;
    v55 = v45;
    v54 = v44;
    uu_join::State::extend((unsigned __int64)&v44, (__int64)v67, (__int64)dest);
    if ( (_QWORD)v44 == v48 )
    {
      v8 = *((_QWORD *)&v44 + 1);
      v36 = v45;
      v37 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v47);
      if ( v37 )
      {
        v38 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v37);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v8,
          v36);
        v8 = v38;
      }
      goto LABEL_54;
    }
    v59 = v46;
    v58 = v45;
    v57 = v44;
    if ( *((_BYTE *)a5 + 90) )
    {
      v29 = uu_join::State::combine(v60, (__int64)v47, v67, (__int64)src);
      if ( v29 )
      {
        v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v57);
LABEL_54:
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v54);
        goto LABEL_42;
      }
    }
    v46 = v56;
    v45 = v55;
    v44 = v54;
    uu_join::State::reset((__int64)v60, &v44);
    v46 = v59;
    v45 = v58;
    v44 = v57;
    uu_join::State::reset((__int64)v67, &v44);
    goto LABEL_28;
  }
  v8 = *((_QWORD *)&v44 + 1);
  v28 = v45;
  v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v47);
  if ( !v31 )
    goto LABEL_42;
LABEL_41:
  v33 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v8, v28);
  v8 = v33;
LABEL_42:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v47);
  core::ptr::drop_in_place<uu_join::Repr<uu_join::MultiByteSep>>(src);
  core::ptr::drop_in_place<uu_join::Input<uu_join::MultiByteSep>>(dest);
  core::ptr::drop_in_place<uu_join::State>(v67);
  v10 = v52;
LABEL_43:
  core::ptr::drop_in_place<uu_join::State>(v60);
  v9 = v40;
  if ( v10 == 0x8000000000000000LL )
LABEL_44:
    core::ptr::drop_in_place<uu_join::MultiByteSep>(a6);
  core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
  if ( v9 )
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
  v34 = (char *)a5 + 24;
LABEL_48:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v34);
  return v8;
}
