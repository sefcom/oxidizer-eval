unsigned __int64 __fastcall sniffnet::report::types::report_col::ReportCol::get_max_chars(char a1, char a2)
{
  char v2; // al
  char v3; // al
  unsigned __int64 v4; // rdx
  _BYTE v6[9]; // [rsp+Fh] [rbp-9h] BYREF

  v2 = 0;
  if ( a2 != 23 )
    v2 = a2;
  v6[0] = v2;
  v3 = <T as core::slice::cmp::SliceContains>::slice_contains(v6);
  v4 = 10LL;
  if ( (a1 & 0xFD) == 0 )
    v4 = 25LL;
  return v4 >> v3;
}