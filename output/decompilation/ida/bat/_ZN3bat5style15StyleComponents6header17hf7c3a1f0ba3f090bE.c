char __fastcall bat::style::StyleComponents::header(__int64 a1)
{
  if ( (unsigned __int8)bat::style::StyleComponents::header_filename() )
    return 1;
  else
    return bat::style::StyleComponents::header_filesize(a1);
}