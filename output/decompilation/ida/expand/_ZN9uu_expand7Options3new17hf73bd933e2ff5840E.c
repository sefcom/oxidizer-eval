__int64 __fastcall uu_expand::Options::new(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int128 v4; // kr00_16
  __int64 v5; // rcx
  char v6; // di
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  char v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r15
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r12
  __int128 v18; // xmm0
  char flag; // [rsp+3h] [rbp-155h]
  char v21; // [rsp+4h] [rbp-154h]
  int v22; // [rsp+Bh] [rbp-14Dh]
  __int64 v23; // [rsp+10h] [rbp-148h]
  __int64 v24; // [rsp+18h] [rbp-140h]
  __int128 v25; // [rsp+20h] [rbp-138h] BYREF
  __int128 v26; // [rsp+30h] [rbp-128h]
  __int128 v27; // [rsp+40h] [rbp-118h]
  __int64 v28; // [rsp+68h] [rbp-F0h]
  __int128 v29; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+80h] [rbp-D8h]
  __int64 v31; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+98h] [rbp-C0h]
  __int64 v33; // [rsp+A0h] [rbp-B8h]
  _QWORD v34[8]; // [rsp+A8h] [rbp-B0h] BYREF
  _QWORD v35[14]; // [rsp+E8h] [rbp-70h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v25, a2, &unk_17E98, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(v34, &unk_17E98, 4LL, &v25);
  if ( v34[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v31, v34);
    v3 = v32;
    alloc::str::join_generic_copy(&v29, v32, v33);
    v4 = v29;
    uu_expand::tabstops_parse((__int64)&v25, *((__int64 *)&v29 + 1), v30);
    v5 = v25;
    v6 = BYTE8(v25);
    if ( (_QWORD)v25 != 0x8000000000000006LL )
    {
      v22 = HIDWORD(v25);
      LOBYTE(v22) = BYTE12(v25);
      v13 = v26;
      v14 = v27;
      v15 = *(_DWORD *)((char *)&v25 + 9);
      *(_DWORD *)(a1 + 20) = v22;
      *(_DWORD *)(a1 + 17) = v15;
      *(_QWORD *)(a1 + 8) = v5;
      *(_BYTE *)(a1 + 16) = v6;
      *(_OWORD *)(a1 + 24) = v13;
      *(_OWORD *)(a1 + 40) = v14;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(v4, *((_QWORD *)&v4 + 1));
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v31, v3);
      return a1;
    }
    v21 = BYTE8(v25);
    v7 = (_QWORD *)*((_QWORD *)&v26 + 1);
    v23 = v26;
    v24 = v27;
    core::ptr::drop_in_place<alloc::string::String>(v4, *((_QWORD *)&v4 + 1));
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v31, v3);
  }
  else
  {
    v8 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
    if ( !v8 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v7 = v8;
    *v8 = 8LL;
    v23 = 1LL;
    v21 = 0;
    v24 = 1LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aInitial, 7LL);
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoUtf8, 7LL);
  *(_QWORD *)&v25 = v7;
  *((_QWORD *)&v25 + 1) = &v7[v24];
  *(_QWORD *)&v26 = 0LL;
  if ( (core::iter::traits::iterator::Iterator::reduce(&v25) & 1) == 0 )
    core::option::unwrap_failed(&off_E8878);
  alloc::slice::<impl [T]>::repeat(&v25, v10);
  v28 = *((_QWORD *)&v25 + 1);
  v11 = v25;
  v12 = v26;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v25, a2, aFiles, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(v35, aFiles, 5LL, &v25);
  if ( v35[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v25, v35);
  }
  else
  {
    v16 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v16 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v17 = v16;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v25, asc_19538, 1LL);
    v30 = v26;
    v18 = v25;
    v29 = v25;
    *(_QWORD *)(v17 + 16) = v26;
    *(_OWORD *)v17 = v18;
    *(_QWORD *)&v25 = 1LL;
    *((_QWORD *)&v25 + 1) = v17;
    *(_QWORD *)&v26 = 1LL;
  }
  *(_QWORD *)(a1 + 16) = v26;
  *(_OWORD *)a1 = v25;
  *(_QWORD *)(a1 + 24) = v23;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = v24;
  *(_QWORD *)(a1 + 48) = v11;
  *(_QWORD *)(a1 + 56) = v28;
  *(_QWORD *)(a1 + 64) = v12;
  *(_BYTE *)(a1 + 72) = flag;
  *(_BYTE *)(a1 + 73) = v9 ^ 1;
  *(_BYTE *)(a1 + 74) = v21;
  return a1;
}