void __fastcall ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::mark_formatted(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  if ( a2 )
  {
    v2 = 0LL;
    do
    {
      *(_BYTE *)(a1 + v2 + 8) = 1;
      v2 += 12LL;
    }
    while ( 12 * a2 != v2 );
  }
}