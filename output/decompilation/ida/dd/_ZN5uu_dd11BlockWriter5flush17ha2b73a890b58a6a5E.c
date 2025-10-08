__int64 __fastcall uu_dd::BlockWriter::flush(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !__OFSUB__(0LL, *(_QWORD *)a2) )
    return uu_dd::bufferedoutput::BufferedOutput::flush(a1, a2);
  *(_QWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  return result;
}