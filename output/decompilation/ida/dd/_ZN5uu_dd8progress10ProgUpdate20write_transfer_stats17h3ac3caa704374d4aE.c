__int64 __fastcall uu_dd::progress::ProgUpdate::write_transfer_stats(unsigned __int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+8h] [rbp-40h] BYREF
  __int128 v6; // [rsp+20h] [rbp-28h]

  if ( a3 )
  {
    v5[0] = &off_13DB30;
    v5[1] = 1LL;
    v5[2] = 8LL;
    v6 = 0LL;
    v3 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a2, v5);
    if ( v3 )
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
  }
  v3 = uu_dd::progress::ProgUpdate::write_io_lines((__int64)a1, a2);
  if ( v3 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
  else
    return uu_dd::progress::ProgUpdate::write_prog_line(a1, a2, 0);
}