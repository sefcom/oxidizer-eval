__int64 __fastcall uu_timeout::timeout(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned __int8 a8,
        char a9,
        unsigned __int8 a10)
{
  unsigned int v12; // eax
  __int64 v13; // r14
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r12
  int *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // [rsp+10h] [rbp-1A8h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-1A0h]
  unsigned int v24; // [rsp+1Ch] [rbp-19Ch]
  _DWORD v25[2]; // [rsp+20h] [rbp-198h] BYREF
  __int64 v26; // [rsp+28h] [rbp-190h]
  int v27; // [rsp+34h] [rbp-184h] BYREF
  __int128 v28; // [rsp+38h] [rbp-180h]
  __int64 v29; // [rsp+48h] [rbp-170h]
  __int64 *v30; // [rsp+50h] [rbp-168h] BYREF
  __int128 v31; // [rsp+58h] [rbp-160h]
  __int64 v32; // [rsp+68h] [rbp-150h]
  __int64 v33; // [rsp+70h] [rbp-148h]
  _DWORD v34[2]; // [rsp+78h] [rbp-140h] BYREF
  __int64 v35; // [rsp+80h] [rbp-138h]
  __int128 v36; // [rsp+88h] [rbp-130h] BYREF
  __int64 **v37; // [rsp+98h] [rbp-120h]
  __int128 v38; // [rsp+A0h] [rbp-118h] BYREF
  __int64 **v39; // [rsp+B0h] [rbp-108h]
  __int64 v40; // [rsp+B8h] [rbp-100h]
  __int64 v41; // [rsp+C0h] [rbp-F8h]

  v33 = a6;
  v24 = a4;
  v23 = a7;
  if ( !a8 )
    setpgid(0, 0);
  v12 = uucore::features::signals::enable_pipe_errors();
  if ( v12 != 134 )
    return uucore::mods::error::<impl core::convert::From<nix::errno::consts::Errno> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
  if ( !a2 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_112890);
  std::process::Command::new(&v38, a1);
  std::process::Command::args(&v38, a1 + 24, a2 - 1);
  std::process::Command::stdin(&v38);
  std::process::Command::stdout(&v38);
  std::process::Command::stderr(&v38);
  std::process::Command::spawn(&v30, &v38);
  if ( (_DWORD)v30 != 1 )
  {
    v27 = HIDWORD(v30);
    v28 = v31;
    v29 = v32;
    core::ptr::drop_in_place<std::process::Command>(&v38);
    uu_timeout::unblock_sigchld();
    <std::process::Child as uucore::features::process::ChildExt>::wait_or_timeout(v25, &v27, a3, v24);
    v15 = v25[0];
    if ( v25[0] == 1 )
    {
      uu_timeout::send_signal((__int64)&v27, a5, a8);
      v16 = uu_timeout::status::<impl core::convert::From<uu_timeout::status::ExitStatus> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
              1LL,
              a5);
    }
    else
    {
      if ( v25[1] == 1 )
      {
        if ( (v26 & 0x7F) != 0 )
          v17 = (unsigned int)uu_timeout::timeout::{{closure}}((unsigned int)v26);
        else
          v17 = BYTE1(v26);
        v16 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        goto LABEL_20;
      }
      v18 = *(_QWORD *)(a1 + 8);
      v19 = *(_QWORD *)(a1 + 16);
      uu_timeout::report_if_verbose(a5, v18, v19, a10);
      uu_timeout::send_signal((__int64)&v27, a5, a8);
      if ( v23 == 1000000000 )
      {
        v20 = &v27;
        std::process::Child::wait(&v38, &v27);
        if ( (_DWORD)v38 == 1 )
        {
          v13 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v38 + 1));
          core::ptr::drop_in_place<core::result::Result<core::option::Option<std::process::ExitStatus>,std::io::error::Error>>(
            v15,
            v26);
LABEL_22:
          core::ptr::drop_in_place<std::process::Child>(&v27);
          return v13;
        }
        if ( a9 )
        {
          LODWORD(v20) = BYTE4(v38) & 0x7F;
          if ( (BYTE4(v38) & 0x7F) == 0 )
          {
            v16 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(BYTE5(v38));
            goto LABEL_20;
          }
          v21 = 2 * (unsigned int)((char)((_BYTE)v20 + 1) >= 2);
        }
        else
        {
          v21 = 0LL;
        }
        v16 = uu_timeout::status::<impl core::convert::From<uu_timeout::status::ExitStatus> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
                v21,
                (int)v20);
      }
      else
      {
        uu_timeout::wait_or_kill_process((__int64)v34, (__int64)&v27, v18, v19, v33, v23, a9, a8, a10);
        if ( v34[0] == 1 )
        {
          v22 = v35;
          v30 = &v22;
          *(_QWORD *)&v31 = <std::io::error::Error as core::fmt::Display>::fmt;
          *(_QWORD *)&v38 = &unk_1ACE0;
          *((_QWORD *)&v38 + 1) = 1LL;
          v41 = 0LL;
          v39 = &v30;
          v40 = 1LL;
          core::option::Option<T>::map_or_else(&v36, &v38);
          LODWORD(v40) = 125;
          v38 = v36;
          v39 = v37;
          v13 = alloc::boxed::Box<T>::new(&v38);
          core::ptr::drop_in_place<std::io::error::Error>(v22);
LABEL_21:
          core::ptr::drop_in_place<core::result::Result<core::option::Option<std::process::ExitStatus>,std::io::error::Error>>(
            v15,
            v26);
          goto LABEL_22;
        }
        v16 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34[1]);
      }
    }
LABEL_20:
    v13 = v16;
    goto LABEL_21;
  }
  v13 = uu_timeout::timeout::{{closure}}(v31);
  core::ptr::drop_in_place<std::process::Command>(&v38);
  return v13;
}