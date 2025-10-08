__int64 __fastcall bat::vscreen::EscapeSequenceOffsetsIterator::next_csi(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 1114113;
  if ( v5 == 1114113 )
    v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a2 + 16);
  if ( v5 == (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
    core::option::expect_failed(aToNotBeFinishe, 18LL, &off_6CEE90);
  v15 = a3;
  v6 = 1LL;
  if ( v5 >= 0x80 )
  {
    v6 = 2LL;
    if ( v5 >= 0x800 )
      v6 = 4LL - (v5 < 0x10000);
  }
  v7 = v4 + v6;
  bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(v16, a2);
  v8 = v7;
  if ( LOBYTE(v16[0]) )
    v8 = v17;
  bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(v16, a2);
  v9 = v8;
  if ( LOBYTE(v16[0]) )
    v9 = v17;
  v10 = *(_QWORD *)(a2 + 40);
  v11 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 1114113;
  if ( v11 == 1114113 )
    v10 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a2 + 16);
  v12 = v9;
  if ( v11 != (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
  {
    v13 = 1LL;
    if ( v11 >= 0x80 )
    {
      v13 = 2LL;
      if ( v11 >= 0x800 )
        v13 = 4LL - (v11 < 0x10000);
    }
    v12 = v10 + v13;
  }
  *a1 = 4LL;
  result = v15;
  a1[1] = v15;
  a1[2] = v7;
  a1[3] = v8;
  a1[4] = v9;
  a1[5] = v12;
  return result;
}