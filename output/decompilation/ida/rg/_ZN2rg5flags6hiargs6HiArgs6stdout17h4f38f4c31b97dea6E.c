__int64 __fastcall rg::flags::hiargs::HiArgs::stdout(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // eax

  v2 = 0x1000203u >> (8 * a2[917]);
  if ( a2[914] )
  {
    if ( a2[914] == 1 )
      return grep_cli::wtr::stdout_buffered_line(a1, (unsigned __int8)v2);
  }
  else if ( a2[889] )
  {
    return grep_cli::wtr::stdout_buffered_line(a1, (unsigned __int8)v2);
  }
  return grep_cli::wtr::stdout_buffered_block(a1, (unsigned __int8)v2);
}