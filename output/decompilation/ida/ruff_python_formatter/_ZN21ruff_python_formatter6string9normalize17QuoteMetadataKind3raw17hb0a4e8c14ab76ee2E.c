__int64 __fastcall ruff_python_formatter::string::normalize::QuoteMetadataKind::raw(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5)
{
  __int64 result; // rax
  int v6; // ebp
  void *i; // rdx
  void *j; // rdx
  char v9; // r12
  _QWORD v10[2]; // [rsp+8h] [rbp-40h] BYREF
  _DWORD v11[12]; // [rsp+18h] [rbp-30h] BYREF

  v10[0] = a2;
  v10[1] = a2 + a3;
  result = a4 ^ 1u;
  v6 = 5 * result + 34;
  if ( a5 )
  {
    for ( i = &unk_110001; ; LODWORD(i) = v11[0] )
    {
      v11[0] = (_DWORD)&unk_110001;
      if ( (_DWORD)i == (_DWORD)&unk_110001 )
      {
        result = core::str::validations::next_code_point(v10);
        if ( (result & 1) == 0 )
          break;
      }
      if ( (_DWORD)i == 92 )
      {
        result = v11[0];
        v11[0] = (_DWORD)&unk_110001;
        if ( (_DWORD)result == (_DWORD)&unk_110001 )
          result = core::str::validations::next_code_point(v10);
      }
      else
      {
        if ( (_DWORD)i == (_DWORD)&unk_110000 )
          break;
        if ( (_DWORD)i == v6 )
        {
          v9 = 1;
          goto LABEL_27;
        }
      }
    }
  }
  else
  {
    for ( j = &unk_110001; ; LODWORD(j) = v11[0] )
    {
      v11[0] = (_DWORD)&unk_110001;
      if ( (_DWORD)j == (_DWORD)&unk_110001 )
      {
        result = core::str::validations::next_code_point(v10);
        if ( (result & 1) == 0 )
          break;
      }
      if ( (_DWORD)j == 92 )
      {
        result = v11[0];
        v11[0] = (_DWORD)&unk_110001;
        if ( (_DWORD)result == (_DWORD)&unk_110001 )
          result = core::str::validations::next_code_point(v10);
      }
      else
      {
        if ( (_DWORD)j == (_DWORD)&unk_110000 )
          break;
        if ( (_DWORD)j == v6 )
        {
          core::option::Option<T>::get_or_insert_with(v11, v10);
          result = v11[0];
          v9 = 1;
          if ( v11[0] == (_DWORD)&unk_110000 )
            goto LABEL_27;
          if ( v11[0] == v6 )
          {
            v11[0] = (_DWORD)&unk_110001;
            result = core::option::Option<T>::get_or_insert_with(v11, v10);
            if ( v11[0] == (_DWORD)&unk_110000 )
              goto LABEL_27;
            result = core::option::Option<T>::get_or_insert_with(v11, v10);
            if ( v11[0] == v6 )
              goto LABEL_27;
          }
        }
      }
    }
  }
  v9 = 0;
LABEL_27:
  a1[1] = v9;
  *a1 = 0;
  return result;
}