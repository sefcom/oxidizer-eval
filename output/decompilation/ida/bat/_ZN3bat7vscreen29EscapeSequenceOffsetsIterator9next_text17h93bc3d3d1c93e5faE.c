__int64 __fastcall bat::vscreen::EscapeSequenceOffsetsIterator::next_text(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+8h] [rbp-20h] BYREF
  __int128 v3; // [rsp+10h] [rbp-18h]

  bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(&v2);
  result = 5LL;
  if ( v2 == 1 )
  {
    *(_OWORD *)(a1 + 8) = v3;
    result = 0LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}