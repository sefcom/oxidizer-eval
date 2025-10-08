__int64 __fastcall just::line::Line::is_comment(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  _DWORD v10[5]; // [rsp+0h] [rbp-14h] BYREF

  v10[0] = HIDWORD(v2);
  v3 = just::line::Line::first(a1, a2);
  if ( !v3 )
    return 0LL;
  v5 = v3;
  v6 = v4;
  v10[0] = 0;
  v7 = core::char::methods::encode_utf8_raw(35LL, v10);
  return core::slice::<impl [T]>::starts_with(v5, v6, v7, v8);
}