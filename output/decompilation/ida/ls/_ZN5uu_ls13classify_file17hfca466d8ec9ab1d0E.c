void *__fastcall uu_ls::classify_file(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rcx
  void *result; // rax
  __int64 metadata; // rax
  __int64 v5; // rcx

  v2 = (_DWORD *)uu_ls::PathData::file_type(a1, a2);
  result = &unk_110000;
  if ( v2 )
  {
    switch ( ((*v2 & 0xF000u) - 4096) >> 12 )
    {
      case 0u:
        result = &dword_7C;
        break;
      case 3u:
        result = &qword_28 + 7;
        break;
      case 7u:
        metadata = uu_ls::PathData::get_metadata(a1, a2);
        if ( !metadata )
          goto LABEL_7;
        v5 = metadata;
        result = &qword_28 + 2;
        if ( (*(_BYTE *)(v5 + 56) & 0x49) == 0 )
          goto LABEL_7;
        break;
      case 9u:
        result = &dword_40;
        break;
      case 0xBu:
        result = &word_3C + 1;
        break;
      default:
LABEL_7:
        result = &unk_110000;
        break;
    }
  }
  return result;
}