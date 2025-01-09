__int64 __fastcall uu_cat::cat_handle(_QWORD *a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  if ( *(_DWORD *)a3 || a3[4] )
    return uu_cat::write_lines((__int64)a1, a2, a3, a4);
  else
    return uu_cat::write_fast(a1, a2);
}
