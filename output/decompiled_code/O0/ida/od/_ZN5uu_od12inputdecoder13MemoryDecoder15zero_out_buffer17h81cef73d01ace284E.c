        unsigned __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( a2 < a3 )
  {
    do
    {
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      if ( !v3 || (v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL), v4 < 0) )
        core::panicking::panic_nounwind(anon_60fe5ecc8a5a6f6a64f7c14fee2afab1_17_llvm_16066862953719322457, 166LL);
      if ( v4 <= a2 )
        core::panicking::panic_bounds_check(a2, v4, &off_12CE40);
      *(_BYTE *)(v3 + a2++) = 0;
    }
    while ( a3 != a2 );
  }
}
