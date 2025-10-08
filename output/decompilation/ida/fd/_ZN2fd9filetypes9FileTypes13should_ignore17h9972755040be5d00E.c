__int64 __fastcall fd::filetypes::FileTypes::should_ignore(_BYTE *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int16 v3; // dx
  int v4; // eax
  __int16 v5; // bp
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // al
  __int16 v9; // bp
  char is_empty; // al

  LOBYTE(v2) = 1;
  if ( fd::dir_entry::DirEntry::file_type(a2) )
  {
    v4 = v3 & 0xF000;
    if ( (v4 != 0x8000 || *a1)
      && (v4 != 0x4000 || a1[1])
      && (v4 != 40960 || a1[2])
      && (v4 != 24576 || a1[3])
      && (v4 != 0x2000 || a1[4])
      && (v4 != 49152 || a1[5])
      && (v4 != 4096 || a1[6]) )
    {
      if ( !a1[7]
        || (v5 = v3,
            v6 = fd::dir_entry::DirEntry::path((__int64)a2),
            v8 = faccess::PathExt::executable(v6, v7),
            v3 = v5,
            v8) )
      {
        if ( !a1[8] || (v9 = v3, is_empty = fd::filesystem::is_empty(a2), v3 = v9, is_empty) )
        {
          if ( (v3 & 0xD000) == 0x8000 )
            v2 = 0;
          else
            v2 = 0xFA9Eu >> ((unsigned __int16)(v3 + 0x4000) >> 12);
        }
      }
    }
  }
  LOBYTE(v2) = v2 & 1;
  return v2;
}