__int64 __fastcall uu_more::Pager::draw_lines(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 i; // r13
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // [rsp+8h] [rbp-90h] BYREF
  _BYTE v11[8]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v12; // [rsp+18h] [rbp-80h]
  __int64 v13; // [rsp+20h] [rbp-78h]
  _QWORD v14[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v15[12]; // [rsp+38h] [rbp-60h] BYREF

  v2 = crossterm::command::write_command_ansi(a2);
  if ( v2 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
  v2 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
  if ( v2 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
  result = uu_more::Pager::load_visible_lines(a1);
  if ( !result )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 24);
      for ( i = 24 * v4; ; i -= 24LL )
      {
        v10 = v5;
        v14[0] = &v10;
        v14[1] = <&T as core::fmt::Display>::fmt;
        v15[0] = &off_125308;
        v15[1] = 1LL;
        v15[4] = 0LL;
        v15[2] = v14;
        v15[3] = 1LL;
        core::option::Option<T>::map_or_else(v11, v15);
        v7 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, v12, v13);
        if ( v7 )
          break;
        core::ptr::drop_in_place<alloc::string::String>(v11);
        v5 += 24LL;
        v8 = i == 24;
        result = 0LL;
        if ( v8 )
          return result;
      }
      v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
      core::ptr::drop_in_place<alloc::string::String>(v11);
      return v9;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}