__int64 *__fastcall uu_test::parser::Symbol::new(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v6; // rcx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+10h] [rbp-28h]

  v2 = *a2;
  if ( *a2 == 0x8000000000000000LL )
  {
    *a1 = 6LL;
    return a1;
  }
  v3 = a2[1];
  v4 = a2[2];
  std::sys::os_str::bytes::Slice::to_str(&v7, v3, v4);
  if ( v7 )
  {
LABEL_4:
    a1[1] = v2;
    a1[2] = v3;
    a1[3] = v4;
    *a1 = 3LL;
    return a1;
  }
  if ( v9 == 3 )
  {
    if ( !(*(_WORD *)v8 ^ 0x652D | *(unsigned __int8 *)(v8 + 2) ^ 0x71)
      || !(*(_WORD *)v8 ^ 0x672D | *(unsigned __int8 *)(v8 + 2) ^ 0x65)
      || !(*(_WORD *)v8 ^ 0x672D | *(unsigned __int8 *)(v8 + 2) ^ 0x74)
      || !(*(_WORD *)v8 ^ 0x6C2D | *(unsigned __int8 *)(v8 + 2) ^ 0x65)
      || !(*(_WORD *)v8 ^ 0x6C2D | *(unsigned __int8 *)(v8 + 2) ^ 0x74)
      || !(*(_WORD *)v8 ^ 0x6E2D | *(unsigned __int8 *)(v8 + 2) ^ 0x65) )
    {
      a1[2] = v2;
      a1[3] = v3;
      a1[4] = v4;
      a1[1] = 1LL;
      *a1 = 4LL;
      return a1;
    }
    if ( !(*(_WORD *)v8 ^ 0x652D | *(unsigned __int8 *)(v8 + 2) ^ 0x66)
      || !(*(_WORD *)v8 ^ 0x6E2D | *(unsigned __int8 *)(v8 + 2) ^ 0x74)
      || !(*(_WORD *)v8 ^ 0x6F2D | *(unsigned __int8 *)(v8 + 2) ^ 0x74) )
    {
      a1[2] = v2;
      a1[3] = v3;
      a1[4] = v4;
      a1[1] = 2LL;
      *a1 = 4LL;
      return a1;
    }
    goto LABEL_4;
  }
  if ( v9 == 2 )
  {
    if ( *(_WORD *)v8 == 24877 || *(_WORD *)v8 == 28461 )
    {
      a1[1] = v2;
      a1[2] = v3;
      a1[3] = v4;
      *a1 = 2LL;
      return a1;
    }
    if ( *(_WORD *)v8 != 15677 && *(_WORD *)v8 != 15649 )
    {
      if ( *(_WORD *)v8 == 28205 || *(_WORD *)v8 == 31277 )
      {
        a1[2] = v2;
        a1[3] = v3;
        a1[4] = v4;
        a1[1] = 0LL;
        *a1 = 5LL;
        return a1;
      }
      if ( *(_WORD *)v8 == 25133
        || *(_WORD *)v8 == 25389
        || *(_WORD *)v8 == 25645
        || *(_WORD *)v8 == 25901
        || *(_WORD *)v8 == 26157
        || *(_WORD *)v8 == 26413
        || *(_WORD *)v8 == 18221
        || *(_WORD *)v8 == 26669
        || *(_WORD *)v8 == 27437
        || *(_WORD *)v8 == 19501
        || *(_WORD *)v8 == 20013
        || *(_WORD *)v8 == 20269
        || *(_WORD *)v8 == 28717
        || *(_WORD *)v8 == 29229
        || *(_WORD *)v8 == 29485
        || *(_WORD *)v8 == 21293
        || *(_WORD *)v8 == 29741
        || *(_WORD *)v8 == 29997
        || *(_WORD *)v8 == 30509
        || *(_WORD *)v8 == 30765 )
      {
        a1[2] = v2;
        a1[3] = v3;
        a1[4] = v4;
        a1[1] = 1LL;
        *a1 = 5LL;
        return a1;
      }
      goto LABEL_4;
    }
    goto LABEL_54;
  }
  if ( v9 != 1 )
    goto LABEL_4;
  if ( *(_BYTE *)v8 == 40 )
  {
    v6 = 0LL;
    goto LABEL_51;
  }
  v6 = 1LL;
  if ( *(_BYTE *)v8 != 33 )
  {
    if ( *(_BYTE *)v8 != 61 )
      goto LABEL_4;
LABEL_54:
    a1[2] = v2;
    a1[3] = v3;
    a1[4] = v4;
    a1[1] = 0LL;
    *a1 = 4LL;
    return a1;
  }
LABEL_51:
  *a1 = v6;
  if ( v2 )
    _rust_dealloc(v3, v2, 1LL);
  return a1;
}
