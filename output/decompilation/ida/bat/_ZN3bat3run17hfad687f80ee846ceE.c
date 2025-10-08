__int64 __fastcall bat::run(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rbp
  char v17; // al
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  char v26; // al
  __int64 v27; // rax
  void *v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // r12
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 *v36; // rdi
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm2
  __int128 v41; // xmm3
  char v42; // bp
  __int64 v43; // rax
  __int64 v44; // rax
  __int128 v45; // [rsp+0h] [rbp-4A8h] BYREF
  __int64 v46; // [rsp+10h] [rbp-498h]
  _BYTE v47[304]; // [rsp+20h] [rbp-488h] BYREF
  _OWORD v48[3]; // [rsp+150h] [rbp-358h] BYREF
  _OWORD v49[3]; // [rsp+180h] [rbp-328h] BYREF
  __int128 v50; // [rsp+1B0h] [rbp-2F8h]
  _BYTE v51[88]; // [rsp+1C0h] [rbp-2E8h] BYREF
  _BYTE v52[216]; // [rsp+218h] [rbp-290h] BYREF
  __int128 v53; // [rsp+2F0h] [rbp-1B8h] BYREF
  __int64 v54; // [rsp+300h] [rbp-1A8h]
  __int64 v55; // [rsp+308h] [rbp-1A0h] BYREF
  _QWORD v56[3]; // [rsp+310h] [rbp-198h] BYREF
  _QWORD v57[3]; // [rsp+328h] [rbp-180h] BYREF
  _BYTE v58[88]; // [rsp+340h] [rbp-168h] BYREF
  _BYTE dest[216]; // [rsp+398h] [rbp-110h] BYREF

  bat::app::App::new((__int64)v47);
  result = v47[0];
  if ( v47[0] != 13 )
  {
    *(_QWORD *)&v51[63] = *(_QWORD *)&v47[64];
    v8 = *(_OWORD *)&v47[1];
    v9 = *(_OWORD *)&v47[17];
    v10 = *(_OWORD *)&v47[33];
    *(_OWORD *)&v51[48] = *(_OWORD *)&v47[49];
    *(_OWORD *)&v51[32] = *(_OWORD *)&v47[33];
    *(_OWORD *)&v51[16] = *(_OWORD *)&v47[17];
    *(_OWORD *)v51 = *(_OWORD *)&v47[1];
    v11 = *(_QWORD *)&v47[72];
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v51[63];
    *(_OWORD *)(a1 + 49) = *(_OWORD *)&v51[48];
    *(_OWORD *)(a1 + 33) = v10;
    *(_OWORD *)(a1 + 17) = v9;
    *(_OWORD *)(a1 + 1) = v8;
    *(_BYTE *)a1 = result;
    *(_QWORD *)(a1 + 72) = v11;
    return result;
  }
  *(_OWORD *)&v51[55] = *(_OWORD *)&v47[56];
  v49[0] = *(_OWORD *)&v47[8];
  v49[1] = *(_OWORD *)&v47[24];
  v49[2] = *(_OWORD *)&v47[40];
  v50 = *(_OWORD *)&v47[56];
  v2 = once_cell::sync::OnceCell<T>::get_or_try_init();
  v3 = *(_QWORD *)(v2 + 32);
  v4 = *(_QWORD *)(v2 + 40);
  v5 = once_cell::sync::OnceCell<T>::get_or_try_init();
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v5 + 16);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v49, aDiagnostic, 10LL) )
  {
    bat::invoke_bugreport((__int64)v49, v6, v7);
LABEL_24:
    *(_WORD *)a1 = 269;
    return core::ptr::drop_in_place<bat::app::App>(v49);
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v47, v49, aCompletion, 10LL);
  v12 = clap_builder::parser::error::MatchesError::unwrap(aCompletion, 10LL, v47);
  if ( v12 )
  {
    v55 = v12;
    v13 = *(_QWORD *)(v12 + 8);
    v14 = *(_QWORD *)(v12 + 16);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, aBash, 4LL) )
    {
      *(_QWORD *)v51 = &off_6C8A98;
      *(_QWORD *)&v51[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v47 = &unk_6C8198;
      *(_QWORD *)&v47[8] = 2LL;
      *(_QWORD *)&v47[32] = 0LL;
      *(_QWORD *)&v47[16] = v51;
      *(_QWORD *)&v47[24] = 1LL;
      std::io::stdio::_print(v47);
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, aFish, 4LL) )
    {
      *(_QWORD *)v51 = &off_6C8A88;
      *(_QWORD *)&v51[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v47 = &unk_6C8198;
      *(_QWORD *)&v47[8] = 2LL;
      *(_QWORD *)&v47[32] = 0LL;
      *(_QWORD *)&v47[16] = v51;
      *(_QWORD *)&v47[24] = 1LL;
      std::io::stdio::_print(v47);
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, aPs1, 3LL) )
    {
      *(_QWORD *)v51 = &off_6C8A78;
      *(_QWORD *)&v51[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v47 = &unk_6C8198;
      *(_QWORD *)&v47[8] = 2LL;
      *(_QWORD *)&v47[32] = 0LL;
      *(_QWORD *)&v47[16] = v51;
      *(_QWORD *)&v47[24] = 1LL;
      std::io::stdio::_print(v47);
    }
    else
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, aZsh, 3LL) )
      {
        *(_QWORD *)v51 = &v55;
        *(_QWORD *)&v51[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v47 = &off_6C8A30;
        *(_QWORD *)&v47[8] = 2LL;
        *(_QWORD *)&v47[32] = 0LL;
        *(_QWORD *)&v47[16] = v51;
        *(_QWORD *)&v47[24] = 1LL;
        core::panicking::panic_fmt(v47, &off_6C8A50);
      }
      *(_QWORD *)v51 = &off_6C8A68;
      *(_QWORD *)&v51[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v47 = &unk_6C8198;
      *(_QWORD *)&v47[8] = 2LL;
      *(_QWORD *)&v47[32] = 0LL;
      *(_QWORD *)&v47[16] = v51;
      *(_QWORD *)&v47[24] = 1LL;
      std::io::stdio::_print(v47);
    }
    goto LABEL_24;
  }
  v15 = v50;
  if ( !(_QWORD)v50
    || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           *(_QWORD *)(v50 + 8),
                           *(_QWORD *)(v50 + 16),
                           aCache_0,
                           5LL) )
  {
    bat::app::App::inputs((__int64)v47, (__int64)v49);
    v17 = v47[0];
    if ( v47[0] != 13 )
    {
      v24 = *(_OWORD *)&v47[32];
      v25 = *(_OWORD *)&v47[48];
      *(_OWORD *)&v51[15] = *(_OWORD *)&v47[16];
      *(_OWORD *)v51 = *(_OWORD *)&v47[1];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v47[64];
      *(_OWORD *)(a1 + 48) = v25;
      *(_OWORD *)(a1 + 32) = v24;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v51[15];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v51;
      goto LABEL_21;
    }
    *(_QWORD *)&v51[23] = *(_QWORD *)&v47[24];
    v53 = *(_OWORD *)&v47[8];
    v54 = *(_QWORD *)&v47[24];
    bat::app::App::config((__int64)v47, (__int64)v49, *(__int64 *)&v47[16], *(__int64 *)&v47[24]);
    *(_OWORD *)v51 = *(_OWORD *)&v47[8];
    *(_OWORD *)&v51[16] = *(_OWORD *)&v47[24];
    *(_OWORD *)&v51[32] = *(_OWORD *)&v47[40];
    *(_OWORD *)&v51[48] = *(_OWORD *)&v47[56];
    *(_OWORD *)&v51[64] = *(_OWORD *)&v47[72];
    if ( *(_QWORD *)v47 == 2LL )
    {
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v51[64];
      v21 = *(_OWORD *)v51;
      v22 = *(_OWORD *)&v51[16];
      v23 = *(_OWORD *)&v51[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v51[48];
      *(_OWORD *)(a1 + 32) = v23;
      *(_OWORD *)(a1 + 16) = v22;
      *(_OWORD *)a1 = v21;
LABEL_41:
      v36 = &v53;
      goto LABEL_42;
    }
    memcpy(dest, &v47[88], sizeof(dest));
    *(_OWORD *)&v58[8] = *(_OWORD *)v51;
    *(_OWORD *)&v58[24] = *(_OWORD *)&v51[16];
    *(_OWORD *)&v58[40] = *(_OWORD *)&v51[32];
    *(_OWORD *)&v58[56] = *(_OWORD *)&v51[48];
    *(_OWORD *)&v58[72] = *(_OWORD *)&v51[64];
    *(_QWORD *)v58 = *(_QWORD *)v47;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v49, aListLanguages, 14LL) )
    {
      bat::get_languages((__int64)v47, (__int64)v58, v6, v7);
      v26 = v47[0];
      if ( v47[0] == 13 )
      {
        v45 = *(_OWORD *)&v47[8];
        v46 = *(_QWORD *)&v47[24];
        v27 = alloc::alloc::Global::alloc_impl(8LL, 160LL);
        if ( !v27 )
          alloc::alloc::handle_alloc_error(8LL, 160LL);
        v28 = (void *)v27;
        v29 = alloc::boxed::Box<T>::new(*((_QWORD *)&v45 + 1), v46);
        bat::input::Input::from_reader(v47, v29, &unk_6C8AA8);
        memcpy(v28, v47, 0xA0uLL);
        v57[0] = 1LL;
        v57[1] = v28;
        v57[2] = 1LL;
        v30 = bat::style::StyleComponent::components(11LL, 0LL);
        bat::style::StyleComponents::new(v48, v30);
        <bat::config::Config as core::default::Default>::default(v47);
        *(_QWORD *)&v52[152] = *(_QWORD *)&v47[240];
        *(_OWORD *)&v52[160] = *(_OWORD *)&v47[248];
        *(_QWORD *)&v52[176] = *(_QWORD *)&v47[264];
        *(_OWORD *)&v52[104] = v48[0];
        *(_OWORD *)&v52[120] = v48[1];
        *(_OWORD *)&v52[136] = v48[2];
        v52[209] = v47[297];
        v52[210] = 1;
        *(_OWORD *)&v52[56] = *(_OWORD *)&v47[144];
        *(_OWORD *)&v52[72] = *(_OWORD *)&v47[160];
        *(_OWORD *)&v52[88] = *(_OWORD *)&v47[176];
        *(_QWORD *)&v51[32] = *(_QWORD *)&v47[32];
        *(_OWORD *)&v51[16] = *(_OWORD *)&v47[16];
        *(_OWORD *)&v51[40] = *(_OWORD *)&v47[40];
        *(_OWORD *)&v51[56] = *(_OWORD *)&v47[56];
        *(_OWORD *)&v51[72] = *(_OWORD *)&v47[72];
        *(_QWORD *)v52 = *(_QWORD *)&v47[88];
        *(_OWORD *)&v52[184] = *(_OWORD *)&v47[272];
        *(_OWORD *)&v52[8] = *(_OWORD *)&v47[96];
        *(_OWORD *)&v52[24] = *(_OWORD *)&v47[112];
        *(_OWORD *)&v52[40] = *(_OWORD *)&v47[128];
        *(_QWORD *)&v52[200] = *(_QWORD *)&v47[288];
        v52[208] = v47[296];
        *(_OWORD *)v51 = *(_OWORD *)v47;
        v52[211] = v47[299];
        core::ptr::drop_in_place<bat::style::StyleComponents>(*(_QWORD *)&v47[192], *(_QWORD *)&v47[200]);
        bat::run_controller((_OWORD *)a1, (__int64)v57, v51, v6, v7);
        core::ptr::drop_in_place<bat::config::Config>(v51);
        core::ptr::drop_in_place<alloc::string::String>(&v45);
        goto LABEL_46;
      }
      v40 = *(_OWORD *)&v47[32];
      v41 = *(_OWORD *)&v47[48];
      *(_OWORD *)&v51[15] = *(_OWORD *)&v47[16];
      *(_OWORD *)v51 = *(_OWORD *)&v47[1];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v47[64];
      *(_OWORD *)(a1 + 48) = v41;
      *(_OWORD *)(a1 + 32) = v40;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v51[15];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v51;
      goto LABEL_39;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v49, aListThemes, 11LL) )
    {
      bat::list_themes(v47, (__int64)v58, v3, v4, v6, v7);
    }
    else
    {
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v49, aConfigFile, 11LL) )
      {
        bat::config::config_file((__int64)v51);
        alloc::string::String::from_utf8_lossy(v48, *(_QWORD *)&v51[8], *(_QWORD *)&v51[16]);
        *(_QWORD *)&v45 = v48;
        *((_QWORD *)&v45 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        *(_QWORD *)v47 = &unk_6C8198;
        *(_QWORD *)&v47[8] = 2LL;
        *(_QWORD *)&v47[32] = 0LL;
        *(_QWORD *)&v47[16] = &v45;
        *(_QWORD *)&v47[24] = 1LL;
        std::io::stdio::_print(v47);
        core::ptr::drop_in_place<regex::error::Error>(v48);
        core::ptr::drop_in_place<std::path::PathBuf>(v51);
        goto LABEL_45;
      }
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               v49,
                               aGenerateConfig,
                               20LL) )
      {
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v49, aConfigDir, 10LL) )
        {
          *(_QWORD *)&v45 = std::io::stdio::stdout();
          alloc::string::String::from_utf8_lossy(v51, v3, v4);
          *(_QWORD *)&v48[0] = v51;
          *((_QWORD *)&v48[0] + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
          *(_QWORD *)v47 = &unk_6C8198;
          *(_QWORD *)&v47[8] = 2LL;
          *(_QWORD *)&v47[32] = 0LL;
          *(_QWORD *)&v47[16] = v48;
          *(_QWORD *)&v47[24] = 1LL;
          v43 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v45, v47);
        }
        else
        {
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v49, aCacheDir, 9LL) )
          {
            if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                     v49,
                                     aAcknowledgemen,
                                     16LL) )
            {
              v42 = 0;
              bat::run_controller((_OWORD *)a1, (__int64)&v53, v58, v6, v7);
LABEL_47:
              core::ptr::drop_in_place<bat::config::Config>(v58);
              if ( v42 )
                core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(&v53);
              return core::ptr::drop_in_place<bat::app::App>(v49);
            }
            *(_QWORD *)&v45 = std::io::stdio::stdout();
            bat::assets::get_acknowledgements(v51);
            *(_QWORD *)&v48[0] = v51;
            *((_QWORD *)&v48[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)v47 = &unk_6C8198;
            *(_QWORD *)&v47[8] = 2LL;
            *(_QWORD *)&v47[32] = 0LL;
            *(_QWORD *)&v47[16] = v48;
            *(_QWORD *)&v47[24] = 1LL;
            v44 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v45, v47);
            if ( v44 )
            {
              *(_BYTE *)a1 = 0;
              *(_QWORD *)(a1 + 8) = v44;
              core::ptr::drop_in_place<alloc::string::String>(v51);
              goto LABEL_40;
            }
            core::ptr::drop_in_place<alloc::string::String>(v51);
            goto LABEL_45;
          }
          *(_QWORD *)&v45 = std::io::stdio::stdout();
          alloc::string::String::from_utf8_lossy(v51, v6, v7);
          *(_QWORD *)&v48[0] = v51;
          *((_QWORD *)&v48[0] + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
          *(_QWORD *)v47 = &unk_6C8198;
          *(_QWORD *)&v47[8] = 2LL;
          *(_QWORD *)&v47[32] = 0LL;
          *(_QWORD *)&v47[16] = v48;
          *(_QWORD *)&v47[24] = 1LL;
          v43 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v45, v47);
        }
        if ( v43 )
        {
          *(_BYTE *)a1 = 0;
          *(_QWORD *)(a1 + 8) = v43;
          core::ptr::drop_in_place<regex::error::Error>(v51);
          goto LABEL_40;
        }
        core::ptr::drop_in_place<regex::error::Error>(v51);
