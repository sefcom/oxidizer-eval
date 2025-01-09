__int64 __fastcall uu_split::number::FixedWidthNumber::increment(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // rbx
  char v3; // bp
  unsigned __int64 v4; // rax
  char v5; // cl
  unsigned int v6; // ebx
  _BYTE v8[8]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  __int64 v10; // [rsp+18h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_BYTE *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 16);
    do
    {
      v4 = <usize as core::iter::range::Step>::backward_unchecked(v4);
      if ( v4 >= v2 )
        core::panicking::panic_bounds_check(v4, v2, &off_149498);
      v5 = *(_BYTE *)(v1 + v4) + 1;
      *(_BYTE *)(v1 + v4) = v5;
      if ( v5 != v3 )
        break;
      *(_BYTE *)(v1 + v4) = 0;
    }
    while ( v4 );
  }
  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v8, v2);
  v6 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
         v1,
         v2,
         v9,
         v10);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v8);
  return v6;
}
