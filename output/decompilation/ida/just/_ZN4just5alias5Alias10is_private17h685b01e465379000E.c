char __fastcall just::alias::Alias::is_private(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // cl
  char result; // al
  _DWORD v8[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v1 = just::token::Token::lexeme(a1 + 32);
  v3 = v2;
  v8[0] = 0;
  v4 = core::char::methods::encode_utf8_raw(95LL, v8);
  v6 = core::slice::<impl [T]>::starts_with(v1, v3, v4, v5);
  result = 1;
  if ( !v6 )
    return just::attribute_set::AttributeSet::contains(a1, 15LL);
  return result;
}