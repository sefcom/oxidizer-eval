__int64 __fastcall uu_tr::operation::Sequence::parse_char_repeat::{{closure}}(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r13d
  __int64 v4; // r14
  __int64 v5; // r15
  void *v6; // r14
  size_t v7; // r15
  __int64 v8; // rax
  size_t v9; // r14
  void *v10; // r14
  size_t v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  void *v14; // r13
  __int64 v16; // [rsp+0h] [rbp-88h] BYREF
  void *src; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v20; // [rsp+20h] [rbp-68h]
  void *dest; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  _BYTE v23[8]; // [rsp+38h] [rbp-50h] BYREF
  size_t v24; // [rsp+40h] [rbp-48h]
  _BYTE v25[8]; // [rsp+48h] [rbp-40h] BYREF
  size_t v26; // [rsp+50h] [rbp-38h]

  v2 = *a2;
  v22 = a2[1];
  LOBYTE(v3) = *((_BYTE *)a2 + 16);
  v4 = a2[3];
  v5 = a2[4];
  alloc::string::String::from_utf8_lossy(&v16, v4, v5);
  if ( v5 && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0_0, 1LL, v4, 1LL) )
  {
    v6 = src;
    v7 = n;
    if ( v16 != 0x8000000000000000LL )
      core::slice::raw::from_raw_parts::precondition_check(src, 1LL, 1LL, n);
    v8 = core::num::<impl usize>::from_str_radix(v23, v6, v7, 8LL);
    if ( (v23[0] & 1) == 0 )
    {
      v9 = v24;
LABEL_11:
      LOBYTE(v12) = (v9 == 0) ^ 3;
      v13 = 0x800000000000000ALL;
      goto LABEL_21;
    }
    v14 = src;
    v9 = n;
    if ( v16 == 0x8000000000000000LL || src && (n & 0x8000000000000000LL) == 0LL )
      goto LABEL_19;
LABEL_26:
    core::panicking::panic_nounwind(anon_b454aa6ad6d838bd9a09661edb809920_10_llvm_13218341307614126290, 162LL);
  }
  v10 = src;
  v11 = n;
  if ( v16 != 0x8000000000000000LL )
    core::slice::raw::from_raw_parts::precondition_check(src, 1LL, 1LL, n);
  v8 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v25, v10, v11);
  if ( (v25[0] & 1) == 0 )
  {
    v9 = v26;
    goto LABEL_11;
  }
  v14 = src;
  v9 = n;
  if ( v16 != 0x8000000000000000LL && (!src || (n & 0x8000000000000000LL) != 0LL) )
    goto LABEL_26;
LABEL_19:
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v19, n, 0LL);
  v13 = v20;
  if ( v19 )
    alloc::raw_vec::handle_error(v20, dest);
  v12 = (unsigned __int64)dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v14, dest, 1LL, 1LL, v9);
  memcpy((void *)v12, v14, v9);
  v3 = (unsigned int)v12 >> 8;
  v8 = v12 >> 16;
LABEL_21:
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v22;
  *(_QWORD *)(a1 + 16) = v13;
  *(_BYTE *)(a1 + 24) = v12;
  *(_BYTE *)(a1 + 25) = v3;
  *(_DWORD *)(a1 + 26) = v8;
  *(_WORD *)(a1 + 30) = WORD2(v8);
  *(_QWORD *)(a1 + 32) = v9;
  if ( v16 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v16);
    if ( v20 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v19, v20, dest);
  }
  return a1;
}
