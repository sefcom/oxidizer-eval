unsigned __int64 __fastcall uu_ls::display_len_or_rdev(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rtt
  unsigned int v11; // [rsp+8h] [rbp-40h] BYREF
  int v12; // [rsp+Ch] [rbp-3Ch] BYREF
  __int128 v13; // [rsp+10h] [rbp-38h] BYREF
  __int64 v14; // [rsp+20h] [rbp-28h]
  __int128 v15; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-10h]

  if ( (*(_DWORD *)(a2 + 56) & 0xB000 | 0x4000) == 0x6000 )
  {
    v4 = *(_QWORD *)(a2 + 72);
    v11 = ((unsigned int)v4 >> 8) & 0xFFF | HIDWORD(v4) & 0xFFFFF000;
    v12 = (unsigned __int8)v4 | (v4 >> 12) & 0xFFFFFF00;
    <T as alloc::string::ToString>::to_string(&v13, &v11);
    <T as alloc::string::ToString>::to_string(&v15, &v12);
    *(_QWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
    *(_OWORD *)(a1 + 24) = v15;
    result = v16;
    *(_QWORD *)(a1 + 40) = v16;
  }
  else
  {
    if ( !a3 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_2129A0);
    v6 = *(_QWORD *)(a2 + 80);
    v7 = a3;
    if ( (a3 | v6) >> 32 )
    {
      v10 = v6;
      v8 = v6 / a3;
      v9 = v10 % a3;
    }
    else
    {
      v9 = (unsigned int)v6 % (unsigned int)a3;
      v8 = (unsigned int)v6 / v7;
    }
    uu_ls::display_size(a1, v8 - ((v9 == 0) - 1LL), a4);
    result = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  }
  return result;
}
