__uid_t __fastcall uu_install::need_copy(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // r13
  __uid_t result; // eax
  int v12; // r15d
  int v13; // r14d
  __int16 v14; // dx
  __int64 v15; // r14
  bool v16; // zf
  __int64 v17; // r12
  __int64 v18; // r13
  __uid_t v19; // [rsp+0h] [rbp-108h]
  int v20; // [rsp+4h] [rbp-104h]
  __int64 v21; // [rsp+8h] [rbp-100h]
  __int64 v22; // [rsp+10h] [rbp-F8h]
  __int64 v23; // [rsp+18h] [rbp-F0h]
  __int64 v24; // [rsp+20h] [rbp-E8h]
  int dest; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D8h]
  __int64 v27; // [rsp+38h] [rbp-D0h]
  int v28; // [rsp+60h] [rbp-A8h]
  int v29; // [rsp+64h] [rbp-A4h]
  __uid_t v30; // [rsp+68h] [rbp-A0h]
  __int64 v31; // [rsp+78h] [rbp-90h]

  v10 = a2;
  std::fs::metadata(&dest);
  if ( dest == 2
    || (v20 = v28,
        v24 = v31,
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, a2),
        v23 = a4,
        a2 = a4,
        std::fs::metadata(&dest),
        dest == 2) )
  {
    result = core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, a2);
  }
  else
  {
    v21 = a5;
    v12 = v28;
    v13 = v29;
    v19 = v30;
    v22 = v31;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, a2);
    if ( *(_DWORD *)(a6 + 72) == 1 )
    {
      result = *(_DWORD *)(a6 + 76);
      v14 = v20;
      if ( ((v12 | v20 | result) & 0xE00) != 0 )
        goto LABEL_4;
    }
    else
    {
      v14 = v20;
      result = 493;
      if ( (((unsigned __int16)v12 | (unsigned __int16)v20) & 0xE00) != 0 )
        goto LABEL_4;
    }
    if ( result != (v12 & 0xFFF) )
      goto LABEL_4;
    if ( v14 & 0xF000 ^ 0x8000 | v12 & 0xF000 ^ 0x8000 )
      goto LABEL_4;
    result = v22;
    if ( v24 != v22 || *(_DWORD *)(a6 + 80) == 1 && *(_DWORD *)(a6 + 84) != v13 )
      goto LABEL_4;
    if ( (*(_BYTE *)(a6 + 88) & 1) != 0 )
    {
      result = v19;
      v15 = v21;
      if ( *(_DWORD *)(a6 + 92) != v19 )
        goto LABEL_4;
    }
    else
    {
      result = uucore::features::process::geteuid();
      v16 = v13 == result;
      v15 = v21;
      if ( !v16 )
        goto LABEL_4;
      result = uucore::features::process::getegid();
      if ( v19 != result )
        goto LABEL_4;
    }
    core::str::converts::from_utf8(&dest, v10, a3);
    if ( (dest & 1) != 0 )
      core::option::unwrap_failed(&off_102598);
    v17 = v26;
    v18 = v27;
    core::str::converts::from_utf8(&dest, v23, v15);
    if ( dest == 1 )
      core::option::unwrap_failed(&off_102580);
    result = file_diff::diff(v17, v18, v26, v27);
    if ( (_BYTE)result )
    {
      *(_BYTE *)(a1 + 8) = 0;
      goto LABEL_5;
    }
  }
LABEL_4:
  *(_BYTE *)(a1 + 8) = 1;
LABEL_5:
  *(_QWORD *)a1 = 0LL;
  return result;
}