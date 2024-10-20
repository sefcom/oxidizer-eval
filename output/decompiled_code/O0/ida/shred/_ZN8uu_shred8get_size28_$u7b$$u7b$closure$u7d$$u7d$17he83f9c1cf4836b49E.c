__int64 __fastcall uu_shred::get_size::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  _OWORD v6[2]; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v7; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v8; // [rsp+30h] [rbp-A8h]
  _QWORD v9[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp-88h] BYREF
  char v11; // [rsp+68h] [rbp-70h]
  _QWORD v12[4]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v13; // [rsp+90h] [rbp-48h]
  char v14; // [rsp+92h] [rbp-46h]
  _QWORD v15[8]; // [rsp+98h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 || (v4 = *(_QWORD *)(a1 + 16), v4 < 0) )
    core::panicking::panic_nounwind(anon_1156bcafcecadbcb9b54fc5fb398738e_32_llvm_17080358467769226562, 162LL, a3);
  v13 = 0;
  v14 = 0;
  v12[0] = 0LL;
  v12[2] = 0LL;
  uucore::parser::parse_size::Parser::parse(&v7, v12, v3, v4);
  if ( (_QWORD)v7 == 3LL )
  {
    if ( !*((_QWORD *)&v8 + 1) )
      return 1LL;
    v10[0] = 0LL;
    v10[1] = v3;
    v10[2] = v4;
    v11 = 1;
    v9[0] = v10;
    v9[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v15[0] = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
    v15[1] = 2LL;
    v15[2] = v9;
    v15[3] = 1LL;
    v15[4] = 0LL;
    alloc::fmt::format::format_inner((char *)v6 + 8, v15);
    *(_QWORD *)&v6[0] = 2LL;
  }
  else
  {
    v6[0] = v7;
    v6[1] = v8;
  }
  ((void (__fastcall *)(_OWORD *))core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>)(v6);
  return 0LL;
}
