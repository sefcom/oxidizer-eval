__int64 __fastcall uu_stat::print_it(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  bool v7; // cc
  __int64 result; // rax
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]

  v5 = *(_QWORD *)a1 - 0x7FFFFFFFFFFFFFFFLL;
  v6 = 0LL;
  v7 = *(_QWORD *)a1 < (__int64)0x8000000000000006LL;
  LODWORD(v9) = a2;
  if ( v7 )
    v6 = v5;
  WORD2(v9) = WORD2(a2);
  switch ( v6 )
  {
    case 0LL:
      result = uu_stat::print_str(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), BYTE2(a2), a3, a4, a5);
      break;
    case 1LL:
      result = uu_stat::print_integer(*(_QWORD *)(a1 + 8), &v9, a3, a4, a5, BYTE2(a2) & 1u | ((a2 & 0x100) == 0));
      break;
    case 2LL:
      result = uu_stat::print_unsigned(
                 *(_QWORD *)(a1 + 8),
                 BYTE2(a2),
                 BYTE5(a2),
                 a3,
                 a4,
                 a5,
                 BYTE2(a2) & 1u | ((a2 & 0x100) == 0),
                 v9);
      break;
    case 3LL:
      result = uu_stat::print_unsigned_hex(
                 *(_QWORD *)(a1 + 8),
                 (unsigned __int8)a2,
                 BYTE2(a2),
                 a3,
                 a4,
                 a5,
                 BYTE2(a2) & 1u | ((a2 & 0x100) == 0),
                 v9);
      break;
    case 4LL:
      result = uu_stat::print_unsigned_oct(
                 *(_DWORD *)(a1 + 8),
                 (unsigned __int8)a2,
                 BYTE2(a2),
                 a3,
                 a4,
                 a5,
                 BYTE2(a2) & 1u | ((a2 & 0x100) == 0),
                 v9);
      break;
    case 5LL:
      result = uu_stat::print_float(&v9, a3, a4, a5, BYTE2(a2) & 1u | ((a2 & 0x100) == 0), *(double *)(a1 + 8));
      break;
    case 6LL:
      v10[0] = &off_119BA0;
      v10[1] = 1LL;
      v10[2] = 8LL;
      v11 = 0LL;
      result = std::io::stdio::_print(v10);
      break;
  }
  return result;
}