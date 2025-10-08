__int64 __fastcall uu_cat::cat_handle(__int64 a1, __int64 a2, _BYTE *a3)
{
  if ( a3[1] || a3[3] || a3[2] || *a3 || a3[4] )
    return uu_cat::write_lines();
  else
    return uu_cat::write_fast();
}