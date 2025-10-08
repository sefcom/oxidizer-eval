__int64 __fastcall uu_more::Pager::prev_line(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 80);
  if ( result )
    *(_QWORD *)(a1 + 80) = --result;
  return result;
}