__int64 __fastcall rg::search::SearchWorkerBuilder::preprocessor_globs(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2

  core::ptr::drop_in_place<ignore::overrides::Override>(a1);
  *(_QWORD *)(a1 + 96) = *((_QWORD *)a2 + 12);
  *(_OWORD *)(a1 + 80) = a2[5];
  *(_OWORD *)(a1 + 64) = a2[4];
  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v4;
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)a1 = v2;
  return a1;
}