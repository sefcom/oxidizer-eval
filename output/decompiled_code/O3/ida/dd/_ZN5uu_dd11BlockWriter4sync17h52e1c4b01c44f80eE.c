__int64 __fastcall uu_dd::BlockWriter::sync(__int64 a1)
{
  if ( *(_QWORD *)a1 == 0x8000000000000000LL )
    return uu_dd::Output::sync((_BYTE *)(a1 + 8));
  else
    return uu_dd::bufferedoutput::BufferedOutput::sync();
}
