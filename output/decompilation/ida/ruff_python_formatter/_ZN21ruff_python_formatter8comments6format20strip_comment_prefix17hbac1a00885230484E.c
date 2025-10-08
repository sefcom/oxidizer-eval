__int64 __fastcall ruff_python_formatter::comments::format::strip_comment_prefix(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  bool v9; // zf
  void *v10; // rsi
  __int64 result; // rax
  _DWORD v12[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v12[0] = 0;
  v4 = core::char::methods::encode_utf8_raw(35LL, v12);
  v6 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v4, v5, a2, a3);
  v8 = 0;
  v9 = v6 == 0;
  v10 = &unk_8A7AF;
  if ( v6 )
    v10 = (void *)v6;
  LOBYTE(v8) = v6 != 0;
  result = 38LL;
  if ( !v9 )
    result = v7;
  *(_DWORD *)a1 = 4 * v8;
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}