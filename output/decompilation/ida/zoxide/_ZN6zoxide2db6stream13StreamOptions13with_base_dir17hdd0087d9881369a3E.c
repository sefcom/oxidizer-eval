__int64 __fastcall zoxide::db::stream::StreamOptions::with_base_dir(__int64 a1, __int128 *a2, __int128 *a3)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int64 result; // rax

  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a2 + 3);
  *((_QWORD *)a2 + 8) = *((_QWORD *)a3 + 2);
  v4 = *a3;
  a2[3] = *a3;
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  *(_OWORD *)(a1 + 80) = a2[5];
  *(_OWORD *)(a1 + 48) = v4;
  *(_OWORD *)(a1 + 32) = v7;
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  *(_QWORD *)(a1 + 64) = *((_QWORD *)a2 + 8);
  result = *((_QWORD *)a2 + 9);
  *(_QWORD *)(a1 + 72) = result;
  return result;
}