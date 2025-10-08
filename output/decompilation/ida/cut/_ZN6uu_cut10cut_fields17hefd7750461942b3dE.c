__int64 __fastcall uu_cut::cut_fields(__int64 a1, __int64 *a2, __int128 *a3, __int64 a4, __int64 a5)
{
  unsigned __int8 v6; // bl
  int v8; // r14d
  unsigned __int8 v9; // bp
  _BYTE *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v14; // rdx
  __int64 v15; // r10
  const char *v16; // r11
  __int128 v17; // [rsp-18h] [rbp-70h]
  char v18; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h]
  _QWORD v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = *(_BYTE *)(a5 + 32);
  if ( v6 == 2 )
    core::option::unwrap_failed(&off_F9328);
  v8 = (int)a3;
  v9 = *(_BYTE *)(a5 + 40);
  v10 = *(_BYTE **)(a5 + 16);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a5 + 24);
    if ( v11 == 1 && *v10 == v9 )
    {
      v12 = 1LL;
      if ( *(_QWORD *)a5 )
      {
        v12 = *(_QWORD *)(a5 + 8);
        v10 = *(_BYTE **)a5;
      }
      return uu_cut::cut_fields_newline_char_delim(a1, *a2, a2[1], a3, a4, v9, (__int64)v10, v12);
    }
    else
    {
      v19 = a4;
      v20[0] = uu_cut::matcher::ExactMatcher::new((__int64)v10, v11);
      v20[1] = v14;
      if ( *(_QWORD *)a5 )
        return uu_cut::cut_fields_explicit_out_delim(a1, (_DWORD)a2, (unsigned int)v20, v8, v19, v6, v9, *(_OWORD *)a5);
      else
        return uu_cut::cut_fields_implicit_out_delim(a1, (_DWORD)a2, (unsigned int)v20, v8, v19, v6, v9);
    }
  }
  else
  {
    v15 = 1LL;
    if ( *(_QWORD *)a5 )
      v15 = *(_QWORD *)(a5 + 8);
    v16 = asc_1EC79;
    if ( *(_QWORD *)a5 )
      v16 = *(const char **)a5;
    *((_QWORD *)&v17 + 1) = v15;
    *(_QWORD *)&v17 = v16;
    return uu_cut::cut_fields_explicit_out_delim(a1, (__int64)a2, (__int64)&v18, (__int64)a3, a4, v6, v9, v17);
  }
}