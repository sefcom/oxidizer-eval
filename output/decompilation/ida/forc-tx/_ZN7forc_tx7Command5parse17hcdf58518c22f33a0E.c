void *__fastcall forc_tx::Command::parse(void *dest)
{
  __int64 v2; // rax
  _OWORD v3[3]; // [rsp+0h] [rbp-138h] BYREF
  _QWORD src[33]; // [rsp+30h] [rbp-108h] BYREF

  forc_tx::Command::try_parse(src);
  if ( LODWORD(src[0]) == 2 )
  {
    v3[2] = *(_OWORD *)&src[5];
    v3[1] = *(_OWORD *)&src[3];
    v3[0] = *(_OWORD *)&src[1];
    v2 = forc_tx::ParseError::print(v3);
    core::ptr::drop_in_place<core::result::Result<(),clap_builder::error::Error>>(v2);
    std::process::exit(1);
  }
  memcpy(dest, src, 0x100uLL);
  return dest;
}