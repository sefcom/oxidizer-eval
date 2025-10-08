__int64 __fastcall uu_pathchk::check_default(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-140h] BYREF
  __int64 v11; // [rsp+10h] [rbp-138h]
  unsigned __int64 v12; // [rsp+18h] [rbp-130h]
  void *v13; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-120h] BYREF
  __int64 v15; // [rsp+30h] [rbp-118h] BYREF
  __int64 v16; // [rsp+38h] [rbp-110h]
  unsigned __int64 v17; // [rsp+40h] [rbp-108h]
  char v18; // [rsp+48h] [rbp-100h]
  char **v19; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-F0h]
  char ***p_dest; // [rsp+60h] [rbp-E8h]
  __int64 v22; // [rsp+68h] [rbp-E0h]
  __int64 v23; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v24; // [rsp+80h] [rbp-C8h] BYREF
  char **dest; // [rsp+88h] [rbp-C0h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+90h] [rbp-B8h]
  unsigned __int64 *v27; // [rsp+98h] [rbp-B0h]
  __int128 v28; // [rsp+A0h] [rbp-A8h]
  __int64 (__fastcall *v29)(); // [rsp+B0h] [rbp-98h]

  alloc::str::join_generic_copy(&v10, a1, a2);
  v2 = v12;
  v24 = v12;
  if ( v12 > 0x1000 )
  {
    v13 = &std::io::stdio::stderr::INSTANCE;
    v15 = 0LL;
    v16 = v11;
    v17 = v12;
    v18 = 1;
    dest = (char **)&unk_1703C;
    v26 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v27 = &v24;
    *(_QWORD *)&v28 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *((_QWORD *)&v28 + 1) = &v15;
    v29 = <os_display::Quoted as core::fmt::Display>::fmt;
    v19 = &off_DEA28;
    v20 = 4LL;
    v23 = 0LL;
    p_dest = &dest;
    v22 = 3LL;
    v3 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v13, &v19);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v3);
LABEL_13:
    core::ptr::drop_in_place<alloc::string::String>(v10, v11);
    return 0;
  }
  if ( !v12 )
  {
    std::fs::symlink_metadata(&dest);
    if ( dest == (char **)((char *)&dword_0 + 2) )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, v26);
      v19 = (char **)&std::io::stdio::stderr::INSTANCE;
      dest = &off_DEAD8;
      v26 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v27 = (_QWORD *)&byte_8;
      v28 = 0LL;
      v4 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v19, &dest);
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v4);
      goto LABEL_13;
    }
    v2 = core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v26);
  }
  if ( a2 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      v2 = *(_QWORD *)(a1 + v5 + 16);
      if ( v2 > 0x1000 )
        break;
      v5 += 24LL;
      if ( 24 * a2 == v5 )
        goto LABEL_11;
    }
    v14 = *(_QWORD *)(a1 + v5 + 16);
    v13 = &std::io::stdio::stderr::INSTANCE;
    v7 = *(_QWORD *)(a1 + v5 + 8);
    v15 = 0LL;
    v16 = v7;
    v17 = v2;
    v18 = 1;
    dest = (char **)&unk_1703C;
    v26 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v27 = &v14;
    *(_QWORD *)&v28 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *((_QWORD *)&v28 + 1) = &v15;
    v29 = <os_display::Quoted as core::fmt::Display>::fmt;
    v19 = &off_DEA78;
    v20 = 4LL;
    v23 = 0LL;
    p_dest = &dest;
    v22 = 3LL;
    v8 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v13, &v19);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v8);
    goto LABEL_13;
  }
LABEL_11:
  v14 = v2;
  v6 = uu_pathchk::check_searchable(v11, v12);
  core::ptr::drop_in_place<alloc::string::String>(v10, v11);
  return v6;
}