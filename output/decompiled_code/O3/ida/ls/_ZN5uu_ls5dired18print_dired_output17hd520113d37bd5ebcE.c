__int64 __fastcall uu_ls::dired::print_dired_output(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  _QWORD v6[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v7[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a3);
  if ( v3 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
  v5 = a2[2];
  if ( v5 )
    uu_ls::dired::print_positions((__int64)aDired, 9LL, a2[1], v5);
  if ( *(_BYTE *)(a1 + 230) )
    uu_ls::dired::print_positions((__int64)aSubdired, 12LL, a2[4], a2[5]);
  v6[0] = a1 + 245;
  v6[1] = <uucore::features::quoting_style::QuotingStyle as core::fmt::Display>::fmt;
  v7[0] = &off_213328;
  v7[1] = 2LL;
  v7[4] = 0LL;
  v7[2] = v6;
  v7[3] = 1LL;
  std::io::stdio::_print(v7);
  return 0LL;
}
