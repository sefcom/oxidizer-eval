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
  __int64 v12; // rdi
  __int64 v13; // rdx
  char **v15; // rdi
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ebx
  _QWORD **v19; // [rsp+8h] [rbp-2D0h] BYREF
  __int128 v20; // [rsp+10h] [rbp-2C8h]
  __int64 (__fastcall *v21)(); // [rsp+20h] [rbp-2B8h]
  unsigned __int64 v22; // [rsp+28h] [rbp-2B0h] BYREF
  __int128 v23; // [rsp+30h] [rbp-2A8h]
  _QWORD v24[2]; // [rsp+40h] [rbp-298h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-288h] BYREF
  __int128 v26; // [rsp+58h] [rbp-280h]
  _OWORD *v27; // [rsp+68h] [rbp-270h] BYREF
  _QWORD v28[2]; // [rsp+70h] [rbp-268h] BYREF
  __int64 v29; // [rsp+80h] [rbp-258h]
  __int64 v30; // [rsp+88h] [rbp-250h]
  _OWORD *v31; // [rsp+90h] [rbp-248h]
  __int64 v32; // [rsp+98h] [rbp-240h] BYREF
  char **v33; // [rsp+A0h] [rbp-238h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+A8h] [rbp-230h]
  __int64 *v35; // [rsp+B0h] [rbp-228h]
  __int64 (__fastcall *v36)(); // [rsp+B8h] [rbp-220h]
  _QWORD *v37; // [rsp+C0h] [rbp-218h]
  __int64 (__fastcall *v38)(); // [rsp+C8h] [rbp-210h]
  _QWORD *v39; // [rsp+140h] [rbp-198h] BYREF
  __int128 v40; // [rsp+148h] [rbp-190h]
  __int64 v41; // [rsp+158h] [rbp-180h]
  __int64 v42; // [rsp+160h] [rbp-178h]
  _BYTE v43[256]; // [rsp+1D8h] [rbp-100h] BYREF

  v29 = a2[11];
  if ( !v29 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_148B48);
  v4 = (__int128 *)a2[10];
  v26 = *v4;
  v25 = 0x8000000000000000LL;
  <alloc::borrow::Cow<B> as core::clone::Clone>::clone(&v22, &v25);
  v30 = a1;
  std::process::Command::new(v43, v26, *((_QWORD *)&v26 + 1));
  v31 = v4 + 1;
  std::process::Command::args(v43, v4 + 1, v29 - 1);
  v5 = a2[17];
  if ( v5 )
  {
    v6 = a2[18];
    <std::process::Command as std::os::unix::process::CommandExt>::arg0(v43, v5, v6);
    core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v22);
    v22 = 0x8000000000000000LL;
    *(_QWORD *)&v23 = v5;
    *((_QWORD *)&v23 + 1) = v6;
    if ( !a3 )
      goto LABEL_8;
    v39 = (_QWORD *)(&dword_0 + 1);
    *(_QWORD *)&v40 = v5;
    *((_QWORD *)&v40 + 1) = v6;
    LOBYTE(v41) = 1;
    v19 = &v39;
    *(_QWORD *)&v20 = <os_display::Quoted as core::fmt::Display>::fmt;
    v33 = &off_148A78;
    v34 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v37 = 0LL;
    v35 = (__int64 *)&v19;
    v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
    std::io::stdio::_eprint(&v33);
  }
  else if ( !a3 )
  {
    goto LABEL_8;
  }
  v39 = (_QWORD *)(&dword_0 + 1);
  v40 = v26;
  LOBYTE(v41) = 0;
  v19 = &v39;
  *(_QWORD *)&v20 = <os_display::Quoted as core::fmt::Display>::fmt;
  v33 = &off_148A98;
  v34 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v37 = 0LL;
  v35 = (__int64 *)&v19;
  v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
  std::io::stdio::_eprint(&v33);
  v24[0] = aArg_0;
  v24[1] = 6LL;
  v39 = (_QWORD *)(&dword_0 + 1);
  v40 = v23;
  LOBYTE(v41) = 1;
  v19 = (_QWORD **)v24;
  *(_QWORD *)&v20 = <&T as core::fmt::Display>::fmt;
  *((_QWORD *)&v20 + 1) = &v39;
  v21 = <os_display::Quoted as core::fmt::Display>::fmt;
  v33 = (char **)&unk_148AB8;
  v34 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v37 = 0LL;
  v35 = (__int64 *)&v19;
  v36 = (__int64 (__fastcall *)())(&dword_0 + 2);
  std::io::stdio::_eprint(&v33);
  v27 = v31;
  v28[0] = &v4[v29];
  v28[1] = 0LL;
  for ( i = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27);
        v8;
        i = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27) )
  {
    v32 = i + 1;
    v9 = *v8;
    v19 = (_QWORD **)(&dword_0 + 1);
    v20 = v9;
    LOBYTE(v21) = 1;
    v33 = (char **)v24;
    v34 = <&T as core::fmt::Display>::fmt;
    v35 = &v32;
    v36 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v37 = &v19;
    v38 = <os_display::Quoted as core::fmt::Display>::fmt;
    v39 = &unk_148AE8;
    *(_QWORD *)&v40 = 4LL;
    v42 = 0LL;
    *((_QWORD *)&v40 + 1) = &v33;
    v41 = 3LL;
    std::io::stdio::_eprint(&v39);
  }
