__int64 __fastcall uu_dd::BlockWriter::write_blocks(
        _QWORD *a1,
        _QWORD *a2,
        char **a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( __OFSUB__(0LL, *a2) )
    return uu_dd::Output::write_blocks(a1, (__int64)(a2 + 1), a3, a4, a5, a6);
  else
    return uu_dd::bufferedoutput::BufferedOutput::write_blocks((__int64)a1, a2, (__int64)a3, a4);
}