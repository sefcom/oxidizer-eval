void *__fastcall uu_dd::progress::ProgUpdate::print_transfer_stats(unsigned __int64 *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  void *v5; // [rsp+0h] [rbp-8h] BYREF

  v5 = &std::io::stdio::stderr::INSTANCE;
  v2 = uu_dd::progress::ProgUpdate::write_transfer_stats(a1, (__int64)&v5, a2);
  core::result::Result<T,E>::unwrap(v2, v3, &off_1624E8);
  return v5;
}
