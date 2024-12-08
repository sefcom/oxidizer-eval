__int64 __fastcall uu_ls::classify_file(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rcx
  __int64 result; // rax
  _DWORD *metadata; // rax
  char v5; // cl

  v2 = uu_ls::PathData::file_type(a1, a2);
  result = 1114112LL;
  if ( v2 )
  {
    switch ( ((*v2 & 0xF000u) - 4096) >> 12 )
    {
      case 0u:
        result = 124LL;
        break;
      case 3u:
        result = 47LL;
        break;
      case 7u:
        metadata = uu_ls::PathData::get_metadata(a1, a2);
        if ( !metadata )
          goto LABEL_6;
        v5 = core::ops::function::FnOnce::call_once((unsigned int)metadata[14]);
        result = 42LL;
        if ( !v5 )
          goto LABEL_6;
        break;
      case 9u:
        result = 64LL;
        break;
      case 0xBu:
        result = 61LL;
        break;
      default:
LABEL_6:
        result = 1114112LL;
        break;
    }
  }
  return result;
}
