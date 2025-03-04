__int64 __fastcall compat_core::esxi::utils::target_extensions(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD v5[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = (_QWORD *)_rust_alloc(192LL, 8LL);
  if ( !v1 )
    alloc::alloc::handle_alloc_error(192LL, 8LL);
  v2 = v1;
  *v1 = anon_72dc3a396521a012288a77322dff36ea_15_llvm_3663384724368157838;
  v1[1] = 3LL;
  v1[2] = anon_72dc3a396521a012288a77322dff36ea_4_llvm_3663384724368157838;
  v1[3] = 4LL;
  v1[4] = anon_72dc3a396521a012288a77322dff36ea_5_llvm_3663384724368157838;
  v1[5] = 4LL;
  v1[6] = anon_72dc3a396521a012288a77322dff36ea_6_llvm_3663384724368157838;
  v1[7] = 4LL;
  v1[8] = anon_72dc3a396521a012288a77322dff36ea_7_llvm_3663384724368157838;
  v1[9] = 4LL;
  v1[10] = anon_72dc3a396521a012288a77322dff36ea_8_llvm_3663384724368157838;
  v1[11] = 4LL;
  v1[12] = anon_72dc3a396521a012288a77322dff36ea_9_llvm_3663384724368157838;
  v1[13] = 3LL;
  v1[14] = anon_72dc3a396521a012288a77322dff36ea_10_llvm_3663384724368157838;
  v1[15] = 3LL;
  v1[16] = anon_72dc3a396521a012288a77322dff36ea_11_llvm_3663384724368157838;
  v1[17] = 3LL;
  v1[18] = anon_72dc3a396521a012288a77322dff36ea_12_llvm_3663384724368157838;
  v1[19] = 3LL;
  v1[20] = anon_72dc3a396521a012288a77322dff36ea_13_llvm_3663384724368157838;
  v1[21] = 5LL;
  v1[22] = anon_72dc3a396521a012288a77322dff36ea_14_llvm_3663384724368157838;
  v1[23] = 4LL;
  *(_QWORD *)a1 = 8LL;
  *(_OWORD *)(a1 + 8) = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve(a1, 0LL, 12LL);
  v3 = *(_QWORD *)(a1 + 16);
  v5[0] = *(_QWORD *)a1 + 24 * v3;
  v5[1] = a1 + 16;
  v5[2] = v3;
  <core::iter::adapters::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(v2, v2 + 24, v5);
  _rust_dealloc(v2, 192LL, 8LL);
  return a1;
}
