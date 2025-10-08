__int64 __fastcall fuel_core_keygen::display_string_discreetly(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+8h] [rbp-80h] BYREF
  _QWORD *v8; // [rsp+10h] [rbp-78h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+18h] [rbp-70h]
  void *v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  _QWORD *v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  _QWORD v15[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v16[5]; // [rsp+60h] [rbp-28h] BYREF

  v15[0] = a1;
  v15[1] = a2;
  v16[0] = aDoNotShareOrLo;
  v16[1] = 73LL;
  if ( !(unsigned __int8)atty::is(0LL) )
  {
    v8 = v15;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = &unk_144370;
    v11 = 2LL;
    v14 = 0LL;
    v12 = &v8;
    v13 = 1LL;
    std::io::stdio::_print(&v10);
    return 0LL;
  }
  v2 = std::io::stdio::stdout();
  if ( (termion::screen::IntoAlternateScreen::into_alternate_screen(v2) & 1) == 0 )
  {
    v7 = v3;
    v8 = v15;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = &unk_144370;
    v11 = 2LL;
    v14 = 0LL;
    v12 = &v8;
    v13 = 1LL;
    v4 = std::io::Write::write_fmt(&v7, &v10);
    if ( v4 || (v4 = <std::io::stdio::Stdout as std::io::Write>::flush(&v7)) != 0 )
    {
      v6 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v4);
      core::ptr::drop_in_place<termion::screen::AlternateScreen<std::io::stdio::Stdout>>(&v7);
      return v6;
    }
    v8 = v16;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = &unk_144370;
    v11 = 2LL;
    v14 = 0LL;
    v12 = &v8;
    v13 = 1LL;
    std::io::stdio::_print(&v10);
    fuel_core_keygen::wait_for_keypress();
    core::ptr::drop_in_place<termion::screen::AlternateScreen<std::io::stdio::Stdout>>(&v7);
    return 0LL;
  }
  return anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v3);
}