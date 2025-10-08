__int64 __fastcall alacritty::cli::TerminalOptions::override_pty_config(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r12
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  __int64 v8; // r13
  __int64 result; // rax
  __int64 v10; // [rsp+8h] [rbp-B0h]
  __int64 v11; // [rsp+10h] [rbp-A8h]
  __int128 v12; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD *v13; // [rsp+28h] [rbp-90h]
  __int64 v14; // [rsp+30h] [rbp-88h]
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h]
  __int64 v17; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v19[11]; // [rsp+60h] [rbp-58h] BYREF

  if ( !__OFSUB__(0LL, *(_QWORD *)(a1 + 24)) )
  {
    v17 = a1 + 24;
    v2 = *(_QWORD *)(a1 + 32);
    v3 = *(_QWORD *)(a1 + 40);
    if ( (unsigned __int8)std::path::Path::is_dir(v2, v3) )
    {
      <&str as alloc::string::SpecToString>::spec_to_string(&v12, v2, v3);
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(a2 + 48);
      *(_QWORD *)(a2 + 64) = v13;
      *(_OWORD *)(a2 + 48) = v12;
    }
    else if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
    {
      v18[0] = &v17;
      v18[1] = <&T as core::fmt::Debug>::fmt;
      *(_QWORD *)&v12 = &off_881630;
      *((_QWORD *)&v12 + 1) = 1LL;
      v15 = 0LL;
      v13 = v18;
      v14 = 1LL;
      v4 = log::__private_api::loc(&off_881640);
      v19[0] = aAlacrittyCli;
      v19[1] = 14LL;
      v19[2] = aAlacrittyCli;
      v19[3] = 14LL;
      v19[4] = v4;
      log::__private_api::log(&v12, 1LL, v19);
    }
  }
  alacritty::cli::TerminalOptions::command((__int64)&v12, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  v5 = v12;
  if ( (_QWORD)v12 == 0x8000000000000001LL )
  {
    core::ptr::drop_in_place<core::option::Option<alacritty::config::ui_config::Program>>(&v12);
  }
  else
  {
    v6 = (_QWORD *)*((_QWORD *)&v12 + 1);
    v7 = (_QWORD *)v14;
    if ( (_QWORD)v12 == 0x8000000000000000LL )
    {
      v11 = 8LL;
      v10 = 0LL;
      v8 = 0LL;
      v5 = *((_QWORD *)&v12 + 1);
      v6 = v13;
    }
    else
    {
      v11 = v15;
      v8 = v16;
      v10 = v14;
      v7 = v13;
    }
    core::ptr::drop_in_place<core::option::Option<alacritty_terminal::tty::Shell>>(a2);
    *(_QWORD *)a2 = v5;
    *(_QWORD *)(a2 + 8) = v6;
    *(_QWORD *)(a2 + 16) = v7;
    *(_QWORD *)(a2 + 24) = v10;
    *(_QWORD *)(a2 + 32) = v11;
    *(_QWORD *)(a2 + 40) = v8;
  }
  result = *(unsigned __int8 *)(a1 + 48);
  *(_BYTE *)(a2 + 120) |= result;
  return result;
}