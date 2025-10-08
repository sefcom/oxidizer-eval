__int64 __fastcall forc_tx::Command::try_parse(__int64 a1)
{
  _BYTE v2[48]; // [rsp+8h] [rbp-30h] BYREF

  std::env::args(v2);
  forc_tx::Command::try_parse_from_args(a1, v2);
  return a1;
}