void *__fastcall zoxide::util::Fzf::new(void *dest)
{
  _QWORD v2[6]; // [rsp+8h] [rbp-120h] BYREF
  _BYTE src[240]; // [rsp+38h] [rbp-F0h] BYREF

  std::process::Command::new(src);
  v2[0] = aDelimiter;
  v2[1] = 13LL;
  v2[2] = aNth2;
  v2[3] = 7LL;
  v2[4] = aRead0;
  v2[5] = 7LL;
  std::process::Command::args(src, v2);
  std::process::Command::stdin(src);
  std::process::Command::stdout(src);
  return memcpy(dest, src, 0xE0uLL);
}