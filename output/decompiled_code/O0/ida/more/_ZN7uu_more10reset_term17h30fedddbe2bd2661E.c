__int64 __fastcall uu_more::reset_term(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-68h] BYREF
  __int64 v5; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]

  v1 = crossterm::terminal::sys::unix::disable_raw_mode();
  if ( v1 )
  {
    v6[0] = v1;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, v6, &off_1487D8, &off_148980);
  }
  v6[1] = a1;
  v6[2] = 0LL;
  v2 = <std::io::stdio::Stdout as std::io::Write>::write_all(
         a1,
         anon_973acb088a118210f855931270ed248b_50_llvm_4119950667813314017,
         4LL);
  if ( v2 )
  {
    v5 = v2;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v5, &off_1487D8, &off_148998);
  }
  v7[0] = &off_1489B0;
  v7[1] = 1LL;
  v7[2] = 8LL;
  v8 = 0LL;
  std::io::stdio::_print(v7);
  result = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
  if ( result )
  {
    v4 = result;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v4, &off_1487D8, &off_1489C0);
  }
  return result;
}
