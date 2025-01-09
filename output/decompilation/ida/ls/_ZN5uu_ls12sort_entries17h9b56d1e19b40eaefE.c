__int64 __fastcall uu_ls::sort_entries(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned __int8 v5; // bp
  __int64 result; // rax

  v5 = a3[249];
  result = v5;
  switch ( v5 )
  {
    case 0u:
      goto LABEL_11;
    case 1u:
      result = alloc::slice::<impl [T]>::sort_by(a1, a2);
      if ( !a3[231] )
        goto LABEL_13;
      goto LABEL_12;
    case 2u:
      result = alloc::slice::<impl [T]>::sort_by_key(a1, a2, a4);
      if ( !a3[231] )
        goto LABEL_13;
      goto LABEL_12;
    case 3u:
      result = alloc::slice::<impl [T]>::sort_by_key(a1, a2, a4, a3);
      if ( !a3[231] )
        goto LABEL_13;
      goto LABEL_12;
    case 4u:
      result = alloc::slice::<impl [T]>::sort_by(a1, a2);
      if ( !a3[231] )
        goto LABEL_13;
      goto LABEL_12;
    case 5u:
      result = alloc::slice::<impl [T]>::sort_by(a1, a2);
LABEL_11:
      if ( a3[231] )
        goto LABEL_12;
      goto LABEL_13;
    case 6u:
      result = alloc::slice::<impl [T]>::sort_by(a1, a2);
      if ( !a3[231] )
        goto LABEL_13;
LABEL_12:
      result = core::slice::<impl [T]>::reverse(a1, a2);
LABEL_13:
      if ( v5 )
      {
        if ( a3[237] )
          return alloc::slice::<impl [T]>::sort_by_key(a1, a2);
      }
      return result;
  }
}
