__int64 __fastcall uu_join::exec(int a1, int a2, int a3, int a4, __int128 *a5, const void *a6)
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
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // r14
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // r14
  __int128 v38; // rax
  char v39; // [rsp+8h] [rbp-4C0h]
  char v40; // [rsp+Fh] [rbp-4B9h]
  __int128 v43; // [rsp+20h] [rbp-4A8h] BYREF
  __int128 v44; // [rsp+30h] [rbp-498h]
  __int128 v45; // [rsp+40h] [rbp-488h]
  _BYTE v46[40]; // [rsp+58h] [rbp-470h] BYREF
  unsigned __int64 v47; // [rsp+80h] [rbp-448h]
  __int64 v48; // [rsp+88h] [rbp-440h] BYREF
  __int128 v49; // [rsp+90h] [rbp-438h]
  __int64 v50; // [rsp+A0h] [rbp-428h]
  __int64 v51; // [rsp+B0h] [rbp-418h]
  __int64 v52; // [rsp+B8h] [rbp-410h] BYREF
  __int128 v53; // [rsp+C0h] [rbp-408h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-3F8h]
  __int128 v55; // [rsp+E0h] [rbp-3E8h]
  __int128 v56; // [rsp+F0h] [rbp-3D8h] BYREF
  __int128 v57; // [rsp+100h] [rbp-3C8h]
  __int128 v58; // [rsp+110h] [rbp-3B8h]
  _QWORD v59[2]; // [rsp+120h] [rbp-3A8h] BYREF
  __int64 v60; // [rsp+130h] [rbp-398h]
  __int128 v61; // [rsp+138h] [rbp-390h]
  __int128 v62; // [rsp+148h] [rbp-380h]
  __int128 v63; // [rsp+158h] [rbp-370h]
  __int128 v64; // [rsp+168h] [rbp-360h]
  __int64 v65; // [rsp+178h] [rbp-350h]
  _QWORD v66[2]; // [rsp+180h] [rbp-348h] BYREF
  __int64 v67; // [rsp+190h] [rbp-338h]
  __int128 v68; // [rsp+198h] [rbp-330h]
  __int128 v69; // [rsp+1A8h] [rbp-320h]
  __int128 v70; // [rsp+1B8h] [rbp-310h]
  __int128 v71; // [rsp+1C8h] [rbp-300h]
  __int64 v72; // [rsp+1D8h] [rbp-2F0h]
  _QWORD src[36]; // [rsp+1E0h] [rbp-2E8h] BYREF
  __int128 v74; // [rsp+300h] [rbp-1C8h]
  __int128 v75; // [rsp+310h] [rbp-1B8h]
  __int64 v76; // [rsp+320h] [rbp-1A8h]
  char v77; // [rsp+328h] [rbp-1A0h]
  _BYTE dest[288]; // [rsp+340h] [rbp-188h] BYREF
  char v79; // [rsp+460h] [rbp-68h]
  char v80; // [rsp+461h] [rbp-67h]

  v48 = std::io::stdio::stdin();
  uu_join::State::new(
    (unsigned int)src,
    0,
    a1,
    a2,
    (unsigned int)&v48,
    *((_QWORD *)a5 + 9),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 88));
  v8 = src[1];
  if ( src[0] == 0x8000000000000000LL )
  {
    v9 = 1;
    goto LABEL_44;
  }
  v65 = src[11];
  v64 = *(_OWORD *)&src[9];
  v63 = *(_OWORD *)&src[7];
  v62 = *(_OWORD *)&src[5];
  v61 = *(_OWORD *)&src[3];
  v59[0] = src[0];
  v59[1] = src[1];
  v60 = src[2];
  uu_join::State::new(
    (unsigned int)src,
    1,
    a3,
    a4,
    (unsigned int)&v48,
    *((_QWORD *)a5 + 10),
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 89));
  v10 = src[0];
  v8 = src[1];
  if ( src[0] == 0x8000000000000000LL )
  {
    v39 = 1;
    goto LABEL_43;
  }
  v72 = src[11];
  v71 = *(_OWORD *)&src[9];
  v70 = *(_OWORD *)&src[7];
  v69 = *(_OWORD *)&src[5];
  v68 = *(_OWORD *)&src[3];
  v51 = src[0];
  v66[0] = src[0];
  v66[1] = src[1];
  v67 = src[2];
  <uu_join::MultiByteSep as core::clone::Clone>::clone(src, a6);
  v11 = *((_BYTE *)a5 + 91);
  v12 = *((_BYTE *)a5 + 94);
  memcpy(dest, src, sizeof(dest));
  v79 = v11;
  v80 = v12;
  v40 = *((_BYTE *)a5 + 92);
  if ( v40 )
  {
    v13 = alloc::alloc::Global::alloc_impl(16LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *(_BYTE *)v13 = 0;
    v14 = *(_QWORD *)((char *)src + 7);
    *(_QWORD *)(v13 + 1) = src[0];
    *(_QWORD *)(v13 + 8) = v14;
    alloc::slice::hack::into_vec(&v43, v13, 1LL);
    src[0] = a6;
    src[1] = (char *)a5 + 92;
    src[2] = &v43;
    uu_join::exec::{{closure}}(src, v59);
    uu_join::exec::{{closure}}(src, v66);
    v50 = v44;
    v49 = v43;
    v39 = 1;
    v15 = a5;
  }
  else
  {
    uu_join::State::initialize(v59, a6, 0LL);
    uu_join::State::initialize(v66, a6, *((unsigned __int8 *)a5 + 92));
    v15 = a5;
    v50 = *((_QWORD *)a5 + 2);
    v49 = *a5;
    v39 = 0;
  }
  v16 = *((_BYTE *)v15 + 95);
  memcpy(src, a6, sizeof(src));
  v75 = v49;
  v76 = v50;
  v17 = v15[2];
  v77 = v16;
  v74 = v17;
  v52 = std::io::stdio::stdout();
  v18 = std::io::stdio::Stdout::lock(&v52);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v46, 0x2000LL, v18);
  if ( *((_BYTE *)a5 + 93) )
  {
    line = uu_join::State::print_headers(v59, v46, v66, src);
    if ( line )
      goto LABEL_37;
    line = uu_join::State::reset_read_line(v59, dest);
    if ( line )
      goto LABEL_37;
    line = uu_join::State::reset_read_line(v66, dest);
    if ( line )
      goto LABEL_37;
  }
  if ( !v60 || !v67 )
  {
LABEL_30:
    v8 = uu_join::State::finalize(v59, v46, dest, src);
    v27 = v29;
    if ( v8 )
    {
      v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v46);
      if ( v30 )
        goto LABEL_41;
      goto LABEL_42;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v29);
    v8 = uu_join::State::finalize(v66, v46, dest, src);
    v27 = v31;
    if ( v8 )
    {
      v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v46);
      if ( v30 )
        goto LABEL_41;
      goto LABEL_42;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v31);
    line = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v46);
    if ( !line )
    {
      if ( BYTE2(v72) | BYTE2(v65) )
      {
        *(_QWORD *)&v38 = uucore::execution_phrase();
        v56 = v38;
        *(_QWORD *)&v53 = &v56;
        *((_QWORD *)&v53 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v43 = &unk_133190;
        *((_QWORD *)&v43 + 1) = 2LL;
        *(_QWORD *)&v45 = 0LL;
        *(_QWORD *)&v44 = &v53;
        *((_QWORD *)&v44 + 1) = 1LL;
        std::io::stdio::_eprint(&v43);
        uucore::mods::error::set_exit_code(1LL);
      }
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v46);
      core::ptr::drop_in_place<uu_join::Repr<uu_join::MultiByteSep>>(src);
      core::ptr::drop_in_place<uu_join::Input<uu_join::MultiByteSep>>(dest);
      core::ptr::drop_in_place<uu_join::State>(v66);
      core::ptr::drop_in_place<uu_join::State>(v59);
      v33 = (__int64)a5 + 24;
      core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
      if ( v40 )
        core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
      v8 = 0LL;
      goto LABEL_48;
    }
