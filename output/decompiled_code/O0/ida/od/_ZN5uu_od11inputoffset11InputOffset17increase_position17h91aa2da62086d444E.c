        __int64 a2)
{
  __int64 v2; // rax
  bool v3; // cf
  __int64 v4; // rax
  __int64 v5; // rsi

  v2 = a1[2];
  v3 = __CFADD__(a2, v2);
  v4 = a2 + v2;
  if ( v3 )
    core::panicking::panic_const::panic_const_add_overflow(&off_12C670);
  a1[2] = v4;
  if ( *a1 == 1LL )
  {
    v3 = __CFADD__(a1[1], a2);
    v5 = a1[1] + a2;
    if ( v3 )
      core::panicking::panic_const::panic_const_add_overflow(&off_12C688);
    *a1 = 1LL;
    a1[1] = v5;
  }
}
