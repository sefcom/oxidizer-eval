__int64 __fastcall uu_dd::parseargs::Parser::new(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  *(_QWORD *)(a1 + 112) = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 136) = 0x8000000000000000LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = 2LL;
  *(_OWORD *)(a1 + 160) = 0LL;
  *(_OWORD *)(a1 + 176) = 0LL;
  *(_OWORD *)(a1 + 192) = 0LL;
  *(_BYTE *)(a1 + 208) = 3;
  return result;
}
