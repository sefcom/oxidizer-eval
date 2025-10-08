__int64 __fastcall uu_pathchk::check_path(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0:
      result = uu_pathchk::check_default(a2, a3);
      break;
    case 1:
      result = uu_pathchk::check_basic(a2, a3);
      break;
    case 2:
      if ( !(unsigned __int8)uu_pathchk::check_default(a2, a3) )
        goto LABEL_6;
      goto LABEL_4;
    case 3:
      if ( (unsigned __int8)uu_pathchk::check_basic(a2, a3) )
LABEL_4:
        result = uu_pathchk::check_extra(a2, a3);
      else
LABEL_6:
        result = 0LL;
      break;
  }
  return result;
}