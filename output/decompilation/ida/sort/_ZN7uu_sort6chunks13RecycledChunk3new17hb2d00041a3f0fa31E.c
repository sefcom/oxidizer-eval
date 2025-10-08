__int64 __fastcall uu_sort::chunks::RecycledChunk::new(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+8h] [rbp-80h]
  __int128 v3; // [rsp+20h] [rbp-68h]
  __int128 v4; // [rsp+38h] [rbp-50h]
  __int128 v5; // [rsp+50h] [rbp-38h]
  __int128 v6; // [rsp+68h] [rbp-20h] BYREF
  __int64 v7; // [rsp+78h] [rbp-10h]

  *(_QWORD *)&v2 = 0LL;
  *((_QWORD *)&v2 + 1) = 8LL;
  *(_QWORD *)&v3 = 0LL;
  *((_QWORD *)&v3 + 1) = 8LL;
  *(_QWORD *)&v4 = 0LL;
  *((_QWORD *)&v4 + 1) = 8LL;
  *(_QWORD *)&v5 = 0LL;
  *((_QWORD *)&v5 + 1) = 8LL;
  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v6);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)a1 = v2;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 24) = v3;
  *(_OWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 72) = v5;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 8LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  result = v7;
  *(_QWORD *)(a1 + 136) = v7;
  *(_OWORD *)(a1 + 120) = v6;
  return result;
}