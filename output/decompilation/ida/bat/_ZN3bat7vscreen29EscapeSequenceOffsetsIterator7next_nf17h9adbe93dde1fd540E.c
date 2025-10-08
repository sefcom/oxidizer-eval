__int64 __fastcall bat::vscreen::EscapeSequenceOffsetsIterator::next_nf(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned int v8; // edx
  __int64 v9; // rbp
  __int64 v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 1114113;
  if ( v5 == 1114113 )
    v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a2 + 16);
  if ( v5 == (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
    core::option::expect_failed(aToNotBeFinishe, 18LL, &off_6CEEA8);
  result = bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(v10, a2);
  if ( (v10[0] & 1) != 0 )
  {
    v7 = v10[2];
    result = *(_QWORD *)(a2 + 40);
    v8 = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 48) = 1114113;
    if ( v8 == 1114113 )
      result = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a2 + 16);
    if ( v8 != (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
    {
      v9 = 1LL;
      if ( v8 >= 0x80 )
      {
        v9 = 2LL;
        if ( v8 >= 0x800 )
          v9 = 4LL - (v8 < 0x10000);
      }
      v7 = result + v9;
    }
    *a1 = 2LL;
    a1[1] = a3;
    a1[2] = v4;
    a1[3] = v7;
  }
  else
  {
    *a1 = 2LL;
    a1[1] = a3;
    a1[2] = v4;
    a1[3] = v4;
  }
  return result;
}