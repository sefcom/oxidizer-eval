__int64 __fastcall ruff_python_formatter::comments::placement::handle_own_line_comment_after_branch(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // r15
  __int64 v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r12
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // r12
  unsigned int v24; // ebp
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r15
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rdx
  _OWORD *v32; // rdx
  unsigned int v33; // [rsp+0h] [rbp-78h]
  unsigned int v34; // [rsp+4h] [rbp-74h]
  __int64 v35; // [rsp+18h] [rbp-60h]
  __int128 v36; // [rsp+20h] [rbp-58h] BYREF
  __int64 v37; // [rsp+30h] [rbp-48h]
  _QWORD v38[8]; // [rsp+38h] [rbp-40h] BYREF

  v37 = a6;
  v38[0] = a3;
  v38[1] = a4;
  result = ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::last_child_in_body(v38);
  if ( result == 94 )
  {
LABEL_2:
    a1[4] = *(_OWORD *)(a2 + 64);
    v11 = *(_OWORD *)a2;
    v12 = *(_OWORD *)(a2 + 16);
    v13 = *(_OWORD *)(a2 + 32);
    a1[3] = *(_OWORD *)(a2 + 48);
    a1[2] = v13;
    a1[1] = v12;
    *a1 = v11;
    return result;
  }
  v14 = v10;
  v35 = result;
  v33 = *(_DWORD *)(a2 + 64);
  v34 = *(_DWORD *)(a2 + 68);
  v15 = (unsigned int)ruff_python_ast::helpers::comment_indentation_after(a3, a4, v33, v34, a5, v37);
  v16 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v38);
  v17 = ruff_python_trivia::whitespace::indentation_at_offset(v16, a5, v37);
  v19 = v18;
  if ( !v17 )
    v19 = 0LL;
  if ( HIDWORD(v19) )
  {
    core::result::Result<T,E>::unwrap(1LL, &off_57CC48);
LABEL_8:
    result = (__int64)a1;
    a1[4] = *(_OWORD *)(a2 + 64);
    v20 = *(_OWORD *)a2;
    v21 = *(_OWORD *)(a2 + 16);
    v22 = *(_OWORD *)(a2 + 32);
    a1[3] = *(_OWORD *)(a2 + 48);
    a1[2] = v22;
    a1[1] = v21;
    *a1 = v20;
    return result;
  }
  core::result::Result<T,E>::unwrap(0LL, &off_57CC48);
  if ( (_DWORD)v15 == (_DWORD)v19 )
    goto LABEL_8;
  *(_QWORD *)&v36 = v35;
  v23 = 94LL;
  v24 = v15;
  while ( 1 )
  {
    *((_QWORD *)&v36 + 1) = v14;
    v25 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v36);
    v26 = ruff_python_trivia::whitespace::indentation_at_offset(v25, a5, v37);
    v28 = v27;
    if ( !v26 )
      v28 = 0LL;
    core::result::Result<T,E>::unwrap(HIDWORD(v28) != 0, &off_57CC48);
    v29 = (v24 > (unsigned int)v28) - (v24 < (unsigned int)v28);
    if ( v29 != 1 )
      break;
    v30 = ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::last_child_in_body(&v36);
    v15 = *((_QWORD *)&v36 + 1);
    v23 = v36;
    if ( v30 == 94 )
    {
      result = *(unsigned __int8 *)(a2 + 72);
      v32 = a1;
      goto LABEL_21;
    }
    v14 = v31;
    *(_QWORD *)&v36 = v30;
  }
  if ( !v29 )
  {
    result = *(unsigned __int8 *)(a2 + 72);
    v32 = a1;
    *(_OWORD *)((char *)a1 + 8) = v36;
    goto LABEL_22;
  }
  v32 = a1;
  result = a2;
  if ( v23 == 94 )
    goto LABEL_2;
  result = *(unsigned __int8 *)(a2 + 72);
LABEL_21:
  *((_QWORD *)v32 + 1) = v23;
  *((_QWORD *)v32 + 2) = v15;
LABEL_22:
  *((_DWORD *)v32 + 6) = v33;
  *((_DWORD *)v32 + 7) = v34;
  *((_BYTE *)v32 + 32) = 0;
  *((_BYTE *)v32 + 33) = result;
  *(_QWORD *)v32 = 95LL;
  return result;
}