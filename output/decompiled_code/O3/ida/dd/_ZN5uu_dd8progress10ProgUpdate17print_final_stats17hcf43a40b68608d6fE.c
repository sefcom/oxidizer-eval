__int64 __fastcall uu_dd::progress::ProgUpdate::print_final_stats(int *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  void *v5; // [rsp+8h] [rbp-10h] BYREF

  result = a2;
  switch ( a2 )
  {
    case 0u:
    case 3u:
      result = uu_dd::progress::ProgUpdate::print_transfer_stats(a1, a3);
      break;
    case 1u:
      v5 = &std::io::stdio::stderr::INSTANCE;
      result = uu_dd::progress::ProgUpdate::write_io_lines(a1, (__int64)&v5);
      if ( result )
      {
        v4 = result;
        core::result::unwrap_failed(
          anon_09342749f2f0afc509120f10eba31a78_2_llvm_15503904748741807753,
          43LL,
          &v4,
          &anon_09342749f2f0afc509120f10eba31a78_1_llvm_15503904748741807753,
          &anon_09342749f2f0afc509120f10eba31a78_32_llvm_15503904748741807753);
      }
      return result;
    case 2u:
      return result;
  }
  return result;
}
