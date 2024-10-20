        __int64 a5)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v15; // r15
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  bool v21; // cf
  unsigned __int64 v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v25[3]; // [rsp+18h] [rbp-60h] BYREF
  __int128 v26; // [rsp+30h] [rbp-48h]

  v9 = uu_sort::FieldSelector::get_range::resolve_index(a2, a3, a4, a5, a1 + 24);
  if ( v9 )
  {
    v11 = a3;
    if ( v9 != 3 )
    {
      v25[0] = &off_1D2F40;
      v25[1] = 1LL;
      v25[2] = &v23;
      v26 = 0LL;
      core::panicking::panic_fmt(v25, &off_1D2F50);
    }
    return v11;
  }
  v11 = v10;
  if ( *(_BYTE *)(a1 + 16) == 2 || !a1 )
    return v11;
  v12 = v10;
  switch ( uu_sort::FieldSelector::get_range::resolve_index(a2, a3, a4, a5, a1) )
  {
    case 0LL:
      if ( !v13 )
        goto LABEL_15;
      if ( v13 >= a3 )
      {
        if ( v13 != a3 )
          goto LABEL_28;
      }
      else if ( *(char *)(a2 + v13) < -64 )
      {
        goto LABEL_28;
      }
LABEL_15:
      if ( v13 > a3 )
        core::panicking::panic_nounwind(anon_3b19d6da1157f8a5be874edba1fa8efa_12_llvm_3026733004089231496, 102LL);
      if ( !a2 )
LABEL_28:
        core::str::slice_error_fail(a2, a3, v13, a3, &off_1D2F10);
      v15 = v13;
      v24[0] = a2 + v13;
      v24[1] = a2 + a3;
      v18 = 1LL;
      if ( (unsigned int)core::str::validations::next_code_point(v24) )
      {
        v17 = v16;
        if ( (v16 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F800 )
          core::panicking::panic_nounwind(anon_106514630be1c9ef1de9e84b8238e531_0_llvm_16179947721019886102, 57LL);
        v11 = v12;
        v19 = v15;
        if ( (_DWORD)v17 != 1114112 )
        {
          v20 = 2LL;
          if ( (unsigned int)v17 >= 0x800 )
            v20 = 4LL - ((unsigned int)v17 < 0x10000);
          if ( (unsigned int)v17 >= 0x80 )
            v18 = v20;
        }
      }
      else
      {
        v11 = v12;
        v19 = v15;
      }
      v21 = __CFADD__(v18, v19);
      v22 = v18 + v19;
      if ( v21 )
        core::panicking::panic_const::panic_const_add_overflow(&off_1D2F28, v11, v22, v17);
      return v11;
    case 1LL:
    case 3LL:
    case 4LL:
      return v12;
    case 2LL:
      return 0LL;
  }
}
