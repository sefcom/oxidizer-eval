__int64 __fastcall uu_tac::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int8 flag; // bl
  unsigned __int8 v4; // bp
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  char *v8; // r15
  __int64 v9; // r14
  __int64 v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _OWORD v13[3]; // [rsp+8h] [rbp-3B0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-380h]
  __int128 v15; // [rsp+40h] [rbp-378h] BYREF
  __int128 v16; // [rsp+50h] [rbp-368h]
  __int128 v17; // [rsp+60h] [rbp-358h]
  __int128 v18; // [rsp+70h] [rbp-348h]
  _OWORD v19[4]; // [rsp+80h] [rbp-338h] BYREF
  _BYTE v20[8]; // [rsp+C0h] [rbp-2F8h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-2F0h]
  __int64 v22; // [rsp+D0h] [rbp-2E8h]

  uu_tac::uu_app(v20);
  clap_builder::builder::command::Command::try_get_matches_from(&v15, v20, a1, a2);
  if ( (_QWORD)v15 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v15 + 1));
  v14 = v18;
  v13[2] = v17;
  v13[1] = v16;
  v13[0] = v15;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v13,
           anon_b543cae9a39a6fad33bc794cbae1aae3_2_llvm_15264556053167492347,
           *(&uu_tac::options::BEFORE + 1));
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v13,
         anon_b543cae9a39a6fad33bc794cbae1aae3_3_llvm_15264556053167492347,
         *(&uu_tac::options::REGEX + 1));
  v5 = (__int64)*(&uu_tac::options::SEPARATOR + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v20,
    v13,
    anon_b543cae9a39a6fad33bc794cbae1aae3_4_llvm_15264556053167492347,
    v5);
  v6 = clap_builder::parser::error::MatchesError::unwrap(
         anon_b543cae9a39a6fad33bc794cbae1aae3_4_llvm_15264556053167492347,
         v5,
         v20);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 )
      v8 = *(char **)(v6 + 8);
    else
      v8 = &byte_63CA1;
  }
  else
  {
    v8 = asc_63C02;
    v7 = 1LL;
  }
  v9 = (v7 == 0) + v7;
  v10 = (__int64)*(&uu_tac::options::FILE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v20, v13, "filemode{", v10);
  clap_builder::parser::error::MatchesError::unwrap(&v15, "filemode{", v10, v20);
  if ( (_QWORD)v15 )
  {
    v19[3] = v18;
    v19[2] = v17;
    v19[1] = v16;
    v19[0] = v15;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v20, v19);
  }
  else
  {
    v11 = (_QWORD *)alloc::alloc::Global::alloc_impl();
    if ( !v11 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *v11 = "-";
    v11[1] = 1LL;
    alloc::slice::hack::into_vec(v20, v11, 1LL);
  }
  v12 = uu_tac::tac(v21, v22, flag, v4, (__int64)v8, v9);
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v20);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
  return v12;
}
