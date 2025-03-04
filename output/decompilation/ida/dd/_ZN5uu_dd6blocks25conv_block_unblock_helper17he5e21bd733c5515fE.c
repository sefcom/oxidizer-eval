__int64 __fastcall uu_dd::blocks::conv_block_unblock_helper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _BYTE *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[8]; // [rsp+8h] [rbp-260h] BYREF
  __int64 v14; // [rsp+10h] [rbp-258h]
  __int64 v15; // [rsp+18h] [rbp-250h]
  _BYTE v16[8]; // [rsp+20h] [rbp-248h] BYREF
  __int64 v17; // [rsp+28h] [rbp-240h]
  __int64 v18; // [rsp+30h] [rbp-238h]
  _BYTE v19[24]; // [rsp+38h] [rbp-230h] BYREF
  _BYTE v20[24]; // [rsp+50h] [rbp-218h] BYREF
  _BYTE v21[32]; // [rsp+68h] [rbp-200h] BYREF
  __int64 v22; // [rsp+88h] [rbp-1E0h]
  __int64 v23; // [rsp+90h] [rbp-1D8h]
  __int64 v24; // [rsp+B8h] [rbp-1B0h]
  _BYTE v25[32]; // [rsp+E0h] [rbp-188h] BYREF
  __int64 v26; // [rsp+100h] [rbp-168h]
  __int64 v27; // [rsp+120h] [rbp-148h]
  _BYTE v28[32]; // [rsp+140h] [rbp-128h] BYREF
  __int64 v29; // [rsp+160h] [rbp-108h]
  __int64 v30; // [rsp+180h] [rbp-E8h]
  _BYTE v31[40]; // [rsp+1A0h] [rbp-C8h] BYREF
  _BYTE v32[40]; // [rsp+1C8h] [rbp-A0h] BYREF
  _BYTE v33[40]; // [rsp+1F0h] [rbp-78h] BYREF
  _BYTE v34[80]; // [rsp+218h] [rbp-50h] BYREF

  switch ( *(_BYTE *)a3 )
  {
    case 0:
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion((__int64)v31, a2, *(_QWORD *)(a3 + 8));
      alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
        a1,
        v31);
      return a1;
    case 1:
      uu_dd::blocks::block(
        (__int64)v13,
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 16),
        *(_QWORD *)(a3 + 8),
        *(_BYTE *)(a3 + 1),
        a4);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v28, v13);
      v29 = 0LL;
      v30 = 0LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v28);
      goto LABEL_8;
    case 2:
      uu_dd::blocks::unblock(a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 8), a5, a6);
      goto LABEL_8;
    case 3:
      uu_dd::blocks::block(
        (__int64)v19,
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 16),
        *(_QWORD *)(a3 + 8),
        *(_BYTE *)(a3 + 1),
        a4);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v21, v19);
      v22 = *(_QWORD *)(a3 + 16);
      v23 = 0LL;
      v24 = 0LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v21);
      goto LABEL_8;
    case 4:
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion((__int64)v32, a2, *(_QWORD *)(a3 + 16));
      alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
        v16,
        v32);
      uu_dd::blocks::block((__int64)v13, v17, v18, *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1), a4);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v25, v13);
      v26 = 0LL;
      v27 = 0LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v25);
      v9 = v16;
      break;
    case 5:
      uu_dd::blocks::unblock((__int64)v20, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 8), a5, a6);
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion((__int64)v33, (__int64)v20, *(_QWORD *)(a3 + 16));
      alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
        a1,
        v33);
LABEL_8:
      v9 = (_BYTE *)a2;
      break;
    case 6:
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion((__int64)v34, a2, *(_QWORD *)(a3 + 16));
      alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
        v13,
        v34);
      uu_dd::blocks::unblock(a1, v14, v15, *(_QWORD *)(a3 + 8), v10, v11);
      v9 = v13;
      break;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v9);
  return a1;
}
