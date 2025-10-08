__int64 __fastcall uu_cp::disk_usage_directory(__int64 a1, __int64 a2)
{
  char *v3; // r14
  char *v4; // r15
  __int64 v5; // rbx
  int *v6; // r12
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 *v10; // rbx
  int *v11; // r13
  char *v12; // r12
  char *v13; // r15
  char v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rbp
  bool v17; // zf
  __int64 v18; // [rsp+8h] [rbp-150h] BYREF
  char v19; // [rsp+10h] [rbp-148h]
  __int64 v20; // [rsp+18h] [rbp-140h]
  _QWORD v21[2]; // [rsp+20h] [rbp-138h] BYREF
  char v22; // [rsp+30h] [rbp-128h] BYREF
  int v23; // [rsp+48h] [rbp-110h] BYREF
  __int64 v24; // [rsp+50h] [rbp-108h]
  __int64 v25; // [rsp+58h] [rbp-100h]
  char v26; // [rsp+60h] [rbp-F8h] BYREF
  __int64 dest; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+80h] [rbp-D8h]
  __int64 v29; // [rsp+88h] [rbp-D0h]
  __int64 v30; // [rsp+C8h] [rbp-90h]

  std::fs::read_dir(&dest, a1, a2);
  if ( (_BYTE)v28 == 2 )
    return 1LL;
  v18 = dest;
  v19 = v28;
  v3 = &v26;
  v4 = &v22;
  v5 = 0LL;
  v6 = &v23;
  v7 = &v18;
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v6, v7);
    if ( v23 != 1 )
      break;
    v8 = v24;
    v9 = v25;
    if ( !v24 )
      goto LABEL_14;
    *((_QWORD *)v4 + 2) = *((_QWORD *)v3 + 2);
    *(_OWORD *)v4 = *(_OWORD *)v3;
    v21[0] = v8;
    v21[1] = v9;
    std::fs::DirEntry::file_type(&dest, v21);
    if ( (_DWORD)dest == 1 )
    {
LABEL_13:
      core::ptr::drop_in_place<std::fs::DirEntry>(v21);
LABEL_14:
      core::ptr::drop_in_place<std::fs::ReadDir>(&v18);
      return 1LL;
    }
    if ( (WORD2(dest) & 0xF000) == 0x4000 )
    {
      std::fs::DirEntry::path(&dest, v21);
      v20 = v5;
      v10 = v7;
      v11 = v6;
      v12 = v4;
      v13 = v3;
      v14 = uu_cp::disk_usage_directory(v28, v29);
      v16 = v15;
      core::ptr::drop_in_place<std::path::PathBuf>(&dest);
      v17 = (v14 & 1) == 0;
      v3 = v13;
      v4 = v12;
      v6 = v11;
      v7 = v10;
      v5 = v20;
      if ( !v17 )
        goto LABEL_13;
    }
    else
    {
      std::fs::DirEntry::metadata(&dest);
      if ( (_DWORD)dest == 2 )
        goto LABEL_13;
      v16 = v30;
    }
    core::ptr::drop_in_place<std::fs::DirEntry>(v21);
    v5 += v16;
  }
  core::ptr::drop_in_place<std::fs::ReadDir>(&v18);
  return 0LL;
}