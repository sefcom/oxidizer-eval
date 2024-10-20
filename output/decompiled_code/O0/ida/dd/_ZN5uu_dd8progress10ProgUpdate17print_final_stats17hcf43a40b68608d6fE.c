        unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  void *v5; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-18h] BYREF

  result = a2;
  switch ( a2 )
  {
    case 0u:
    case 3u:
      v5 = &std::io::stdio::stderr::INSTANCE;
      result = (__int64)uu_dd::progress::ProgUpdate::write_transfer_stats(a1, (__int64)&v5, a3);
      if ( result )
      {
        v6[0] = result;
        v6[1] = v4;
        core::result::unwrap_failed(
          anon_bff3183e4c196cdaa7c150408020b06b_10_llvm_10102786401241998662,
          43LL,
          v6,
          &anon_bff3183e4c196cdaa7c150408020b06b_11_llvm_10102786401241998662,
          &anon_bff3183e4c196cdaa7c150408020b06b_86_llvm_10102786401241998662);
      }
      return result;
    case 1u:
      v5 = &std::io::stdio::stderr::INSTANCE;
      result = uu_dd::progress::ProgUpdate::write_io_lines((__int64)a1, (__int64)&v5);
      if ( result )
      {
        v6[0] = result;
        core::result::unwrap_failed(
          anon_bff3183e4c196cdaa7c150408020b06b_10_llvm_10102786401241998662,
          43LL,
          v6,
          &anon_bff3183e4c196cdaa7c150408020b06b_9_llvm_10102786401241998662,
          &anon_bff3183e4c196cdaa7c150408020b06b_84_llvm_10102786401241998662);
      }
      return result;
    case 2u:
      return result;
  }
  return result;
}
