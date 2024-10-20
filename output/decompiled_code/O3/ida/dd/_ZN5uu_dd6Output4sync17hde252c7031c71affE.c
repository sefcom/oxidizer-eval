__int64 __fastcall uu_dd::Output::sync(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v1 + 149) )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 0:
        goto LABEL_8;
      case 1:
      case 2:
        result = std::fs::File::sync_all(a1 + 4);
        break;
      case 3:
        return 0LL;
    }
  }
  else if ( *(_BYTE *)(v1 + 148) )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 0:
LABEL_8:
        result = <std::io::stdio::Stdout as std::io::Write>::flush(a1 + 8);
        break;
      case 1:
      case 2:
        result = std::fs::File::sync_data(a1 + 4);
        break;
      case 3:
        return 0LL;
    }
  }
  else
  {
    return 0LL;
  }
  return result;
}
