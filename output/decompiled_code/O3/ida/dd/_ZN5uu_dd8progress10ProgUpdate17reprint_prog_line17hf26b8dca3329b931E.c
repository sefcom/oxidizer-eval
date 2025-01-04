void *__fastcall uu_dd::progress::ProgUpdate::reprint_prog_line(unsigned __int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  void *v4; // [rsp+0h] [rbp-8h] BYREF

  v4 = &std::io::stdio::stderr::INSTANCE;
  v1 = uu_dd::progress::ProgUpdate::write_prog_line(a1, (__int64)&v4, 1u);
  core::result::Result<T,E>::unwrap(v1, v2, &off_1624D0);
  return v4;
}
