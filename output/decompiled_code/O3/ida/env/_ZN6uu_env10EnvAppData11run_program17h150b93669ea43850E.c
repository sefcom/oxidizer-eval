__int64 __fastcall uu_env::EnvAppData::run_program(__int64 a1, _QWORD *a2, char a3)
{
  __int128 *v4; // r14
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 i; // rax
  __int128 *v8; // rdx
  __int128 v9; // xmm0
  __int64 v10; // r14
  __int64 error_no_such_file_or_dir; // rbx
  __int64 v12; // rdx
  char **v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // ebx
  _QWORD **v18; // [rsp+8h] [rbp-2D0h] BYREF
  __int128 v19; // [rsp+10h] [rbp-2C8h]
  __int64 (__fastcall *v20)(); // [rsp+20h] [rbp-2B8h]
  unsigned __int64 v21; // [rsp+28h] [rbp-2B0h] BYREF
  __int128 v22; // [rsp+30h] [rbp-2A8h]
  _QWORD v23[2]; // [rsp+40h] [rbp-298h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-288h] BYREF
  __int128 v25; // [rsp+58h] [rbp-280h]
  _OWORD *v26; // [rsp+68h] [rbp-270h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-268h] BYREF
  __int64 v28; // [rsp+80h] [rbp-258h]
  __int64 v29; // [rsp+88h] [rbp-250h]
  _OWORD *v30; // [rsp+90h] [rbp-248h]
  __int64 v31; // [rsp+98h] [rbp-240h] BYREF
  char **v32; // [rsp+A0h] [rbp-238h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-230h]
  __int64 *v34; // [rsp+B0h] [rbp-228h]
  __int64 (__fastcall *v35)(); // [rsp+B8h] [rbp-220h]
  _QWORD *v36; // [rsp+C0h] [rbp-218h]
  __int64 (__fastcall *v37)(); // [rsp+C8h] [rbp-210h]
  _QWORD *v38; // [rsp+140h] [rbp-198h] BYREF
  __int128 v39; // [rsp+148h] [rbp-190h]
  __int64 v40; // [rsp+158h] [rbp-180h]
  __int64 v41; // [rsp+160h] [rbp-178h]
  _BYTE v42[256]; // [rsp+1D8h] [rbp-100h] BYREF

  v28 = a2[11];
  if ( !v28 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_148B48);
  v4 = (__int128 *)a2[10];
  v25 = *v4;
  v24 = 0x8000000000000000LL;
  <alloc::borrow::Cow<B> as core::clone::Clone>::clone(&v21, &v24);
  v29 = a1;
  std::process::Command::new(v42, v25, *((_QWORD *)&v25 + 1));
  v30 = v4 + 1;
  std::process::Command::args(v42, v4 + 1, v28 - 1);
  v5 = a2[17];
  if ( v5 )
  {
    v6 = a2[18];
    <std::process::Command as std::os::unix::process::CommandExt>::arg0(v42, v5, v6);
    core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v21);
    v21 = 0x8000000000000000LL;
    *(_QWORD *)&v22 = v5;
    *((_QWORD *)&v22 + 1) = v6;
    if ( !a3 )
      goto LABEL_8;
    v38 = (_QWORD *)(&dword_0 + 1);
    *(_QWORD *)&v39 = v5;
    *((_QWORD *)&v39 + 1) = v6;
    LOBYTE(v40) = 1;
    v18 = &v38;
    *(_QWORD *)&v19 = <os_display::Quoted as core::fmt::Display>::fmt;
    v32 = &off_148A78;
    v33 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v36 = 0LL;
    v34 = (__int64 *)&v18;
    v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
    std::io::stdio::_eprint(&v32);
  }
  else if ( !a3 )
  {
    goto LABEL_8;
  }
  v38 = (_QWORD *)(&dword_0 + 1);
  v39 = v25;
  LOBYTE(v40) = 0;
  v18 = &v38;
  *(_QWORD *)&v19 = <os_display::Quoted as core::fmt::Display>::fmt;
  v32 = &off_148A98;
  v33 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v36 = 0LL;
  v34 = (__int64 *)&v18;
  v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
  std::io::stdio::_eprint(&v32);
  v23[0] = aArg_0;
  v23[1] = 6LL;
  v38 = (_QWORD *)(&dword_0 + 1);
  v39 = v22;
  LOBYTE(v40) = 1;
  v18 = (_QWORD **)v23;
  *(_QWORD *)&v19 = <&T as core::fmt::Display>::fmt;
  *((_QWORD *)&v19 + 1) = &v38;
  v20 = <os_display::Quoted as core::fmt::Display>::fmt;
  v32 = (char **)&unk_148AB8;
  v33 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v36 = 0LL;
  v34 = (__int64 *)&v18;
  v35 = (__int64 (__fastcall *)())(&dword_0 + 2);
  std::io::stdio::_eprint(&v32);
  v26 = v30;
  v27[0] = &v4[v28];
  v27[1] = 0LL;
  for ( i = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26);
        v8;
        i = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26) )
  {
    v31 = i + 1;
    v9 = *v8;
    v18 = (_QWORD **)(&dword_0 + 1);
    v19 = v9;
    LOBYTE(v20) = 1;
    v32 = (char **)v23;
    v33 = <&T as core::fmt::Display>::fmt;
    v34 = &v31;
    v35 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v36 = &v18;
    v37 = <os_display::Quoted as core::fmt::Display>::fmt;
    v38 = &unk_148AE8;
    *(_QWORD *)&v39 = 4LL;
    v41 = 0LL;
    *((_QWORD *)&v39 + 1) = &v32;
    v40 = 3LL;
    std::io::stdio::_eprint(&v38);
  }
