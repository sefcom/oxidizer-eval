__int64 __fastcall uu_cut::cut_fields(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r13
  unsigned __int8 v8; // bp
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v12; // r10
  const char *v13; // r11
  char v14; // [rsp+7h] [rbp-41h] BYREF
  _QWORD v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v5 = *(_BYTE *)(a4 + 32);
  if ( v5 == 2 )
    core::option::unwrap_failed(&off_128E10);
  v8 = *(_BYTE *)(a4 + 40);
  v9 = *(_QWORD *)(a4 + 16);
  if ( v9 )
  {
    v15[0] = uu_cut::matcher::ExactMatcher::new(v9, *(_QWORD *)(a4 + 24));
    v15[1] = v10;
    if ( *(_QWORD *)a4 )
      return uu_cut::cut_fields_explicit_out_delim(
               a1,
               (__int64)v15,
               a2,
               a3,
               v5 != 0,
               v8,
               *(_QWORD *)a4,
               *(_QWORD *)(a4 + 8));
    else
      return uu_cut::cut_fields_implicit_out_delim(a1, (__int64)v15, a2, a3, v5 != 0, v8);
  }
  else
  {
    v12 = 1LL;
    if ( *(_QWORD *)a4 )
      v12 = *(_QWORD *)(a4 + 8);
    v13 = asc_1DC19;
    if ( *(_QWORD *)a4 )
      v13 = *(const char **)a4;
    return uu_cut::cut_fields_explicit_out_delim(a1, (__int64)&v14, a2, a3, v5 != 0, v8, (__int64)v13, v12);
  }
}
