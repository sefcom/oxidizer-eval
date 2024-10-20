        int a3)
{
  _DWORD *v4; // r15
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  unsigned __int8 v9; // [rsp+18h] [rbp-20h]

  switch ( a3 )
  {
    case '"':
      v4 = &unk_21070;
      goto LABEL_11;
    case '#':
      v4 = &unk_21060;
      goto LABEL_11;
    case '$':
      v4 = &unk_21068;
      goto LABEL_11;
    case '_':
      v4 = &unk_21058;
      goto LABEL_11;
    case 'f':
      v4 = &unk_21048;
      goto LABEL_11;
    case 'n':
      v4 = &unk_21038;
      goto LABEL_11;
    case 'r':
      v4 = &unk_21030;
      goto LABEL_11;
    case 't':
      v4 = &unk_21040;
      goto LABEL_11;
    case 'v':
      v4 = &unk_21050;
LABEL_11:
      uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v7, a2 + 3);
      v5 = v8;
      if ( v7 == 0x8000000000000000LL )
      {
        result = v9;
        *(_DWORD *)a1 = 5;
        *(_QWORD *)(a1 + 8) = v5;
        *(_QWORD *)(a1 + 16) = v5;
        *(_BYTE *)(a1 + 24) = result;
      }
      else
      {
        if ( v7 )
          _rust_dealloc(v8, 16 * v7, 8LL);
        result = uu_env::string_expander::StringExpander::put_one_char(a2, v4[1]);
        *(_BYTE *)(a1 + 4) = 1;
LABEL_16:
        *(_DWORD *)a1 = 8;
      }
      return result;
    default:
      *(_BYTE *)(a1 + 4) = 0;
      goto LABEL_16;
  }
}
