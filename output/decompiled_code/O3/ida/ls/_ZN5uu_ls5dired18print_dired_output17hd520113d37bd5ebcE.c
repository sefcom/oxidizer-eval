__int64 __fastcall uu_ls::dired::print_dired_output(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v6[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a3);
  if ( v3 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
  if ( a2[2] )
    uu_ls::dired::print_positions(aDired, 9LL, a2[1]);
  if ( *(_BYTE *)(a1 + 230) )
    uu_ls::dired::print_positions(aSubdired, 12LL, a2[4]);
  v5[0] = a1 + 245;
  v5[1] = <uucore::features::quoting_style::QuotingStyle as core::fmt::Display>::fmt;
  v6[0] = &off_213328;
  v6[1] = 2LL;
  v6[4] = 0LL;
  v6[2] = v5;
  v6[3] = 1LL;
  std::io::stdio::_print(v6);
  return 0LL;
}
