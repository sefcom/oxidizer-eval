__int64 __fastcall uu_env::EnvAppData::run_program(__int64 a1, _QWORD *a2, char a3)
{
  __int64 (__fastcall **v4)(); // r13
  __int64 (__fastcall *v5)(); // r15
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 i; // rax
  __int64 (__fastcall **v10)(); // rdx
  __int64 (__fastcall *v11)(); // rax
  __int64 (__fastcall *v12)(); // rcx
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // r15
  __int64 error_no_such_file_or_dir; // rax
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // ebx
  char **v24; // rdi
  __int64 (__fastcall *v25)(); // [rsp+0h] [rbp-2E8h]
  _QWORD **v26; // [rsp+8h] [rbp-2E0h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+10h] [rbp-2D8h]
  __int64 (__fastcall *v28)(); // [rsp+18h] [rbp-2D0h]
  __int64 (__fastcall *v29)(); // [rsp+20h] [rbp-2C8h]
  _QWORD *v30; // [rsp+28h] [rbp-2C0h] BYREF
  _QWORD v31[2]; // [rsp+30h] [rbp-2B8h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-2A8h] BYREF
  __int128 v33; // [rsp+48h] [rbp-2A0h]
  __int64 v34; // [rsp+58h] [rbp-290h]
  __int64 v35; // [rsp+60h] [rbp-288h]
  _QWORD v36[2]; // [rsp+68h] [rbp-280h] BYREF
  char **v37; // [rsp+78h] [rbp-270h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+80h] [rbp-268h]
  __int64 *v39; // [rsp+88h] [rbp-260h]
  __int64 (__fastcall *v40)(); // [rsp+90h] [rbp-258h]
  _QWORD *v41; // [rsp+98h] [rbp-250h]
  __int64 (__fastcall *v42)(); // [rsp+A0h] [rbp-248h]
  __int64 v43; // [rsp+118h] [rbp-1D0h]
  __int64 v44; // [rsp+120h] [rbp-1C8h] BYREF
  _QWORD *v45; // [rsp+128h] [rbp-1C0h] BYREF
  __int128 v46; // [rsp+130h] [rbp-1B8h]
  __int64 v47; // [rsp+140h] [rbp-1A8h]
  __int64 v48; // [rsp+148h] [rbp-1A0h]
  _QWORD v49[3]; // [rsp+1C0h] [rbp-128h] BYREF
  _BYTE v50[272]; // [rsp+1D8h] [rbp-110h] BYREF

  v43 = a1;
  v35 = a2[11];
  if ( !v35 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_110BA8);
  v4 = (__int64 (__fastcall **)())a2[10];
  v5 = *v4;
  v6 = (__int64)v4[1];
  v49[1] = v5;
  v49[2] = v6;
  v49[0] = 0x8000000000000000LL;
  v25 = v5;
  <alloc::borrow::Cow<B> as core::clone::Clone>::clone(&v32, v49);
  v34 = v6;
  std::process::Command::new(v50, v5, v6);
  std::process::Command::args(v50, v4 + 2, v35 - 1);
  v7 = a2[17];
  if ( v7 )
  {
    v8 = a2[18];
    <std::process::Command as std::os::unix::process::CommandExt>::arg0(v50, v7, v8);
    core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(v32, v33);
    v32 = 0x8000000000000000LL;
    *(_QWORD *)&v33 = v7;
    *((_QWORD *)&v33 + 1) = v8;
    if ( !a3 )
      goto LABEL_8;
    v45 = (_QWORD *)(&dword_0 + 1);
    *(_QWORD *)&v46 = v7;
    *((_QWORD *)&v46 + 1) = v8;
    LOBYTE(v47) = 1;
    v26 = &v45;
    v27 = <os_display::Quoted as core::fmt::Display>::fmt;
    v37 = &off_110AB8;
    v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v41 = 0LL;
    v39 = (__int64 *)&v26;
    v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
    std::io::stdio::_eprint(&v37);
  }
  else if ( !a3 )
  {
    goto LABEL_8;
  }
  v45 = (_QWORD *)(&dword_0 + 1);
  *(_QWORD *)&v46 = v5;
  *((_QWORD *)&v46 + 1) = v34;
  LOBYTE(v47) = 0;
  v26 = &v45;
  v27 = <os_display::Quoted as core::fmt::Display>::fmt;
  v37 = &off_110AD8;
  v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v41 = 0LL;
  v39 = (__int64 *)&v26;
  v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
  std::io::stdio::_eprint(&v37);
  v36[0] = aArg_0;
  v36[1] = 6LL;
  v45 = (_QWORD *)(&dword_0 + 1);
  v46 = v33;
  LOBYTE(v47) = 1;
  v26 = (_QWORD **)v36;
  v27 = <&T as core::fmt::Display>::fmt;
  v28 = (__int64 (__fastcall *)())&v45;
  v29 = <os_display::Quoted as core::fmt::Display>::fmt;
  v37 = (char **)&unk_110AF8;
  v38 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v41 = 0LL;
  v39 = (__int64 *)&v26;
  v40 = (__int64 (__fastcall *)())(&dword_0 + 2);
  std::io::stdio::_eprint(&v37);
  v30 = v4 + 2;
  v31[0] = &v4[2 * v35];
  v31[1] = 0LL;
  for ( i = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v30);
        v10;
        i = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v30) )
  {
    v44 = i + 1;
    v11 = *v10;
    v12 = v10[1];
    v26 = (_QWORD **)(&dword_0 + 1);
    v27 = v11;
    v28 = v12;
    LOBYTE(v29) = 1;
    v37 = (char **)v36;
    v38 = <&T as core::fmt::Display>::fmt;
    v39 = &v44;
    v40 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v41 = &v26;
    v42 = <os_display::Quoted as core::fmt::Display>::fmt;
    v45 = &unk_110B28;
    *(_QWORD *)&v46 = 4LL;
    v48 = 0LL;
    *((_QWORD *)&v46 + 1) = &v37;
    v47 = 3LL;
    std::io::stdio::_eprint(&v45);
  }
