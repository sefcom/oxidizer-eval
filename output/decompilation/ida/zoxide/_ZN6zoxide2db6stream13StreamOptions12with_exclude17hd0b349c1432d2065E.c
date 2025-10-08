__int64 __fastcall zoxide::db::stream::StreamOptions::with_exclude(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 result; // rax

  core::ptr::drop_in_place<alloc::vec::Vec<glob::Pattern>>((char *)a2 + 24);
  *((_QWORD *)a2 + 5) = *(_QWORD *)(a3 + 16);
  *(__int128 *)((char *)a2 + 24) = *(_OWORD *)a3;
  v4 = *a2;
  v5 = a2[3];
  v6 = a2[4];
  *(_OWORD *)(a1 + 80) = a2[5];
  *(_OWORD *)(a1 + 64) = v6;
  *(_OWORD *)(a1 + 48) = v5;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 32) = *((_QWORD *)a2 + 4);
  result = *((_QWORD *)a2 + 5);
  *(_QWORD *)(a1 + 40) = result;
  *(_OWORD *)(a1 + 16) = a2[1];
  return result;
}