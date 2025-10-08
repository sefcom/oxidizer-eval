_QWORD *__fastcall uu_fmt::extract_files(_QWORD *a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r14
  __int128 v6; // xmm0
  char v8; // [rsp+6h] [rbp-162h] BYREF
  char v9; // [rsp+7h] [rbp-161h] BYREF
  __int128 v10; // [rsp+8h] [rbp-160h] BYREF
  __int64 v11; // [rsp+18h] [rbp-150h]
  __int128 v12; // [rsp+20h] [rbp-148h] BYREF
  __int64 v13; // [rsp+30h] [rbp-138h]
  __int64 v14; // [rsp+68h] [rbp-100h]
  __int64 v15; // [rsp+A8h] [rbp-C0h]
  __int64 v16; // [rsp+E8h] [rbp-80h]
  char *v17; // [rsp+F0h] [rbp-78h]
  char *v18; // [rsp+F8h] [rbp-70h]
  __int128 v19; // [rsp+100h] [rbp-68h] BYREF
  __int64 v20; // [rsp+110h] [rbp-58h]

  v2 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, aFiles, 5LL);
  v8 = v2 & (v3 == 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, a2);
  clap_builder::parser::error::MatchesError::unwrap((char *)&v12 + 8, &v19);
  *(_QWORD *)&v12 = 1LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = &v9;
  v18 = &v8;
  core::iter::traits::iterator::Iterator::collect(&v10, &v12);
  if ( (unsigned __int8)core::result::Result<T,E>::is_ok_and(
                          __OFSUB__(0LL, (_QWORD)v10),
                          (char *)&v10 + 8 * __OFSUB__(0LL, (_QWORD)v10)) )
  {
    v4 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v5 = v4;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v12, asc_19EEA, 1LL);
    v20 = v13;
    v6 = v12;
    v19 = v12;
    *(_QWORD *)(v5 + 16) = v13;
    *(_OWORD *)v5 = v6;
    *a1 = 1LL;
    a1[1] = v5;
    a1[2] = 1LL;
    core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<alloc::string::String>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v10);
  }
  else
  {
    a1[2] = v11;
    *(_OWORD *)a1 = v10;
  }
  return a1;
}