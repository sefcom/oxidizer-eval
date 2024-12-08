__int64 __fastcall uu_cp::disk_usage_directory(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v9; // [rsp+0h] [rbp-148h] BYREF
  int v10; // [rsp+8h] [rbp-140h]
  _QWORD v11[2]; // [rsp+10h] [rbp-138h] BYREF
  __int128 v12; // [rsp+20h] [rbp-128h]
  __int64 v13; // [rsp+30h] [rbp-118h]
  __int64 v14; // [rsp+38h] [rbp-110h] BYREF
  __int64 v15; // [rsp+40h] [rbp-108h]
  __int64 v16; // [rsp+48h] [rbp-100h]
  __int128 v17; // [rsp+50h] [rbp-F8h]
  __int64 v18; // [rsp+60h] [rbp-E8h]
  __int64 dest; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-D8h]
  __int64 v21; // [rsp+78h] [rbp-D0h]
  __int64 v22; // [rsp+B8h] [rbp-90h]

  std::fs::read_dir(&dest, a1, a2);
  if ( (_BYTE)v20 != 2 )
  {
    v9 = dest;
    LOBYTE(v10) = v20;
    for ( i = 0LL; ; i += v7 )
    {
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v14, &v9);
      if ( !v14 )
      {
        core::ptr::drop_in_place<std::fs::ReadDir>(&v9);
        return 0LL;
      }
      if ( !v15 )
        break;
      v13 = v18;
      v12 = v17;
      v11[0] = v15;
      v11[1] = v16;
      ((void (__fastcall *)(__int64 *, _QWORD *, __int64, __int64, __int64, __int64, __int64, int))std::fs::DirEntry::file_type)(
        &dest,
        v11,
        v18,
        v15,
        v3,
        v4,
        v9,
        v10);
      if ( (_DWORD)dest )
        goto LABEL_16;
      if ( (WORD2(dest) & 0xF000) == 0x4000 )
      {
        std::fs::DirEntry::path(&dest, v11);
        v5 = uu_cp::disk_usage_directory(v20, v21);
        v7 = v6;
        if ( v5 )
        {
          core::ptr::drop_in_place<std::path::PathBuf>(&dest);
LABEL_16:
          core::ptr::drop_in_place<std::fs::DirEntry>(v11);
          break;
        }
        core::ptr::drop_in_place<std::path::PathBuf>(&dest);
      }
      else
      {
        std::fs::DirEntry::metadata(&dest);
        if ( (_DWORD)dest == 2 )
          goto LABEL_16;
        v7 = v22;
      }
      core::ptr::drop_in_place<std::fs::DirEntry>(v11);
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v9);
  }
  return 1LL;
}
