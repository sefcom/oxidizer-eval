__int64 __fastcall uu_cat::cat_handle(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)a3 || *(_BYTE *)(a3 + 4) )
    return uu_cat::write_lines();
  else
    return uu_cat::write_fast();
}
