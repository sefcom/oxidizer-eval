__int64 __fastcall bat::vscreen::EscapeSequenceOffsetsIterator::next_sequence(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebp
  unsigned int v4; // edx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a2 + 40);
  v3 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 1114113;
  if ( v3 == 1114113 )
  {
    v2 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a2 + 16);
    v3 = v4;
  }
  if ( v3 == (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
    core::option::expect_failed(aToNotBeFinishe, 18LL, &off_6CEE38);
  core::option::Option<T>::get_or_insert_with(a2 + 40, a2 + 16);
  result = *(unsigned int *)(a2 + 48);
  if ( (_DWORD)result == 91 )
    return bat::vscreen::EscapeSequenceOffsetsIterator::next_csi(a1, a2, v2);
  if ( (_DWORD)result == 93 )
    return bat::vscreen::EscapeSequenceOffsetsIterator::next_osc(a1, a2, v2);
  if ( (_DWORD)result == (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
  {
    v6 = 1LL;
    if ( v3 >= 0x80 )
    {
      v6 = 2LL;
      if ( v3 >= 0x800 )
        v6 = 4LL - (v3 < 0x10000);
    }
    result = v2 + v6;
    *a1 = 1LL;
    a1[1] = v2;
    a1[2] = result;
  }
  else if ( (result & 0xFFFFFFF0) == 0x20 )
  {
    return bat::vscreen::EscapeSequenceOffsetsIterator::next_nf(a1, a2, v2);
  }
  else
  {
    v7 = 1LL;
    if ( (unsigned int)result >= 0x80 )
    {
      v7 = 2LL;
      if ( (unsigned int)result >= 0x800 )
        v7 = 4LL - ((unsigned int)result < 0x10000);
    }
    v8 = *(_QWORD *)(a2 + 40) + v7;
    *a1 = 1LL;
    a1[1] = v2;
    a1[2] = v8;
  }
  return result;
}