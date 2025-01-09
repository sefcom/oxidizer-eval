__int64 __fastcall uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(__int64 a1, _QWORD *a2)
{
  char v2; // cl
  unsigned int v3; // r12d
  __int64 v4; // rbx
  __int128 v6; // [rsp+8h] [rbp-70h] BYREF
  __int64 v7; // [rsp+18h] [rbp-60h]
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]

  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 8LL;
  v7 = 0LL;
  while ( 1 )
  {
    uu_env::string_parser::StringParser::consume_chunk((__int64)&v8, a2);
    v2 = v10;
    if ( v8 )
      break;
    HIDWORD(v12) = HIDWORD(v10);
    *(_DWORD *)((char *)&v12 + 1) = *(_DWORD *)((char *)&v10 + 1);
    v11 = v9;
    LOBYTE(v12) = v10;
    if ( v9 )
    {
      alloc::vec::Vec<T,A>::push(&v6, &v11);
    }
    else
    {
      v3 = v12;
      alloc::vec::Vec<T,A>::push(&v6, &v11);
      if ( v3 < 0x80 )
        goto LABEL_9;
    }
    uu_env::string_parser::StringParser::peek_chunk((__int64)&v8, a2);
    if ( !v8 || !v9 && (unsigned int)v10 <= 0x7F )
    {
LABEL_9:
      v4 = a1;
      *(_QWORD *)(a1 + 16) = v7;
      *(_OWORD *)a1 = v6;
      return v4;
    }
  }
  v4 = a1;
  *(_QWORD *)(a1 + 8) = v9;
  *(_BYTE *)(a1 + 16) = v2;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  core::ptr::drop_in_place<alloc::vec::Vec<uu_env::string_parser::Chunk>>(&v6);
  return v4;
}
