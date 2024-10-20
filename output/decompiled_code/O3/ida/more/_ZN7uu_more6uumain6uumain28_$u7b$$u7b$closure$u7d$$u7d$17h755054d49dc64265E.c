__int64 __fastcall uu_more::uumain::uumain::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v4; // [rsp+8h] [rbp-50h] BYREF
  __int64 v5; // [rsp+10h] [rbp-48h]
  _QWORD *v6; // [rsp+18h] [rbp-40h]
  __int128 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v8 = a2;
  v2 = crossterm::terminal::disable_raw_mode(a1, a2);
  if ( v2 )
  {
    v4 = (void *)v2;
    core::result::unwrap_failed(aCalledResultUn, 43LL, &v4, &off_1148A0, &off_114C18);
  }
  v4 = &off_114C30;
  v5 = 1LL;
  v6 = (_QWORD *)&byte_8;
  v7 = 0LL;
  std::io::stdio::_print(&v4);
  v9[0] = &v8;
  v9[1] = <&T as core::fmt::Display>::fmt;
  v4 = &unk_114920;
  v5 = 2LL;
  v6 = v9;
  v7 = 1uLL;
  return std::io::stdio::_print(&v4);
}
