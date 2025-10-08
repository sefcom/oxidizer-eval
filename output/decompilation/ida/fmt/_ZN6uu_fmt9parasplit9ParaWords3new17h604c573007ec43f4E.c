__int64 __fastcall uu_fmt::parasplit::ParaWords::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // [rsp+8h] [rbp-30h] BYREF
  __int128 v6; // [rsp+18h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  *((_QWORD *)&v6 + 1) = a2;
  v7 = a3;
  *(_QWORD *)&v5 = 0LL;
  *((_QWORD *)&v5 + 1) = 8LL;
  *(_QWORD *)&v6 = 0LL;
  uu_fmt::parasplit::ParaWords::create_words(&v5);
  result = v7;
  *(_QWORD *)(a1 + 32) = v7;
  v4 = v5;
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v4;
  return result;
}