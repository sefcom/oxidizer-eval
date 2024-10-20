__int64 *__fastcall uu_dircolors::get_colors_format_strings(__int64 *a1, _BYTE *a2)
{
  void *v2; // rax
  __int64 v3; // r14
  __int64 v4; // r12
  _BYTE *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  void *v8; // rax

  switch ( *a2 )
  {
    case 0:
      v2 = (void *)_rust_alloc(11LL, 1LL);
      if ( !v2 )
        alloc::raw_vec::handle_error(1LL, 11LL);
      v3 = (__int64)v2;
      qmemcpy(v2, "LS_COLORS='", 11);
      v4 = 19LL;
      v5 = (_BYTE *)_rust_alloc(19LL, 1LL);
      if ( !v5 )
        goto LABEL_10;
      qmemcpy(v5, "';\nexport LS_COLORS", 19);
      v6 = 19LL;
      v7 = 11LL;
      break;
    case 1:
      v4 = 1LL;
      v8 = (void *)_rust_alloc(18LL, 1LL);
      if ( !v8 )
        alloc::raw_vec::handle_error(1LL, 18LL);
      v3 = (__int64)v8;
      qmemcpy(v8, "setenv LS_COLORS '", 18);
      v5 = (_BYTE *)_rust_alloc(1LL, 1LL);
      if ( !v5 )
LABEL_10:
        alloc::raw_vec::handle_error(1LL, v4);
      *v5 = 39;
      v6 = 1LL;
      v7 = 18LL;
      break;
    case 2:
      v3 = 1LL;
      v7 = 0LL;
      v6 = 0LL;
      v5 = (_BYTE *)(&dword_0 + 1);
      break;
    case 3:
      core::panicking::panic(aInternalErrorE_3, 40LL, &off_F3108);
  }
  *a1 = v7;
  a1[1] = v3;
  a1[2] = v7;
  a1[3] = v6;
  a1[4] = (__int64)v5;
  a1[5] = v6;
  return a1;
}
