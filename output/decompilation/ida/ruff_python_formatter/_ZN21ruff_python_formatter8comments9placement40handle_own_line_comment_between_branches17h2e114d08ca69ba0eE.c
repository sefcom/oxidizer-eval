__int64 __fastcall ruff_python_formatter::comments::placement::handle_own_line_comment_between_branches(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // r13d
  unsigned int v15; // r15d
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r12
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  char v23; // cl
  __int64 v24; // rdx
  char v25; // cl
  __int64 v26; // rdx
  unsigned int v27; // [rsp+4h] [rbp-64h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+10h] [rbp-58h]
  __int64 v30; // [rsp+18h] [rbp-50h] BYREF
  __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+28h] [rbp-40h] BYREF
  __int64 v33; // [rsp+30h] [rbp-38h]

  v30 = a3;
  v31 = a4;
  result = a2[4];
  if ( result == 94 )
    goto LABEL_7;
  v12 = a2[5];
  v32 = a2[4];
  v33 = v12;
  v28 = *a2;
  v29 = a2[1];
  result = ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::is_first_statement_in_alternate_body(&v32);
  if ( !(_BYTE)result )
    goto LABEL_7;
  v13 = a3;
  v14 = *((_DWORD *)a2 + 17);
  v27 = *((_DWORD *)a2 + 16);
  v15 = ruff_python_ast::helpers::comment_indentation_after(v13, a4, v27, v14, a5, a6);
  v16 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v30);
  v17 = ruff_python_trivia::whitespace::indentation_at_offset(v16, a5, a6);
  v19 = v18;
  if ( !v17 )
    v19 = 0LL;
  core::result::Result<T,E>::unwrap(HIDWORD(v19) != 0, &off_57CC48);
  LOBYTE(result) = (v15 > (unsigned int)v19) - (v15 < (unsigned int)v19);
  if ( v15 > (unsigned int)v19 == v15 < (unsigned int)v19 )
  {
    if ( v30 != 60 && (_DWORD)v30 != 87 )
    {
      v23 = *((_BYTE *)a2 + 72);
      v24 = v31;
      *(_QWORD *)(a1 + 8) = v30;
      *(_QWORD *)(a1 + 16) = v24;
      result = v27;
      *(_DWORD *)(a1 + 24) = v27;
      *(_DWORD *)(a1 + 28) = v14;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v23;
      *(_QWORD *)a1 = 95LL;
      return result;
    }
  }
  else
  {
    result = (unsigned __int8)result;
    if ( (unsigned __int8)result == 1 )
    {
LABEL_7:
      *(_OWORD *)(a1 + 64) = *((_OWORD *)a2 + 4);
      v20 = *(_OWORD *)a2;
      v21 = *((_OWORD *)a2 + 1);
      v22 = *((_OWORD *)a2 + 2);
      *(_OWORD *)(a1 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(a1 + 32) = v22;
      *(_OWORD *)(a1 + 16) = v21;
      *(_OWORD *)a1 = v20;
      return result;
    }
    if ( v32 == 60 || (_DWORD)v32 == 87 )
    {
      v25 = *((_BYTE *)a2 + 72);
      v26 = v33;
      *(_QWORD *)(a1 + 8) = v32;
      *(_QWORD *)(a1 + 16) = v26;
      result = v27;
      *(_DWORD *)(a1 + 24) = v27;
      *(_DWORD *)(a1 + 28) = v14;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v25;
      *(_QWORD *)a1 = 94LL;
      return result;
    }
  }
  result = *((unsigned __int8 *)a2 + 72);
  *(_QWORD *)(a1 + 8) = v28;
  *(_QWORD *)(a1 + 16) = v29;
  *(_DWORD *)(a1 + 24) = v27;
  *(_DWORD *)(a1 + 28) = v14;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 33) = result;
  *(_QWORD *)a1 = 96LL;
  return result;
}