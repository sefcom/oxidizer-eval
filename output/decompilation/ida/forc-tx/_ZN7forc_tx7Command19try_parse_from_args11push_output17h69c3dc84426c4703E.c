__int64 __fastcall forc_tx::Command::try_parse_from_args::push_output(_BYTE *a1, __int64 a2)
{
  char **v2; // rdx

  v2 = &off_1D1360;
  if ( *a1 )
    v2 = &off_1D1378;
  return alloc::vec::Vec<T,A>::push(a1 + 168, a2, v2);
}