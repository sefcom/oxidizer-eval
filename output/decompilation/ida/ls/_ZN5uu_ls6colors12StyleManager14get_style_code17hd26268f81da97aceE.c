__int64 __fastcall uu_ls::colors::StyleManager::get_style_code(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+Fh] [rbp-79h] BYREF
  char v5; // [rsp+17h] [rbp-71h]
  int v6; // [rsp+18h] [rbp-70h]
  __int16 v7; // [rsp+1Ch] [rbp-6Ch]
  char v8; // [rsp+1Eh] [rbp-6Ah]
  char v9; // [rsp+1Fh] [rbp-69h]
  __int128 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+30h] [rbp-58h]
  _QWORD v12[7]; // [rsp+38h] [rbp-50h] BYREF
  char v13; // [rsp+70h] [rbp-18h]
  int v14; // [rsp+71h] [rbp-17h]
  __int16 v15; // [rsp+75h] [rbp-13h]
  char v16; // [rsp+77h] [rbp-11h]
  char v17; // [rsp+78h] [rbp-10h]

  *(_QWORD *)(a2 + 21) = *(_QWORD *)(a3 + 13);
  *(_OWORD *)(a2 + 8) = *(_OWORD *)a3;
  lscolors::style::Style::to_nu_ansi_term_style(&v4, a3);
  v5 = 0;
  v17 = v9;
  v12[6] = v4;
  v13 = 0;
  v14 = v6;
  v15 = v7;
  v16 = v8;
  v12[0] = 0x8000000000000000LL;
  v12[1] = 1LL;
  v12[2] = 0LL;
  v12[3] = 0x8000000000000002LL;
  <T as alloc::string::SpecToString>::spec_to_string(&v10, v12);
  core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v12);
  alloc::string::String::truncate(&v10, v11 - 4);
  result = v11;
  *(_QWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v10;
  return result;
}