__int64 __fastcall uu_fmt::extract_files(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r14
  __int128 v6; // xmm0
  bool v8; // [rsp+Eh] [rbp-17Ah] BYREF
  char v9; // [rsp+Fh] [rbp-179h] BYREF
  __int128 v10; // [rsp+10h] [rbp-178h] BYREF
  __int64 v11; // [rsp+20h] [rbp-168h]
  __int128 v12; // [rsp+28h] [rbp-160h] BYREF
  __int64 v13; // [rsp+38h] [rbp-150h]
  __int128 v14; // [rsp+70h] [rbp-118h]
  __int64 v15; // [rsp+80h] [rbp-108h]
  __int64 v16; // [rsp+88h] [rbp-100h] BYREF
  _BYTE v17[64]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-B8h]
  __int64 v19; // [rsp+110h] [rbp-78h]
  __int64 v20; // [rsp+150h] [rbp-38h]
  char *v21; // [rsp+158h] [rbp-30h]
  bool *v22; // [rsp+160h] [rbp-28h]

  v2 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, aFiles, 5LL);
  v8 = v2 != 0 && v3 == 1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, a2, aFiles, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(v17, aFiles, 5LL, &v12);
  v16 = 1LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = &v9;
  v22 = &v8;
  core::iter::adapters::try_process(&v10, &v16);
  if ( (unsigned __int8)core::result::Result<T,E>::is_ok_and(
                          v10 == 0x8000000000000000LL,
                          (char *)&v10 + 8 * ((_QWORD)v10 == 0x8000000000000000LL)) )
  {
    v4 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v5 = v4;
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v12, asc_1D899, 1LL);
    v15 = v13;
    v6 = v12;
    v14 = v12;
    *(_QWORD *)(v5 + 16) = v13;
    *(_OWORD *)v5 = v6;
    alloc::slice::hack::into_vec(&v12, v5, 1LL);
    *(_QWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
    core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<alloc::string::String>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v10);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
  }
  return a1;
}
