        int a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  bool v6; // cf
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // kr00_8
  __int64 v15; // rcx
  unsigned __int64 v16; // rax

  if ( a4 )
    return 0LL;
  result = a2[6];
  if ( *a2 )
  {
    v5 = a2[1];
    v6 = __CFADD__(a3, v5);
    v7 = a3 + v5;
    if ( v6 )
      core::panicking::panic_const::panic_const_add_overflow(&off_1140F0, a2, a3, v7);
    v8 = *(_QWORD *)(*a1 + 64LL);
    if ( !v8 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_1140F0, *a1, a3, v7);
    v10 = result;
    if ( (v8 | v7) >> 32 )
    {
      v11 = v7 % v8;
      v12 = v7 / v8 + 1;
      if ( v7 / v8 != -1LL )
      {
LABEL_8:
        v14 = v12;
        v13 = v8 * (unsigned __int128)(unsigned __int64)v12;
        if ( !is_mul_ok(v8, v14) )
          core::panicking::panic_const::panic_const_mul_overflow(&off_114108, a3, *((_QWORD *)&v13 + 1));
        v15 = v13;
        v16 = v13 + v10;
        if ( __CFADD__(v15, v10) )
          core::panicking::panic_const::panic_const_add_overflow(&off_114120, a3, *((_QWORD *)&v13 + 1), v15);
        v6 = v16 < a3;
        result = v16 - a3;
        if ( v6 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_114120, a3, *((_QWORD *)&v13 + 1));
        return result;
      }
    }
    else
    {
      v11 = (unsigned int)v7 % (unsigned int)v8;
      v12 = (unsigned int)v7 / (unsigned int)v8 + 1LL;
      if ( (unsigned int)v7 / (unsigned int)v8 != -1LL )
        goto LABEL_8;
    }
    core::panicking::panic_const::panic_const_add_overflow(&off_114108, a3, v11, v7);
  }
  return result;
}
