__int64 __fastcall uu_env::print_env(char a1)
{
  __int64 v1; // rax
  char v3; // [rsp+Fh] [rbp-159h] BYREF
  __int64 v4; // [rsp+10h] [rbp-158h] BYREF
  __int64 v5; // [rsp+18h] [rbp-150h] BYREF
  __int128 v6; // [rsp+20h] [rbp-148h] BYREF
  __int64 v7; // [rsp+30h] [rbp-138h]
  __int128 v8; // [rsp+40h] [rbp-128h] BYREF
  __int64 v9; // [rsp+50h] [rbp-118h]
  _OWORD v10[2]; // [rsp+60h] [rbp-108h] BYREF
  _QWORD v11[6]; // [rsp+88h] [rbp-E0h] BYREF
  _QWORD v12[6]; // [rsp+B8h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v14; // [rsp+F8h] [rbp-70h]
  __int128 v15; // [rsp+100h] [rbp-68h]
  __int64 v16; // [rsp+110h] [rbp-58h]
  _OWORD v17[5]; // [rsp+118h] [rbp-50h] BYREF

  v3 = a1;
  v5 = std::io::stdio::stdout();
  v4 = std::io::stdio::Stdout::lock(&v5);
  std::env::vars(v17);
  v10[1] = v17[1];
  v10[0] = v17[0];
  while ( 1 )
  {
    <std::env::Vars as core::iter::traits::iterator::Iterator>::next(&v13, v10);
    if ( (_QWORD)v13 == 0x8000000000000000LL )
      break;
    v7 = v14;
    v6 = v13;
    v9 = v16;
    v8 = v15;
    v11[0] = &v6;
    v11[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v11[2] = &v8;
    v11[3] = <alloc::string::String as core::fmt::Display>::fmt;
    v11[4] = &v3;
    v11[5] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v12[0] = &unk_148F80;
    v12[1] = 3LL;
    v12[4] = 0LL;
    v12[2] = v11;
    v12[3] = 3LL;
    v1 = std::io::Write::write_fmt(&v4, v12);
    core::result::Result<T,E>::unwrap(v1);
    core::ptr::drop_in_place<alloc::string::String>(&v8);
    core::ptr::drop_in_place<alloc::string::String>(&v6);
  }
  core::ptr::drop_in_place<std::env::Vars>(v10);
  return core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
}
