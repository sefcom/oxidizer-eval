char __fastcall ruff_python_formatter::expression::expr_slice::assign_comment_in_slice(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char result; // al
  _DWORD v5[5]; // [rsp+10h] [rbp-48h] BYREF
  char v6; // [rsp+24h] [rbp-34h]
  _BYTE v7[48]; // [rsp+28h] [rbp-30h] BYREF

  ruff_python_formatter::expression::expr_slice::find_colons(
    (__int64)v7,
    a2,
    a3,
    *(_DWORD *)a4,
    *(_DWORD *)(a4 + 4),
    *(_QWORD *)(a4 + 8),
    *(_QWORD *)(a4 + 16));
  core::result::Result<T,E>::expect(v5, v7);
  if ( a1 < v5[0] )
    return 0;
  result = 1;
  if ( v6 != 90 )
    return 2 - (a1 < v5[3]);
  return result;
}