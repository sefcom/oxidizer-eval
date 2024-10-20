__int64 __fastcall uu_cksum::handle_tag_text_binary_flags(__int64 a1, __int64 a2)
{
  char flag; // bp
  char v4; // bp
  char v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  _WORD *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  char v19; // dl
  _QWORD *v20; // r15
  __int64 v21; // rsi
  __int64 v23; // [rsp+0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+10h] [rbp-58h]
  _BYTE v26[80]; // [rsp+18h] [rbp-50h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, "untagged0", 8LL);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTag, 3LL) | flag ^ 1;
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aBinary_0, 6LL);
  std::env::args_os(v26);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v23, v26);
  v6 = v24;
  v7 = v25;
  if ( !v25 )
  {
    v14 = 0LL;
    v16 = 0LL;
    v11 = 0LL;
    v9 = 0LL;
    v18 = 0LL;
LABEL_20:
    v19 = 0;
    goto LABEL_21;
  }
  v8 = 24 * v25;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    v12 = *(_WORD **)(v24 + v10 + 8);
    v13 = *(_QWORD *)(v24 + v10 + 16);
    if ( v13 != 2 )
      break;
    if ( *v12 == 25133 )
      goto LABEL_8;
LABEL_4:
    ++v11;
    v10 += 24LL;
    if ( v8 == v10 )
      goto LABEL_9;
  }
  if ( v13 != 8 || *(_QWORD *)v12 != 0x7972616E69622D2DLL )
    goto LABEL_4;
LABEL_8:
  v9 = 1LL;
LABEL_9:
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  while ( *(_QWORD *)(v24 + v15 + 16) != 5LL
       || **(_DWORD **)(v24 + v15 + 8) ^ 0x61742D2D | *(unsigned __int8 *)(*(_QWORD *)(v24 + v15 + 8) + 4LL) ^ 0x67 )
  {
    ++v16;
    v15 += 24LL;
    if ( v8 == v15 )
      goto LABEL_14;
  }
  v14 = 1LL;
LABEL_14:
  v17 = 0LL;
  v18 = 0LL;
  while ( *(_QWORD *)(v24 + v17 + 16) != 10LL
       || **(_QWORD **)(v24 + v17 + 8) ^ 0x676761746E752D2DLL | *(unsigned __int16 *)(*(_QWORD *)(v24 + v17 + 8) + 8LL) ^ 0x6465LL )
  {
    ++v18;
    v17 += 24LL;
    if ( v8 == v17 )
      goto LABEL_20;
  }
  v19 = 1;
LABEL_21:
  *(_BYTE *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 9) = (!((unsigned __int8)v19 & ((v9 ^ 1 | v14 ^ 1) == 0)) || v11 >= v16 || v16 >= v18) & v5 & ~v4;
  *(_QWORD *)a1 = 0LL;
  if ( v7 )
  {
    v20 = (_QWORD *)(v6 + 8);
    do
    {
      v21 = *(v20 - 1);
      if ( v21 )
        _rust_dealloc(*v20, v21, 1LL);
      v20 += 3;
      --v7;
    }
    while ( v7 );
  }
  if ( v23 )
    _rust_dealloc(v6, 24 * v23, 8LL);
  return a1;
}
