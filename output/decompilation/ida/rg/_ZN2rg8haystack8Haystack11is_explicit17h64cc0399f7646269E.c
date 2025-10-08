char __fastcall rg::haystack::Haystack::is_explicit(_QWORD *a1)
{
  if ( !*a1 )
    return 1;
  if ( a1[4] )
    return 0;
  return rg::haystack::Haystack::is_dir(a1) ^ 1;
}