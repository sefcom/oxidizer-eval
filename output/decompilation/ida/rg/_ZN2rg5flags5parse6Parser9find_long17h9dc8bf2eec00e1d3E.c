__int64 __fastcall rg::flags::parse::Parser::find_long(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 result; // rax

  if ( (rg::flags::parse::FlagMap::find(a2 + 24, a3, a4) & 1) == 0 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a3);
  v7 = *(_QWORD *)(a2 + 16);
  if ( v6 >= v7 )
    core::panicking::panic_bounds_check(v6, v7, &off_3EB5F8);
  a1[1] = *(_QWORD *)(a2 + 8) + 40 * v6;
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}