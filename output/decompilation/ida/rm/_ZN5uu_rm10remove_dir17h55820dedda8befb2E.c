char __fastcall uu_rm::remove_dir(__int64 (__fastcall *a1)(), __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(); // rdx
  __int64 (__fastcall *v9)(); // rbx
  __int64 (__fastcall *v10)(); // rdx
  char **v11; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+10h] [rbp-98h]
  _QWORD **v13; // [rsp+18h] [rbp-90h]
  __int64 v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+28h] [rbp-80h]
  _QWORD **v16; // [rsp+38h] [rbp-70h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+40h] [rbp-68h]
  __int64 v18; // [rsp+48h] [rbp-60h]
  _QWORD *v19; // [rsp+50h] [rbp-58h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  char v22; // [rsp+68h] [rbp-40h]
  _QWORD v23[7]; // [rsp+70h] [rbp-38h] BYREF

  if ( !(unsigned __int8)uu_rm::prompt_dir(a1, a2, (unsigned __int8)a3[6], (unsigned __int8)a3[7]) )
    return 0;
  if ( a3[4] || a3[3] == 1 )
  {
    v5 = std::fs::remove_dir(a1, a2);
    if ( v5 )
    {
      v6 = v5;
      v23[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                 v5,
                 a1,
                 a2);
      v19 = (_QWORD *)uucore::util_name(v6, a1);
      v20 = v7;
      v16 = &v19;
      v17 = <&T as core::fmt::Display>::fmt;
      v11 = (char **)&unk_EA4A0;
      v12 = 2LL;
      v15 = 0LL;
      v13 = &v16;
      v14 = 1LL;
      std::io::stdio::_eprint(&v11);
      v19 = v23;
      v20 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v11 = (char **)&unk_EA4E0;
      v12 = 2LL;
      v15 = 0LL;
      v13 = &v19;
      v14 = 1LL;
      std::io::stdio::_eprint(&v11);
      core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v23[0]);
      return 1;
    }
    if ( a3[5] == 1 )
    {
      uu_rm::normalize(&v16, a1, a2);
      v9 = v17;
      v19 = (_QWORD *)(&dword_0 + 1);
      v20 = v17;
      v21 = v18;
      v22 = 1;
      v23[0] = &v19;
      v23[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v11 = &off_EA520;
      v12 = 2LL;
      v15 = 0LL;
      v13 = (_QWORD **)v23;
      v14 = 1LL;
      std::io::stdio::_print(&v11);
      core::ptr::drop_in_place<std::path::PathBuf>(v16, v9);
    }
    return 0;
  }
  v19 = (_QWORD *)uucore::util_name(a1, a2);
  v20 = v10;
  v16 = &v19;
  v17 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_EA4A0;
  v12 = 2LL;
  v15 = 0LL;
  v13 = &v16;
  v14 = 1LL;
  std::io::stdio::_eprint(&v11);
  v19 = (_QWORD *)(&dword_0 + 1);
  v20 = a1;
  v21 = a2;
  v22 = 1;
  v16 = &v19;
  v17 = <os_display::Quoted as core::fmt::Display>::fmt;
  v11 = &off_EA5A0;
  v12 = 2LL;
  v15 = 0LL;
  v13 = &v16;
  v14 = 1LL;
  std::io::stdio::_eprint(&v11);
  return 1;
}