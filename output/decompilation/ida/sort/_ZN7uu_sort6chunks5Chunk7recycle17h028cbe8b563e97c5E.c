__int64 __fastcall uu_sort::chunks::Chunk::recycle(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-A8h]
  __int128 v5; // [rsp+18h] [rbp-90h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int128 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+40h] [rbp-68h]
  __int128 v9; // [rsp+48h] [rbp-60h]
  __int64 v10; // [rsp+58h] [rbp-50h]
  __int128 v11; // [rsp+60h] [rbp-48h]
  __int64 v12; // [rsp+70h] [rbp-38h]
  __int128 v13; // [rsp+78h] [rbp-30h]
  __int64 v14; // [rsp+88h] [rbp-20h]

  uu_sort::chunks::Chunk::recycle::{{closure}}(&v5, a2 + 24);
  *(_QWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  *(_QWORD *)(a1 + 40) = v8;
  *(_OWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 64) = v10;
  *(_OWORD *)(a1 + 48) = v9;
  *(_OWORD *)(a1 + 72) = v11;
  *(_QWORD *)(a1 + 88) = v12;
  v4 = v13;
  v2 = v14;
  result = uu_sort::chunks::Chunk::into_owner(a1 + 120, a2);
  *(_OWORD *)(a1 + 96) = v4;
  *(_QWORD *)(a1 + 112) = v2;
  return result;
}