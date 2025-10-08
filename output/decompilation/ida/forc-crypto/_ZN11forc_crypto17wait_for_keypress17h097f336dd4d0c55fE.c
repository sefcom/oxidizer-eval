__int64 forc_crypto::wait_for_keypress()
{
  __int64 v0; // rax
  char v2; // [rsp+Fh] [rbp-9h] BYREF
  __int64 v3; // [rsp+10h] [rbp-8h] BYREF

  v2 = 0;
  v3 = std::io::stdio::stdin();
  v0 = <std::io::stdio::Stdin as std::io::Read>::read_exact(&v3, &v2, 1LL);
  return core::result::Result<T,E>::unwrap(v0);
}