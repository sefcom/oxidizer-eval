__int64 __fastcall bat::input::Input::stdin(__int64 a1)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm2
  __int128 v3; // xmm3
  __int128 v5; // [rsp+0h] [rbp-88h] BYREF
  __int64 v6; // [rsp+10h] [rbp-78h]
  _OWORD v7[7]; // [rsp+18h] [rbp-70h] BYREF

  *(_QWORD *)&v5 = 0x8000000000000000LL;
  bat::input::InputKind::description(v7, &v5);
  *(_QWORD *)(a1 + 152) = v6;
  *(_OWORD *)(a1 + 136) = v5;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0x8000000000000000LL;
  v1 = v7[1];
  v2 = v7[2];
  v3 = v7[3];
  *(_OWORD *)(a1 + 40) = v7[0];
  *(_OWORD *)(a1 + 56) = v1;
  *(_OWORD *)(a1 + 72) = v2;
  *(_OWORD *)(a1 + 88) = v3;
  *(_OWORD *)(a1 + 104) = v7[4];
  *(_OWORD *)(a1 + 120) = v7[5];
  return a1;
}