__int64 __fastcall ruff_python_formatter::other::arguments::is_arguments_huggable(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // rsi
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-28h]

  v4 = a1[1];
  v5 = a1[3];
  if ( v4 )
  {
    if ( v4 == 1 && !v5 )
    {
      v6 = a1;
      v7 = *a1;
      goto LABEL_5;
    }
    return 0;
  }
  if ( v5 != 1 )
    return 0;
  v7 = a1[2];
  if ( *(_BYTE *)(v7 + 111) != 0xDA )
    return 0;
  v6 = a1;
  v10 = *(_QWORD *)(a2 + 16);
  v14 = 82LL;
  v15 = v7;
  if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v10 + 64) )
    return 0;
LABEL_5:
  v8 = *(unsigned __int8 *)(a2 + 58);
  if ( !ruff_python_formatter::expression::is_expression_huggable((unsigned int *)v7, v8) )
  {
    switch ( *(_DWORD *)v7 )
    {
      case 0x11:
        v8 = v7 + 8;
        v9 = 2LL;
        break;
      case 0x12:
        v8 = v7 + 8;
        v9 = 3LL;
        break;
      case 0x13:
        v8 = v7 + 8;
        v9 = 0LL;
        break;
      case 0x14:
        v8 = v7 + 8;
        v9 = 1LL;
        break;
      default:
        v9 = 4LL;
        break;
    }
    if ( !(unsigned __int8)core::result::Result<T,E>::is_ok_and(v9, v8, v6, a2) )
      return 0;
  }
  ruff_python_formatter::comments::Comments::leading_dangling_trailing(&v14, *(_QWORD *)(a2 + 16), v7);
  if ( v15 | v16 )
    return 0;
  LOBYTE(v2) = 1;
  if ( !*(_BYTE *)(a2 + 55) )
  {
    <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v7);
    v12 = *((unsigned int *)v6 + 9);
    if ( v11 > (unsigned int)v12 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57DFC8);
    if ( (unsigned __int8)ruff_python_formatter::other::commas::has_magic_trailing_comma(v11, v12, a2) )
      return 0;
  }
  return v2;
}