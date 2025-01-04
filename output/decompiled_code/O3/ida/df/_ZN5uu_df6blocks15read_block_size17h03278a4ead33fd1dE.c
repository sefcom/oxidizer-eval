__int64 __fastcall uu_df::blocks::read_block_size(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int128 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int128 *v9; // [rsp+8h] [rbp-80h] BYREF
  __int64 v10; // [rsp+10h] [rbp-78h]
  __int128 v11; // [rsp+18h] [rbp-70h]
  __int64 v12; // [rsp+28h] [rbp-60h]
  _QWORD v13[2]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-40h] BYREF
  char v15; // [rsp+60h] [rbp-28h]

  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                           a2,
                           anon_85076f12318d60a2ab8851d375b85267_4_llvm_15128465655211971851,
                           9LL) )
  {
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a2,
                             anon_85076f12318d60a2ab8851d375b85267_14_llvm_15128465655211971851,
                             11LL) )
    {
      if ( uu_df::blocks::block_size_from_env() != 1 )
        v7 = <uu_df::blocks::BlockSize as core::default::Default>::default();
      *(_QWORD *)(a1 + 8) = v7;
      goto LABEL_12;
    }
    v6 = <uu_df::blocks::BlockSize as core::default::Default>::default();
LABEL_8:
    *(_QWORD *)(a1 + 8) = v6;
LABEL_12:
    *(_QWORD *)a1 = 3LL;
    return a1;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v9,
    a2,
    anon_85076f12318d60a2ab8851d375b85267_4_llvm_15128465655211971851,
    9LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(
         anon_85076f12318d60a2ab8851d375b85267_4_llvm_15128465655211971851,
         9LL,
         &v9);
  if ( !v2 )
    core::option::unwrap_failed(&off_141ED8);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  uucore::parser::parse_size::parse_size_u64(&v9, v3, v4);
  v5 = v9;
  v6 = v10;
  if ( v9 != (__int128 *)((char *)&dword_0 + 3) )
  {
    *(_OWORD *)(a1 + 16) = v11;
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v6;
    return a1;
  }
  if ( v10 )
    goto LABEL_8;
  v14[0] = 0LL;
  v14[1] = v3;
  v14[2] = v4;
  v15 = 1;
  v13[0] = v14;
  v13[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v9 = &xmmword_BA30;
  v10 = 1LL;
  v12 = 0LL;
  *(_QWORD *)&v11 = v13;
  *((_QWORD *)&v11 + 1) = 1LL;
  core::option::Option<T>::map_or_else(a1 + 8, &v9);
  *(_QWORD *)a1 = 1LL;
  return a1;
}
