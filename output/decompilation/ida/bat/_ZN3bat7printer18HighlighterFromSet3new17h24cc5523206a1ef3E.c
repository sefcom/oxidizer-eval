__int64 __fastcall bat::printer::HighlighterFromSet::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = syntect::easy::HighlightLines::new(a1, a2, a4);
  *(_QWORD *)(a1 + 208) = a3;
  return result;
}