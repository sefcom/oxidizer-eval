__int64 __fastcall uu_dd::Dest::fdatasync(_BYTE *a1)
{
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0:
      result = <std::io::stdio::Stdout as std::io::Write>::flush(a1 + 8);
      break;
    case 1:
    case 2:
      result = std::fs::File::sync_data(a1 + 4);
      break;
    case 3:
      result = 0LL;
      break;
  }
  return result;
}
