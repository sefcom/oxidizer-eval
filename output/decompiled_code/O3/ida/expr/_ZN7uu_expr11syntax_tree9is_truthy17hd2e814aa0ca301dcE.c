char __fastcall uu_expr::syntax_tree::is_truthy(__int64 a1)
{
  __int64 v1; // rcx
  char *v2; // rdx
  char v3; // si
  char result; // al
  __int64 v5; // rsi

  if ( *(_QWORD *)a1 != 0x8000000000000000LL )
    return *(_BYTE *)(a1 + 24) != 1;
  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    return 0;
  v2 = *(char **)(a1 + 16);
  if ( v1 == 1 )
  {
    v3 = *v2;
    result = 1;
    if ( *v2 == 45 )
      return result;
  }
  else
  {
    v3 = *v2;
  }
  if ( v3 == 48 || (result = 1, v3 == 45) )
  {
    v5 = 1LL;
    do
    {
      result = v1 != v5;
      if ( v1 == v5 )
        break;
    }
    while ( v2[v5++] == 48 );
  }
  return result;
}
