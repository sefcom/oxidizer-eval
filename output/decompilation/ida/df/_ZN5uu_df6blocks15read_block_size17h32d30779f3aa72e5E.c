__int64 __fastcall uu_df::blocks::read_block_size(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  char *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  char *v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+8h] [rbp-70h]
  __int128 v11; // [rsp+10h] [rbp-68h]
  __int64 v12; // [rsp+20h] [rbp-58h]
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-38h] BYREF
  char v15; // [rsp+58h] [rbp-20h]

  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aBlocksize_0, 9LL) )
  {
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPortability, 11LL) )
    {
      result = uu_df::blocks::block_size_from_env();
      if ( (result & 1) != 0 )
      {
        *(_QWORD *)(a1 + 8) = v8;
LABEL_11:
        *(_QWORD *)a1 = 4LL;
        return result;
      }
    }
    result = <uu_df::blocks::BlockSize as core::default::Default>::default();
LABEL_10:
    *(_QWORD *)(a1 + 8) = result;
    goto LABEL_11;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, a2);
  v2 = clap_builder::parser::error::MatchesError::unwrap(&v9);
  if ( !v2 )
    core::option::unwrap_failed(&off_102E08);
  v3 = v2;
  uucore::features::parser::parse_size::parse_size_u64(&v9, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
  v4 = v9;
  result = v10;
  if ( v9 == &byte_4 )
  {
    if ( !v10 )
    {
      v6 = *(_QWORD *)(v3 + 8);
      v7 = *(_QWORD *)(v3 + 16);
      v14[0] = 0LL;
      v14[1] = v6;
      v14[2] = v7;
      v15 = 1;
      v13[0] = v14;
      v13[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v9 = (char *)&unk_19280;
      v10 = 1LL;
      v12 = 0LL;
      *(_QWORD *)&v11 = v13;
      *((_QWORD *)&v11 + 1) = 1LL;
      result = core::option::Option<T>::map_or_else(a1 + 8, &v9);
      *(_QWORD *)a1 = 1LL;
      return result;
    }
    goto LABEL_10;
  }
  *(_OWORD *)(a1 + 16) = v11;
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}