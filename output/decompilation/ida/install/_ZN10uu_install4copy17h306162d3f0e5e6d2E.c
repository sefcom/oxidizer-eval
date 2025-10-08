__int64 __fastcall uu_install::copy(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int128 v8; // rax
  char **v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  char **v14; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-D0h]
  __int128 v16; // [rsp+18h] [rbp-C0h]
  char **v17; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+38h] [rbp-A0h]
  __int64 v19; // [rsp+48h] [rbp-90h] BYREF
  __int128 v20; // [rsp+50h] [rbp-88h]
  char v21; // [rsp+60h] [rbp-78h]
  __int64 *v22; // [rsp+68h] [rbp-70h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+70h] [rbp-68h]
  __int64 v24; // [rsp+78h] [rbp-60h]
  char v25; // [rsp+80h] [rbp-58h]
  _QWORD v26[10]; // [rsp+88h] [rbp-50h] BYREF

  if ( a5[99] )
  {
    uu_install::need_copy(&v14, a1, a2, a3, a4, a5);
    *(_QWORD *)&v8 = v14;
    if ( v14 )
      return v8;
    if ( !(_BYTE)v15 )
    {
LABEL_21:
      *(_QWORD *)&v8 = 0LL;
      return v8;
    }
  }
  uu_install::perform_backup(&v14, a3, a4, (__int64)a5);
  v8 = v15;
  v9 = v14;
  if ( v14 != (char **)0x8000000000000001LL )
  {
    v17 = v14;
    v18 = v15;
    v10 = uu_install::copy_file(a1, a2, a3, a4);
    if ( v10 )
    {
LABEL_9:
      v12 = v10;
LABEL_10:
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v17);
      *(_QWORD *)&v8 = v12;
      return v8;
    }
    if ( a5[100] )
    {
      v11 = uu_install::strip_file(a3, a4, (__int64)a5);
      if ( v11 )
        goto LABEL_13;
    }
    v10 = uu_install::set_ownership_and_permissions(a3, a4, (__int64)a5);
    if ( v10 )
      goto LABEL_9;
    if ( a5[98] )
    {
      v11 = uu_install::preserve_timestamps(a1, a2, a3, a4);
      if ( v11 )
      {
LABEL_13:
        v12 = v11;
        goto LABEL_10;
      }
    }
    if ( a5[97] )
    {
      v22 = (_QWORD *)(&dword_0 + 1);
      v23 = (__int64 (__fastcall *)())a1;
      v24 = a2;
      v25 = 1;
      v19 = 1LL;
      *(_QWORD *)&v20 = a3;
      *((_QWORD *)&v20 + 1) = a4;
      v21 = 1;
      v26[0] = &v22;
      v26[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v26[2] = &v19;
      v26[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      v14 = (char **)&unk_102530;
      *(_QWORD *)&v15 = 2LL;
      *((_QWORD *)&v15 + 1) = v26;
      v16 = 2uLL;
      std::io::stdio::_print(&v14);
      if ( v9 == (char **)0x8000000000000000LL )
      {
        v14 = (char **)&off_102550;
        *(_QWORD *)&v15 = 1LL;
        *((_QWORD *)&v15 + 1) = 8LL;
        v16 = 0LL;
        std::io::stdio::_print(&v14);
        goto LABEL_21;
      }
      v19 = 1LL;
      v20 = v18;
      v21 = 1;
      v22 = &v19;
      v23 = <os_display::Quoted as core::fmt::Display>::fmt;
      v14 = &off_102560;
      *(_QWORD *)&v15 = 2LL;
      *((_QWORD *)&v15 + 1) = &v22;
      v16 = 1uLL;
      std::io::stdio::_print(&v14);
    }
    else if ( v9 == (char **)0x8000000000000000LL )
    {
      goto LABEL_21;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    goto LABEL_21;
  }
  return v8;
}