LABEL_37:
    v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(line);
    goto LABEL_42;
  }
  v47 = 0x8000000000000001LL;
  while ( 1 )
  {
    current_key = (const void *)uu_join::State::get_current_key(v59);
    v22 = v21;
    v23 = (const void *)uu_join::State::get_current_key(v66);
    v25 = uu_join::Input<Sep>::compare(v79, current_key, v22, v23, v24);
    if ( !v25 )
      break;
    if ( v25 == 1 )
    {
      v8 = uu_join::State::skip_line(v66, v46, dest, src);
      v27 = v26;
      if ( v8 )
      {
        v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v46);
        if ( !v30 )
          goto LABEL_42;
        goto LABEL_41;
      }
    }
    else
    {
      v8 = uu_join::State::skip_line(v59, v46, dest, src);
      v27 = v26;
      if ( v8 )
      {
        v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v46);
        if ( !v30 )
          goto LABEL_42;
        goto LABEL_41;
      }
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v26);
    BYTE3(v65) = 1;
    BYTE3(v72) = 1;
LABEL_28:
    if ( !v60 || !v67 )
      goto LABEL_30;
  }
  uu_join::State::extend(&v43, v59, dest);
  if ( (_QWORD)v43 != v47 )
  {
    v55 = v45;
    v54 = v44;
    v53 = v43;
    uu_join::State::extend(&v43, v66, dest);
    if ( (_QWORD)v43 == v47 )
    {
      v8 = *((_QWORD *)&v43 + 1);
      v35 = v44;
      v36 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v46);
      if ( v36 )
      {
        v37 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
          v8,
          v35);
        v8 = v37;
      }
      goto LABEL_54;
    }
    v58 = v45;
    v57 = v44;
    v56 = v43;
    if ( *((_BYTE *)a5 + 90) )
    {
      v28 = uu_join::State::combine(v59, v46, v66, src);
      if ( v28 )
      {
        v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v56);
LABEL_54:
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v53);
        goto LABEL_42;
      }
    }
    v45 = v55;
    v44 = v54;
    v43 = v53;
    uu_join::State::reset(v59, &v43);
    v45 = v58;
    v44 = v57;
    v43 = v56;
    uu_join::State::reset(v66, &v43);
    goto LABEL_28;
  }
  v8 = *((_QWORD *)&v43 + 1);
  v27 = v44;
  v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v46);
  if ( !v30 )
    goto LABEL_42;
LABEL_41:
  v32 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v8, v27);
  v8 = v32;
LABEL_42:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v46);
  core::ptr::drop_in_place<uu_join::Repr<uu_join::MultiByteSep>>(src);
  core::ptr::drop_in_place<uu_join::Input<uu_join::MultiByteSep>>(dest);
  core::ptr::drop_in_place<uu_join::State>(v66);
  v10 = v51;
LABEL_43:
  core::ptr::drop_in_place<uu_join::State>(v59);
  v9 = v39;
  if ( v10 == 0x8000000000000000LL )
LABEL_44:
    core::ptr::drop_in_place<uu_join::MultiByteSep>(a6);
  core::ptr::drop_in_place<uu_join::SepSetting>(a5 + 3);
  if ( v9 )
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(a5);
  v33 = (__int64)a5 + 24;
LABEL_48:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v33);
  return v8;
}
