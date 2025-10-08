bool __fastcall ruff_python_formatter::expression::is_splittable_expression(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  bool v6; // bp
  __int64 v7; // rax
  __int64 v8; // rdx
  bool v9; // zf
  bool result; // al
  __int64 v11; // rax
  __int64 v12; // rdx

  v2 = a2[2];
  v3 = *a2;
  v4 = a2[1];
  v5 = 8LL;
  v6 = 1;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 2:
    case 3:
    case 5:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xE:
    case 0xF:
    case 0x1A:
      goto LABEL_7;
    case 1:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1C:
    case 0x1F:
    case 0x20:
      v6 = 0;
      goto LABEL_7;
    case 4:
    case 0x1B:
      goto LABEL_3;
    case 6:
    case 7:
    case 0x1D:
    case 0x1E:
      v9 = *(_QWORD *)(a1 + 24) == 0LL;
      goto LABEL_6;
    case 0xD:
      v9 = *(_QWORD *)(a1 + 16) == 0LL;
LABEL_6:
      v6 = !v9;
      goto LABEL_7;
    case 0x10:
      if ( *(_QWORD *)(a1 + 40) + *(_QWORD *)(a1 + 24) )
        goto LABEL_7;
      v11 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*(_QWORD *)(a1 + 8));
      result = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                 v11,
                 v12,
                 *(_QWORD *)(*(_QWORD *)(v2 + 96) + 8LL),
                 *(_QWORD *)(*(_QWORD *)(v2 + 96) + 16LL),
                 v3,
                 v4);
      break;
    case 0x11:
      v6 = *(_QWORD *)(a1 + 8) == 0x8000000000000001LL;
      goto LABEL_7;
    case 0x12:
      v6 = __OFSUB__(0LL, *(_QWORD *)(a1 + 8));
      goto LABEL_7;
    case 0x13:
      v6 = !__OFSUB__(0LL, *(_QWORD *)(a1 + 8));
      goto LABEL_7;
    case 0x14:
      v6 = *(_QWORD *)(a1 + 8) == 0LL;
      goto LABEL_7;
    case 0x19:
      v5 = 48LL;
LABEL_3:
      v7 = ruff_python_ast::expression::<impl core::convert::From<&alloc::boxed::Box<ruff_python_ast::generated::Expr>> for ruff_python_ast::generated::ExprRef>::from(v5 + a1);
      ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
        v7,
        v8,
        *(_QWORD *)(*(_QWORD *)(v2 + 96) + 8LL),
        *(_QWORD *)(*(_QWORD *)(v2 + 96) + 16LL),
        v3,
        v4);
LABEL_7:
      result = v6;
      break;
  }
  return result;
}