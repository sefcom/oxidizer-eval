char __fastcall uu_rm::prompt_file(__int64 (__fastcall *a1)(), __int64 *a2, char a3)
{
  char result; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(); // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char yes; // bl
  char v12; // bp
  char v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(); // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(); // rdx
  __int64 (__fastcall *v22)(); // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(); // rdx
  __int64 (__fastcall *v27)(); // rdx
  unsigned int v28; // [rsp+4h] [rbp-164h] BYREF
  void **v29; // [rsp+8h] [rbp-160h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+10h] [rbp-158h]
  __int64 *v31; // [rsp+18h] [rbp-150h]
  __int128 v32; // [rsp+20h] [rbp-148h]
  void *v33; // [rsp+38h] [rbp-130h] BYREF
  void ***v34; // [rsp+40h] [rbp-128h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+48h] [rbp-120h]
  __int64 *v36; // [rsp+50h] [rbp-118h]
  char v37; // [rsp+58h] [rbp-110h]
  __int64 v38; // [rsp+60h] [rbp-108h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+68h] [rbp-100h]
  void *v40; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+78h] [rbp-F0h] BYREF
  char **v42; // [rsp+80h] [rbp-E8h]
  char **v43; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+90h] [rbp-D8h]
  void ***v45; // [rsp+98h] [rbp-D0h]
  __int128 v46; // [rsp+A0h] [rbp-C8h]
  int v47; // [rsp+C0h] [rbp-A8h]
  __int64 v48; // [rsp+D8h] [rbp-90h]

  if ( a3 != 2 )
  {
    result = 1;
    if ( !a3 )
      return result;
    goto LABEL_9;
  }
  std::fs::symlink_metadata(&v43, a1, a2);
  if ( (_DWORD)v43 == 2 || (v47 & 0xF000) != 0xA000 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v43);
