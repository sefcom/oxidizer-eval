__int64 __fastcall uu_paste::remove_trailing_line_ending_byte(char a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 16);
  if ( result )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + result - 1) == a1 )
      *(_QWORD *)(a2 + 16) = --result;
  }
  return result;
}