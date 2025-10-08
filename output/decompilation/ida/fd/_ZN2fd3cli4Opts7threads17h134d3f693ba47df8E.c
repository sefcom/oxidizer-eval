__int64 __fastcall fd::cli::Opts::threads(__int64 a1)
{
  if ( a1 )
    return a1;
  else
    return fd::cli::default_num_threads();
}