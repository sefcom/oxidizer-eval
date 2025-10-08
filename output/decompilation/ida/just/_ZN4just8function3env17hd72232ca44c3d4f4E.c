__int64 __fastcall just::function::env(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( a5 )
    just::function::env_var_or_default();
  else
    just::function::env_var();
  return a1;
}