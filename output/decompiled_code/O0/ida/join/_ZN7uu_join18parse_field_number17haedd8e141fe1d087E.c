__int64 *__fastcall uu_join::parse_field_number(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  _BYTE v9[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-A0h]
  _QWORD v11[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v12[3]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-70h] BYREF
  char v14; // [rsp+50h] [rbp-58h]
  _QWORD v15[10]; // [rsp+58h] [rbp-50h] BYREF

  core::num::<impl core::str::traits::FromStr for usize>::from_str(v9);
  if ( (v9[0] & 1) != 0 )
  {
    if ( v9[1] == 2 )
    {
      a1[1] = -1LL;
      *a1 = 0LL;
      return a1;
    }
  }
  else if ( v10 )
  {
    a1[1] = v10 - 1;
    *a1 = 0LL;
    return a1;
  }
  v13[0] = 0LL;
  v13[1] = a2;
  v13[2] = a3;
  v14 = 1;
  v11[0] = v13;
  v11[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v15[0] = &off_131430;
  v15[1] = 1LL;
  v15[2] = v11;
  v15[3] = 1LL;
  v15[4] = 0LL;
  alloc::fmt::format::format_inner(v12, v15);
  v4 = v12[0];
  v5 = v12[1];
  v6 = v12[2];
  v7 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v7 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *(_QWORD *)v7 = v4;
  *(_QWORD *)(v7 + 8) = v5;
  *(_QWORD *)(v7 + 16) = v6;
  *(_DWORD *)(v7 + 24) = 1;
  *a1 = v7;
  a1[1] = (__int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
  return a1;
}