LABEL_8:
  std::process::Command::status(&v27, v43);
  if ( (_DWORD)v27 )
  {
    v10 = v28[0];
    if ( (unsigned __int8)std::io::error::Error::kind(v28[0]) && (unsigned __int8)std::io::error::Error::kind(v10) != 20 )
    {
      v24[0] = v10;
      v39 = (_QWORD *)uucore::util_name();
      *(_QWORD *)&v40 = v13;
      v19 = &v39;
      *(_QWORD *)&v20 = <&T as core::fmt::Display>::fmt;
      v33 = (char **)&unk_148978;
      v34 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v37 = 0LL;
      v35 = (__int64 *)&v19;
      v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
      std::io::stdio::_eprint(&v33);
      v39 = v24;
      *(_QWORD *)&v40 = <std::io::error::Error as core::fmt::Debug>::fmt;
      v33 = &off_148B28;
      v34 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v37 = 0LL;
      v35 = (__int64 *)&v39;
      v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
      std::io::stdio::_eprint(&v33);
      error_no_such_file_or_dir = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(126LL);
      core::ptr::drop_in_place<std::io::error::Error>(v24);
    }
    else
    {
      error_no_such_file_or_dir = uu_env::EnvAppData::make_error_no_such_file_or_dir(
                                    *(_BYTE *)(v30 + 1),
                                    (__int64 (__fastcall *)())v26,
                                    *((__int64 *)&v26 + 1));
      core::ptr::drop_in_place<std::io::error::Error>(v28);
    }
  }
  else
  {
    if ( !HIDWORD(v27) )
    {
      core::ptr::drop_in_place<std::process::Command>(v43);
      core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v22);
      core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v25);
      return 0LL;
    }
    v12 = BYTE4(v27) & 0x7F;
    if ( (BYTE4(v27) & 0x7F) != 0 )
    {
      if ( (char)(v12 + 1) >= 2 )
      {
        v16 = <nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(v12);
        v18 = v17;
        core::result::Result<T,E>::unwrap(v16, v17);
        nix::sys::signal::SigSet::all(&v33);
        nix::sys::signal::SigAction::new(&v39, &v33);
        nix::sys::signal::sigaction(&v33, v18, &v39);
        nix::sys::signal::raise(v18);
        v15 = &off_148B90;
      }
      else
      {
        v15 = &off_148B60;
      }
      core::option::unwrap_failed(v15);
    }
    error_no_such_file_or_dir = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(BYTE5(v27));
  }
  core::ptr::drop_in_place<std::process::Command>(v43);
  core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v22);
  core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v25);
  return error_no_such_file_or_dir;
}
