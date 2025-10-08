_DWORD *__fastcall ruff_python_formatter::comments::map::MultiMap<K,V>::entry_to_out_of_order(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // edi
  _DWORD *v9; // r14
  __int64 v10; // rax
  int v11; // esi
  bool v12; // cf
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v19; // [rsp+0h] [rbp-50h]
  _BYTE v20[72]; // [rsp+8h] [rbp-48h] BYREF

  v5 = *a1;
  if ( !v5 )
    return a1 + 2;
  v19 = *(_QWORD *)(a4 + 16);
  v9 = a1;
  v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
          (unsigned int)(v5 - 1),
          (unsigned int)(a1[1] - 1),
          a2,
          a3,
          &off_57CE50);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20, v10);
  alloc::vec::Vec<T,A>::push(a4, v20, &off_57CE68);
  v11 = v9[2];
  v12 = v11 == 0;
  v13 = (unsigned int)(v11 - 1);
  if ( v12 )
    v13 = (unsigned int)(v9[1] - 1);
  v14 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
          (unsigned int)(v9[1] - 1),
          v13,
          a2,
          a3,
          &off_57CE80);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20, v14);
  alloc::vec::Vec<T,A>::push(a4, v20, &off_57CE98);
  v15 = ruff_python_formatter::comments::map::InOrderEntry::trailing_range(v9);
  v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v15, v16, a2, a3, &off_57CEB0);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20, v17);
  alloc::vec::Vec<T,A>::push(a4, v20, &off_57CEC8);
  *v9 = 0;
  *((_QWORD *)v9 + 1) = v19;
  return v9 + 2;
}