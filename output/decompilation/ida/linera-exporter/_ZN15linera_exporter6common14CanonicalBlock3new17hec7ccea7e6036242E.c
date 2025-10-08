__int64 __fastcall linera_exporter::common::CanonicalBlock::new(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, a3, a4);
  result = alloc::vec::Vec<T,A>::into_boxed_slice(v7, &off_13F1348);
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v5;
  v6 = a2[1];
  *(_OWORD *)(a1 + 16) = *a2;
  *(_OWORD *)(a1 + 32) = v6;
  return result;
}