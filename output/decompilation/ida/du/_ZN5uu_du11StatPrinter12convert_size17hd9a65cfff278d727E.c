__int64 __fastcall uu_du::StatPrinter::convert_size(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int128 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  _BYTE v13[28]; // [rsp+1Ch] [rbp-1Ch] BYREF

  v3 = a3;
  v4 = *(_QWORD *)(a2 + 32);
  if ( !v4 )
    return uucore::features::format::human::human_readable(a1, a3, 2LL);
  if ( (_DWORD)v4 == 1 )
    return uucore::features::format::human::human_readable(a1, a3, 1LL);
  if ( *(_BYTE *)(a2 + 73) )
  {
    v6 = a1;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 40);
    if ( !v7 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_145E48);
    v6 = a1;
    if ( (v7 | a3) >> 32 )
    {
      v8 = a3 / v7;
      v9 = a3 % v7;
    }
    else
    {
      v9 = (unsigned int)a3 % (unsigned int)v7;
      v8 = (unsigned int)v3 / (unsigned int)v7;
    }
    v3 = v8 - ((v9 == 0) - 1LL);
  }
  v10 = core::fmt::num::imp::<impl usize>::_fmt(v3, v13, 20LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, v10);
  result = v12;
  *(_QWORD *)(v6 + 16) = v12;
  *(_OWORD *)v6 = v11;
  return result;
}