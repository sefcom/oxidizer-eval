void __fastcall uu_dd::parseargs::conversion_mode(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  if ( a2 )
  {
    if ( a3 == 2 )
    {
      *(_BYTE *)a1 = 0;
      *(_QWORD *)(a1 + 8) = a2;
    }
    else if ( (a3 & 1) != 0 )
    {
      if ( a5 )
        *(_BYTE *)a1 = 6;
      else
        *(_BYTE *)a1 = 5;
      *(_QWORD *)(a1 + 8) = a4;
      *(_QWORD *)(a1 + 16) = a2;
    }
    else
    {
      if ( a5 )
        *(_BYTE *)a1 = 4;
      else
        *(_BYTE *)a1 = 3;
      *(_BYTE *)(a1 + 1) = a6;
      *(_QWORD *)(a1 + 8) = a4;
      *(_QWORD *)(a1 + 16) = a2;
    }
  }
  else if ( a3 == 2 )
  {
    *(_BYTE *)a1 = 7;
  }
  else
  {
    if ( (a3 & 1) != 0 )
    {
      *(_BYTE *)a1 = 2;
    }
    else
    {
      *(_BYTE *)a1 = 1;
      *(_BYTE *)(a1 + 1) = a6;
    }
    *(_QWORD *)(a1 + 8) = a4;
  }
}