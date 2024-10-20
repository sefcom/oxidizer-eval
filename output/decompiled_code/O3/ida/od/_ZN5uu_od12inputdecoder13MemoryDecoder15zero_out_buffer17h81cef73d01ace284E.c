        __int64 a6)
{
  __int64 v6; // rcx

  if ( a2 < a3 )
  {
    v6 = *a1;
    do
    {
      if ( a2 >= *(_QWORD *)(v6 + 16) )
        core::panicking::panic_bounds_check(a2, *(_QWORD *)(v6 + 16), &off_103418, v6, a5, a6);
      *(_BYTE *)(*(_QWORD *)(v6 + 8) + a2++) = 0;
    }
    while ( a3 != a2 );
  }
}
