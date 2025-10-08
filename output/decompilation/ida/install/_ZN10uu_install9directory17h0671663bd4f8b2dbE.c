__int64 __fastcall uu_install::directory(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rbx
  int v7; // ebp
  __int64 (__fastcall *v8)(); // r13
  __int64 ***v9; // rbp
  __int64 dir_all; // rax
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 (__fastcall **v13)(); // rdx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 (__fastcall *v16)(); // rdx
  char v18; // [rsp+7h] [rbp-151h]
  __int64 **v19; // [rsp+8h] [rbp-150h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+10h] [rbp-148h]
  int v21; // [rsp+1Ch] [rbp-13Ch]
  __int64 *v22; // [rsp+20h] [rbp-138h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+28h] [rbp-130h]
  __int64 ***v24; // [rsp+30h] [rbp-128h]
  __int64 (__fastcall *v25)(); // [rsp+38h] [rbp-120h]
  __int64 v26; // [rsp+40h] [rbp-118h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+48h] [rbp-110h]
  __int64 v28; // [rsp+50h] [rbp-108h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+58h] [rbp-100h]
  __int64 ***v30; // [rsp+60h] [rbp-F8h]
  __int64 v31; // [rsp+68h] [rbp-F0h]
  __int64 v32; // [rsp+70h] [rbp-E8h]
  char **dest; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+80h] [rbp-D8h]
  _QWORD *v35; // [rsp+88h] [rbp-D0h]
  __int64 v36; // [rsp+90h] [rbp-C8h]
  __int64 v37; // [rsp+98h] [rbp-C0h]

  if ( a2 )
  {
    v3 = (*(_BYTE *)(a3 + 72) & 1) == 0;
    v21 = 493;
    if ( !v3 )
      v21 = *(_DWORD *)(a3 + 76);
    v31 = a3;
    v18 = *(_BYTE *)(a3 + 97);
    v32 = 24 * a2;
    v4 = 0LL;
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + v4 + 8);
      v6 = *(_QWORD *)(a1 + v4 + 16);
      std::fs::metadata(&dest);
      v7 = (int)dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v5);
      if ( v7 != 2 )
        goto LABEL_13;
      uucore::features::fs::dir_strip_dot_for_creation(&v28, v5, v6);
      v8 = v29;
      v9 = v30;
      dir_all = std::fs::create_dir_all(v29, v30);
      v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
              dir_all,
              v8,
              v9);
      if ( !v11 )
        break;
      v26 = v11;
      v27 = &off_101E30;
      v12 = uucore::mods::error::UError::code();
      uucore::mods::error::set_exit_code(v12);
      v19 = (__int64 **)uucore::util_name();
      v20 = v13;
      v22 = (__int64 *)&v19;
      v23 = <&T as core::fmt::Display>::fmt;
      v24 = (__int64 ***)&v26;
      v25 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      dest = (char **)&unk_1022C0;
      v34 = 3LL;
      v37 = 0LL;
      v35 = &v22;
      v36 = 2LL;
      std::io::stdio::_eprint(&dest);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v26, v27);
      core::ptr::drop_in_place<std::path::PathBuf>(&v28);
LABEL_6:
      v4 += 24LL;
      if ( v32 == v4 )
        return 0LL;
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
      0LL,
      &off_101E30);
    if ( (v18 & 1) != 0 )
    {
      v22 = (_QWORD *)(&dword_0 + 1);
      v23 = v8;
      v24 = v9;
      LOBYTE(v25) = 1;
      v19 = &v22;
      v20 = (__int64 (__fastcall **)())<os_display::Quoted as core::fmt::Display>::fmt;
      dest = &off_1022F0;
      v34 = 2LL;
      v37 = 0LL;
      v35 = &v19;
      v36 = 1LL;
      std::io::stdio::_print(&dest);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v28);
LABEL_13:
    if ( uu_install::mode::chmod(v5, v6) )
    {
      uucore::mods::error::set_exit_code(1LL);
    }
    else
    {
      v14 = uu_install::chown_optional_user_group(v5, v6, v31);
      if ( v14 )
      {
        v19 = (__int64 **)v14;
        v20 = &off_102208;
        v15 = <uu_install::InstallError as uucore::mods::error::UError>::code(v14);
        uucore::mods::error::set_exit_code(v15);
        v28 = uucore::util_name();
        v29 = v16;
        v22 = &v28;
        v23 = <&T as core::fmt::Display>::fmt;
        v24 = &v19;
        v25 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        dest = (char **)&unk_1022C0;
        v34 = 3LL;
        v37 = 0LL;
        v35 = &v22;
        v36 = 2LL;
        std::io::stdio::_eprint(&dest);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v19, v20);
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
          0LL,
          &off_102208);
      }
    }
    goto LABEL_6;
  }
  dest = (char **)(&dword_0 + 1);
  return alloc::boxed::Box<T>::new(&dest);
}