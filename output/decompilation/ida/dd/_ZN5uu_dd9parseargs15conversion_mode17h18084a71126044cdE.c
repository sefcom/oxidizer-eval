void __fastcall uu_dd::parseargs::conversion_mode(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  if ( a2 )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
      {
        *(_BYTE *)a1 = 0;
        *(_QWORD *)(a1 + 8) = a2;
        return;
      }
      if ( a5 )
        *(_BYTE *)a1 = 6;
      else
        *(_BYTE *)a1 = 5;
    }
    else
    {
      if ( a5 )
        *(_BYTE *)a1 = 4;
      else
        *(_BYTE *)a1 = 3;
      *(_BYTE *)(a1 + 1) = a6;
    }
    *(_QWORD *)(a1 + 8) = a4;
    *(_QWORD *)(a1 + 16) = a2;
  }
  else if ( a3 )
  {
    if ( a3 == 1 )
    {
      *(_BYTE *)a1 = 2;
      *(_QWORD *)(a1 + 8) = a4;
    }
    else
    {
      *(_BYTE *)a1 = 7;
    }
  }
  else
  {
    *(_BYTE *)a1 = 1;
    *(_BYTE *)(a1 + 1) = a6;
    *(_QWORD *)(a1 + 8) = a4;
  }
}
