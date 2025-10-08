__int64 fd::cli::ensure_current_directory_exists()
{
  _QWORD v1[3]; // [rsp+8h] [rbp-30h] BYREF
  __int128 v2; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)fd::filesystem::is_existing_directory(asc_7A585, 2LL) )
    return 0LL;
  v1[0] = &off_402130;
  v1[1] = 1LL;
  v1[2] = 8LL;
  v2 = 0LL;
  return anyhow::__private::format_err(v1);
}