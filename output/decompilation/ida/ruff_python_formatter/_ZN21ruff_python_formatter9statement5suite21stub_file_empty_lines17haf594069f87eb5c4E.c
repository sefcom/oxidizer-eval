_DWORD *__fastcall ruff_python_formatter::statement::suite::stub_file_empty_lines(
        _DWORD *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 (__fastcall *v12)(__int64); // r12
  __int64 *v13; // rax
  char v14; // bl
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int8 should_insert_blank_line_after_class_in_stub_file; // al
  unsigned __int8 v23; // bl
  unsigned int v24; // edx
  char v25; // bl
  __int64 v26; // rax
  __int64 v27; // rdi
  bool v28; // zf
  _DWORD *result; // rax
  __int16 v30[12]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+38h] [rbp-40h]
  _DWORD *v34; // [rsp+40h] [rbp-38h]

  v34 = a1;
  v12 = *(__int64 (__fastcall **)(__int64))(a8 + 48);
  v13 = (__int64 *)v12(a7);
  v32 = *v13;
  v31 = v13[1];
  v14 = 1;
  if ( !(a6 | a5) )
    v14 = ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line(a3, a4, a7, a8) ^ 1;
  v33 = a3;
  v15 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(a3);
  v17 = v16;
  v18 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(a4);
  v20 = v19;
  v21 = v12(a7);
  should_insert_blank_line_after_class_in_stub_file = ruff_python_formatter::statement::suite::should_insert_blank_line_after_class_in_stub_file(
                                                        v15,
                                                        v17,
                                                        v18,
                                                        v20,
                                                        v21);
  if ( a2 != 2 )
  {
    if ( v14 )
    {
      v23 = should_insert_blank_line_after_class_in_stub_file;
      <ruff_python_ast::generated::Stmt as ruff_text_size::traits::Ranged>::range(v33);
      v25 = ((unsigned int)ruff_python_trivia::tokenizer::lines_after_ignoring_end_of_line_trivia(v24, v32, v31) >= 2) | v23;
      v26 = a8;
      v27 = a7;
      if ( !v25 )
      {
LABEL_8:
        v30[0] = 513;
        goto LABEL_13;
      }
    }
    else
    {
      v28 = should_insert_blank_line_after_class_in_stub_file == 0;
      v26 = a8;
      v27 = a7;
      if ( v28 )
        goto LABEL_8;
    }
    v30[0] = 769;
    goto LABEL_13;
  }
  if ( should_insert_blank_line_after_class_in_stub_file | (unsigned __int8)v14 )
    v30[0] = 769;
  else
    v30[0] = 513;
  v27 = a7;
  v26 = a8;
LABEL_13:
  (*(void (__fastcall **)(__int64, __int16 *))(v26 + 24))(v27, v30);
  result = v34;
  *v34 = 4;
  return result;
}