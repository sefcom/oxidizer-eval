__int64 __fastcall uu_test::parser::Parser::peek(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rdx
  const void *v4; // r15
  size_t v5; // r14
  __int64 v6; // r12
  void *v7; // r13
  __int128 v9; // [rsp+0h] [rbp-58h] BYREF
  void *dest; // [rsp+10h] [rbp-48h]
  _QWORD v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  if ( v2 == 0x8000000000000001LL )
  {
    v3 = *(__int64 **)(a2 + 56);
    if ( v3 == *(__int64 **)(a2 + 72) )
    {
      *(_QWORD *)(a2 + 24) = 0x8000000000000000LL;
      goto LABEL_8;
    }
    *(_QWORD *)(a2 + 56) = v3 + 3;
    v2 = *v3;
    v9 = *(_OWORD *)(v3 + 1);
    *(_QWORD *)(a2 + 24) = v2;
    *(_OWORD *)(a2 + 32) = v9;
    if ( v2 == 0x8000000000000001LL )
      core::hint::unreachable_unchecked::precondition_check();
  }
  if ( v2 == 0x8000000000000000LL )
  {
LABEL_8:
    v11[0] = 0x8000000000000000LL;
    goto LABEL_9;
  }
  v4 = *(const void **)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 40);
  core::slice::raw::from_raw_parts::precondition_check(v4, 1LL, 1LL, v5);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, v5, 0LL);
  v6 = *((_QWORD *)&v9 + 1);
  if ( (_QWORD)v9 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v9 + 1), dest);
  v7 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v4, dest, 1LL, 1LL, v5);
  memcpy(v7, v4, v5);
  v11[0] = v6;
  v11[1] = v7;
  v11[2] = v5;
LABEL_9:
  uu_test::parser::Symbol::new(a1, v11);
  return a1;
}
