__int64 __fastcall bat::app::App::style_components(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  _BYTE v13[31]; // [rsp+0h] [rbp-168h] BYREF
  __int128 v14; // [rsp+20h] [rbp-148h] BYREF
  __m256i v15; // [rsp+30h] [rbp-138h]
  __int128 v16; // [rsp+50h] [rbp-118h]
  __int128 v17; // [rsp+60h] [rbp-108h] BYREF
  __m256i v18; // [rsp+70h] [rbp-F8h]
  __m256i v19; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+B0h] [rbp-B8h]
  __m256i v21; // [rsp+C0h] [rbp-A8h]
  __int128 v22; // [rsp+E0h] [rbp-88h] BYREF
  __m256i v23; // [rsp+F0h] [rbp-78h]
  __int128 v24; // [rsp+110h] [rbp-58h]
  __int128 v25; // [rsp+130h] [rbp-38h] BYREF
  __int64 v26; // [rsp+140h] [rbp-28h]

  bat::app::App::forced_style_components(&v17, a2);
  if ( (_QWORD)v17 )
  {
    v15 = v18;
    v14 = v17;
  }
  else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aStyle, 5LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v22, a2, aStyle, 5LL);
    clap_builder::parser::error::MatchesError::unwrap(&v14, aStyle, 5LL, &v22);
    if ( !(_QWORD)v14 )
      core::option::expect_failed(aStylesPresent, 14LL, &off_6C8508);
    v24 = v16;
    v23 = v15;
    v22 = v14;
    core::iter::traits::iterator::Iterator::collect(&v19, &v22);
    result = v19.m256i_u8[0];
    if ( v19.m256i_i8[0] != 13 )
    {
      v11 = v20;
      v12 = *(_OWORD *)v21.m256i_i8;
      *(_OWORD *)&v13[15] = *(_OWORD *)&v19.m256i_u64[2];
      *(_OWORD *)v13 = *(_OWORD *)&v19.m256i_i8[1];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v21.m256i_u64[2];
      *(_OWORD *)(a1 + 48) = v12;
      *(_OWORD *)(a1 + 32) = v11;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v13[15];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v13;
      *(_BYTE *)a1 = result;
      return result;
    }
    v25 = *(_OWORD *)&v19.m256i_u64[1];
    v26 = v19.m256i_i64[3];
    bat::style::StyleComponentList::to_components((__int64)&v14, (__int64)&v25, *(_BYTE *)(a2 + 56));
  }
  else
  {
    v3 = bat::style::StyleComponent::components(10LL, *(unsigned __int8 *)(a2 + 56));
    <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(
      &v14,
      v3,
      v3 + v4);
  }
  result = bat::style::StyleComponents::grid(&v14);
  if ( (_BYTE)result )
  {
    result = hashbrown::map::HashMap<K,V,S,A>::remove(&v14);
    if ( (_BYTE)result )
    {
      v21.m256i_i8[8] = 0;
      v21.m256i_i64[0] = 0LL;
      *(__int64 *)((char *)&v21.m256i_i64[1] + 1) = 0x1500000006LL;
      v19.m256i_i64[0] = 0x8000000000000000LL;
      v19.m256i_i64[1] = (__int64)aBatWarning;
      v19.m256i_i64[2] = 13LL;
      v19.m256i_i64[3] = 0x8000000000000002LL;
      *(_QWORD *)&v22 = &off_6C84C8;
      *((_QWORD *)&v22 + 1) = 1LL;
      v23.m256i_i64[0] = 8LL;
      *(_OWORD *)&v23.m256i_u64[1] = 0LL;
      core::option::Option<T>::map_or_else(&v17, aStyleRuleIsASu, &v22);
      *(_OWORD *)v13 = v17;
      *(_QWORD *)&v13[16] = v18.m256i_i64[0];
      *(_QWORD *)&v17 = &v19;
      *((_QWORD *)&v17 + 1) = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
      v18.m256i_i64[0] = (__int64)v13;
      v18.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v22 = &unk_6C84D8;
      *((_QWORD *)&v22 + 1) = 3LL;
      v23.m256i_i64[0] = (__int64)&v17;
      *(_OWORD *)&v23.m256i_u64[1] = 2uLL;
      std::io::stdio::_eprint(
        &v22,
        aStyleRuleIsASu,
        v5,
        v6,
        v7,
        v8,
        *(_QWORD *)v13,
        *(_QWORD *)&v13[8],
        *(_QWORD *)&v13[16]);
      core::ptr::drop_in_place<alloc::string::String>(v13);
      result = core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v19);
    }
  }
  v9 = v14;
  v10 = *(_OWORD *)v15.m256i_i8;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v15.m256i_u64[2];
  *(_OWORD *)(a1 + 24) = v10;
  *(_OWORD *)(a1 + 8) = v9;
  *(_BYTE *)a1 = 13;
  return result;
}