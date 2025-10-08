__int64 __fastcall bat::assets::HighlightingAssets::from_binary(__int64 a1)
{
  __int128 v2; // [rsp+8h] [rbp-40h]
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  *((_QWORD *)&v2 + 1) = &unk_A0048;
  *(_QWORD *)&v2 = 0x8000000000000000LL;
  bat::assets::get_integrated_themeset(&v3);
  *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  *(_OWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = &unk_F1A71;
  *(_OWORD *)(a1 + 104) = v3;
  *(_QWORD *)(a1 + 120) = v4;
  *(_QWORD *)(a1 + 128) = 0LL;
  return a1;
}