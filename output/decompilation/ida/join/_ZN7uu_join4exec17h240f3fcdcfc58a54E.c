__int64 __fastcall uu_join::exec(int a1, int a2, int a3, int a4, _QWORD *a5, char a6)
{
  __int64 v9; // r15
  char v10; // bp
  char v11; // cl
  char v12; // dl
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v17; // al
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  const void *current_key; // r14
  size_t v22; // rdx
  size_t v23; // r15
  const void *v24; // rax
  size_t v25; // rdx
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // r12
  __int128 v37; // rax
  char v38; // [rsp+Ch] [rbp-23Ch] BYREF
  char v39[3]; // [rsp+Dh] [rbp-23Bh] BYREF
  __int128 v40; // [rsp+10h] [rbp-238h] BYREF
  _BYTE v41[40]; // [rsp+20h] [rbp-228h]
  __int128 v42; // [rsp+48h] [rbp-200h]
  __int128 v43; // [rsp+58h] [rbp-1F0h]
  __int64 v44; // [rsp+68h] [rbp-1E0h]
  __int128 v45; // [rsp+70h] [rbp-1D8h] BYREF
  __int128 v46; // [rsp+80h] [rbp-1C8h]
  __int128 v47; // [rsp+90h] [rbp-1B8h]
  _BYTE v48[40]; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-180h] BYREF
  __int128 v50; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-168h]
  __int128 v52; // [rsp+E8h] [rbp-160h]
  char v53; // [rsp+F8h] [rbp-150h]
  char v54; // [rsp+F9h] [rbp-14Fh]
  __int128 v55; // [rsp+100h] [rbp-148h] BYREF
  __int64 v56; // [rsp+110h] [rbp-138h]
  __int128 v57; // [rsp+118h] [rbp-130h]
  __int128 v58; // [rsp+128h] [rbp-120h]
  __int128 v59; // [rsp+138h] [rbp-110h]
  __int128 v60; // [rsp+148h] [rbp-100h]
  __int64 v61; // [rsp+158h] [rbp-F0h]
  __int128 v62; // [rsp+160h] [rbp-E8h]
  __int64 v63; // [rsp+170h] [rbp-D8h]
  __int64 v64; // [rsp+178h] [rbp-D0h] BYREF
  __int128 v65; // [rsp+180h] [rbp-C8h] BYREF
  __int128 v66; // [rsp+190h] [rbp-B8h]
  __int128 v67; // [rsp+1A0h] [rbp-A8h]
  __int128 v68; // [rsp+1B8h] [rbp-90h] BYREF
  __int64 v69; // [rsp+1C8h] [rbp-80h]
  __int128 v70; // [rsp+1D0h] [rbp-78h]
  __int128 v71; // [rsp+1E0h] [rbp-68h]
  __int128 v72; // [rsp+1F0h] [rbp-58h]
  __int128 v73; // [rsp+200h] [rbp-48h]
  __int64 v74; // [rsp+210h] [rbp-38h]

  v38 = a6;
  v49 = std::io::stdio::stdin();
  uu_join::State::new(
    (unsigned int)&v40,
    0,
    a1,
    a2,
    (unsigned int)&v49,
    a5[9],
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 88));
  v9 = *((_QWORD *)&v40 + 1);
  if ( __OFSUB__(-(__int64)v40, 1LL) )
  {
    core::ptr::drop_in_place<uu_join::SepSetting>(a5[6], a5[7]);
    goto LABEL_16;
  }
  v61 = v44;
  v60 = v43;
  v59 = v42;
  v58 = *(_OWORD *)&v41[24];
  v57 = *(_OWORD *)&v41[8];
  v55 = v40;
  v56 = *(_QWORD *)v41;
  uu_join::State::new(
    (unsigned int)&v40,
    1,
    a3,
    a4,
    (unsigned int)&v49,
    a5[10],
    *((_BYTE *)a5 + 95),
    *((_BYTE *)a5 + 89));
  v9 = *((_QWORD *)&v40 + 1);
  if ( (_QWORD)v40 == 0x8000000000000000LL )
  {
    v10 = 1;
    goto LABEL_15;
  }
  v74 = v44;
  v73 = v43;
  v72 = v42;
  v71 = *(_OWORD *)&v41[24];
  v70 = *(_OWORD *)&v41[8];
  v68 = v40;
  v69 = *(_QWORD *)v41;
  v11 = *((_BYTE *)a5 + 91);
  v12 = *((_BYTE *)a5 + 94);
  v39[2] = v38;
  v39[0] = v11;
  v39[1] = v12;
  if ( *((_BYTE *)a5 + 92) )
  {
    v13 = alloc::alloc::Global::alloc_impl(8LL, 16LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *(_BYTE *)v13 = 0;
    v14 = v40;
    *(_QWORD *)(v13 + 8) = *(_QWORD *)((char *)&v40 + 7);
    *(_QWORD *)(v13 + 1) = v14;
    *(_QWORD *)&v45 = 1LL;
    *((_QWORD *)&v45 + 1) = v13;
    *(_QWORD *)&v46 = 1LL;
    *(_QWORD *)&v40 = &v38;
    *((_QWORD *)&v40 + 1) = (char *)a5 + 92;
    *(_QWORD *)v41 = &v45;
    v9 = uu_join::exec::{{closure}}(&v40, &v55);
    if ( v9 || (v9 = uu_join::exec::{{closure}}(&v40, &v68)) != 0 )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(v45, *((_QWORD *)&v45 + 1));
LABEL_13:
      v10 = 1;
      goto LABEL_14;
    }
    v63 = v46;
    v62 = v45;
    v10 = 1;
  }
  else
  {
    if ( (uu_join::State::initialize(&v55, &v38, 0LL) & 1) != 0
      || (uu_join::State::initialize(&v68, &v38, *((unsigned __int8 *)a5 + 92)) & 1) != 0 )
    {
      v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
      goto LABEL_13;
    }
    v63 = a5[2];
    v62 = *(_OWORD *)a5;
    v10 = 0;
  }
  v17 = *((_BYTE *)a5 + 95);
  v50 = v62;
  v51 = v63;
  v18 = *((_OWORD *)a5 + 2);
  v53 = v17;
  v54 = v38;
  v52 = v18;
  v64 = std::io::stdio::stdout();
  v19 = std::io::stdio::Stdout::lock(&v64);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v48, v19);
  if ( *((_BYTE *)a5 + 93) )
  {
    v20 = uu_join::State::print_headers(&v55, v48, &v68, &v50);
    if ( v20
      || (v20 = uu_join::State::reset_read_line(&v55, v39)) != 0
      || (v20 = uu_join::State::reset_read_line(&v68, v39)) != 0 )
    {
LABEL_48:
      v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
      goto LABEL_55;
    }
  }
  if ( !v56 )
  {
LABEL_41:
    v9 = uu_join::State::finalize(&v55, v48, v39, &v50);
    v28 = v30;
    if ( v9 )
    {
      v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v48);
      if ( v31 )
        goto LABEL_54;
      goto LABEL_55;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v30);
    v9 = uu_join::State::finalize(&v68, v48, v39, &v50);
    v28 = v32;
    if ( v9 )
    {
      v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v48);
      if ( v31 )
        goto LABEL_54;
      goto LABEL_55;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v32);
    v20 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v48);
    if ( !v20 )
    {
      if ( BYTE2(v61) || BYTE2(v74) == 1 )
      {
        *(_QWORD *)&v37 = uucore::execution_phrase();
        v45 = v37;
        *(_QWORD *)&v65 = &v45;
        *((_QWORD *)&v65 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v40 = &unk_FD2E0;
        *((_QWORD *)&v40 + 1) = 2LL;
        *(_QWORD *)&v41[16] = 0LL;
        *(_QWORD *)v41 = &v65;
        *(_QWORD *)&v41[8] = 1LL;
        std::io::stdio::_eprint(&v40);
        uucore::mods::error::set_exit_code(1LL);
      }
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v48);
      core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(v50, *((_QWORD *)&v50 + 1));
      core::ptr::drop_in_place<uu_join::State>(&v68);
      core::ptr::drop_in_place<uu_join::State>(&v55);
      core::ptr::drop_in_place<uu_join::SepSetting>(a5[6], a5[7]);
      if ( v10 )
        core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(*a5, a5[1]);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a5[3], a5[4]);
      return 0LL;
    }
    goto LABEL_48;
  }
  while ( 1 )
  {
    if ( !v69 )
      goto LABEL_41;
    current_key = (const void *)uu_join::State::get_current_key(&v55);
    v23 = v22;
    v24 = (const void *)uu_join::State::get_current_key(&v68);
    v26 = uu_join::Input<Sep>::compare(v39[0], current_key, v23, v24, v25);
    if ( v26 )
      break;
    uu_join::State::extend(&v40, &v55, v39);
    if ( (_QWORD)v40 == 0x8000000000000001LL )
    {
      v9 = *((_QWORD *)&v40 + 1);
      v28 = *(_QWORD *)v41;
      v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v48);
      if ( !v31 )
        goto LABEL_55;
      goto LABEL_54;
    }
    v67 = *(_OWORD *)&v41[16];
    v66 = *(_OWORD *)v41;
    v65 = v40;
    uu_join::State::extend(&v40, &v68, v39);
    if ( (_QWORD)v40 == 0x8000000000000001LL )
    {
      v9 = *((_QWORD *)&v40 + 1);
      v34 = *(_QWORD *)v41;
      v35 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v48);
      if ( v35 )
      {
        v36 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v9, v34);
        v9 = v36;
      }
      goto LABEL_65;
    }
    v47 = *(_OWORD *)&v41[16];
    v46 = *(_OWORD *)v41;
    v45 = v40;
    if ( *((_BYTE *)a5 + 90) )
    {
      v29 = uu_join::State::combine(&v55, v48, &v68, &v50);
      if ( v29 )
      {
        v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v45);
LABEL_65:
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v65);
        goto LABEL_55;
      }
    }
    *(_OWORD *)&v41[16] = v67;
    *(_OWORD *)v41 = v66;
    v40 = v65;
    uu_join::State::reset(&v55, &v40);
    *(_OWORD *)&v41[16] = v47;
    *(_OWORD *)v41 = v46;
    v40 = v45;
    uu_join::State::reset(&v68, &v40);
