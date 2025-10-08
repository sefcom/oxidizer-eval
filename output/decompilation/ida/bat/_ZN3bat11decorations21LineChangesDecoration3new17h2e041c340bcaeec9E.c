__int64 __fastcall bat::decorations::LineChangesDecoration::new(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm1
  __int128 v8[2]; // [rsp+0h] [rbp-B8h] BYREF
  _OWORD v9[2]; // [rsp+20h] [rbp-98h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v11[2]; // [rsp+60h] [rbp-58h] BYREF
  _OWORD v12[3]; // [rsp+80h] [rbp-38h] BYREF

  BYTE13(v8[0]) = 21;
  WORD4(v8[0]) = 5376;
  *(_QWORD *)&v8[0] = 0LL;
  bat::decorations::LineChangesDecoration::generate_cached((__int64)v9, v8, (__int64)asc_9FF9F, 1LL);
  bat::decorations::LineChangesDecoration::generate_cached(
    (__int64)v10,
    (__int128 *)(a2 + 51),
    (__int64)asc_1A2890,
    1LL);
  bat::decorations::LineChangesDecoration::generate_cached(
    (__int64)v11,
    (__int128 *)(a2 + 68),
    (__int64)asc_1A2891,
    3LL);
  bat::decorations::LineChangesDecoration::generate_cached(
    (__int64)v12,
    (__int128 *)(a2 + 68),
    (__int64)asc_1A2894,
    1LL);
  result = bat::decorations::LineChangesDecoration::generate_cached(
             (__int64)v8,
             (__int128 *)(a2 + 85),
             (__int64)asc_1A2895,
             1LL);
  v3 = v9[0];
  a1[1] = v9[1];
  *a1 = v3;
  v4 = v10[0];
  a1[3] = v10[1];
  a1[2] = v4;
  v5 = v11[0];
  a1[5] = v11[1];
  a1[4] = v5;
  v6 = v12[1];
  a1[6] = v12[0];
  a1[7] = v6;
  v7 = v8[1];
  a1[8] = v8[0];
  a1[9] = v7;
  return result;
}