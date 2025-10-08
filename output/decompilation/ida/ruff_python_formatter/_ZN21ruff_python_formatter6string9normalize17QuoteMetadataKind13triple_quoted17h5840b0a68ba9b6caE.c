__int64 __fastcall ruff_python_formatter::string::normalize::QuoteMetadataKind::triple_quoted(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 result; // rax
  int v5; // ebp
  void *i; // rdx
  char v7; // r12
  _QWORD v8[2]; // [rsp+8h] [rbp-40h] BYREF
  _DWORD v9[12]; // [rsp+18h] [rbp-30h] BYREF

  v8[0] = a2;
  v8[1] = a2 + a3;
  result = a4 ^ 1u;
  v5 = 5 * result + 34;
  for ( i = &unk_110001; ; LODWORD(i) = v9[0] )
  {
    v9[0] = (_DWORD)&unk_110001;
    if ( (_DWORD)i == (_DWORD)&unk_110001 )
    {
      result = core::str::validations::next_code_point(v8);
      if ( (result & 1) == 0 )
        break;
    }
    if ( (_DWORD)i == 92 )
    {
      core::option::Option<T>::get_or_insert_with(v9, v8);
      result = v9[0];
      if ( v9[0] == 34 || v9[0] == 92 )
        v9[0] = (_DWORD)&unk_110001;
    }
    else
    {
      if ( (_DWORD)i == (_DWORD)&unk_110000 )
        break;
      if ( (_DWORD)i == v5 )
      {
        core::option::Option<T>::get_or_insert_with(v9, v8);
        result = v9[0];
        v7 = 1;
        if ( v9[0] == (_DWORD)&unk_110000 )
          goto LABEL_18;
        if ( v9[0] == v5 )
        {
          v9[0] = (_DWORD)&unk_110001;
          core::option::Option<T>::get_or_insert_with(v9, v8);
          result = v9[0];
          if ( v9[0] == (_DWORD)&unk_110000 || v9[0] == v5 )
            goto LABEL_18;
        }
      }
    }
  }
  v7 = 0;
LABEL_18:
  a1[1] = v7;
  *a1 = 1;
  return result;
}