void *__fastcall alacritty::cli::Options::new(void *dest)
{
  __int128 v2; // [rsp+8h] [rbp-220h] BYREF
  __int64 v3; // [rsp+18h] [rbp-210h]
  _OWORD src[32]; // [rsp+20h] [rbp-208h] BYREF

  clap_builder::derive::Parser::parse(src);
  alacritty::cli::WindowOptions::config_overrides(&v2, *(_QWORD *)&src[4], *((_QWORD *)&src[4] + 1));
  core::ptr::drop_in_place<alacritty::cli::ParsedOptions>(&src[24]);
  *(_QWORD *)&src[25] = v3;
  src[24] = v2;
  return memcpy(dest, src, 0x1F0uLL);
}