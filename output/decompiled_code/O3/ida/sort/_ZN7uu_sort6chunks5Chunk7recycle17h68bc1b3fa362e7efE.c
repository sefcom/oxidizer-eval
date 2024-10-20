__int64 __fastcall uu_sort::chunks::Chunk::recycle(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v8; // [rsp+8h] [rbp-70h]
  __int64 v9; // [rsp+10h] [rbp-68h]
  __int64 v10; // [rsp+18h] [rbp-60h]
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]

  v10 = *(_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 8LL;
  v2 = *(_QWORD *)(a2 + 48);
  *(_OWORD *)(a2 + 40) = 0LL;
  v3 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 8LL;
  v4 = *(_QWORD *)(a2 + 72);
  *(_OWORD *)(a2 + 64) = 0LL;
  v5 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 8LL;
  v8 = *(_QWORD *)(a2 + 96);
  *(_OWORD *)(a2 + 88) = 0LL;
  v6 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = 8LL;
  *(_QWORD *)(a2 + 112) = 0LL;
  self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::into_owner(&v11);
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = v2;
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 56) = v5;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = v8;
  *(_QWORD *)(a1 + 80) = v6;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_OWORD *)(a1 + 96) = v11;
  *(_QWORD *)(a1 + 112) = v12;
  return a1;
}
