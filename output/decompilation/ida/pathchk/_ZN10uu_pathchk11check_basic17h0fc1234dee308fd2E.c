__int64 __fastcall uu_pathchk::check_basic(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  char **v14; // [rsp+8h] [rbp-D0h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+10h] [rbp-C8h]
  unsigned __int64 *v16; // [rsp+18h] [rbp-C0h]
  __int128 v17; // [rsp+20h] [rbp-B8h]
  __int64 (__fastcall *v18)(); // [rsp+30h] [rbp-A8h]
  __int64 v19; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-98h]
  unsigned __int64 v21; // [rsp+48h] [rbp-90h]
  char **v22; // [rsp+50h] [rbp-88h] BYREF
  __int64 v23; // [rsp+58h] [rbp-80h]
  char ***v24; // [rsp+60h] [rbp-78h]
  __int64 v25; // [rsp+68h] [rbp-70h]
  __int64 v26; // [rsp+70h] [rbp-68h]
  unsigned __int64 v27; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-50h] BYREF
  void *v29; // [rsp+90h] [rbp-48h] BYREF
  _QWORD v30[3]; // [rsp+98h] [rbp-40h] BYREF
  char v31; // [rsp+B0h] [rbp-28h]

  v2 = a1;
  alloc::str::join_generic_copy(&v19, a1, a2);
  v3 = v21;
  v27 = v21;
  if ( v21 <= 0x100 )
  {
    if ( v21 )
    {
      v5 = a1 + 24 * a2;
      while ( 1 )
      {
        if ( v2 == v5 )
        {
          v9 = v20;
          v10 = uu_pathchk::check_searchable(v20, v3);
          core::ptr::drop_in_place<alloc::string::String>(v19, v9);
          return v10;
        }
        v6 = *(_QWORD *)(v2 + 16);
        v28 = v6;
        if ( v6 > 0xE )
          break;
        v7 = uu_pathchk::check_portable_chars(*(_QWORD *)(v2 + 8));
        v2 += 24LL;
        if ( !v7 )
          goto LABEL_12;
      }
      v29 = &std::io::stdio::stderr::INSTANCE;
      v11 = *(_QWORD *)(v2 + 8);
      v30[0] = 0LL;
      v30[1] = v11;
      v30[2] = v6;
      v31 = 1;
      v14 = (char **)&unk_177D0;
      v15 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v16 = &v28;
      *(_QWORD *)&v17 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *((_QWORD *)&v17 + 1) = v30;
      v18 = <os_display::Quoted as core::fmt::Display>::fmt;
      v22 = &off_DEA78;
      v23 = 4LL;
      v26 = 0LL;
      v24 = &v14;
      v25 = 3LL;
      v12 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v29, &v22);
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v12);
    }
    else
    {
      v22 = (char **)&std::io::stdio::stderr::INSTANCE;
      v14 = &off_DEA68;
      v15 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v16 = (_QWORD *)&byte_8;
      v17 = 0LL;
      v8 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v22, &v14);
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v8);
    }
  }
  else
  {
    v30[0] = &std::io::stdio::stderr::INSTANCE;
    v14 = (char **)&unk_17718;
    v15 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v16 = &v27;
    *(_QWORD *)&v17 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *((_QWORD *)&v17 + 1) = &v19;
    v18 = <alloc::string::String as core::fmt::Display>::fmt;
    v22 = &off_DEA28;
    v23 = 4LL;
    v26 = 0LL;
    v24 = &v14;
    v25 = 3LL;
    v4 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(v30, &v22);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v4);
  }
LABEL_12:
  core::ptr::drop_in_place<alloc::string::String>(v19, v20);
  return 0;
}