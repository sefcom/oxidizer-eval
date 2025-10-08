_BOOL8 __fastcall fd::dir_entry::DirEntry::file_type(_QWORD *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  switch ( *a1 )
  {
    case 0LL:
      return result;
    case 1LL:
    case 2LL:
      result = 1LL;
      break;
    case 3LL:
      result = fd::dir_entry::DirEntry::metadata(a1) != 0;
      break;
  }
  return result;
}