__int64 __fastcall uu_env::string_expander::StringExpander::put_one_char(__int64 a1, unsigned int a2)
{
  const void *v2; // r15
  size_t v3; // rdx
  size_t v4; // r14
  __int64 v5; // r12
  void *v6; // r13
  int v8; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v9; // [rsp+10h] [rbp-58h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  void *dest; // [rsp+20h] [rbp-48h]
  _QWORD v12[8]; // [rsp+28h] [rbp-40h] BYREF

  v8 = 0;
  v2 = (const void *)core::char::methods::encode_utf8_raw(a2, &v8, 4LL);
  v4 = v3;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, v3, 0LL);
  v5 = v10;
  if ( v9 )
    alloc::raw_vec::handle_error(v10, dest);
  v6 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v2, dest, 1LL, 1LL, v4);
  memcpy(v6, v2, v4);
  v12[0] = v5;
  v12[1] = v6;
  v12[2] = v4;
  return uu_env::string_expander::StringExpander::put_string(a1, v12);
}