LABEL_9:
    v38 = 0x1B600000000LL;
    LODWORD(v39) = 257;
    WORD2(v39) = 0;
    std::fs::OpenOptions::open(&v41, &v38, a1, a2);
    if ( (_DWORD)v41 )
    {
      v43 = v42;
      v12 = std::io::error::Error::kind(v42);
      core::ptr::drop_in_place<std::io::error::Error>(&v43);
      result = 1;
      if ( v12 != 1 )
        return result;
      return uu_rm::prompt_file_permission_readonly(a1, (__int64)a2);
    }
    v28 = HIDWORD(v41);
    std::fs::File::metadata(&v43, &v28);
    if ( (_DWORD)v43 == 2 )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v43);
      yes = 1;
    }
    else
    {
      v13 = v47;
      v14 = v48;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v43);
      if ( a3 != 2 || (v13 & 0x92) == 0 )
      {
        core::ptr::drop_in_place<std::fs::File>(v28);
        return uu_rm::prompt_file_permission_readonly(a1, (__int64)a2);
      }
      if ( v14 )
      {
        v29 = (void **)uucore::util_name(&v43, &v28, v15, v16);
        v30 = v17;
        v34 = &v29;
        v35 = <&T as core::fmt::Display>::fmt;
        v43 = (char **)&unk_127D88;
        v44 = 2LL;
        v45 = (void ***)&v34;
        v46 = 1uLL;
        std::io::stdio::_eprint(&v43);
        v29 = (void **)(&dword_0 + 1);
        v30 = a1;
        v31 = a2;
        LOBYTE(v32) = 1;
        v34 = &v29;
        v35 = <os_display::Quoted as core::fmt::Display>::fmt;
        v43 = &off_127F70;
        v44 = 2LL;
        v45 = (void ***)&v34;
        v46 = 1uLL;
        std::io::stdio::_eprint(&v43);
        v43 = (char **)&off_127F20;
        v44 = 1LL;
        v45 = (void ***)&byte_8;
        v46 = 0LL;
        std::io::stdio::_eprint(&v43);
        v40 = &std::io::stdio::stderr::INSTANCE;
        v18 = <std::io::stdio::Stderr as std::io::Write>::flush(&v40);
        if ( v18 )
        {
          v33 = (void *)v18;
          v29 = (void **)uucore::util_name(&v40, &v28, v19, v20);
          v30 = v21;
          v34 = &v29;
          v35 = <&T as core::fmt::Display>::fmt;
          v43 = (char **)&unk_127D88;
          v44 = 2LL;
          v45 = (void ***)&v34;
          v46 = 1uLL;
          std::io::stdio::_eprint(&v43);
          v29 = &v33;
          v30 = <std::io::error::Error as core::fmt::Display>::fmt;
          v43 = (char **)&unk_127F30;
          v44 = 2LL;
          v45 = &v29;
          v46 = 1uLL;
          std::io::stdio::_eprint(&v43);
          std::process::exit(1);
        }
      }
      else
      {
        v29 = (void **)uucore::util_name(&v43, &v28, v15, v16);
        v30 = v22;
        v34 = &v29;
        v35 = <&T as core::fmt::Display>::fmt;
        v43 = (char **)&unk_127D88;
        v44 = 2LL;
        v45 = (void ***)&v34;
        v46 = 1uLL;
        std::io::stdio::_eprint(&v43);
        v29 = (void **)(&dword_0 + 1);
        v30 = a1;
        v31 = a2;
        LOBYTE(v32) = 1;
        v34 = &v29;
        v35 = <os_display::Quoted as core::fmt::Display>::fmt;
        v43 = &off_127F50;
        v44 = 2LL;
        v45 = (void ***)&v34;
        v46 = 1uLL;
        std::io::stdio::_eprint(&v43);
        v43 = (char **)&off_127F20;
        v44 = 1LL;
        v45 = (void ***)&byte_8;
        v46 = 0LL;
        std::io::stdio::_eprint(&v43);
        v40 = &std::io::stdio::stderr::INSTANCE;
        v23 = <std::io::stdio::Stderr as std::io::Write>::flush(&v40);
        if ( v23 )
        {
          v33 = (void *)v23;
          v29 = (void **)uucore::util_name(&v40, &v28, v24, v25);
          v30 = v27;
          v34 = &v29;
          v35 = <&T as core::fmt::Display>::fmt;
          v43 = (char **)&unk_127D88;
          v44 = 2LL;
          v45 = (void ***)&v34;
          v46 = 1uLL;
          std::io::stdio::_eprint(&v43);
          v29 = &v33;
          v30 = <std::io::error::Error as core::fmt::Display>::fmt;
          v43 = (char **)&unk_127F30;
          v44 = 2LL;
          v45 = &v29;
          v46 = 1uLL;
          std::io::stdio::_eprint(&v43);
          std::process::exit(1);
        }
      }
      yes = uucore::read_yes();
    }
    core::ptr::drop_in_place<std::fs::File>(v28);
    return yes;
  }
  v34 = (void ***)uucore::util_name(&v43, a1, v5, v6);
  v35 = v7;
  v38 = (__int64)&v34;
  v39 = <&T as core::fmt::Display>::fmt;
  v29 = (void **)&unk_127D88;
  v30 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v31 = &v38;
  v32 = 1uLL;
  std::io::stdio::_eprint(&v29);
  v34 = (void ***)(&dword_0 + 1);
  v35 = a1;
  v36 = a2;
  v37 = 1;
  v38 = (__int64)&v34;
  v39 = <os_display::Quoted as core::fmt::Display>::fmt;
  v29 = (void **)&off_127F00;
  v30 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v31 = &v38;
  v32 = 1uLL;
  std::io::stdio::_eprint(&v29);
  v29 = (void **)&off_127F20;
  v30 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v31 = (_QWORD *)&byte_8;
  v32 = 0LL;
  std::io::stdio::_eprint(&v29);
  v33 = &std::io::stdio::stderr::INSTANCE;
  v8 = <std::io::stdio::Stderr as std::io::Write>::flush(&v33);
  if ( v8 )
  {
    v41 = v8;
    v34 = (void ***)uucore::util_name(&v33, a1, v9, v10);
    v35 = v26;
    v38 = (__int64)&v34;
    v39 = <&T as core::fmt::Display>::fmt;
    v29 = (void **)&unk_127D88;
    v30 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v31 = &v38;
    v32 = 1uLL;
    std::io::stdio::_eprint(&v29);
    v34 = (void ***)&v41;
    v35 = <std::io::error::Error as core::fmt::Display>::fmt;
    v29 = (void **)&unk_127F30;
    v30 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v31 = (__int64 *)&v34;
    v32 = 1uLL;
    std::io::stdio::_eprint(&v29);
    std::process::exit(1);
  }
  yes = uucore::read_yes();
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v43);
  return yes;
}
