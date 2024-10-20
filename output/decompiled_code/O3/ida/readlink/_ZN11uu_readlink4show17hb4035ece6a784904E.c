__int64 __fastcall uu_readlink::show(__int64 a1, __int64 a2, char a3)
{
  char v5; // [rsp+Fh] [rbp-69h] BYREF
  void *v6; // [rsp+10h] [rbp-68h] BYREF
  __int128 v7; // [rsp+18h] [rbp-60h]
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  __int128 *v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+48h] [rbp-30h]
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF

  std::sys::os_str::bytes::Slice::to_str(&v6, a1, a2);
  if ( v6 )
    core::option::unwrap_failed(&off_E70A0);
  v12 = v7;
  v10 = &v12;
  v11 = <&T as core::fmt::Display>::fmt;
  v6 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *(_QWORD *)&v7 = 1LL;
  v9 = 0LL;
  *((_QWORD *)&v7 + 1) = &v10;
  v8 = 1LL;
  std::io::stdio::_print(&v6);
  if ( a3 != 11 )
  {
    v5 = a3;
    v10 = (__int128 *)&v5;
    v11 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v6 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    *(_QWORD *)&v7 = 1LL;
    v9 = 0LL;
    *((_QWORD *)&v7 + 1) = &v10;
    v8 = 1LL;
    std::io::stdio::_print(&v6);
  }
  v6 = (void *)std::io::stdio::stdout();
  return <std::io::stdio::Stdout as std::io::Write>::flush(&v6);
}
