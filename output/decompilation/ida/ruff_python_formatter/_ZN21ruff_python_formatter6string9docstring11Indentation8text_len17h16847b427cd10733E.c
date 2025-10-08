__int64 __fastcall ruff_python_formatter::string::docstring::Indentation::text_len(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 1:
      v1 = *(_QWORD *)(a1 + 8);
      goto LABEL_4;
    case 2:
    case 3:
      v1 = *(_QWORD *)(a1 + 8) + *(_QWORD *)(a1 + 16);
LABEL_4:
      if ( HIDWORD(v1) )
      {
        core::result::Result<T,E>::unwrap(1LL, &off_57F560);
        BUG();
      }
      core::result::Result<T,E>::unwrap(0LL, &off_57F560);
      result = (unsigned int)v1;
      break;
    case 4:
      result = *(unsigned int *)(a1 + 4);
      break;
  }
  return result;
}