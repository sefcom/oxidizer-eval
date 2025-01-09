__int64 __fastcall uu_split::handle_obsolete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v4; // [rsp+6h] [rbp-82h] BYREF
  char v5; // [rsp+7h] [rbp-81h] BYREF
  __int128 v6; // [rsp+8h] [rbp-80h] BYREF
  __int64 v7; // [rsp+18h] [rbp-70h]
  _QWORD v8[3]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v9; // [rsp+38h] [rbp-50h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h]
  _BYTE v11[56]; // [rsp+50h] [rbp-38h] BYREF

  *(_QWORD *)&v6 = 0x8000000000000000LL;
  v4 = 0;
  v5 = 0;
  v8[0] = &v6;
  v8[1] = &v4;
  v8[2] = &v5;
  core::iter::traits::iterator::Iterator::filter_map(v11, a2, a3, v8);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, v11);
  *(_QWORD *)(a1 + 40) = v7;
  *(_OWORD *)(a1 + 24) = v6;
  *(_OWORD *)a1 = v9;
  result = v10;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
