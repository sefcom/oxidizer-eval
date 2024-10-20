__int64 *__fastcall uu_du::parse_depth(__int64 *a1, const void *a2, size_t a3, char a4)
{
  __int64 v4; // rax
  __int64 v7; // r12
  void *v8; // r13
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // r13
  __int64 v16; // [rsp+0h] [rbp-88h] BYREF
  __int64 v17; // [rsp+8h] [rbp-80h]
  void *dest; // [rsp+10h] [rbp-78h]
  __int128 v19; // [rsp+18h] [rbp-70h]
  __int128 v20; // [rsp+28h] [rbp-60h]
  __int128 v21; // [rsp+38h] [rbp-50h]
  __int128 v22; // [rsp+48h] [rbp-40h]

  if ( a2 )
  {
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v16);
    if ( a4 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v16, a3, 0LL);
      v7 = v17;
      if ( !v16 )
      {
        v8 = dest;
        core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest, 1LL, 1LL, a3);
        memcpy(v8, a2, a3);
        *((_QWORD *)&v19 + 1) = v7;
        *(_QWORD *)&v20 = v8;
        *((_QWORD *)&v20 + 1) = a3;
        *(_QWORD *)&v19 = 1LL;
        v9 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v9 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v10 = v19;
        v11 = v20;
LABEL_13:
        v9[1] = v11;
        *v9 = v10;
        a1[1] = (__int64)v9;
        a1[2] = (__int64)&anon_225405b512d7025d7ce7fe63a55e8a3e_26_llvm_8356168335732365941;
        v13 = 1LL;
        goto LABEL_14;
      }
      goto LABEL_15;
    }
    if ( (v16 & 1) != 0 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v16, a3, 0LL);
      v7 = v17;
      if ( !v16 )
      {
        v14 = dest;
        core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest, 1LL, 1LL, a3);
        memcpy(v14, a2, a3);
        *((_QWORD *)&v21 + 1) = v7;
        *(_QWORD *)&v22 = v14;
        *((_QWORD *)&v22 + 1) = a3;
        *(_QWORD *)&v21 = 0LL;
        v9 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v9 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v10 = v21;
        v11 = v22;
        goto LABEL_13;
      }
LABEL_15:
      alloc::raw_vec::handle_error(v7, dest);
    }
    v4 = v17;
    v12 = 1LL;
  }
  else
  {
    v12 = 0LL;
  }
  a1[1] = v12;
  a1[2] = v4;
  v13 = 0LL;
LABEL_14:
  *a1 = v13;
  return a1;
}
