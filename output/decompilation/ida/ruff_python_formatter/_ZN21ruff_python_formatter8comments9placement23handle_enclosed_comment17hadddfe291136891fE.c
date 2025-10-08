__int64 __fastcall ruff_python_formatter::comments::placement::handle_enclosed_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v15; // rcx
  char v16; // cl
  __int64 v17; // rdx
  _DWORD *v18; // r10
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // r15
  _QWORD *v36; // r12
  unsigned int v37; // ebx
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned __int8 v40; // al
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int64 v44; // [rsp+8h] [rbp-E0h]
  __int64 v45; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+20h] [rbp-C8h]
  __int64 v47; // [rsp+28h] [rbp-C0h]
  _BYTE v48[128]; // [rsp+68h] [rbp-80h] BYREF

  result = a3;
  v7 = *((_QWORD *)a2 + 1);
  switch ( *(_QWORD *)a2 )
  {
    case 0LL:
      ruff_python_formatter::comments::placement::handle_trailing_module_comment(v48, *((_QWORD *)a2 + 1), a2);
      return ruff_python_formatter::comments::visitor::CommentPlacement::or_else(a1, v48, a5, a6);
    case 2LL:
      return ruff_python_formatter::comments::placement::handle_leading_function_with_decorators_comment(a1, a2, v7);
    case 3LL:
      return ruff_python_formatter::comments::placement::handle_leading_class_with_decorators_comment(a1, a2, v7);
    case 4LL:
      v17 = result;
      return ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment(
               a1,
               a2,
               v17);
    case 6LL:
    case 8LL:
      v8 = *((_QWORD *)a2 + 2);
      if ( v8 == 94 )
        goto LABEL_71;
      v44 = *((_QWORD *)a2 + 3);
      v9 = *(_QWORD *)(v7 + 8);
      goto LABEL_41;
    case 7LL:
      v8 = *((_QWORD *)a2 + 2);
      if ( v8 == 94 )
        goto LABEL_71;
      v44 = *((_QWORD *)a2 + 3);
      v9 = *(_QWORD *)(v7 + 24);
LABEL_41:
      v25 = result;
      v26 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v9);
      result = ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::ptr_eq(v8, v44, v26, v27);
      if ( !(_BYTE)result )
        goto LABEL_71;
      v17 = v25;
      return ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment(
               a1,
               a2,
               v17);
    case 9LL:
      if ( *((_QWORD *)a2 + 2) == 94LL )
        goto LABEL_71;
      v28 = result;
      result = ruff_python_formatter::comments::placement::handle_enclosed_comment::{{closure}}(
                 *(_QWORD *)(v7 + 24),
                 *((_QWORD *)a2 + 2),
                 *((_QWORD *)a2 + 3));
      if ( !(_BYTE)result )
        goto LABEL_71;
      v17 = v28;
      return ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment(
               a1,
               a2,
               v17);
    case 0xDLL:
      return ruff_python_formatter::comments::placement::handle_with_comment(a1, a2, v7);
    case 0x13LL:
      return ruff_python_formatter::comments::placement::handle_import_from_comment(a1, a2, v7);
    case 0x1BLL:
    case 0x2ALL:
      return ruff_python_formatter::comments::placement::handle_trailing_binary_like_comment(a1, a2, a5, a6);
    case 0x1CLL:
      return ruff_python_formatter::comments::placement::handle_named_expr_comment(a1, a2, a5, a6);
    case 0x1DLL:
      return ruff_python_formatter::comments::placement::handle_trailing_binary_expression_left_or_operator_comment(
               a1,
               a2,
               v7,
               a5,
               a6);
    case 0x1ELL:
      return ruff_python_formatter::comments::placement::handle_unary_op_comment(a1, a2, v7, a5, a6);
    case 0x1FLL:
      return ruff_python_formatter::comments::placement::handle_lambda_comment(a1, a2, v7, a5, a6);
    case 0x20LL:
      return ruff_python_formatter::comments::placement::handle_expr_if_comment(a1, a2, v7, a5, a6);
    case 0x21LL:
      ruff_python_formatter::comments::placement::handle_dict_unpacking_comment(v48, a2, a5, a6);
      ruff_python_formatter::comments::visitor::CommentPlacement::or_else(&v45, v48, a5, a6);
      return ruff_python_formatter::comments::visitor::CommentPlacement::or_else(a1, &v45, a5, a6);
    case 0x22LL:
    case 0x23LL:
    case 0x24LL:
    case 0x38LL:
    case 0x4BLL:
    case 0x4ELL:
    case 0x58LL:
      return ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(a1, a2, a5, a6);
    case 0x25LL:
      ruff_python_formatter::comments::placement::handle_key_value_comment(v48, a2, a5, a6);
      return ruff_python_formatter::comments::visitor::CommentPlacement::or_else(a1, v48, a5, a6);
    case 0x26LL:
      if ( !*(_BYTE *)(v7 + 44) )
        goto LABEL_71;
      return ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(a1, a2, a5, a6);
    case 0x2BLL:
      return ruff_python_formatter::comments::placement::handle_call_comment(a1, a2, v7);
    case 0x2ELL:
      v15 = *((_QWORD *)a2 + 6);
      result = *((_QWORD *)a2 + 7);
      if ( v15 == 89 )
      {
        v16 = *((_BYTE *)a2 + 72);
        *(_QWORD *)(a1 + 8) = 89LL;
      }
      else
      {
        if ( (_DWORD)v15 != 90 )
          goto LABEL_71;
        v16 = *((_BYTE *)a2 + 72);
        *(_QWORD *)(a1 + 8) = 90LL;
      }
      *(_QWORD *)(a1 + 16) = result;
      result = *((_QWORD *)a2 + 8);
      *(_QWORD *)(a1 + 24) = result;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v16;
