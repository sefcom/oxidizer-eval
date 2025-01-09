__int64 __fastcall uu_du::StatPrinter::convert_size(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 *v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned __int64 v10; // [rsp+8h] [rbp-10h] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-8h] BYREF

  v10 = a3;
  v3 = *(_QWORD *)(a2 + 32);
  if ( !v3 )
    return uucore::features::format::human::human_readable(a1, a3, 2LL);
  if ( (_DWORD)v3 == 1 )
    return uucore::features::format::human::human_readable(a1, a3, 1LL);
  if ( *(_BYTE *)(a2 + 73) )
  {
    v5 = (__int64 *)&v10;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 40);
    if ( !v6 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_184618);
    if ( (v6 | a3) >> 32 )
    {
      v7 = a3 / v6;
      v8 = a3 % v6;
    }
    else
    {
      v9 = a3;
      v8 = (unsigned int)a3 % (unsigned int)v6;
      v7 = v9 / (unsigned int)v6;
    }
    v11 = v7 - ((v8 == 0) - 1LL);
    v5 = (__int64 *)&v11;
  }
  return <T as alloc::string::ToString>::to_string(a1, v5);
}
