__int64 __fastcall uu_ls::dired::indent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+8h] [rbp-30h] BYREF
  __int128 v9; // [rsp+20h] [rbp-18h]

  v8[0] = &off_2136F8;
  v8[1] = 1LL;
  v8[2] = 8LL;
  v9 = 0LL;
  v6 = std::io::Write::write_fmt(a1, v8, a3, a4, a5, a6);
  if ( v6 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
  else
    return 0LL;
}
