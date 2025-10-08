__int64 __fastcall just::lexer::Lexer::token(__int64 a1, char a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 v4; // rcx
  __int128 v5; // xmm2
  __int64 result; // rax
  _OWORD v7[2]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int128 v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+48h] [rbp-10h]

  v2 = *(_OWORD *)(a1 + 112);
  v3 = *(_OWORD *)(a1 + 128);
  v4 = *(_QWORD *)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 168);
  v11 = a2;
  v5 = *(_OWORD *)(a1 + 176);
  v9 = v4 - *(_QWORD *)(a1 + 184);
  v10 = v5;
  v7[0] = v2;
  v7[1] = v3;
  alloc::vec::Vec<T,A>::push(a1 + 72, v7, &off_4303F8);
  result = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 184) = result;
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a1 + 144);
  return result;
}