_QWORD *__fastcall uu_dd::parseargs::parse_bytes_only(_QWORD *a1, char *a2, size_t a3, size_t a4)
{
  __int64 v5; // r12
  void *v6; // r13
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  void *dest; // [rsp+18h] [rbp-40h]
  _BYTE v11[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]

  if ( a4 )
  {
    if ( a4 >= a3 )
    {
      if ( a4 != a3 )
        goto LABEL_13;
    }
    else if ( a2[a4] < -64 )
    {
      goto LABEL_13;
    }
  }
  if ( a4 > a3 )
    core::panicking::panic_nounwind(anon_ff765ffa8c564fe4079308b568cc8f06_8_llvm_17873003023693898768, 102LL);
  if ( !a2 )
LABEL_13:
    core::str::slice_error_fail(a2, a3, 0LL, a4, &off_1445E0);
  core::num::<impl core::str::traits::FromStr for u64>::from_str(v11, a2, a4);
  if ( (v11[0] & 1) != 0 )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v8, a3, 0LL);
    v5 = v9;
    if ( v8 )
      alloc::raw_vec::handle_error(v9, dest);
    v6 = dest;
    core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest, 1LL, 1LL, a3);
    memcpy(v6, a2, a3);
    *a1 = 7LL;
    a1[1] = v5;
    a1[2] = v6;
    a1[3] = a3;
  }
  else
  {
    a1[1] = v12;
    *a1 = 14LL;
  }
  return a1;
}
