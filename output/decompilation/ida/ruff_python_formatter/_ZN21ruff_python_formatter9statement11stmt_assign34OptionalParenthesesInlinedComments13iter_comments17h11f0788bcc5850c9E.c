__int64 __fastcall ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::iter_comments(
        __int64 a1,
        _QWORD *a2)
{
  return core::iter::traits::iterator::Iterator::chain(a1, *a2, *a2 + 12LL * a2[1], a2[2], a2[3]);
}