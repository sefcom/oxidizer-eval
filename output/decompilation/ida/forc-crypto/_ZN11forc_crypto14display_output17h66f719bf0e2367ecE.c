__int64 __fastcall forc_crypto::display_output(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  __int128 *v5; // rdi
  __int64 v6; // rax
  __int64 v8; // [rsp+8h] [rbp-80h] BYREF
  __int128 v9; // [rsp+10h] [rbp-78h] BYREF
  __int128 *v10; // [rsp+20h] [rbp-68h]
  __int128 v11; // [rsp+28h] [rbp-60h]
  __int128 v12; // [rsp+40h] [rbp-48h] BYREF
  __int128 *v13; // [rsp+50h] [rbp-38h]
  __int128 *v14; // [rsp+58h] [rbp-30h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+60h] [rbp-28h]

  std::io::stdio::stdout();
  if ( (unsigned __int8)std::sys::io::is_terminal::isatty::is_terminal() )
  {
    serde_yaml::ser::to_string(&v9, a1);
    core::result::Result<T,E>::expect(&v12, &v9);
    if ( (unsigned __int8)forc_crypto::has_sensible_info(a1) )
    {
      v2 = std::io::stdio::stdout();
      if ( (termion::screen::IntoAlternateScreen::into_alternate_screen(v2) & 1) != 0 )
      {
        v4 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v3);
LABEL_15:
        core::ptr::drop_in_place<alloc::string::String>(&v12);
        goto LABEL_16;
      }
      v8 = v3;
      v14 = &v12;
      v15 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v9 = &unk_62CB98;
      *((_QWORD *)&v9 + 1) = 2LL;
      v10 = (__int128 *)&v14;
      v11 = 1uLL;
      v6 = std::io::Write::write_fmt(&v8, &v9);
      if ( v6 || (v6 = <std::io::stdio::Stdout as std::io::Write>::flush(&v8)) != 0 )
      {
        v4 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v6);
        core::ptr::drop_in_place<termion::screen::AlternateScreen<std::io::stdio::Stdout>>(&v8);
        goto LABEL_15;
      }
      *(_QWORD *)&v9 = &off_62CBB8;
      *((_QWORD *)&v9 + 1) = 1LL;
      v10 = (_OWORD *)&byte_8;
      v11 = 0LL;
      std::io::stdio::_print(&v9);
      forc_crypto::wait_for_keypress();
      core::ptr::drop_in_place<termion::screen::AlternateScreen<std::io::stdio::Stdout>>(&v8);
    }
    else
    {
      v14 = &v12;
      v15 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v9 = &unk_62CB98;
      *((_QWORD *)&v9 + 1) = 2LL;
      v10 = (__int128 *)&v14;
      v11 = 1uLL;
      std::io::stdio::_print(&v9);
    }
    v5 = &v12;
  }
  else
  {
    serde_json::ser::to_vec(&v9, a1);
    if ( __OFSUB__(0LL, (_QWORD)v9) )
    {
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&v9 + 1);
      *(_QWORD *)&v12 = 0x8000000000000000LL;
    }
    else
    {
      v13 = v10;
      v12 = v9;
    }
    core::result::Result<T,E>::expect(&v14, &v12);
    *(_QWORD *)&v12 = &v14;
    *((_QWORD *)&v12 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v9 = asc_7AB60;
    *((_QWORD *)&v9 + 1) = 1LL;
    v10 = &v12;
    v11 = 1uLL;
    std::io::stdio::_print(&v9);
    v5 = (__int128 *)&v14;
  }
  core::ptr::drop_in_place<alloc::string::String>(v5);
  v4 = 0LL;
LABEL_16:
  core::ptr::drop_in_place<serde_json::value::Value>(a1);
  return v4;
}