char __fastcall ruff_python_formatter::expression::is_expression_huggable(unsigned int *a1, char a2)
{
  unsigned __int64 i; // rcx
  __int64 v4; // rdx

  for ( i = *a1; i == 27; i = *a1 )
    a1 = (unsigned int *)*((_QWORD *)a1 + 1);
  v4 = 0x197FFF83FLL;
  if ( _bittest64(&v4, i) )
    a2 = 0;
  return a2 & 1;
}