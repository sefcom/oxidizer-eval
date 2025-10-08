_OWORD *__fastcall uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(__int64 a1, _QWORD *a2)
{
  char v2; // cl
  unsigned int v3; // r12d
  _OWORD *result; // rax
  __int64 v5; // rbx
  __int128 v6; // [rsp+0h] [rbp-78h] BYREF
  __int64 v7; // [rsp+10h] [rbp-68h]
  __int64 v8; // [rsp+18h] [rbp-60h]
  int v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]

  v8 = a1;
  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 8LL;
  v7 = 0LL;
  while ( 1 )
  {
    uu_env::string_parser::StringParser::consume_chunk((__int64)&v9, a2);
    v2 = v11;
    if ( v9 == 1 )
      break;
    HIDWORD(v13) = HIDWORD(v11);
    *(_DWORD *)((char *)&v13 + 1) = *(_DWORD *)((char *)&v11 + 1);
    v12 = v10;
    LOBYTE(v13) = v11;
    if ( v10 )
    {
      alloc::vec::Vec<T,A>::push(&v6, &v12);
    }
    else
    {
      v3 = v13;
      alloc::vec::Vec<T,A>::push(&v6, &v12);
      if ( v3 < 0x80 )
        goto LABEL_9;
    }
    uu_env::string_parser::StringParser::peek_chunk((__int64)&v9, a2);
    if ( v9 != 1 || !v10 && (unsigned int)v11 <= 0x7F )
    {
LABEL_9:
      result = (_OWORD *)v8;
      *(_QWORD *)(v8 + 16) = v7;
      *result = v6;
      return result;
    }
  }
  v5 = v8;
  *(_QWORD *)(v8 + 8) = v10;
  *(_BYTE *)(v5 + 16) = v2;
  *(_QWORD *)v5 = 0x8000000000000000LL;
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v6, *((_QWORD *)&v6 + 1));
  return (_OWORD *)v5;
}