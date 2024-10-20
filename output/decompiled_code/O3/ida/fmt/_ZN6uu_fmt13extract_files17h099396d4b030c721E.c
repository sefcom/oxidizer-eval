__int64 __fastcall uu_fmt::extract_files(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rax
  _QWORD *v14; // r14
  _BYTE *v15; // rax
  char v17; // [rsp+6h] [rbp-1D2h] BYREF
  char v18; // [rsp+7h] [rbp-1D1h] BYREF
  _QWORD v19[2]; // [rsp+8h] [rbp-1D0h] BYREF
  _QWORD v20[4]; // [rsp+18h] [rbp-1C0h] BYREF
  _BYTE v21[24]; // [rsp+38h] [rbp-1A0h] BYREF
  __int128 v22; // [rsp+50h] [rbp-188h]
  __int128 v23; // [rsp+60h] [rbp-178h]
  __int128 v24; // [rsp+70h] [rbp-168h]
  _QWORD v25[6]; // [rsp+80h] [rbp-158h] BYREF
  _OWORD v26[2]; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-108h]
  __int64 v28; // [rsp+E0h] [rbp-F8h] BYREF
  __int128 v29; // [rsp+E8h] [rbp-F0h]
  __int128 v30; // [rsp+F8h] [rbp-E0h]
  __int128 v31; // [rsp+108h] [rbp-D0h]
  __int128 v32; // [rsp+118h] [rbp-C0h]
  __int64 v33; // [rsp+128h] [rbp-B0h]
  __int64 v34; // [rsp+168h] [rbp-70h]
  __int64 v35; // [rsp+1A8h] [rbp-30h]
  char *v36; // [rsp+1B0h] [rbp-28h]
  char *v37; // [rsp+1B8h] [rbp-20h]

  v7 = a2[2];
  if ( !v7 )
    goto LABEL_9;
  v8 = a2[1];
  v9 = 16 * v7;
  a4 = 40LL;
  a5 = 0LL;
  a6 = 1701603686LL;
  v10 = 0LL;
  while ( *(_QWORD *)(v8 + a5 + 8) != 5LL
       || **(_DWORD **)(v8 + a5) ^ 0x656C6966 | *(unsigned __int8 *)(*(_QWORD *)(v8 + a5) + 4LL) ^ 0x73 )
  {
    a5 += 16LL;
    a4 += 104LL;
    ++v10;
    if ( v9 == a5 )
      goto LABEL_9;
  }
  if ( v10 >= a2[5] )
    core::panicking::panic_bounds_check(
      v10,
      a2[5],
      &anon_5d6badf10189338a3ffb789956d87464_19_llvm_3367172405336725456,
      a4);
  v11 = a2[4];
  if ( *(_QWORD *)(v11 + a4) )
  {
    LOBYTE(a4) = **(_QWORD **)(v11 + a4 - 8) == 1LL;
    v12 = 1;
  }
  else
  {
LABEL_9:
    v12 = 0;
  }
  v17 = v12 & a4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v21, a2, aFiles, 5LL, a5, a6);
  v19[0] = aFiles;
  v19[1] = 5LL;
  if ( *(_QWORD *)v21 )
  {
    v27 = v23;
    v26[1] = v22;
    v26[0] = *(_OWORD *)&v21[8];
    v20[0] = v19;
    v20[1] = <&T as core::fmt::Display>::fmt;
    v20[2] = v26;
    v20[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v25[0] = &anon_0313aafc768b88f41319cb91f569aaf5_4_llvm_15847019968616179910;
    v25[1] = 2LL;
    v25[4] = 0LL;
    v25[2] = v20;
    v25[3] = 2LL;
    core::panicking::panic_fmt(v25, &anon_0313aafc768b88f41319cb91f569aaf5_6_llvm_15847019968616179910);
  }
  v32 = v24;
  v31 = v23;
  v30 = v22;
  v29 = *(_OWORD *)&v21[8];
  v28 = 1LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = &v18;
  v37 = &v17;
  core::iter::adapters::try_process(v21, &v28);
  if ( *(_QWORD *)v21 == 0x8000000000000000LL || *(_QWORD *)&v21[16] )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v21[16];
    *(_OWORD *)a1 = *(_OWORD *)v21;
  }
  else
  {
    v13 = _rust_alloc(24LL, 8LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v14 = (_QWORD *)v13;
    v15 = (_BYTE *)_rust_alloc(1LL, 1LL);
    if ( !v15 )
      alloc::raw_vec::handle_error(1LL, 1LL);
    *v15 = 45;
    *v14 = 1LL;
    v14[1] = v15;
    v14[2] = 1LL;
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 16) = 1LL;
    core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<alloc::string::String>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v21);
  }
  return a1;
}
