__int64 __fastcall ruff_python_formatter::comments::SourceComment::is_suppression_on_comment(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = ruff_python_formatter::comments::SourceComment::text();
  return ruff_python_trivia::comments::SuppressionKind::is_suppression_on(v1, v2, *(unsigned __int8 *)(a1 + 9));
}