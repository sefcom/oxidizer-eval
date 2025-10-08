__int64 __fastcall bat::decorations::LineNumberDecoration::new(__int64 a1, __int64 a2)
{
  __int128 v3; // [rsp+0h] [rbp-78h] BYREF
  __int64 v4; // [rsp+10h] [rbp-68h]
  _BYTE v5[24]; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v6; // [rsp+30h] [rbp-48h]
  __int128 v7; // [rsp+48h] [rbp-30h]
  char v8; // [rsp+58h] [rbp-20h]

  alloc::slice::<impl [T]>::repeat(v5, asc_9FF9F, 1LL, 4LL);
  v8 = *(_BYTE *)(a2 + 118);
  v7 = *(_OWORD *)(a2 + 102);
  v6 = 0x8000000000000002LL;
  <T as alloc::string::SpecToString>::spec_to_string(&v3, v5);
  *(_QWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 118);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 102);
  *(_QWORD *)(a1 + 24) = 4LL;
  *(_QWORD *)(a1 + 32) = 10000LL;
  return core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v5);
}