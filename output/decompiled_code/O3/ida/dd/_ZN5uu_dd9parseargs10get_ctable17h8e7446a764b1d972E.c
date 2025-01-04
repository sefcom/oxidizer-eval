char *__fastcall uu_dd::parseargs::get_ctable(char a1, char a2)
{
  char *result; // rax

  if ( a1 == 3 )
  {
    if ( a2 == 2 )
    {
      return 0LL;
    }
    else
    {
      result = (char *)&unk_23125;
      if ( (a2 & 1) == 0 )
        return &byte_23025;
    }
  }
  else if ( a2 == 2 )
  {
    return (char *)dword_23928 + dword_23928[a1];
  }
  else if ( a1 == 2 )
  {
    result = (char *)&unk_23525;
    if ( (a2 & 1) == 0 )
      return (char *)&unk_23625;
  }
  else if ( a1 == 1 )
  {
    result = (char *)&unk_23825;
    if ( (a2 & 1) == 0 )
      return (char *)&unk_23725;
  }
  else
  {
    result = (char *)&unk_23625;
    if ( (a2 & 1) == 0 )
      return (char *)&unk_23525;
  }
  return result;
}
