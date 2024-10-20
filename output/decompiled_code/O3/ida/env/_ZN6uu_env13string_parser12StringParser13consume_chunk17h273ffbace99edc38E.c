__int64 __fastcall uu_env::string_parser::StringParser::consume_chunk(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned int char_from_native_int; // eax
  unsigned __int8 v7; // dl
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  bool v11; // cf
  unsigned __int64 v12; // r13
  unsigned __int8 *v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+10h] [rbp-68h]
  char **v16; // [rsp+18h] [rbp-60h] BYREF
  __int64 v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int128 v19; // [rsp+30h] [rbp-48h]

  v2 = a2[1];
  v3 = a2[4];
  if ( v2 < v3 )
  {
    v16 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
    v17 = 1LL;
    v18 = 8LL;
    v19 = 0LL;
    core::panicking::panic_fmt(&v16, &anon_c479f575d13bdc6af5496164023f20a6_8_llvm_1842864401518779319);
  }
  v4 = v2 - v3;
  if ( v2 == v3 )
  {
    *(_QWORD *)(a1 + 8) = v3;
    *(_BYTE *)(a1 + 16) = 0;
    v5 = 1LL;
  }
  else
  {
    v15 = *a2;
    v14 = (unsigned __int8 *)(*a2 + v3);
    char_from_native_int = uu_env::native_int_str::get_char_from_native_int(*v14);
    if ( char_from_native_int == (_DWORD)&unk_110000 )
    {
      v8 = 1LL;
      if ( v4 >= 2 )
      {
        while ( (unsigned int)uu_env::native_int_str::get_char_from_native_int(v14[v8]) == (_DWORD)&unk_110000 )
        {
          if ( v4 == ++v8 )
          {
            v8 = v2 - v3;
            v9 = v2 - v3;
            goto LABEL_12;
          }
        }
      }
      if ( v8 > v4 )
        core::slice::index::slice_end_index_len_fail(
          v8,
          v2 - v3,
          &anon_c479f575d13bdc6af5496164023f20a6_9_llvm_1842864401518779319);
      v9 = v8;
    }
    else
    {
      v9 = char_from_native_int | ((unsigned __int64)v7 << 32);
      v8 = 1LL;
      v14 = 0LL;
    }
LABEL_12:
    v10 = v3 + v8;
    a2[4] = v10;
    v11 = v2 < v10;
    v12 = v2 - v10;
    if ( v11 )
    {
      v16 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
      v17 = 1LL;
      v18 = 8LL;
      v19 = 0LL;
      core::panicking::panic_fmt(&v16, &anon_c479f575d13bdc6af5496164023f20a6_13_llvm_1842864401518779319);
    }
    a2[2] = v10 + v15;
    a2[3] = v12;
    *(_QWORD *)(a1 + 8) = v14;
    *(_BYTE *)(a1 + 16) = v9;
    *(_BYTE *)(a1 + 23) = HIBYTE(v9);
    *(_WORD *)(a1 + 21) = HIDWORD(v9) >> 8;
    *(_DWORD *)(a1 + 17) = v9 >> 8;
    v5 = 0LL;
  }
  *(_QWORD *)a1 = v5;
  return a1;
}
