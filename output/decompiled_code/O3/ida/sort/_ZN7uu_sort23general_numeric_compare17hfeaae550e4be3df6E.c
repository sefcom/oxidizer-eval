char __fastcall uu_sort::general_numeric_compare(unsigned __int64 a1, unsigned __int64 a2, double a3, double a4)
{
  int v4; // eax

  if ( a1 == 3 && a2 == 3 )
  {
    if ( a4 >= a3 )
    {
      return -(a3 < a4);
    }
    else
    {
      LOBYTE(v4) = 1;
      if ( a3 < a4 )
        core::option::unwrap_failed(&off_1FF2E0);
    }
  }
  else
  {
    LOBYTE(v4) = -1;
    if ( a1 >= a2 )
      LOBYTE(v4) = a1 != a2;
  }
  return v4;
}
