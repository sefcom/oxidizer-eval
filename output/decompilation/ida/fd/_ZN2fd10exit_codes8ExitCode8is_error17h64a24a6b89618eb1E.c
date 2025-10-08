bool __fastcall fd::exit_codes::ExitCode::is_error(char a1)
{
  unsigned __int8 v1; // cl

  v1 = 1;
  if ( (unsigned __int8)(a1 - 2) < 4u )
    v1 = a1 - 2;
  if ( (unsigned int)v1 - 2 < 2 )
    return 1;
  if ( v1 )
    return (a1 & 1) == 0;
  return 0;
}