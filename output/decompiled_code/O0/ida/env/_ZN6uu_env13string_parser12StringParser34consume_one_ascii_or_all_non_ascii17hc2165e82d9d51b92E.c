_OWORD *__fastcall uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  unsigned __int8 v3; // al
  unsigned int v4; // ebp
  bool v5; // r12
  int v6; // r15d
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  _OWORD *v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // [rsp+8h] [rbp-90h] BYREF
  __int64 v16; // [rsp+18h] [rbp-80h]
  __int64 v17; // [rsp+20h] [rbp-78h]
  _QWORD *v18; // [rsp+28h] [rbp-70h]
  __int64 v19; // [rsp+30h] [rbp-68h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+58h] [rbp-40h]
  unsigned __int8 v24; // [rsp+60h] [rbp-38h]
  unsigned __int16 v25; // [rsp+61h] [rbp-37h]
  unsigned __int8 v26; // [rsp+63h] [rbp-35h]
  int v27; // [rsp+64h] [rbp-34h]

  v18 = a2;
  v17 = a1;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 8LL;
  v16 = 0LL;
  while ( 1 )
  {
    uu_env::string_parser::StringParser::consume_chunk((__int64)&v22, v18);
    v2 = v23;
    v3 = v24;
    if ( v22 )
      break;
    v4 = v24 | (v25 << 8) | (v26 << 24);
    v5 = v23 != 0;
    v6 = v27;
    v7 = v16;
    if ( v16 == (_QWORD)v15 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v15);
    v8 = *((_QWORD *)&v15 + 1);
    v9 = 16 * v7;
    *(_QWORD *)(*((_QWORD *)&v15 + 1) + v9) = v2;
    *(_DWORD *)(v8 + v9 + 8) = v4;
    *(_DWORD *)(v8 + v9 + 12) = v6;
    v16 = v7 + 1;
    if ( v4 > 0x7F || v5 )
    {
      uu_env::string_parser::StringParser::get_chunk_with_length_at((__int64)&v19, v18, v18[4]);
      if ( !v19 && (v20 || (unsigned int)v21 > 0x7F) )
        continue;
    }
    v10 = (_OWORD *)v17;
    *(_QWORD *)(v17 + 16) = v16;
    *v10 = v15;
    return v10;
  }
  v12 = v17;
  *(_QWORD *)(v17 + 8) = v23;
  v10 = (_OWORD *)v12;
  *(_BYTE *)(v12 + 16) = v3 & 1;
  *(_QWORD *)v12 = 0x8000000000000000LL;
  if ( (_QWORD)v15 )
  {
    if ( (unsigned __int64)v15 >> 60 )
      core::panicking::panic_nounwind(anon_e24762227fb4b6cbc444e0a255431b09_8_llvm_9290427749344586668, 69LL);
    v13 = 16 * v15;
    v19 = *((_QWORD *)&v15 + 1);
    v20 = 8LL;
    v14 = 16LL;
  }
  else
  {
    v14 = 8LL;
    v13 = 0LL;
  }
  *(__int64 *)((char *)&v19 + v14) = v13;
  if ( v20 && v21 )
    _rust_dealloc(v19);
  return v10;
}
