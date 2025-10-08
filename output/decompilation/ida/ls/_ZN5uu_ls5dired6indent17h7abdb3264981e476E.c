__int64 __fastcall uu_ls::dired::indent(__int64 a1)
{
  __int64 v1; // rax
  _QWORD v3[3]; // [rsp+8h] [rbp-30h] BYREF
  __int128 v4; // [rsp+20h] [rbp-18h]

  v3[0] = &off_286698;
  v3[1] = 1LL;
  v3[2] = 8LL;
  v4 = 0LL;
  v1 = std::io::Write::write_fmt(a1, v3);
  if ( v1 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
  else
    return 0LL;
}