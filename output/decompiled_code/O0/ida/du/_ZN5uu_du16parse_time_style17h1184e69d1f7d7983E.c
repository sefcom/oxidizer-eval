__int64 *__fastcall uu_du::parse_time_style(__int64 *a1, unsigned __int8 *a2, size_t a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  void *v6; // r13
  _OWORD *v7; // rax
  __int128 v9; // [rsp+8h] [rbp-60h]
  __int128 v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  void *dest; // [rsp+38h] [rbp-30h]

  if ( !a2 )
    goto LABEL_6;
  if ( a3 == 3 )
  {
    if ( !(*(_WORD *)a2 ^ 0x7369 | a2[2] ^ 0x6F) )
    {
      a1[1] = (__int64)aYMD;
      a1[2] = 8LL;
      goto LABEL_7;
    }
  }
  else if ( a3 == 8 )
  {
    if ( *(_QWORD *)a2 == 0x6F73692D6C6C7566LL )
    {
      a1[1] = (__int64)aYMDHMSFZ;
      a1[2] = 23LL;
      goto LABEL_7;
    }
    if ( *(_QWORD *)a2 == 0x6F73692D676E6F6CLL )
    {
LABEL_6:
      a1[1] = (__int64)aYMDHM_0;
      a1[2] = 14LL;
LABEL_7:
      v4 = 0LL;
      goto LABEL_12;
    }
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v11, a3, 0LL);
  v5 = v12;
  if ( v11 )
    alloc::raw_vec::handle_error(v12, dest);
  v6 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest, 1LL, 1LL, a3);
  memcpy(v6, a2, a3);
  *((_QWORD *)&v9 + 1) = v5;
  *(_QWORD *)&v10 = v6;
  *((_QWORD *)&v10 + 1) = a3;
  *(_QWORD *)&v9 = 2LL;
  v7 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v7 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v7[1] = v10;
  *v7 = v9;
  a1[1] = (__int64)v7;
  a1[2] = (__int64)&anon_225405b512d7025d7ce7fe63a55e8a3e_26_llvm_8356168335732365941;
  v4 = 1LL;
LABEL_12:
  *a1 = v4;
  return a1;
}
