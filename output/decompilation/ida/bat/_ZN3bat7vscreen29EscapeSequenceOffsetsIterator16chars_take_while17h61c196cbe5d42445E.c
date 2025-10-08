__int64 __fastcall bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r15
  __int64 *v4; // r12
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rcx
  unsigned int v8; // ebp
  char v9; // al
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // [rsp+8h] [rbp-40h]

  v2 = a1;
  v3 = a2 + 16;
  v4 = (__int64 *)(a2 + 40);
  core::option::Option<T>::get_or_insert_with(a2 + 40, a2 + 16);
  if ( *(_DWORD *)(a2 + 48) == (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
  {
    result = 0LL;
  }
  else
  {
    core::option::Option<T>::get_or_insert_with(v4, v3);
    if ( *(_DWORD *)(a2 + 48) == (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
      core::option::unwrap_failed(&off_6CEE20);
    v6 = *(_QWORD *)(a2 + 40);
    core::option::Option<T>::get_or_insert_with(v4, v3);
    v7 = v6;
    v8 = *(_DWORD *)(a2 + 48);
    if ( v8 != (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
    {
      v12 = v6;
      v9 = bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::{{closure}}(v8);
      v7 = v6;
      if ( v9 )
      {
        do
        {
          v10 = 1LL;
          if ( v8 >= 0x80 )
          {
            v10 = 2LL;
            if ( v8 >= 0x800 )
              v10 = 4LL - (v8 < 0x10000);
          }
          v11 = *v4;
          *(_DWORD *)(a2 + 48) = 1114113;
          core::option::Option<T>::get_or_insert_with(v4, v3);
          v8 = *(_DWORD *)(a2 + 48);
        }
        while ( v8 != (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)"
             && (unsigned __int8)bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::{{closure}}(v8) );
        v6 = v11 + v10;
        v2 = a1;
        v7 = v12;
      }
    }
    v2[1] = v7;
    v2[2] = v6;
    result = 1LL;
  }
  *v2 = result;
  return result;
}