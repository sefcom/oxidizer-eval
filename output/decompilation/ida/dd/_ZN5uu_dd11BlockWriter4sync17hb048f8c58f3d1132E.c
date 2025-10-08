__int64 __fastcall uu_dd::BlockWriter::sync(__int64 a1)
{
  if ( __OFSUB__(0LL, *(_QWORD *)a1) )
    return uu_dd::Output::sync((_BYTE *)(a1 + 8));
  else
    return uu_dd::bufferedoutput::BufferedOutput::sync(a1);
}