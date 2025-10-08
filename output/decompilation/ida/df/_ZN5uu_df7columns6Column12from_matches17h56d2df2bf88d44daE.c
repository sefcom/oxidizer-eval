__int64 __fastcall uu_df::columns::Column::from_matches(_QWORD *a1, __int64 a2)
{
  char flag; // r15
  char v3; // bp
  char v4; // al
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-F0h]
  __int64 v12; // [rsp+10h] [rbp-E8h]
  __int128 v13; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D0h]
  __int64 v15; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C0h]
  __int128 v17; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-A8h]
  __int128 v19; // [rsp+60h] [rbp-98h]
  __int128 v20; // [rsp+70h] [rbp-88h]
  _OWORD v21[7]; // [rsp+80h] [rbp-78h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPrintType, 10LL);
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aInodes_0, 6LL);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a2, aOutput, 6LL);
  if ( v4 == 3 )
  {
    if ( flag )
    {
      if ( !v3 )
      {
LABEL_17:
        result = alloc::alloc::Global::alloc_impl(1LL, 7LL);
        if ( result )
        {
          *(_DWORD *)result = 33622784;
          *(_WORD *)(result + 4) = 1027;
          goto LABEL_19;
        }
        goto LABEL_33;
      }
LABEL_8:
      result = alloc::alloc::Global::alloc_impl(1LL, 7LL);
      if ( result )
      {
        *(_DWORD *)result = 117836544;
        *(_WORD *)(result + 4) = 2312;
LABEL_19:
        *(_BYTE *)(result + 6) = 5;
        a1[1] = 7LL;
        a1[2] = result;
        a1[3] = 7LL;
LABEL_29:
        *a1 = 0LL;
        return result;
      }
LABEL_33:
      alloc::alloc::handle_alloc_error(1LL, 7LL);
    }
    if ( !v3 )
    {
LABEL_26:
      result = alloc::alloc::Global::alloc_impl(1LL, 6LL);
      if ( result )
      {
        *(_DWORD *)result = 50462976;
        *(_WORD *)(result + 4) = 1284;
        goto LABEL_28;
      }
      goto LABEL_34;
    }
LABEL_14:
    result = alloc::alloc::Global::alloc_impl(1LL, 6LL);
    if ( result )
    {
      *(_DWORD *)result = 134678016;
      *(_WORD *)(result + 4) = 1289;
LABEL_28:
      a1[1] = 6LL;
      a1[2] = result;
      a1[3] = 6LL;
      goto LABEL_29;
    }
LABEL_34:
    alloc::alloc::handle_alloc_error(1LL, 6LL);
  }
  if ( flag )
  {
    if ( v3 )
    {
      if ( v4 != 2 )
        goto LABEL_8;
    }
    else if ( v4 != 2 )
    {
      goto LABEL_17;
    }
    goto LABEL_35;
  }
  if ( v3 )
  {
    if ( v4 != 2 )
      goto LABEL_14;
LABEL_35:
    core::panicking::panic(aInternalErrorE, 40LL, &off_102E80);
  }
  if ( v4 != 2 )
    goto LABEL_26;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v21, a2);
  clap_builder::parser::error::MatchesError::unwrap(&v17, v21);
  if ( !(_QWORD)v17 )
    core::option::unwrap_failed(&off_102E20);
  v21[3] = v20;
  v21[2] = v19;
  v21[1] = v18;
  v21[0] = v17;
  v10 = 0LL;
  v11 = 8LL;
  v12 = 0LL;
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = 1LL;
  v14 = 0LL;
  while ( 1 )
  {
    v6 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v21);
    if ( !v6 )
    {
      a1[3] = v14;
      *(_OWORD *)(a1 + 1) = v13;
      *a1 = 0LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v10, v11);
    }
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_QWORD *)(v6 + 16);
    v15 = v7;
    v16 = v8;
    if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v15, v11, v12) )
      break;
    alloc::vec::Vec<T,A>::push(&v10, v7, v8);
    v9 = (unsigned __int8)uu_df::columns::Column::parse(v15, v16);
    core::result::Result<T,E>::unwrap(v9);
    alloc::vec::Vec<T,A>::push(&v13, (unsigned int)v9);
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v17, v7, v8);
  a1[3] = v18;
  *(_OWORD *)(a1 + 1) = v17;
  *a1 = 1LL;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v13, *((_QWORD *)&v13 + 1));
  return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v10, v11);
}