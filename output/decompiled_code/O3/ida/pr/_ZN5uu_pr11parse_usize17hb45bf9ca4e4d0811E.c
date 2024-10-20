__int64 __fastcall uu_pr::parse_usize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v6; // kr00_16
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned __int64 v9; // r13
  __int64 (__fastcall *v10)(); // r12
  __int128 v11; // [rsp+0h] [rbp-118h] BYREF
  __int64 v12; // [rsp+10h] [rbp-108h]
  __int128 v13; // [rsp+20h] [rbp-F8h] BYREF
  __int128 *v14; // [rsp+30h] [rbp-E8h]
  __int64 v15; // [rsp+38h] [rbp-E0h]
  __int64 v16; // [rsp+40h] [rbp-D8h]
  __int128 v17; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+68h] [rbp-B0h]
  __int64 v19; // [rsp+78h] [rbp-A0h]
  __int128 *v20; // [rsp+80h] [rbp-98h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+88h] [rbp-90h] BYREF
  __int128 v22; // [rsp+90h] [rbp-88h]
  __int128 v23; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-68h]
  __int64 v25; // [rsp+C0h] [rbp-58h]
  _QWORD v26[2]; // [rsp+C8h] [rbp-50h] BYREF
  char v27[8]; // [rsp+D8h] [rbp-40h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+E0h] [rbp-38h]

  v26[0] = a3;
  v26[1] = a4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17);
  *(_QWORD *)&v11 = a3;
  *((_QWORD *)&v11 + 1) = a4;
  if ( (_DWORD)v17 != 2 )
  {
    v25 = v19;
    v24 = v18;
    v23 = v17;
    v20 = &v11;
    v21 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v22 = &v23;
    *((_QWORD *)&v22 + 1) = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v13 = &anon_738dbce44c425ccf35b71d256670a2a3_4_llvm_4701133728070249347;
    *((_QWORD *)&v13 + 1) = 2LL;
    v16 = 0LL;
    v14 = (__int128 *)&v20;
    v15 = 2LL;
    core::panicking::panic_fmt(&v13, &anon_738dbce44c425ccf35b71d256670a2a3_6_llvm_4701133728070249347);
  }
  if ( *((_QWORD *)&v17 + 1) )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v17, *((_QWORD *)&v17 + 1));
    v20 = (__int128 *)v26;
    v21 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v13 = &off_28EA40;
    *((_QWORD *)&v13 + 1) = 1LL;
    v16 = 0LL;
    v14 = (__int128 *)&v20;
    v15 = 1LL;
    alloc::fmt::format::format_inner(&v23, &v13);
    v6 = v17;
    v7 = v18;
    v12 = v24;
    v11 = v23;
    result = core::num::<impl core::str::traits::FromStr for usize>::from_str(v27, *((_QWORD *)&v17 + 1), v18);
    if ( v27[0] )
    {
      *(_QWORD *)&v23 = 0LL;
      *((_QWORD *)&v23 + 1) = *((_QWORD *)&v6 + 1);
      *(_QWORD *)&v24 = v7;
      BYTE8(v24) = 1;
      *(_QWORD *)&v17 = &v11;
      *((_QWORD *)&v17 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v18 = &v23;
      *((_QWORD *)&v18 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v13 = &off_28EA20;
      *((_QWORD *)&v13 + 1) = 2LL;
      v16 = 0LL;
      v14 = &v17;
      v15 = 2LL;
      result = alloc::fmt::format::format_inner(&v21, &v13);
      v9 = 0x8000000000000001LL;
      v10 = v21;
      v13 = v22;
    }
    else
    {
      v10 = v28;
      v9 = 0x8000000000000005LL;
    }
    if ( (_QWORD)v11 )
      result = _rust_dealloc(*((_QWORD *)&v11 + 1), v11, 1LL);
    if ( (_QWORD)v6 )
      result = _rust_dealloc(*((_QWORD *)&v6 + 1), v6, 1LL);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v10;
    *(_OWORD *)(a1 + 16) = v13;
  }
  else
  {
    result = 0x8000000000000006LL;
    *(_QWORD *)a1 = 0x8000000000000006LL;
  }
  return result;
}
