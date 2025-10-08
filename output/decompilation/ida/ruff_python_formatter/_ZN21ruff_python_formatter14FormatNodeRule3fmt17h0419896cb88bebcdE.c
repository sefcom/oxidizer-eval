__int64 __fastcall ruff_python_formatter::FormatNodeRule::fmt(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rax
  char *v14; // rsi
  char v15; // bp
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v19; // rax
  _BYTE v20[24]; // [rsp+0h] [rbp-B8h] BYREF
  void *v21; // [rsp+18h] [rbp-A0h]
  __int128 v22; // [rsp+20h] [rbp-98h] BYREF
  __int64 v23; // [rsp+30h] [rbp-88h]
  __int64 v24; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v25[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-70h] BYREF
  __int128 v27; // [rsp+58h] [rbp-60h] BYREF
  __int64 v28; // [rsp+78h] [rbp-40h]
  __int64 v29; // [rsp+80h] [rbp-38h]

  v7 = (*(__int64 (__fastcall **)(_QWORD))(a4[1] + 48LL))(*a4);
  alloc::rc::RcInnerPtr::inc_strong(*(_QWORD *)(v7 + 16));
  v24 = *(_QWORD *)(v7 + 16);
  <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::StmtImportFrom>>::from(a3);
  v9 = v8;
  ruff_python_formatter::comments::Comments::leading_dangling_trailing(&v27);
  v10 = v28;
  v11 = v29;
  v12 = *a4;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(a4[1] + 48LL))(*a4, v24);
  if ( (unsigned __int8)<ruff_python_formatter::statement::stmt_ipy_escape_command::FormatStmtIpyEscapeCommand as ruff_python_formatter::FormatNodeRule<ruff_python_ast::generated::StmtIpyEscapeCommand>>::is_suppressed(
                          v12,
                          v10,
                          v11,
                          v13) )
  {
    *(_QWORD *)&v19 = ruff_python_formatter::verbatim::suppressed_node(19LL, v9);
    *(_OWORD *)v20 = v19;
    <ruff_python_formatter::verbatim::FormatSuppressedNode as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
      a1,
      v20,
      a4);
    return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v24);
  }
  *(_OWORD *)&v20[8] = v27;
  *(_QWORD *)v20 = 1LL;
  <ruff_python_formatter::comments::format::FormatLeadingComments as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
    &v22,
    v20,
    a4);
  if ( (_DWORD)v22 == 4 )
  {
    v14 = (char *)a4[1];
    v15 = *(_BYTE *)(ruff_formatter::formatter::Formatter<Context>::options(*a4, v14) + 12);
    if ( v15 == 1
      && (v14 = (char *)&v22 + 4,
          DWORD1(v22) = ruff_text_size::traits::Ranged::start(*(unsigned int *)(a3 + 64), *(unsigned int *)(a3 + 68)),
          LODWORD(v22) = 1,
          <ruff_formatter::builders::SourcePosition as ruff_formatter::Format<Context>>::fmt(v20, (char *)&v22 + 4, a4),
          *(_DWORD *)v20 != 4)
      || (<ruff_python_formatter::statement::stmt_import_from::FormatStmtImportFrom as ruff_python_formatter::FormatNodeRule<ruff_python_ast::generated::StmtImportFrom>>::fmt_fields(
            v20,
            v14,
            a3,
            a4),
          *(_DWORD *)v20 != 4) )
    {
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&v20[16];
      v17 = *(_OWORD *)v20;
      goto LABEL_11;
    }
    v16 = 0;
    if ( v15 )
    {
      v25[1] = ruff_text_size::traits::Ranged::end(*(unsigned int *)(a3 + 64), *(unsigned int *)(a3 + 68));
      v16 = 1;
    }
    v25[0] = v16;
    v26[0] = v10;
    v26[1] = v11;
    *(_QWORD *)v20 = v25;
    *(_QWORD *)&v20[8] = &unk_57E810;
    *(_QWORD *)&v20[16] = v26;
    v21 = &unk_57D5A8;
    <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v22, a4, v20, 2LL);
  }
  *(_QWORD *)(a1 + 16) = v23;
  v17 = v22;
LABEL_11:
  *(_OWORD *)a1 = v17;
  return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v24);
}