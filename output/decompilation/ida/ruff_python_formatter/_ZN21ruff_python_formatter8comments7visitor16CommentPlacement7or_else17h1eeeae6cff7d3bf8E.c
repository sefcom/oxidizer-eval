__int64 __fastcall ruff_python_formatter::comments::visitor::CommentPlacement::or_else(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2

  result = a2;
  if ( *(_DWORD *)a2 <= 0x5Du )
    return ruff_python_formatter::comments::placement::handle_own_line_comment_around_body::{{closure}}(a1, a3, a4, a2);
  a1[4] = *(_OWORD *)(a2 + 64);
  v5 = *(_OWORD *)a2;
  v6 = *(_OWORD *)(a2 + 16);
  v7 = *(_OWORD *)(a2 + 32);
  a1[3] = *(_OWORD *)(a2 + 48);
  a1[2] = v7;
  a1[1] = v6;
  *a1 = v5;
  return result;
}