__int64 __fastcall uu_test::parser::Symbol::into_literal(__int64 a1, __int64 a2)
{
  const char *v2; // rsi
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h]

  switch ( *(_QWORD *)a2 )
  {
    case 0LL:
      v2 = asc_1D271;
      goto LABEL_5;
    case 1LL:
      v2 = asc_1D272;
LABEL_5:
      std::sys::os_str::bytes::Slice::to_owned(&v5, v2, 1LL);
      goto LABEL_6;
    case 2LL:
    case 3LL:
      v6 = *(_QWORD *)(a2 + 24);
      v5 = *(_OWORD *)(a2 + 8);
LABEL_6:
      result = v6;
      *(_QWORD *)(a1 + 24) = v6;
      v4 = v5;
      break;
    case 4LL:
    case 5LL:
      result = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a1 + 24) = result;
      v4 = *(_OWORD *)(a2 + 16);
      break;
    case 6LL:
      uu_test::parser::Symbol::into_literal::panic_cold_explicit();
  }
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 3LL;
  return result;
}
