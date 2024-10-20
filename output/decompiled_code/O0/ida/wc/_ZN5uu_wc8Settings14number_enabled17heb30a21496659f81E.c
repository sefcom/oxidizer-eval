__int64 __fastcall uu_wc::Settings::number_enabled(_BYTE *a1)
{
  char v1; // al
  char v2; // cl
  char v3; // dl
  unsigned __int8 v4; // si
  char v5; // r8
  unsigned int v6; // ebp
  char v8; // [rsp+7h] [rbp-31h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]
  int v11; // [rsp+18h] [rbp-20h] BYREF
  char v12; // [rsp+1Ch] [rbp-1Ch]

  v1 = a1[24];
  v2 = a1[25];
  v3 = a1[26];
  v4 = a1[28] & 1;
  v5 = a1[27] & 1;
  v9 = 0LL;
  v10 = 5LL;
  v12 = v5;
  v11 = (v4 << 24) | ((v3 & 1) << 16) | ((v2 & 1) << 8) | v1 & 1;
  v6 = core::iter::traits::iterator::Iterator::try_fold(&v9, 0LL, &v8, &v11);
  <core::ops::index_range::IndexRange as core::slice::index::SliceIndex<[T]>>::get_unchecked_mut(v9, v10, &v11, 5LL);
  return v6;
}
