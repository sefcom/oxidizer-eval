__int64 __fastcall just::alias::Alias<just::namepath::Namepath>::resolve(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3

  v4 = just::namepath::Namepath::last(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v5 = just::token::Token::lexeme(v4);
  v7 = v6;
  v8 = just::token::Token::lexeme(a3 + 160);
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v7, v8, v9) )
    core::panicking::panic(aAssertionFaile_17, 62LL, &off_42D9A8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 112);
  *(_OWORD *)a1 = *(_OWORD *)(a2 + 96);
  v10 = *(_OWORD *)(a2 + 40);
  v11 = *(_OWORD *)(a2 + 56);
  v12 = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 48) = v10;
  *(_OWORD *)(a1 + 64) = v11;
  *(_OWORD *)(a1 + 80) = v12;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 24) = a3;
  return core::ptr::drop_in_place<just::namepath::Namepath>(a2);
}