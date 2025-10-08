__int64 __fastcall bat::input::Input::from_reader(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int128 v7; // [rsp+0h] [rbp-88h] BYREF
  __int64 v8; // [rsp+10h] [rbp-78h]
  _OWORD v9[7]; // [rsp+18h] [rbp-70h] BYREF

  *((_QWORD *)&v7 + 1) = a2;
  v8 = a3;
  *(_QWORD *)&v7 = 0x8000000000000001LL;
  bat::input::InputKind::description(v9, &v7);
  *(_QWORD *)(a1 + 152) = v8;
  *(_OWORD *)(a1 + 136) = v7;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0x8000000000000000LL;
  v3 = v9[1];
  v4 = v9[2];
  v5 = v9[3];
  *(_OWORD *)(a1 + 40) = v9[0];
  *(_OWORD *)(a1 + 56) = v3;
  *(_OWORD *)(a1 + 72) = v4;
  *(_OWORD *)(a1 + 88) = v5;
  *(_OWORD *)(a1 + 104) = v9[4];
  *(_OWORD *)(a1 + 120) = v9[5];
  return a1;
}