LABEL_60:
      *(_QWORD *)a1 = 96LL;
      break;
    case 0x34LL:
      return ruff_python_formatter::comments::placement::handle_attribute_comment(a1, a2, v7, a5, a6);
    case 0x35LL:
      v18 = *(_DWORD **)(v7 + 8);
      if ( *v18 == 31 )
      {
        result = ruff_python_formatter::comments::placement::handle_slice_comments(
                   a1,
                   (_DWORD)a2,
                   (int)v18 + 8,
                   result,
                   a4,
                   a5,
                   a6);
      }
      else
      {
        if ( *((_BYTE *)a2 + 72) )
          goto LABEL_71;
        v36 = (_QWORD *)*((_QWORD *)a2 + 1);
        result = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*(_QWORD *)v7);
        v37 = *((_DWORD *)a2 + 16);
        if ( v38 >= v37 )
          goto LABEL_71;
        <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*v36);
        if ( v39 > v37 )
          core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D0F0);
        ruff_python_trivia::tokenizer::SimpleTokenizer::new(v48, a5, a6, v39, v37);
        v40 = core::iter::traits::iterator::Iterator::try_fold(v48);
        result = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v40, 1LL);
        if ( (_BYTE)result && (result = core::iter::traits::iterator::Iterator::try_fold(&v45, v48), (_BYTE)v46 == 90) )
        {
          result = *((unsigned int *)a2 + 17);
          *(_QWORD *)(a1 + 8) = 53LL;
          *(_QWORD *)(a1 + 16) = v36;
          *(_DWORD *)(a1 + 24) = v37;
          *(_DWORD *)(a1 + 28) = result;
          *(_WORD *)(a1 + 32) = 0;
          *(_QWORD *)a1 = 96LL;
        }
        else
        {
LABEL_71:
          *(_OWORD *)(a1 + 64) = a2[4];
          v41 = *a2;
          v42 = a2[1];
          v43 = a2[2];
          *(_OWORD *)(a1 + 48) = a2[3];
          *(_OWORD *)(a1 + 32) = v43;
          *(_OWORD *)(a1 + 16) = v42;
          *(_OWORD *)a1 = v41;
        }
      }
      break;
    case 0x36LL:
      return ruff_python_formatter::comments::placement::handle_trailing_expression_starred_star_end_of_line_comment(
               a1,
               a2,
               v7,
               a5,
               a6);
    case 0x39LL:
      if ( !*(_BYTE *)(v7 + 36) )
        goto LABEL_71;
      return ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(a1, a2, a5, a6);
    case 0x3ALL:
      return ruff_python_formatter::comments::placement::handle_slice_comments(a1, (_DWORD)a2, v7, result, a4, a5, a6);
    case 0x3DLL:
      v21 = *((_QWORD *)a2 + 2);
      if ( v21 == 94 || !*((_BYTE *)a2 + 72) || !*(_QWORD *)(v7 + 64) || *((_QWORD *)a2 + 4) == 94LL )
        return ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(a1, a2, a5, a6);
      v22 = *((_QWORD *)a2 + 3);
      *(_QWORD *)(a1 + 8) = v21;
      *(_QWORD *)(a1 + 16) = v22;
      result = *((_QWORD *)a2 + 8);
      *(_QWORD *)(a1 + 24) = result;
      *(_WORD *)(a1 + 32) = 256;
      *(_QWORD *)a1 = 95LL;
      return result;
    case 0x41LL:
      result = ruff_python_formatter::pattern::pattern_match_sequence::SequenceType::from_pattern(
                 *((_QWORD *)a2 + 1),
                 a5,
                 a6);
      if ( (unsigned __int8)result >= 2u )
        goto LABEL_71;
      return ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(a1, a2, a5, a6);
    case 0x42LL:
      v10 = *((_QWORD *)a2 + 1);
      ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(v48, a2, a5, a6);
      v45 = v10;
      v46 = a5;
      v47 = a6;
      return ruff_python_formatter::comments::visitor::CommentPlacement::or_else(a1, v48, &v45);
    case 0x43LL:
      return ruff_python_formatter::comments::placement::handle_pattern_match_class_comment(a1, a2, v7);
    case 0x44LL:
      result = *((unsigned __int8 *)a2 + 72);
      *(_QWORD *)(a1 + 8) = 68LL;
      goto LABEL_59;
    case 0x45LL:
      return ruff_python_formatter::comments::placement::handle_pattern_match_as_comment(a1, a2, a5, a6);
    case 0x4CLL:
      return ruff_python_formatter::comments::placement::handle_pattern_keyword_comment(
               a1,
               a2,
               *(unsigned int *)(v7 + 108),
               a5,
               a6);
    case 0x4DLL:
      return ruff_python_formatter::comments::placement::handle_comprehension_comment(a1, a2, v7, a5, a6);
    case 0x4FLL:
      v29 = *((_QWORD *)a2 + 1);
      ruff_python_formatter::comments::placement::handle_parameters_separator_comment(v48, a2, v7, a5, a6);
      v45 = v29;
      v46 = a5;
      v47 = a6;
      return ruff_python_formatter::comments::visitor::CommentPlacement::or_else(a1, v48, &v45);
    case 0x50LL:
      return ruff_python_formatter::comments::placement::handle_parameter_comment(a1, a2, v7, a5, a6);
    case 0x52LL:
      return ruff_python_formatter::comments::placement::handle_keyword_comment(a1, a2, v7, a5, a6);
    case 0x54LL:
      return ruff_python_formatter::comments::placement::handle_with_item_comment(a1, a2, a5, a6);
    case 0x59LL:
      result = *((unsigned __int8 *)a2 + 72);
      *(_QWORD *)(a1 + 8) = 89LL;
      goto LABEL_59;
    case 0x5ALL:
      result = *((unsigned __int8 *)a2 + 72);
      *(_QWORD *)(a1 + 8) = 90LL;
LABEL_59:
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 + 8);
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = result;
      goto LABEL_60;
    default:
      goto LABEL_71;
  }
  return result;
}