__int64 __fastcall uu_cut::cut_fields(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  unsigned __int8 v7; // bp
  __int64 v8; // rdx
  const char *v10; // r10
  __int64 v11; // rax
  char v12; // [rsp+7h] [rbp-41h] BYREF
  _QWORD v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = *(_BYTE *)(a4 + 32);
  if ( v4 == 2 )
    core::option::unwrap_failed(&off_129E60);
  v7 = *(_BYTE *)(a4 + 40);
  if ( *(_QWORD *)(a4 + 16) )
  {
    v13[0] = uu_cut::matcher::ExactMatcher::new(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24));
    v13[1] = v8;
    if ( *(_QWORD *)a4 )
      return uu_cut::cut_fields_explicit_out_delim(
               a1,
               (__int64)v13,
               a2,
               a3,
               v4 != 0,
               v7,
               *(_QWORD *)a4,
               *(_QWORD *)(a4 + 8));
    else
      return uu_cut::cut_fields_implicit_out_delim(a1, (__int64)v13, a2, a3, v4 != 0, v7);
  }
  else
  {
    v10 = asc_1DD21;
    if ( *(_QWORD *)a4 )
      v10 = *(const char **)a4;
    v11 = 1LL;
    if ( *(_QWORD *)a4 )
      v11 = *(_QWORD *)(a4 + 8);
    return uu_cut::cut_fields_explicit_out_delim(a1, (__int64)&v12, a2, a3, v4 != 0, v7, (__int64)v10, v11);
  }
}
