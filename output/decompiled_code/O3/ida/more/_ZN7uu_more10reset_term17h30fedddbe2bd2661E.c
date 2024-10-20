__int64 __fastcall uu_more::reset_term(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+18h] [rbp-20h]

  v1 = crossterm::terminal::sys::unix::disable_raw_mode();
  if ( v1 )
  {
    v4[0] = v1;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, v4, &off_117D00, &off_117DF8);
  }
  v2 = <std::io::stdio::Stdout as std::io::Write>::write_all(
         a1,
         anon_d58bd02a723bd021606085005bc52729_42_llvm_16558445346262642515,
         4LL);
  if ( v2 )
  {
    v4[0] = v2;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, v4, &off_117D00, &off_117E10);
  }
  v4[0] = &off_117E28;
  v4[1] = 1LL;
  v4[2] = 8LL;
  v5 = 0LL;
  std::io::stdio::_print(v4);
  result = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
  if ( result )
  {
    v4[0] = result;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, v4, &off_117D00, &off_117E38);
  }
  return result;
}
