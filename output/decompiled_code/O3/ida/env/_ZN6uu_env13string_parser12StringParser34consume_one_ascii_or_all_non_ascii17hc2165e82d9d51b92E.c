__int64 __fastcall uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  char v3; // al
  int v4; // r12d
  int v5; // ebp
  int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  unsigned __int8 *v17; // r15
  int char_from_native_int; // ebp
  unsigned __int64 v19; // r13
  __int64 v20; // rbx
  __int128 v22; // [rsp+8h] [rbp-80h] BYREF
  __int64 v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+20h] [rbp-68h]
  char **v25; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-48h]

  v24 = a1;
  *(_QWORD *)&v22 = 0LL;
  *((_QWORD *)&v22 + 1) = 8LL;
  v23 = 0LL;
  while ( 1 )
  {
    uu_env::string_parser::StringParser::consume_chunk((__int64)&v25, a2);
    v2 = v26;
    v3 = v27;
    if ( v25 )
      break;
    v4 = (unsigned __int8)v27;
    v5 = (BYTE3(v27) << 16) | *(unsigned __int16 *)((char *)&v27 + 1);
    v6 = HIDWORD(v27);
    if ( v26 )
    {
      v7 = v23;
      if ( v23 == (_QWORD)v22 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v22);
      v8 = *((_QWORD *)&v22 + 1);
      v9 = 16 * v7;
      *(_QWORD *)(*((_QWORD *)&v22 + 1) + v9) = v2;
      *(_DWORD *)(v8 + v9 + 8) = v4 | (v5 << 8);
      *(_DWORD *)(v8 + v9 + 12) = v6;
      v23 = v7 + 1;
    }
    else
    {
      v10 = v23;
      if ( v23 == (_QWORD)v22 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v22);
      v11 = v4 | (v5 << 8);
      v12 = *((_QWORD *)&v22 + 1);
      v13 = 16 * v10;
      *(_QWORD *)(*((_QWORD *)&v22 + 1) + v13) = 0LL;
      *(_DWORD *)(v12 + v13 + 8) = v11;
      *(_DWORD *)(v12 + v13 + 12) = v6;
      v23 = v10 + 1;
      if ( v11 < 0x80 )
        goto LABEL_20;
    }
    v14 = a2[1];
    v15 = a2[4];
    if ( v14 < v15 )
    {
      v25 = &anon_c479f575d13bdc6af5496164023f20a6_5_llvm_1842864401518779319;
      v26 = 1LL;
      v27 = 8LL;
      v28 = 0LL;
      core::panicking::panic_fmt(&v25, &anon_c479f575d13bdc6af5496164023f20a6_8_llvm_1842864401518779319);
    }
    v16 = v14 - v15;
    if ( v16 )
    {
      v17 = (unsigned __int8 *)(*a2 + v15);
      char_from_native_int = uu_env::native_int_str::get_char_from_native_int(*v17);
      LODWORD(v19) = char_from_native_int;
      if ( char_from_native_int == (_DWORD)&unk_110000 )
      {
        v19 = 1LL;
        if ( v16 >= 2 )
        {
          while ( (unsigned int)uu_env::native_int_str::get_char_from_native_int(v17[v19]) == (_DWORD)&unk_110000 )
          {
            if ( v16 == ++v19 )
            {
              LODWORD(v19) = v16;
              goto LABEL_18;
            }
          }
        }
        if ( v19 > v16 )
          core::slice::index::slice_end_index_len_fail(
            v19,
            v16,
            &anon_c479f575d13bdc6af5496164023f20a6_9_llvm_1842864401518779319);
      }
LABEL_18:
      if ( char_from_native_int == (_DWORD)&unk_110000 || (unsigned int)v19 > 0x7F )
        continue;
    }
LABEL_20:
    v20 = v24;
    *(_QWORD *)(v24 + 16) = v23;
    *(_OWORD *)v20 = v22;
    return v20;
  }
  v20 = v24;
  *(_QWORD *)(v24 + 8) = v26;
  *(_BYTE *)(v20 + 16) = v3;
  *(_QWORD *)v20 = 0x8000000000000000LL;
  if ( (_QWORD)v22 )
    _rust_dealloc(*((_QWORD *)&v22 + 1), 16 * v22, 8LL);
  return v20;
}
