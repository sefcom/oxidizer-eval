char __fastcall uu_pathchk::check_extra(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  _QWORD *v6; // rbx
  char result; // al
  void **v8; // rdi
  __int64 v9; // rax
  char **v10; // [rsp+10h] [rbp-98h] BYREF
  __int64 v11; // [rsp+18h] [rbp-90h]
  _QWORD *v12; // [rsp+20h] [rbp-88h]
  __int128 v13; // [rsp+28h] [rbp-80h]
  void *v14; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-60h] BYREF
  char v16; // [rsp+60h] [rbp-48h]
  _QWORD v17[8]; // [rsp+68h] [rbp-40h] BYREF

  if ( a2 )
  {
    v2 = 0LL;
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + v2 + 8);
      v4 = *(_QWORD *)(a1 + v2 + 16);
      LODWORD(v10) = 0;
      v5 = core::char::methods::encode_utf8_raw(&v10);
      if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v3, v4, v5) )
        break;
      v2 += 24LL;
      if ( 24 * a2 == v2 )
        goto LABEL_5;
    }
    v14 = &std::io::stdio::stderr::INSTANCE;
    v15[0] = 0LL;
    v15[1] = v3;
    v15[2] = v4;
    v16 = 1;
    v17[0] = v15;
    v17[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v10 = &off_DEAB8;
    v11 = 2LL;
    v12 = v17;
    v13 = 1uLL;
    v8 = &v14;
  }
  else
  {
LABEL_5:
    alloc::str::join_generic_copy(&v10, a1, a2);
    v6 = v12;
    core::ptr::drop_in_place<alloc::string::String>(v10, v11);
    result = 1;
    if ( v6 )
      return result;
    v15[0] = &std::io::stdio::stderr::INSTANCE;
    v10 = &off_DEA68;
    v11 = 1LL;
    v12 = (_QWORD *)&byte_8;
    v13 = 0LL;
    v8 = (void **)v15;
  }
  v9 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(v8, &v10);
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v9);
  return 0;
}