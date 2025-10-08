__int64 __fastcall uu_test::parser::Symbol::into_literal(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int128 *v3; // rsi
  const char *v4; // rsi
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]

  switch ( *(_QWORD *)a2 )
  {
    case 0LL:
      v4 = asc_182C5;
      goto LABEL_6;
    case 1LL:
      v4 = asc_182C6;
LABEL_6:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, v4, 1LL);
      v3 = &v6;
      break;
    case 2LL:
    case 3LL:
      v2 = *(_QWORD *)(a2 + 24);
      v6 = *(_OWORD *)(a2 + 8);
      v7 = v2;
      v3 = &v6;
      break;
    case 4LL:
    case 5LL:
      v3 = (__int128 *)(a2 + 16);
      break;
    case 6LL:
      uu_test::parser::Symbol::into_literal::panic_cold_explicit();
  }
  result = *((_QWORD *)v3 + 2);
  *(_QWORD *)(a1 + 24) = result;
  *(_OWORD *)(a1 + 8) = *v3;
  *(_QWORD *)a1 = 3LL;
  return result;
}