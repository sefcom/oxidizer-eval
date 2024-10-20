__int64 __fastcall uu_pr::parse_usize::{{closure}}(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-C8h]
  _BYTE v13[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-B0h]
  _QWORD v15[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v16[3]; // [rsp+50h] [rbp-88h] BYREF
  char v17; // [rsp+68h] [rbp-70h]
  __int128 v18; // [rsp+70h] [rbp-68h] BYREF
  __int64 v19; // [rsp+80h] [rbp-58h]
  _QWORD v20[10]; // [rsp+88h] [rbp-50h] BYREF

  v3 = *a3;
  v4 = a3[1];
  v5 = a3[2];
  v12 = a3[5];
  v11 = *(_OWORD *)(a3 + 3);
  if ( !v4 || v5 < 0 )
    core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v13, v4, v5);
  if ( (v13[0] & 1) != 0 )
  {
    v16[0] = 0LL;
    v16[1] = v4;
    v16[2] = v5;
    v17 = 1;
    v15[0] = &v11;
    v15[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v15[2] = v16;
    v15[3] = <os_display::Quoted as core::fmt::Display>::fmt;
    v20[0] = &anon_7c75ec29d226220b36fc1f3bbd3b01ef_76_llvm_17389174869910011146;
    v20[1] = 2LL;
    v20[2] = v15;
    v20[3] = 2LL;
    v20[4] = 0LL;
    alloc::fmt::format::format_inner(&v18, v20, v6, v7, v8, v9);
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_OWORD *)(a1 + 8) = v18;
    *(_QWORD *)(a1 + 24) = v19;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = 0x8000000000000005LL;
  }
  if ( (_QWORD)v11 )
    _rust_dealloc(*((_QWORD *)&v11 + 1), v11, 1LL);
  if ( v3 )
    _rust_dealloc(v4, v3, 1LL);
  return a1;
}
