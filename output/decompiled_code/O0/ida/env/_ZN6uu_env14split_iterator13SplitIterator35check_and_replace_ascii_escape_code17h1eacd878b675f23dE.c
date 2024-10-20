        int a3)
{
  const char *v3; // r15
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-48h]
  __int64 v10; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h] BYREF
  __int64 v13; // [rsp+20h] [rbp-28h]
  char v14; // [rsp+28h] [rbp-20h]

  switch ( a3 )
  {
    case '"':
      v3 = (const char *)&unk_27D08;
      goto LABEL_11;
    case '#':
      v3 = (const char *)&unk_27CF8;
      goto LABEL_11;
    case '$':
      v3 = (const char *)&unk_27D00;
      goto LABEL_11;
    case '_':
      v3 = (const char *)&unk_27CF0;
      goto LABEL_11;
    case 'f':
      v3 = "f";
      goto LABEL_11;
    case 'n':
      v3 = "n";
      goto LABEL_11;
    case 'r':
      v3 = "r";
      goto LABEL_11;
    case 't':
      v3 = "t";
      goto LABEL_11;
    case 'v':
      v3 = (const char *)&unk_27CE8;
LABEL_11:
      uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v12, (_QWORD *)(a2 + 24));
      v4 = v13;
      if ( v12 == 0x8000000000000000LL )
      {
        v5 = v14 & 1;
        *(_DWORD *)a1 = 5;
        *(_QWORD *)(a1 + 8) = v4;
        *(_QWORD *)(a1 + 16) = v4;
        *(_BYTE *)(a1 + 24) = v5;
      }
      else
      {
        if ( v12 )
        {
          if ( v12 >> 60 )
            core::panicking::panic_nounwind(anon_e24762227fb4b6cbc444e0a255431b09_8_llvm_9290427749344586668, 69LL);
          v6 = 16 * v12;
          v9 = v13;
          v10 = 8LL;
          v7 = 16LL;
        }
        else
        {
          v7 = 8LL;
          v6 = 0LL;
        }
        *(__int64 *)((char *)&v9 + v7) = v6;
        if ( v10 && v11 )
          _rust_dealloc(v9);
        uu_env::string_expander::StringExpander::put_one_char(a2, *((_DWORD *)v3 + 1));
        *(_BYTE *)(a1 + 4) = 1;
LABEL_21:
        *(_DWORD *)a1 = 8;
      }
      return a1;
    default:
      *(_BYTE *)(a1 + 4) = 0;
      goto LABEL_21;
  }
}
