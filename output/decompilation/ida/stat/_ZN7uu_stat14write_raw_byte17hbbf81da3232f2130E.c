__int64 __fastcall uu_stat::write_raw_byte(char a1)
{
  __int64 v1; // rax
  char v3; // [rsp+7h] [rbp-11h] BYREF
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v4 = std::io::stdio::stdout();
  v3 = a1;
  v1 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v4, &v3, 1LL);
  return core::result::Result<T,E>::unwrap(v1);
}