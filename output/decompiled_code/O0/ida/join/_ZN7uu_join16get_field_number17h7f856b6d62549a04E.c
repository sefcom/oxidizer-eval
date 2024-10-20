__int64 *__fastcall uu_join::get_field_number(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v12; // [rsp+0h] [rbp-98h] BYREF
  __int64 v13; // [rsp+8h] [rbp-90h] BYREF
  _QWORD v14[3]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v15[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v16[10]; // [rsp+48h] [rbp-50h] BYREF

  if ( a2 != 1 )
  {
    if ( !a4 )
      a5 = 0LL;
    a1[1] = a5;
    goto LABEL_12;
  }
  if ( a4 != 1 || a3 == a5 )
  {
    a1[1] = a3;
LABEL_12:
    *a1 = 0LL;
    return a1;
  }
  v5 = a3 + 1;
  if ( !v5 )
    core::panicking::panic_const::panic_const_add_overflow(&off_131400);
  v12 = v5;
  v6 = a5 + 1;
  if ( !v6 )
    core::panicking::panic_const::panic_const_add_overflow(&off_131418);
  v13 = v6;
  v15[0] = &v12;
  v15[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v15[2] = &v13;
  v15[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v16[0] = &off_1313E0;
  v16[1] = 2LL;
  v16[2] = v15;
  v16[3] = 2LL;
  v16[4] = 0LL;
  alloc::fmt::format::format_inner(v14, v16);
  v7 = v14[0];
  v8 = v14[1];
  v9 = v14[2];
  v10 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v10 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *(_QWORD *)v10 = v7;
  *(_QWORD *)(v10 + 8) = v8;
  *(_QWORD *)(v10 + 16) = v9;
  *(_DWORD *)(v10 + 24) = 1;
  *a1 = v10;
  a1[1] = (__int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
  return a1;
}
