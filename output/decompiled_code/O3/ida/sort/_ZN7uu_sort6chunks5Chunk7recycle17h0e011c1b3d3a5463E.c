__int64 __fastcall uu_sort::chunks::Chunk::recycle(__int64 a1, __int64 a2)
{
  __int128 v3; // [rsp+0h] [rbp-98h]
  __int64 v4; // [rsp+10h] [rbp-88h]
  __int128 v5; // [rsp+20h] [rbp-78h]
  __int64 v6; // [rsp+30h] [rbp-68h]
  __int128 v7; // [rsp+40h] [rbp-58h]
  __int64 v8; // [rsp+50h] [rbp-48h]
  __int128 v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+70h] [rbp-28h]
  __int128 v11; // [rsp+78h] [rbp-20h] BYREF
  __int64 v12; // [rsp+88h] [rbp-10h]

  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_QWORD *)(a2 + 112) = 0LL;
  v4 = *(_QWORD *)(a2 + 40);
  v3 = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 8LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  v6 = *(_QWORD *)(a2 + 64);
  v5 = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 8LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  v8 = *(_QWORD *)(a2 + 88);
  v7 = *(_OWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 8LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  v10 = *(_QWORD *)(a2 + 112);
  v9 = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 96) = 0LL;
  *(_QWORD *)(a2 + 104) = 8LL;
  *(_QWORD *)(a2 + 112) = 0LL;
  uu_sort::chunks::Chunk::into_owner(&v11);
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
