__int64 __fastcall alacritty_terminal::grid::storage::Storage<T>::with_capacity(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // rax
  __int64 result; // rax
  __int128 v5; // [rsp+8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+18h] [rbp-20h]
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = a3;
  *(_QWORD *)&v3 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a2, 8LL, 32LL, &off_877650);
  v5 = v3;
  v6 = 0LL;
  alloc::vec::Vec<T,A>::resize_with(&v5, a2, v7);
  result = v6;
  *(_QWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a2;
  return result;
}