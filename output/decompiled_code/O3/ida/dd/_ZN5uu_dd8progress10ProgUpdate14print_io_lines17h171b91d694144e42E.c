void *__fastcall uu_dd::progress::ProgUpdate::print_io_lines(__int64 a1)
{
  __int64 v1; // rax
  void *v3; // [rsp+0h] [rbp-8h] BYREF

  v3 = &std::io::stdio::stderr::INSTANCE;
  v1 = uu_dd::progress::ProgUpdate::write_io_lines(a1, (__int64)&v3);
  core::result::Result<T,E>::unwrap(v1);
  return v3;
}
