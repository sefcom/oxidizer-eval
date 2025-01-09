__int64 __fastcall uu_expr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+8h] [rbp-3F0h] BYREF
  __int128 v11; // [rsp+10h] [rbp-3E8h]
  __m256i v12; // [rsp+20h] [rbp-3D8h] BYREF
  _BYTE v13[48]; // [rsp+40h] [rbp-3B8h] BYREF
  __int128 v14; // [rsp+70h] [rbp-388h]
  __m256i v15; // [rsp+80h] [rbp-378h] BYREF
  __int128 v16; // [rsp+A0h] [rbp-358h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-348h]
  _OWORD v18[3]; // [rsp+B8h] [rbp-340h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-310h]
  __int128 v20; // [rsp+F0h] [rbp-308h] BYREF
  __int128 v21; // [rsp+100h] [rbp-2F8h]
  _BYTE dest[48]; // [rsp+110h] [rbp-2E8h] BYREF
  __int128 v23; // [rsp+140h] [rbp-2B8h]

  uu_expr::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(v13, dest, a1, a2);
  if ( *(_QWORD *)v13 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v13[8]);
  v19 = v14;
  v18[2] = *(_OWORD *)&v13[32];
  v18[1] = *(_OWORD *)&v13[16];
  v18[0] = *(_OWORD *)v13;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v18, aExpression, 10LL);
  clap_builder::parser::error::MatchesError::unwrap(v13, aExpression, 10LL, dest);
  if ( *(_QWORD *)v13 )
  {
    v23 = v14;
    *(_OWORD *)&dest[32] = *(_OWORD *)&v13[32];
    *(_OWORD *)&dest[16] = *(_OWORD *)&v13[16];
    *(_OWORD *)dest = *(_OWORD *)v13;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v12, dest);
    v11 = *(_OWORD *)&v12.m256i_u64[1];
    v10 = v12.m256i_i64[0];
    v3 = v12.m256i_i64[2];
    v4 = v12.m256i_i64[1];
  }
  else
  {
    v10 = 0LL;
    v11 = 8uLL;
    v4 = 8LL;
    v3 = 0LL;
  }
  uu_expr::syntax_tree::AstNode::parse((__int64)dest, v4, v3);
  v12 = *(__m256i *)&dest[8];
  if ( *(_QWORD *)dest )
  {
    *(__m256i *)dest = v12;
    v2 = alloc::boxed::Box<T>::new(dest);
  }
  else
  {
    v15 = v12;
    uu_expr::syntax_tree::AstNode::eval((__int64)v13, (__int64)&v15);
    v20 = *(_OWORD *)&v13[8];
    v21 = *(_OWORD *)&v13[24];
    if ( *(_QWORD *)v13 )
    {
      *(_OWORD *)&dest[16] = v21;
      *(_OWORD *)dest = v20;
      v2 = alloc::boxed::Box<T>::new(dest);
      core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v15);
    }
    else
    {
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v16, &v20, v5, v6, v7, v8);
      core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v15);
      *(_QWORD *)v13 = &v16;
      *(_QWORD *)&v13[8] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_19F158;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[32] = 0LL;
      *(_QWORD *)&dest[16] = v13;
      *(_QWORD *)&dest[24] = 1LL;
      std::io::stdio::_print(dest);
      *(_QWORD *)&dest[24] = v17;
      *(_OWORD *)&dest[8] = v16;
      *(_QWORD *)dest = 0x8000000000000000LL;
      if ( (unsigned __int8)uu_expr::syntax_tree::is_truthy(dest) )
      {
        core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(dest);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v10);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
        return 0LL;
      }
      core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(dest);
      v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v10);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
  return v2;
}
