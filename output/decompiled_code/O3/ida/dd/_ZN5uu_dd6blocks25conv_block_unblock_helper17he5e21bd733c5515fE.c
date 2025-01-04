__int64 __fastcall uu_dd::blocks::conv_block_unblock_helper(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v7; // rdi
  _BYTE v9[8]; // [rsp+8h] [rbp-260h] BYREF
  __int64 v10; // [rsp+10h] [rbp-258h]
  __int64 v11; // [rsp+18h] [rbp-250h]
  _BYTE v12[8]; // [rsp+20h] [rbp-248h] BYREF
  __int64 v13; // [rsp+28h] [rbp-240h]
  __int64 v14; // [rsp+30h] [rbp-238h]
  _BYTE v15[24]; // [rsp+38h] [rbp-230h] BYREF
  _BYTE v16[24]; // [rsp+50h] [rbp-218h] BYREF
  _BYTE v17[32]; // [rsp+68h] [rbp-200h] BYREF
  __int64 v18; // [rsp+88h] [rbp-1E0h]
  __int64 v19; // [rsp+90h] [rbp-1D8h]
  __int64 v20; // [rsp+B8h] [rbp-1B0h]
  _BYTE v21[32]; // [rsp+E0h] [rbp-188h] BYREF
  __int64 v22; // [rsp+100h] [rbp-168h]
  __int64 v23; // [rsp+120h] [rbp-148h]
  _BYTE v24[32]; // [rsp+140h] [rbp-128h] BYREF
  __int64 v25; // [rsp+160h] [rbp-108h]
  __int64 v26; // [rsp+180h] [rbp-E8h]
  _BYTE v27[40]; // [rsp+1A0h] [rbp-C8h] BYREF
  _BYTE v28[40]; // [rsp+1C8h] [rbp-A0h] BYREF
  _BYTE v29[40]; // [rsp+1F0h] [rbp-78h] BYREF
  _BYTE v30[80]; // [rsp+218h] [rbp-50h] BYREF

  switch ( *(_BYTE *)a3 )
  {
    case 0:
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion(v27, a2, *(_QWORD *)(a3 + 8));
      alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
        a1,
        v27);
      return a1;
    case 1:
      uu_dd::blocks::block(
        (__int64)v9,
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 16),
        *(_QWORD *)(a3 + 8),
        *(_BYTE *)(a3 + 1),
        a4);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v24, v9);
      v25 = 0LL;
      v26 = 0LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v24);
      goto LABEL_8;
    case 2:
      uu_dd::blocks::unblock(a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 8));
      goto LABEL_8;
    case 3:
      uu_dd::blocks::block(
        (__int64)v15,
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 16),
        *(_QWORD *)(a3 + 8),
        *(_BYTE *)(a3 + 1),
        a4);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v17, v15);
      v18 = *(_QWORD *)(a3 + 16);
      v19 = 0LL;
      v20 = 0LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v17);
      goto LABEL_8;
    case 4:
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion(v28, a2, *(_QWORD *)(a3 + 16));
      alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
        v12,
        v28);
      uu_dd::blocks::block((__int64)v9, v13, v14, *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1), a4);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v21, v9);
      v22 = 0LL;
      v23 = 0LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v21);
      v7 = v12;
      break;
    case 5:
      uu_dd::blocks::unblock((__int64)v16, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 8));
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion(v29, v16, *(_QWORD *)(a3 + 16));
      alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
        a1,
        v29);
LABEL_8:
      v7 = (_BYTE *)a2;
      break;
    case 6:
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion(v30, a2, *(_QWORD *)(a3 + 16));
      alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
        v9,
        v30);
      uu_dd::blocks::unblock(a1, v10, v11, *(_QWORD *)(a3 + 8));
      v7 = v9;
      break;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7);
  return a1;
}
