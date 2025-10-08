__int64 __fastcall just::line::Line::is_continuation(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  _DWORD v9[5]; // [rsp+0h] [rbp-14h] BYREF

  if ( !a2 )
    return 0LL;
  v2 = a2 << 7;
  if ( *(_DWORD *)(a1 + v2 - 128) != 18 )
    return 0LL;
  v3 = just::token::Token::lexeme(v2 + a1 - 120);
  v5 = v4;
  v9[0] = 0;
  v6 = core::char::methods::encode_utf8_raw(92LL, v9);
  return core::slice::<impl [T]>::ends_with(v3, v5, v6, v7);
}