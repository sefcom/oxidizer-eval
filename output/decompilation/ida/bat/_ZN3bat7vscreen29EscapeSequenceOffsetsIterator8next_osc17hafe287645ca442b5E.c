__int64 __fastcall bat::vscreen::EscapeSequenceOffsetsIterator::next_osc(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // ebp
  unsigned int v7; // edx
  _QWORD *v8; // r14
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // [rsp+Ch] [rbp-8Ch] BYREF
  __int64 v17; // [rsp+10h] [rbp-88h]
  __int64 v18; // [rsp+18h] [rbp-80h]
  __int64 v19; // [rsp+20h] [rbp-78h]
  _QWORD v20[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+48h] [rbp-50h]
  _QWORD v24[8]; // [rsp+58h] [rbp-40h] BYREF

  v4 = a2 + 16;
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 1114113;
  if ( v6 == 1114113 )
  {
    v5 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a2 + 16);
    v6 = v7;
  }
  if ( v6 == (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
    core::option::expect_failed(aToNotBeFinishe, 18LL, &off_6CEE60);
  v18 = v5;
  v19 = a3;
  while ( 1 )
  {
    bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(v20, a2);
    if ( LODWORD(v20[0]) != 1 )
    {
      result = *(_QWORD *)(a2 + 8);
      v8 = (_QWORD *)result;
      goto LABEL_17;
    }
    v8 = v21;
    v9 = *(_QWORD *)(a2 + 40);
    v10 = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 48) = 1114113;
    if ( v10 == 1114113 )
      v9 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v4);
    if ( v10 == (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
    {
      result = (__int64)v8;
      goto LABEL_17;
    }
    if ( v10 == 7 )
      goto LABEL_15;
    if ( v10 != 27 )
    {
      v16 = v10;
      v24[0] = &v16;
      v24[1] = <char as core::fmt::Debug>::fmt;
      v20[0] = &off_6CEE50;
      v20[1] = 1LL;
      v23 = 0LL;
      v21 = v24;
      v22 = 1LL;
      core::panicking::panic_fmt(v20, &off_6CEE78);
    }
    v11 = *(_QWORD *)(a2 + 40);
    v12 = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 48) = 1114113;
    if ( v12 == 1114113 )
    {
      v17 = v9;
      v11 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v4);
      v9 = v17;
    }
    if ( v12 == 92 )
      break;
    if ( v12 == (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
    {
LABEL_15:
      result = v9 + 1;
      goto LABEL_17;
    }
  }
  result = v11 + 1;
LABEL_17:
  v14 = 1LL;
  if ( v6 >= 0x80 )
  {
    v14 = 2LL;
    if ( v6 >= 0x800 )
      v14 = 4LL - (v6 < 0x10000);
  }
  v15 = v18 + v14;
  *a1 = 3LL;
  a1[1] = v19;
  a1[2] = v15;
  a1[3] = v8;
  a1[4] = result;
  return result;
}