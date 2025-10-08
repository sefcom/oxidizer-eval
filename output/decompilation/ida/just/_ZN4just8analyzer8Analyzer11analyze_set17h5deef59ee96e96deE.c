__int64 __fastcall just::analyzer::Analyzer::analyze_set(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD v13[17]; // [rsp+0h] [rbp-88h] BYREF

  v5 = a4 + 80;
  v6 = just::token::Token::lexeme(a4 + 80);
  result = alloc::collections::btree::map::BTreeMap<K,V,A>::get(a2, a3, v6, v7);
  if ( result )
  {
    v9 = result;
    v10 = just::token::Token::lexeme(result + 80);
    v11 = *(_QWORD *)(v9 + 128);
    v13[1] = v10;
    v13[2] = v12;
    v13[3] = v11;
    v13[0] = 0x800000000000001DLL;
    return just::token::Token::error(a1, v5, v13);
  }
  else
  {
    *(_BYTE *)(a1 + 72) = 37;
  }
  return result;
}