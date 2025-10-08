__int64 __fastcall zoxide::db::stream::StreamOptions::with_keywords(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 result; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+10h] [rbp-18h]

  v4 = core::iter::traits::iterator::Iterator::map(a3, a4);
  v6 = core::iter::traits::iterator::Iterator::map(v4, v5);
  core::iter::traits::iterator::Iterator::collect(&v11, v6);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a2);
  *((_QWORD *)a2 + 2) = v12;
  *a2 = v11;
  *(_OWORD *)(a1 + 80) = a2[5];
  *(_OWORD *)(a1 + 64) = a2[4];
  v7 = *a2;
  result = *((_QWORD *)a2 + 2);
  v9 = *((_QWORD *)a2 + 3);
  v10 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v10;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 24) = v9;
  *(_OWORD *)a1 = v7;
  return result;
}