LABEL_45:
        *(_WORD *)a1 = 269;
LABEL_46:
        v42 = 1;
        goto LABEL_47;
      }
      bat::config::generate_config_file((__int64)v47);
    }
    v26 = v47[0];
    if ( v47[0] != 13 )
    {
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v47[64];
      v37 = *(_OWORD *)&v47[1];
      v38 = *(_OWORD *)&v47[17];
      v39 = *(_OWORD *)&v47[33];
      *(_OWORD *)(a1 + 49) = *(_OWORD *)&v47[49];
      *(_OWORD *)(a1 + 33) = v39;
      *(_OWORD *)(a1 + 17) = v38;
      *(_OWORD *)(a1 + 1) = v37;
LABEL_39:
      *(_BYTE *)a1 = v26;
LABEL_40:
      core::ptr::drop_in_place<bat::config::Config>(v58);
      goto LABEL_41;
    }
    goto LABEL_45;
  }
  v16 = v15 + 24;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::args_present(v16) )
  {
    v31 = alloc::alloc::Global::alloc_impl(8LL, 160LL);
    if ( !v31 )
      alloc::alloc::handle_alloc_error(8LL, 160LL);
    v32 = (void *)v31;
    bat::input::Input::ordinary_file((__int64)v47);
    memcpy(v32, v47, 0xA0uLL);
    v56[0] = 1LL;
    v56[1] = v32;
    v56[2] = 1LL;
    bat::app::App::config((__int64)v47, (__int64)v49, (__int64)v32, 1LL);
    *(_OWORD *)v58 = *(_OWORD *)&v47[8];
    *(_OWORD *)&v58[16] = *(_OWORD *)&v47[24];
    *(_OWORD *)&v58[32] = *(_OWORD *)&v47[40];
    *(_OWORD *)&v58[48] = *(_OWORD *)&v47[56];
    *(_OWORD *)&v58[64] = *(_OWORD *)&v47[72];
    if ( *(_QWORD *)v47 != 2LL )
    {
      memcpy(v52, &v47[88], sizeof(v52));
      *(_OWORD *)&v51[8] = *(_OWORD *)v58;
      *(_OWORD *)&v51[24] = *(_OWORD *)&v58[16];
      *(_OWORD *)&v51[40] = *(_OWORD *)&v58[32];
      *(_OWORD *)&v51[56] = *(_OWORD *)&v58[48];
      *(_OWORD *)&v51[72] = *(_OWORD *)&v58[64];
      *(_QWORD *)v51 = *(_QWORD *)v47;
      bat::run_controller((_OWORD *)a1, (__int64)v56, v51, v6, v7);
      core::ptr::drop_in_place<bat::config::Config>(v51);
      return core::ptr::drop_in_place<bat::app::App>(v49);
    }
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v58[64];
    v33 = *(_OWORD *)v58;
    v34 = *(_OWORD *)&v58[16];
    v35 = *(_OWORD *)&v58[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v58[48];
    *(_OWORD *)(a1 + 32) = v35;
    *(_OWORD *)(a1 + 16) = v34;
    *(_OWORD *)a1 = v33;
    v36 = (__int128 *)v56;
LABEL_42:
    core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(v36);
    return core::ptr::drop_in_place<bat::app::App>(v49);
  }
  bat::run_cache_subcommand(v47, v16, v3, v4, v6, v7);
  v17 = v47[0];
  if ( v47[0] == 13 )
    goto LABEL_24;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v47[64];
  v18 = *(_OWORD *)&v47[1];
  v19 = *(_OWORD *)&v47[17];
  v20 = *(_OWORD *)&v47[33];
  *(_OWORD *)(a1 + 49) = *(_OWORD *)&v47[49];
  *(_OWORD *)(a1 + 33) = v20;
  *(_OWORD *)(a1 + 17) = v19;
  *(_OWORD *)(a1 + 1) = v18;
LABEL_21:
  *(_BYTE *)a1 = v17;
  return core::ptr::drop_in_place<bat::app::App>(v49);
}