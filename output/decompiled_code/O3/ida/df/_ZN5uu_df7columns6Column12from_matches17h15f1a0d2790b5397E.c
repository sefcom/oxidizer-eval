__int64 __fastcall uu_df::columns::Column::from_matches(__int64 a1, __int64 a2)
{
  char flag; // r15
  char v4; // bp
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v13; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-F0h]
  __int64 v15; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-E0h]
  __int64 v17; // [rsp+20h] [rbp-D8h]
  __int128 v18; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C0h]
  __int128 v20; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-A8h]
  __int128 v22; // [rsp+60h] [rbp-98h]
  __int128 v23; // [rsp+70h] [rbp-88h]
  _OWORD v24[7]; // [rsp+80h] [rbp-78h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_85076f12318d60a2ab8851d375b85267_17_llvm_15128465655211971851,
           10LL);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         a2,
         anon_85076f12318d60a2ab8851d375b85267_8_llvm_15128465655211971851,
         6LL);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
         a2,
         anon_85076f12318d60a2ab8851d375b85267_12_llvm_15128465655211971851,
         6LL);
  if ( v5 == 3 )
  {
    if ( flag )
    {
      if ( !v4 )
      {
LABEL_17:
        v6 = alloc::alloc::Global::alloc_impl(7LL);
        if ( v6 )
        {
          *(_DWORD *)v6 = 33622784;
          *(_WORD *)(v6 + 4) = 1027;
          goto LABEL_19;
        }
        goto LABEL_34;
      }
LABEL_8:
      v6 = alloc::alloc::Global::alloc_impl(7LL);
      if ( v6 )
      {
        *(_DWORD *)v6 = 117836544;
        *(_WORD *)(v6 + 4) = 2312;
LABEL_19:
        *(_BYTE *)(v6 + 6) = 5;
        v7 = a1 + 8;
        v8 = 7LL;
LABEL_29:
        alloc::slice::hack::into_vec(v7, v6, v8);
        *(_QWORD *)a1 = 0LL;
        return a1;
      }
LABEL_34:
      alloc::alloc::handle_alloc_error(1LL, 7LL);
    }
    if ( !v4 )
    {
LABEL_26:
      v6 = alloc::alloc::Global::alloc_impl(6LL);
      if ( v6 )
      {
        *(_DWORD *)v6 = 50462976;
        *(_WORD *)(v6 + 4) = 1284;
        goto LABEL_28;
      }
      goto LABEL_35;
    }
LABEL_14:
    v6 = alloc::alloc::Global::alloc_impl(6LL);
    if ( v6 )
    {
      *(_DWORD *)v6 = 134678016;
      *(_WORD *)(v6 + 4) = 1289;
LABEL_28:
      v7 = a1 + 8;
      v8 = 6LL;
      goto LABEL_29;
    }
LABEL_35:
    alloc::alloc::handle_alloc_error(1LL, 6LL);
  }
  if ( flag )
  {
    if ( v4 )
    {
      if ( v5 != 2 )
        goto LABEL_8;
    }
    else if ( v5 != 2 )
    {
      goto LABEL_17;
    }
    goto LABEL_36;
  }
  if ( v4 )
  {
    if ( v5 != 2 )
      goto LABEL_14;
LABEL_36:
    core::panicking::panic(aInternalErrorE_4, 40LL, &off_141F20);
  }
  if ( v5 != 2 )
    goto LABEL_26;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    v24,
    a2,
    anon_85076f12318d60a2ab8851d375b85267_12_llvm_15128465655211971851,
    6LL);
  clap_builder::parser::error::MatchesError::unwrap(
    &v20,
    anon_85076f12318d60a2ab8851d375b85267_12_llvm_15128465655211971851,
    6LL,
    v24);
  if ( !(_QWORD)v20 )
    core::option::unwrap_failed(&off_141EF0);
  v24[3] = v23;
  v24[2] = v22;
  v24[1] = v21;
  v24[0] = v20;
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  *((_QWORD *)&v18 + 1) = 1LL;
  v19 = 0LL;
  while ( 1 )
  {
    v9 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v24);
    if ( !v9 )
    {
      *(_QWORD *)(a1 + 24) = v19;
      *(_OWORD *)(a1 + 8) = v18;
      *(_QWORD *)a1 = 0LL;
      goto LABEL_33;
    }
    v13 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(
            *(_QWORD *)(v9 + 8),
            *(_QWORD *)(v9 + 16));
    v14 = v10;
    if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v13, v16, v17) )
      break;
    alloc::vec::Vec<T,A>::push(&v15, v13, v14);
    v11 = (unsigned __int8)uu_df::columns::Column::parse(v13, v14);
    core::result::Result<T,E>::unwrap(v11);
    alloc::vec::Vec<T,A>::push(&v18, (unsigned int)v11);
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v20, v13, v14);
  *(_QWORD *)(a1 + 24) = v21;
  *(_OWORD *)(a1 + 8) = v20;
  *(_QWORD *)a1 = 1LL;
  core::ptr::drop_in_place<alloc::vec::Vec<uu_df::columns::Column>>(&v18);
LABEL_33:
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v15);
  return a1;
}
