__int64 __fastcall uu_dd::BlockWriter::discard_cache(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)a1 == 0x8000000000000000LL )
    return uu_dd::Output::discard_cache((_DWORD *)(a1 + 8), a2, a3);
  else
    return uu_dd::bufferedoutput::BufferedOutput::discard_cache();
}
