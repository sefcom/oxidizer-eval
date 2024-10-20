_OWORD *__fastcall uu_touch::parse_timestamp::{{closure}}(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  _OWORD *result; // rax
  __int128 v4; // xmm0
  __int128 v5; // [rsp+0h] [rbp-88h] BYREF
  __int128 v6; // [rsp+10h] [rbp-78h]
  __int64 v7; // [rsp+20h] [rbp-68h]
  _QWORD v8[2]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v9[3]; // [rsp+48h] [rbp-40h] BYREF
  char v10; // [rsp+60h] [rbp-28h]
  __int128 v11; // [rsp+68h] [rbp-20h] BYREF
  __int64 v12; // [rsp+78h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 || (v2 = *(_QWORD *)(a1 + 16), v2 < 0) )
    core::panicking::panic_nounwind(anon_3c49abdde3b3fdf25b1dcaa21df94cd5_60_llvm_2806096261713610274, 162LL);
  v9[0] = 0LL;
  v9[1] = v1;
  v9[2] = v2;
  v10 = 1;
  v8[0] = v9;
  v8[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v5 = &anon_3a697c587a5181cf7f4f3636b00cd118_144_llvm_1028874120538859734;
  *((_QWORD *)&v5 + 1) = 1LL;
  *(_QWORD *)&v6 = v8;
  *((_QWORD *)&v6 + 1) = 1LL;
  v7 = 0LL;
  alloc::fmt::format::format_inner(&v11, &v5);
  *(_QWORD *)&v6 = v12;
  v5 = v11;
  DWORD2(v6) = 1;
  result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v4 = v5;
  result[1] = v6;
  *result = v4;
  return result;
}
