__int64 __fastcall uu_split::number::FixedWidthNumber::increment(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rcx
  char v5; // dl
  __int64 v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  __int64 v13; // [rsp+18h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_BYTE *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 16);
    do
    {
      v5 = *(_BYTE *)(v1 + v4 - 1) + 1;
      *(_BYTE *)(v1 + v4 - 1) = v5;
      if ( v5 != v3 )
        break;
      *(_BYTE *)(v1 + v4-- - 1) = 0;
    }
    while ( v4 );
  }
  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v11, v2, &off_10ABD8);
  v6 = v12;
  v7 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
         v1,
         v2,
         v12,
         v13);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v11, v6, v8, v9);
  return v7;
}