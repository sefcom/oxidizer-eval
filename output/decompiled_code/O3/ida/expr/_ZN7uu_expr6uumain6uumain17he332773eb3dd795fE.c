__int64 __fastcall uu_expr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v6; // [rsp+8h] [rbp-3F0h] BYREF
  __int128 v7; // [rsp+10h] [rbp-3E8h]
  __m256i v8; // [rsp+20h] [rbp-3D8h] BYREF
  _BYTE v9[48]; // [rsp+40h] [rbp-3B8h] BYREF
  __int128 v10; // [rsp+70h] [rbp-388h]
  __m256i v11; // [rsp+80h] [rbp-378h] BYREF
  __int128 v12; // [rsp+A0h] [rbp-358h] BYREF
  __int64 v13; // [rsp+B0h] [rbp-348h]
  _OWORD v14[3]; // [rsp+B8h] [rbp-340h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-310h]
  __int128 v16; // [rsp+F0h] [rbp-308h] BYREF
  __int128 v17; // [rsp+100h] [rbp-2F8h]
  _BYTE dest[48]; // [rsp+110h] [rbp-2E8h] BYREF
  __int128 v19; // [rsp+140h] [rbp-2B8h]

  uu_expr::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(v9, dest, a1, a2);
  if ( *(_QWORD *)v9 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v9[8]);
  v15 = v10;
  v14[2] = *(_OWORD *)&v9[32];
  v14[1] = *(_OWORD *)&v9[16];
  v14[0] = *(_OWORD *)v9;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v14, aExpression, 10LL);
  clap_builder::parser::error::MatchesError::unwrap(v9, aExpression, 10LL, dest);
  if ( *(_QWORD *)v9 )
  {
    v19 = v10;
    *(_OWORD *)&dest[32] = *(_OWORD *)&v9[32];
    *(_OWORD *)&dest[16] = *(_OWORD *)&v9[16];
    *(_OWORD *)dest = *(_OWORD *)v9;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v8, dest);
    v7 = *(_OWORD *)&v8.m256i_u64[1];
    v6 = v8.m256i_i64[0];
    v3 = v8.m256i_i64[2];
    v4 = v8.m256i_i64[1];
  }
  else
  {
    v6 = 0LL;
    v7 = 8uLL;
    v4 = 8LL;
    v3 = 0LL;
  }
  uu_expr::syntax_tree::AstNode::parse(dest, v4, v3);
  v8 = *(__m256i *)&dest[8];
  if ( *(_QWORD *)dest )
  {
    *(__m256i *)dest = v8;
    v2 = alloc::boxed::Box<T>::new(dest);
  }
  else
  {
    v11 = v8;
    uu_expr::syntax_tree::AstNode::eval(v9, &v11);
    v16 = *(_OWORD *)&v9[8];
    v17 = *(_OWORD *)&v9[24];
    if ( *(_QWORD *)v9 )
    {
      *(_OWORD *)&dest[16] = v17;
      *(_OWORD *)dest = v16;
      v2 = alloc::boxed::Box<T>::new(dest);
      core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v11);
    }
    else
    {
      uu_expr::syntax_tree::NumOrStr::eval_as_string(&v12, &v16);
      core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v11);
      *(_QWORD *)v9 = &v12;
      *(_QWORD *)&v9[8] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_19F158;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[32] = 0LL;
      *(_QWORD *)&dest[16] = v9;
      *(_QWORD *)&dest[24] = 1LL;
      std::io::stdio::_print(dest);
      *(_QWORD *)&dest[24] = v13;
      *(_OWORD *)&dest[8] = v12;
      *(_QWORD *)dest = 0x8000000000000000LL;
      if ( (unsigned __int8)uu_expr::syntax_tree::is_truthy(dest) )
      {
        core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(dest);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v6);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v14);
        return 0LL;
      }
      core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(dest);
      v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v6);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v14);
  return v2;
}
