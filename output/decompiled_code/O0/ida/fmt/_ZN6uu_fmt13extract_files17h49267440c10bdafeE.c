__int64 __fastcall uu_fmt::extract_files(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // r15
  _BYTE *v6; // r12
  void (__fastcall **v7)(_QWORD); // rax
  void (__fastcall *v8)(_QWORD); // rsi
  bool v10; // [rsp+6h] [rbp-1D2h] BYREF
  char v11; // [rsp+7h] [rbp-1D1h] BYREF
  __int128 v12; // [rsp+8h] [rbp-1D0h] BYREF
  void (__fastcall **v13)(_QWORD); // [rsp+18h] [rbp-1C0h]
  _QWORD v14[2]; // [rsp+20h] [rbp-1B8h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-1A8h] BYREF
  _QWORD v16[6]; // [rsp+50h] [rbp-188h] BYREF
  _BYTE v17[72]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-110h]
  __int64 v19; // [rsp+108h] [rbp-D0h]
  __int64 v20; // [rsp+148h] [rbp-90h]
  char *v21; // [rsp+150h] [rbp-88h]
  bool *v22; // [rsp+158h] [rbp-80h]
  __int64 v23; // [rsp+168h] [rbp-70h] BYREF
  __int128 v24; // [rsp+170h] [rbp-68h]
  __int128 v25; // [rsp+180h] [rbp-58h]
  __int128 v26; // [rsp+190h] [rbp-48h]
  __int128 v27; // [rsp+1A0h] [rbp-38h]

  v2 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a2, aFiles, 5LL, &off_114638);
  v10 = v2 != 0 && v3 == 1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v23, a2, aFiles, 5LL);
  v14[0] = aFiles;
  v14[1] = 5LL;
  if ( v23 )
  {
    *(_OWORD *)&v17[48] = v27;
    *(_OWORD *)&v17[32] = v26;
    *(_OWORD *)&v17[16] = v25;
    *(_OWORD *)v17 = v24;
    v15[0] = v14;
    v15[1] = <&T as core::fmt::Display>::fmt;
    v15[2] = v17;
    v15[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v16[0] = &anon_295321c1b9ac16da4afd3a0029311bec_6_llvm_7620956122088650080;
    v16[1] = 2LL;
    v16[4] = 0LL;
    v16[2] = v15;
    v16[3] = 2LL;
    core::panicking::panic_fmt(v16, &off_114650);
  }
  *(_OWORD *)&v17[56] = v27;
  *(_OWORD *)&v17[40] = v26;
  *(_OWORD *)&v17[24] = v25;
  *(_OWORD *)&v17[8] = v24;
  *(_QWORD *)v17 = 1LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = &v11;
  v22 = &v10;
  core::iter::adapters::try_process(&v12, v17);
  if ( (_QWORD)v12 == 0x8000000000000000LL || v13 )
  {
    *(_QWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
  }
  else
  {
    v4 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v17, 1LL, 0LL);
    v5 = *(_QWORD *)&v17[8];
    if ( *(_QWORD *)v17 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v17[8], *(_QWORD *)&v17[16]);
    v6 = *(_BYTE **)&v17[16];
    core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1F9B9, *(_QWORD *)&v17[16], 1LL, 1LL, 1LL);
    *v6 = 45;
    if ( (v4 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v4, &off_114668);
    *(_QWORD *)v4 = v5;
    *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)(v4 + 16) = 1LL;
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = 1LL;
    if ( (_QWORD)v12 == 0x8000000000000000LL )
    {
      v7 = v13;
      if ( *v13 )
      {
        (*v13)(*((_QWORD *)&v12 + 1));
        v7 = v13;
      }
      v8 = v7[1];
      if ( v8 )
        _rust_dealloc(*((_QWORD *)&v12 + 1), v8, v7[2]);
    }
    else
    {
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v12);
    }
  }
  return a1;
}
