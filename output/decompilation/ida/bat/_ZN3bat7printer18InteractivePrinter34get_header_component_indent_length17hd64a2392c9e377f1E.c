__int64 __fastcall bat::printer::InteractivePrinter::get_header_component_indent_length(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rcx

  v2 = bat::style::StyleComponents::grid(a1 + 192);
  v3 = a2 + 2;
  if ( !a2 )
    v3 = 0LL;
  if ( !v2 )
    return a2;
  return v3;
}