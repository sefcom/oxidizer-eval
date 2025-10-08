__int64 __fastcall bat::decorations::GridBorderDecoration::new(__int64 a1, __int128 *a2)
{
  __int128 v3; // [rsp+0h] [rbp-68h] BYREF
  __int64 v4; // [rsp+10h] [rbp-58h]
  _QWORD v5[6]; // [rsp+18h] [rbp-50h] BYREF
  __int128 v6; // [rsp+48h] [rbp-20h]
  char v7; // [rsp+58h] [rbp-10h]

  v7 = *((_BYTE *)a2 + 16);
  v6 = *a2;
  v5[0] = 0x8000000000000000LL;
  v5[1] = asc_1A2896;
  v5[2] = 3LL;
  v5[3] = 0x8000000000000002LL;
  <T as alloc::string::SpecToString>::spec_to_string(&v3, v5);
  *(_QWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  *(_QWORD *)(a1 + 24) = 1LL;
  return core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v5);
}