LABEL_8:
  std::process::Command::status(&v30, v50);
  if ( (_DWORD)v30 == 1 )
  {
    v36[0] = v31;
    v13 = v31[0];
    v14 = std::io::error::Error::kind(v31[0]);
    v15 = v34;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        v45 = (_QWORD *)uucore::util_name(v13, v25);
        *(_QWORD *)&v46 = v18;
        v26 = &v45;
        v27 = <&T as core::fmt::Display>::fmt;
        v37 = (char **)&unk_110958;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v41 = 0LL;
        v39 = (__int64 *)&v26;
        v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
        std::io::stdio::_eprint(&v37);
        v45 = (_QWORD *)(&dword_0 + 1);
        *(_QWORD *)&v46 = v25;
        *((_QWORD *)&v46 + 1) = v15;
        LOBYTE(v47) = 1;
        v26 = &v45;
        v27 = <os_display::Quoted as core::fmt::Display>::fmt;
        v37 = (char **)&unk_110B68;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v41 = 0LL;
        v39 = (__int64 *)&v26;
        v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
        std::io::stdio::_eprint(&v37);
      }
      else
      {
        if ( v14 == 20 )
          goto LABEL_12;
        v45 = (_QWORD *)uucore::util_name(v13, v25);
        *(_QWORD *)&v46 = v19;
        v26 = &v45;
        v27 = <&T as core::fmt::Display>::fmt;
        v37 = (char **)&unk_110958;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v41 = 0LL;
        v39 = (__int64 *)&v26;
        v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
        std::io::stdio::_eprint(&v37);
        v45 = v36;
        *(_QWORD *)&v46 = <&T as core::fmt::Debug>::fmt;
        v37 = &off_110B88;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v41 = 0LL;
        v39 = (__int64 *)&v45;
        v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
        std::io::stdio::_eprint(&v37);
      }
      error_no_such_file_or_dir = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(126LL);
      goto LABEL_20;
    }
LABEL_12:
    error_no_such_file_or_dir = uu_env::EnvAppData::make_error_no_such_file_or_dir(*(_BYTE *)(v43 + 1), v25, v34);
LABEL_20:
    v17 = error_no_such_file_or_dir;
    core::ptr::drop_in_place<core::result::Result<std::process::ExitStatus,std::io::error::Error>>(&v30);
    core::ptr::drop_in_place<std::process::Command>(v50);
    goto LABEL_21;
  }
  if ( HIDWORD(v30) )
  {
    if ( (BYTE4(v30) & 0x7F) != 0 )
    {
      if ( (char)((BYTE4(v30) & 0x7F) + 1) <= 1 )
      {
        v24 = &off_110BC0;
      }
      else
      {
        v21 = <nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from();
        v23 = v22;
        core::result::Result<T,E>::unwrap(v21, v22);
        nix::sys::signal::SigSet::all(&v37);
        nix::sys::signal::SigAction::new(&v45, &v37);
        nix::sys::signal::sigaction(&v37, v23, &v45);
        nix::sys::signal::raise(v23);
        v24 = &off_110BF0;
      }
      core::option::unwrap_failed(v24);
    }
    error_no_such_file_or_dir = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(BYTE5(v30));
    goto LABEL_20;
  }
  core::ptr::drop_in_place<core::result::Result<std::process::ExitStatus,std::io::error::Error>>(&v30);
  core::ptr::drop_in_place<std::process::Command>(v50);
  v17 = 0LL;
LABEL_21:
  core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(v32, v33);
  core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(0x8000000000000000LL, v25);
  return v17;
}