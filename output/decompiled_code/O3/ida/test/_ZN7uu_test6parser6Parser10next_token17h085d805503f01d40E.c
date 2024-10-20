__int64 *__fastcall uu_test::parser::Parser::next_token(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _BYTE v5[24]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
  if ( v2 == 0x8000000000000001LL )
  {
    v3 = *(_QWORD *)(a2 + 56);
    if ( v3 == *(_QWORD *)(a2 + 72) )
    {
      *(_QWORD *)v5 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v3 + 24;
      *(_QWORD *)&v5[16] = *(_QWORD *)(v3 + 16);
      *(_OWORD *)v5 = *(_OWORD *)v3;
    }
  }
  else
  {
    *(_OWORD *)&v5[8] = *(_OWORD *)(a2 + 32);
    *(_QWORD *)v5 = v2;
  }
  return uu_test::parser::Symbol::new(a1, (__int64 *)v5);
}
