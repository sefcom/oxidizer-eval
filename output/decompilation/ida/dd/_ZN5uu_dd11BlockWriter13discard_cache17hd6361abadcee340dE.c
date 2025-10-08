__int64 __fastcall uu_dd::BlockWriter::discard_cache(__int64 a1, __int64 a2, __int64 a3)
{
  if ( __OFSUB__(0LL, *(_QWORD *)a1) )
    return uu_dd::Output::discard_cache(*(_DWORD *)(a1 + 8), *(unsigned int *)(a1 + 12), a2, a3);
  else
    return uu_dd::bufferedoutput::BufferedOutput::discard_cache(
             *(unsigned int *)(a1 + 24),
             *(unsigned int *)(a1 + 28),
             a2,
             a3);
}