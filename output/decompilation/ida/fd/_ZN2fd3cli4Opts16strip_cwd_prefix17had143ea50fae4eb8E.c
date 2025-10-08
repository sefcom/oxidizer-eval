char __fastcall fd::cli::Opts::strip_cwd_prefix(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  char result; // al
  unsigned __int8 v5; // al
  int v6; // ecx

  if ( *(_QWORD *)(a1 + 176) || *(_QWORD *)(a1 + 200) )
    return 0;
  v5 = core::option::Option<T>::map_or(*(unsigned __int8 *)(a1 + 503));
  if ( !v5 )
    return fd::construct_config::{{closure}}(a2, a3);
  v6 = v5;
  result = 1;
  if ( v6 != 1 )
    return 0;
  return result;
}