__int64 __fastcall uu_dd::blocks::conv_block_unblock_helper(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // [rsp+8h] [rbp-100h] BYREF
  __int64 v11; // [rsp+10h] [rbp-F8h]
  __int64 v12; // [rsp+18h] [rbp-F0h]
  __int64 v13; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-E0h]
  __int64 v15; // [rsp+30h] [rbp-D8h]
  _BYTE v16[32]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+78h] [rbp-90h]
  __int64 v20; // [rsp+88h] [rbp-80h]
  _BYTE v21[24]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v22[64]; // [rsp+C8h] [rbp-40h] BYREF

  switch ( *(_BYTE *)a3 )
  {
    case 0:
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion(v16, a2, *(_QWORD *)(a3 + 8));
      return core::iter::traits::iterator::Iterator::collect(a1, v16);
    case 1:
      v9 = a2[1];
      uu_dd::blocks::block((__int64)&v10, v9, a2[2], *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1), a4);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v16, &v10);
      v17 = 0LL;
      v19 = 0LL;
      core::iter::traits::iterator::Iterator::collect(a1, v16);
      goto LABEL_8;
    case 2:
      v9 = a2[1];
      uu_dd::blocks::unblock(a1, v9, a2[2], *(_QWORD *)(a3 + 8));
      goto LABEL_8;
    case 3:
      v9 = a2[1];
      uu_dd::blocks::block((__int64)v21, v9, a2[2], *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1), a4);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v16, v21);
      v17 = *(_QWORD *)(a3 + 16);
      v18 = 0LL;
      v20 = 0LL;
      core::iter::traits::iterator::Iterator::collect(a1, v16);
      goto LABEL_8;
    case 4:
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion(v16, a2, *(_QWORD *)(a3 + 16));
      core::iter::traits::iterator::Iterator::collect(&v13, v16);
      v7 = v14;
      uu_dd::blocks::block((__int64)&v10, v14, v15, *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1), a4);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v16, &v10);
      v17 = 0LL;
      v19 = 0LL;
      core::iter::traits::iterator::Iterator::collect(a1, v16);
      v8 = v13;
      goto LABEL_10;
    case 5:
      v9 = a2[1];
      uu_dd::blocks::unblock((__int64)v22, v9, a2[2], *(_QWORD *)(a3 + 8));
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion(v16, v22, *(_QWORD *)(a3 + 16));
      core::iter::traits::iterator::Iterator::collect(a1, v16);
LABEL_8:
      result = core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*a2, v9);
      break;
    case 6:
      uu_dd::blocks::conv_block_unblock_helper::apply_conversion(v16, a2, *(_QWORD *)(a3 + 16));
      core::iter::traits::iterator::Iterator::collect(&v10, v16);
      v7 = v11;
      uu_dd::blocks::unblock(a1, v11, v12, *(_QWORD *)(a3 + 8));
      v8 = v10;
LABEL_10:
      result = core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v8, v7);
      break;
  }
  return result;
}