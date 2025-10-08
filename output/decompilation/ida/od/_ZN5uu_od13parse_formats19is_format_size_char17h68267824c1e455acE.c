char __fastcall uu_od::parse_formats::is_format_size_char(int a1, char a2, char *a3)
{
  char result; // al
  char v4; // al

  if ( !a2 )
    return 0;
  if ( a2 != 1 )
  {
    if ( a1 == 68 )
    {
LABEL_8:
      v4 = 8;
    }
    else
    {
      v4 = 4;
      if ( a1 != 70 )
        return 0;
    }
LABEL_11:
    *a3 = v4;
    return 1;
  }
  result = 0;
  switch ( a1 )
  {
    case 'C':
      v4 = 1;
      goto LABEL_11;
    case 'I':
      v4 = 4;
      goto LABEL_11;
    case 'L':
      goto LABEL_8;
    case 'S':
      v4 = 2;
      goto LABEL_11;
    default:
      return result;
  }
  return result;
}