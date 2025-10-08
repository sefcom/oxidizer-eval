char __fastcall ruff_python_formatter::other::parameters::assign_argument_separator_comment_placement(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int a3,
        char a4)
{
  char result; // al
  char v5; // cl

  if ( !a1 )
    goto LABEL_10;
  if ( a3 > a1[2] && a4 && a3 < *a1 )
    return 0;
  if ( a3 <= a1[1] || a4 || (result = 1, a3 >= a1[3]) )
  {
LABEL_10:
    result = 4;
    if ( a2 )
    {
      if ( a3 <= a2[2] || !a4 || (result = 2, a3 >= *a2) )
      {
        result = 4;
        if ( a3 > a2[1] )
        {
          v5 = a4 + 3;
          result = 4;
          if ( a3 < a2[3] )
            return v5;
        }
      }
    }
  }
  return result;
}