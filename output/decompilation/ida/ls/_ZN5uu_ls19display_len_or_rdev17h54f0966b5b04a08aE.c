unsigned __int64 __fastcall uu_ls::display_len_or_rdev(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rtt
  __int128 v15; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+10h] [rbp-48h]
  __int128 v17; // [rsp+18h] [rbp-40h] BYREF
  __int64 v18; // [rsp+28h] [rbp-30h]
  _BYTE v19[34]; // [rsp+36h] [rbp-22h] BYREF

  if ( (*(_DWORD *)(a2 + 56) & 0xB000 | 0x4000) == 0x6000 )
  {
    v4 = (unsigned __int8)*(_QWORD *)(a2 + 72) | (*(_QWORD *)(a2 + 72) >> 12) & 0xFFFFFF00;
    v5 = core::fmt::num::imp::<impl u32>::_fmt(
           ((unsigned int)*(_QWORD *)(a2 + 72) >> 8) & 0xFFF | HIDWORD(*(_QWORD *)(a2 + 72)) & 0xFFFFF000,
           &v17,
           10LL);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, v5, v6);
    v7 = core::fmt::num::imp::<impl u32>::_fmt(v4, v19, 10LL);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v17, v7, v8);
    *(_QWORD *)(a1 + 40) = v18;
    *(_OWORD *)(a1 + 24) = v17;
    result = v16;
    *(_QWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
  }
  else
  {
    if ( !a3 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_286D28);
    v10 = *(_QWORD *)(a2 + 80);
    v11 = a3;
    if ( (a3 | v10) >> 32 )
    {
      v14 = v10;
      v12 = v10 / a3;
      v13 = v14 % a3;
    }
    else
    {
      v13 = (unsigned int)v10 % (unsigned int)a3;
      v12 = (unsigned int)v10 / v11;
    }
    uu_ls::display_size(a1 + 8, v12 - ((v13 == 0) - 1LL), a4);
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}