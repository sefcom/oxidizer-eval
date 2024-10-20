__int64 __fastcall uu_csplit::SplitWriter::new(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a1;
  *(_QWORD *)(a1 + 32) = a2;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}
