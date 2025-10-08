__int64 __fastcall alacritty::config::font::SecondaryFontDescription::desc(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 result; // rax
  _BYTE v5[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-40h] BYREF
  __int128 v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-28h]

  v3 = 0x8000000000000000LL;
  if ( __OFSUB__(0LL, *a2) )
  {
    <alloc::string::String as core::clone::Clone>::clone(v5, a3);
    if ( a2[3] == 0x8000000000000000LL )
      goto LABEL_6;
    goto LABEL_5;
  }
  <alloc::string::String as core::clone::Clone>::clone(&v6, a2);
  *(_OWORD *)&v5[8] = v7;
  *(_QWORD *)v5 = v6;
  if ( a2[3] != 0x8000000000000000LL )
  {
LABEL_5:
    <alloc::string::String as core::clone::Clone>::clone(&v6, a2 + 3);
    v3 = v6;
    v8 = v7;
  }
LABEL_6:
  result = *(_QWORD *)&v5[16];
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v5[16];
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *(_QWORD *)(a1 + 24) = v3;
  *(_OWORD *)(a1 + 32) = v8;
  return result;
}