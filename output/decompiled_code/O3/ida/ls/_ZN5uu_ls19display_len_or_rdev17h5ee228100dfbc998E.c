unsigned __int64 __fastcall uu_ls::display_len_or_rdev(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax
  unsigned int v5; // [rsp+8h] [rbp-40h] BYREF
  int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  __int128 v7; // [rsp+10h] [rbp-38h] BYREF
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  if ( (*(_DWORD *)(a2 + 56) & 0xB000 | 0x4000) == 0x6000 )
  {
    v3 = *(_QWORD *)(a2 + 72);
    v5 = ((unsigned int)v3 >> 8) & 0xFFF | HIDWORD(v3) & 0xFFFFF000;
    v6 = (unsigned __int8)v3 | (v3 >> 12) & 0xFFFFFF00;
    <T as alloc::string::ToString>::to_string(&v7, &v5);
    <T as alloc::string::ToString>::to_string(&v9, &v6);
    *(_QWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
    *(_OWORD *)(a1 + 24) = v9;
    result = v10;
    *(_QWORD *)(a1 + 40) = v10;
  }
  else
  {
    if ( !a3 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_212BA0);
    uu_ls::display_size();
    result = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  }
  return result;
}