LABEL_8:
  std::process::Command::status(&v26, v42);
  if ( (_DWORD)v26 )
  {
    v10 = v27[0];
    if ( (unsigned __int8)std::io::error::Error::kind(v27[0]) && (unsigned __int8)std::io::error::Error::kind(v10) != 20 )
    {
      v23[0] = v10;
      v38 = (_QWORD *)uucore::util_name();
      *(_QWORD *)&v39 = v12;
      v18 = &v38;
      *(_QWORD *)&v19 = <&T as core::fmt::Display>::fmt;
      v32 = (char **)&unk_148978;
      v33 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v36 = 0LL;
      v34 = (__int64 *)&v18;
      v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
      std::io::stdio::_eprint(&v32);
      v38 = v23;
      *(_QWORD *)&v39 = <std::io::error::Error as core::fmt::Debug>::fmt;
      v32 = &off_148B28;
      v33 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v36 = 0LL;
      v34 = (__int64 *)&v38;
      v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
      std::io::stdio::_eprint(&v32);
      error_no_such_file_or_dir = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(126LL);
      core::ptr::drop_in_place<std::io::error::Error>(v23);
    }
    else
    {
      error_no_such_file_or_dir = uu_env::EnvAppData::make_error_no_such_file_or_dir(
                                    *(_BYTE *)(v29 + 1),
                                    (__int64 (__fastcall *)())v25,
                                    *((__int64 *)&v25 + 1));
      core::ptr::drop_in_place<std::io::error::Error>(v27);
    }
  }
  else
  {
    if ( !HIDWORD(v26) )
    {
      core::ptr::drop_in_place<std::process::Command>(v42);
      core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v21);
      core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v24);
      return 0LL;
    }
    if ( (BYTE4(v26) & 0x7F) != 0 )
    {
      if ( (char)((BYTE4(v26) & 0x7F) + 1) >= 2 )
      {
        v15 = <nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from();
        v17 = v16;
        core::result::Result<T,E>::unwrap(v15, v16);
        nix::sys::signal::SigSet::all(&v32);
        nix::sys::signal::SigAction::new(&v38, &v32);
        nix::sys::signal::sigaction(&v32, v17, &v38);
        nix::sys::signal::raise(v17);
        v14 = &off_148B90;
      }
      else
      {
        v14 = &off_148B60;
      }
      core::option::unwrap_failed(v14);
    }
    error_no_such_file_or_dir = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(BYTE5(v26));
  }
  core::ptr::drop_in_place<std::process::Command>(v42);
  core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v21);
  core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v24);
  return error_no_such_file_or_dir;
}
