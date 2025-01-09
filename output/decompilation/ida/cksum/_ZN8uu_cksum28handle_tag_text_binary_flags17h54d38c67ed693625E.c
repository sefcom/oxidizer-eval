__int64 __fastcall uu_cksum::handle_tag_text_binary_flags(__int64 a1, __int64 a2)
{
  char flag; // bp
  char v3; // r14
  char v4; // r15
  bool v5; // al
  char v6; // r14
  _BYTE v8[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v9; // [rsp+10h] [rbp-58h]
  __int64 v10; // [rsp+18h] [rbp-50h]
  _BYTE v11[72]; // [rsp+20h] [rbp-48h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, "untagged0", 8LL);
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTag_0, 3LL);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aBinary_1, 6LL);
  std::env::args_os(v11);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v8, v11);
  v5 = uu_cksum::had_reset(v9, v10);
  v6 = flag ^ 1 | v3;
  *(_BYTE *)(a1 + 8) = v6;
  *(_BYTE *)(a1 + 9) = ((v6 | v5) ^ 1) & v4;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v8);
  return a1;
}
