char __fastcall just::string_kind::StringKind::from_string_or_backtick(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char v4; // al
  char v5; // dl
  char result; // al
  unsigned __int64 v7; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v8[112]; // [rsp+8h] [rbp-70h] BYREF

  v2 = just::token::Token::lexeme(a2);
  v4 = just::string_kind::StringKind::from_token_start(v2, v3);
  if ( v4 == 2 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v8, aStringkindFrom);
    v7 = 0x8000000000000028LL;
    return just::token::Token::error(a1, a2, &v7);
  }
  else
  {
    result = v4 & 1;
    *a1 = result;
    a1[1] = v5;
    a1[72] = 37;
  }
  return result;
}