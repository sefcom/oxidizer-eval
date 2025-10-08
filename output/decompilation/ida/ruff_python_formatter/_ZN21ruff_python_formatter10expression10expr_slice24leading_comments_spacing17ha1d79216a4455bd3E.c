__int64 __fastcall ruff_python_formatter::expression::expr_slice::leading_comments_spacing(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  char v5; // [rsp+7h] [rbp-41h] BYREF
  _QWORD v6[4]; // [rsp+8h] [rbp-40h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  if ( !a4 )
    goto LABEL_5;
  if ( *(_BYTE *)(a3 + 9) )
  {
    LOWORD(v6[0]) = 513;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(a2[1] + 24LL))(*a2, v6);
    *(_DWORD *)a1 = 4;
    return result;
  }
  v6[0] = &v5;
  v6[1] = &unk_57CBF0;
  v6[2] = &v5;
  v6[3] = &unk_57CBF0;
  result = <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(
             &v7,
             a2,
             v6,
             2LL);
  if ( (_DWORD)v7 != 4 )
  {
    result = v8;
    *(_QWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
  }
  else
  {
LABEL_5:
    *(_DWORD *)a1 = 4;
  }
  return result;
}