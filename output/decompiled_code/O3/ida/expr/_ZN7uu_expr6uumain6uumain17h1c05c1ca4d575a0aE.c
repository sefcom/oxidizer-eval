__int64 __fastcall uu_expr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v10; // [rsp+0h] [rbp-3F8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-3E8h]
  __int128 v12; // [rsp+20h] [rbp-3D8h] BYREF
  __int128 v13; // [rsp+30h] [rbp-3C8h]
  _BYTE v14[48]; // [rsp+40h] [rbp-3B8h] BYREF
  __int128 v15; // [rsp+70h] [rbp-388h]
  _OWORD v16[2]; // [rsp+80h] [rbp-378h] BYREF
  __int128 v17; // [rsp+A0h] [rbp-358h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-348h]
  _OWORD v19[3]; // [rsp+B8h] [rbp-340h] BYREF
  __int64 v20; // [rsp+E8h] [rbp-310h]
  __int128 v21; // [rsp+F0h] [rbp-308h] BYREF
  __int128 v22; // [rsp+100h] [rbp-2F8h]
  _BYTE dest[48]; // [rsp+110h] [rbp-2E8h] BYREF
  __int128 v24; // [rsp+140h] [rbp-2B8h]

  uu_expr::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(v14, dest, a1, a2);
  if ( *(_QWORD *)v14 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v14[8]);
  v20 = v15;
  v19[2] = *(_OWORD *)&v14[32];
  v19[1] = *(_OWORD *)&v14[16];
  v19[0] = *(_OWORD *)v14;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v19, aExpression, 10LL);
  clap_builder::parser::error::MatchesError::unwrap(v14, aExpression, 10LL, dest);
  if ( *(_QWORD *)v14 )
  {
    v24 = v15;
    *(_OWORD *)&dest[32] = *(_OWORD *)&v14[32];
    *(_OWORD *)&dest[16] = *(_OWORD *)&v14[16];
    *(_OWORD *)dest = *(_OWORD *)v14;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v12, dest);
    v10 = v12;
    v3 = v13;
    v11 = v13;
    v4 = *((_QWORD *)&v12 + 1);
  }
  else
  {
    *(_QWORD *)&v10 = 0LL;
    *((_QWORD *)&v10 + 1) = 8LL;
    v11 = 0LL;
    v4 = 8LL;
    v3 = 0LL;
  }
  uu_expr::syntax_tree::AstNode::parse((__int64)dest, v4, v3);
  v12 = *(_OWORD *)&dest[8];
  v13 = *(_OWORD *)&dest[24];
  if ( *(_QWORD *)dest )
  {
    *(_OWORD *)&dest[16] = v13;
    *(_OWORD *)dest = v12;
    v2 = alloc::boxed::Box<T>::new(dest);
  }
  else
  {
    v16[1] = v13;
    v16[0] = v12;
    uu_expr::syntax_tree::AstNode::eval((__int64)v14, (__int64)v16);
    v21 = *(_OWORD *)&v14[8];
    v22 = *(_OWORD *)&v14[24];
    if ( *(_QWORD *)v14 )
    {
      *(_OWORD *)&dest[16] = v22;
      *(_OWORD *)dest = v21;
      v2 = alloc::boxed::Box<T>::new(dest);
      core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v16);
    }
    else
    {
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v17, &v21, v5, v6, v7, v8);
      core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v16);
      *(_QWORD *)v14 = &v17;
      *(_QWORD *)&v14[8] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_19F1E8;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[32] = 0LL;
      *(_QWORD *)&dest[16] = v14;
      *(_QWORD *)&dest[24] = 1LL;
      std::io::stdio::_print(dest);
      *(_QWORD *)&dest[24] = v18;
      *(_OWORD *)&dest[8] = v17;
      *(_QWORD *)dest = 0x8000000000000000LL;
      if ( (unsigned __int8)uu_expr::syntax_tree::is_truthy(dest) )
      {
        core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(dest);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v10);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
        return 0LL;
      }
      core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(dest);
      v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v10);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
  return v2;
}