LABEL_28:
    if ( !v56 )
      goto LABEL_41;
  }
  if ( v26 != 1 )
  {
    v9 = uu_join::State::skip_line(&v55, v48, v39, &v50);
    v28 = v27;
    if ( v9 )
    {
      v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v48);
      if ( !v31 )
        goto LABEL_55;
      goto LABEL_54;
    }
    goto LABEL_33;
  }
  v9 = uu_join::State::skip_line(&v68, v48, v39, &v50);
  v28 = v27;
  if ( !v9 )
  {
LABEL_33:
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v27);
    BYTE3(v61) = 1;
    BYTE3(v74) = 1;
    goto LABEL_28;
  }
  v31 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v48);
  if ( !v31 )
    goto LABEL_55;
LABEL_54:
  v33 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v9, v28);
  v9 = v33;
LABEL_55:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v48);
  core::ptr::drop_in_place<uu_join::Repr<uu_join::LineSep>>(v50, *((_QWORD *)&v50 + 1));
LABEL_14:
  core::ptr::drop_in_place<uu_join::State>(&v68);
LABEL_15:
  core::ptr::drop_in_place<uu_join::State>(&v55);
  core::ptr::drop_in_place<uu_join::SepSetting>(a5[6], a5[7]);
  if ( v10 )
LABEL_16:
    core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(*a5, a5[1]);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a5[3], a5[4]);
  return v9;
}