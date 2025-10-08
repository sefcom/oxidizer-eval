char uu_cat::is_appending()
{
  char v0; // al
  __int16 v1; // dx
  int v3[4]; // [rsp+8h] [rbp-10h] BYREF

  std::io::stdio::stdout();
  v3[0] = 4;
  v0 = nix::fcntl::fcntl(1LL, v3);
  return ((v1 & 0x400) != 0) & ~v0;
}