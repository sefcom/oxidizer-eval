char *__fastcall uu_dd::parseargs::get_ctable(unsigned __int8 a1, char a2)
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
      result = (char *)&unk_212C2;
      if ( (a2 & 1) != 0 )
        return (char *)&unk_213C2;
    }
  }
  else if ( a2 == 2 )
  {
    return (char *)dword_234C4 + dword_234C4[a1];
  }
  else if ( a1 )
  {
    if ( a1 == 1 )
    {
      result = (char *)&unk_219C2;
      if ( (a2 & 1) != 0 )
        return (char *)&unk_21AC2;
    }
    else
    {
      result = (char *)&unk_218C2;
      if ( (a2 & 1) != 0 )
        return (char *)&unk_217C2;
    }
  }
  else
  {
    result = (char *)&unk_217C2;
    if ( (a2 & 1) != 0 )
      return (char *)&unk_218C2;
  }
  return result;
}