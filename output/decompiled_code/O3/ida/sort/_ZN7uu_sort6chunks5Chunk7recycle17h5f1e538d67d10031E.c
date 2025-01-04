__int64 __fastcall uu_sort::chunks::Chunk::recycle(__int64 a1, __int64 a2)
{
  __int128 v3; // [rsp+0h] [rbp-108h]
  __int64 v4; // [rsp+10h] [rbp-F8h]
  __int128 v5; // [rsp+20h] [rbp-E8h]
  __int64 v6; // [rsp+30h] [rbp-D8h]
  __int128 v7; // [rsp+40h] [rbp-C8h]
  __int64 v8; // [rsp+50h] [rbp-B8h]
  __int128 v9; // [rsp+60h] [rbp-A8h]
  __int64 v10; // [rsp+70h] [rbp-98h]
  __int128 v11; // [rsp+80h] [rbp-88h] BYREF
  __int64 v12; // [rsp+90h] [rbp-78h]
  __int128 v13; // [rsp+98h] [rbp-70h] BYREF
  __int64 v14; // [rsp+A8h] [rbp-60h]
  __int128 v15; // [rsp+B0h] [rbp-58h]
  __int64 v16; // [rsp+C0h] [rbp-48h]
  __int128 v17; // [rsp+C8h] [rbp-40h]
  __int64 v18; // [rsp+D8h] [rbp-30h]
  __int128 v19; // [rsp+E0h] [rbp-28h]
  __int64 v20; // [rsp+F0h] [rbp-18h]

  uu_sort::chunks::Chunk::recycle::{{closure}}(&v13, a2 + 24);
  v4 = v14;
  v3 = v13;
  v6 = v16;
  v5 = v15;
  v8 = v18;
  v7 = v17;
  v10 = v20;
  v9 = v19;
  uu_sort::chunks::Chunk::into_owner(&v11, a2);
  *(_QWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  *(_QWORD *)(a1 + 40) = v6;
  *(_OWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 64) = v8;
  *(_OWORD *)(a1 + 48) = v7;
  *(_OWORD *)(a1 + 72) = v9;
  *(_QWORD *)(a1 + 88) = v10;
  *(_OWORD *)(a1 + 96) = v11;
  *(_QWORD *)(a1 + 112) = v12;
  return a1;
}
