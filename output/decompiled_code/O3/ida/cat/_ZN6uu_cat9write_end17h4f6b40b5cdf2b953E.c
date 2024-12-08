__int64 __fastcall uu_cat::write_end(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  const char *v5; // rcx
  __int64 v6; // r8

  if ( a5 )
  {
    if ( a4 )
    {
      v5 = aI;
      v6 = 2LL;
    }
    else
    {
      v5 = asc_139FB;
      v6 = 1LL;
    }
    return uu_cat::write_nonprint_to_end(a2, a3, a1, v5, v6);
  }
  else if ( a4 )
  {
    return uu_cat::write_tab_to_end(a2, a3, a1);
  }
  else
  {
    return uu_cat::write_to_end(a2, a3, a1);
  }
}
