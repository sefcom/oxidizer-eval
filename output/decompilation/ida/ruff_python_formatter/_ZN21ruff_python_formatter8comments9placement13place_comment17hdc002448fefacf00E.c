__int64 __fastcall ruff_python_formatter::comments::placement::place_comment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD v9[10]; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v10[128]; // [rsp+58h] [rbp-80h] BYREF

  ruff_python_formatter::comments::placement::handle_parenthesized_comment(v10, a2, a4, a5);
  ruff_python_formatter::comments::visitor::CommentPlacement::or_else(v9, v10, a4, a5);
  ruff_python_formatter::comments::visitor::CommentPlacement::or_else(v10, v9, a4, a5);
  v9[0] = a3;
  v9[1] = a4;
  v9[2] = a5;
  return ruff_python_formatter::comments::visitor::CommentPlacement::or_else(a1, v10, v9);
}