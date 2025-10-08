void __fastcall linera_exporter::storage::SharedStorage<C,S>::get_block(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm1

  *(_QWORD *)(a1 + 104) = a2;
  v3 = a3[1];
  *(_OWORD *)a1 = *a3;
  *(_OWORD *)(a1 + 16) = v3;
  *(_BYTE *)(a1 + 113) = 0;
}