_QWORD *__fastcall uu_dd::BlockWriter::write_blocks(_QWORD *a1, _QWORD *a2, char **a3, __int64 a4)
{
  if ( *a2 == 0x8000000000000000LL )
    return uu_dd::Output::write_blocks(a1, (__int64)(a2 + 1), a3, a4);
  else
    return (_QWORD *)uu_dd::bufferedoutput::BufferedOutput::write_blocks();
}
