__int64 __fastcall just::subcommand::Subcommand::changelog(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-48h] BYREF
  __int64 v3; // [rsp+8h] [rbp-40h] BYREF
  __int64 v4; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v5[3]; // [rsp+18h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h]

  v4 = std::io::stdio::stdout(a1);
  v5[0] = &off_431130;
  v5[1] = 1LL;
  v5[2] = &v2;
  v6 = 0LL;
  result = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v4, v5);
  v3 = result;
  if ( result )
    return core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v3);
  return result;
}