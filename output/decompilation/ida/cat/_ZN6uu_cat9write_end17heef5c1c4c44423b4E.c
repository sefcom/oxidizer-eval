__int64 __fastcall uu_cat::write_end(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  if ( (a5 & 1) != 0 )
  {
    if ( (a4 & 1) != 0 )
      return uu_cat::write_nonprint_to_end(a2, a3, a1, aI, 2LL);
    else
      return uu_cat::write_nonprint_to_end(a2, a3, a1, asc_1AD9B, 1LL);
  }
  else if ( (a4 & 1) != 0 )
  {
    return uu_cat::write_tab_to_end(a2, a3, a1);
  }
  else
  {
    return uu_cat::write_to_end(a2, a3, a1);
  }
}