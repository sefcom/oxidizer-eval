__int64 __fastcall alacritty_terminal::tty::unix::from_fd(__int64 a1, _QWORD *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v9; // r15
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  char v14; // r12
  __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int128 v20; // kr10_16
  int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v25; // r14d
  unsigned __int8 v26; // r12
  __int64 program; // rax
  __int64 v28; // rdx
  char v29; // r15
  unsigned int v30; // eax
  __int128 v31; // xmm0
  bool v32; // zf
  unsigned int v33; // [rsp+4h] [rbp-2E4h] BYREF
  unsigned int v34; // [rsp+8h] [rbp-2E0h] BYREF
  int fd; // [rsp+Ch] [rbp-2DCh]
  __int128 v36; // [rsp+10h] [rbp-2D8h]
  __int64 v37; // [rsp+20h] [rbp-2C8h]
  __int128 v38; // [rsp+28h] [rbp-2C0h]
  __int128 v39; // [rsp+38h] [rbp-2B0h]
  __int64 v40; // [rsp+48h] [rbp-2A0h] BYREF
  _OWORD src[14]; // [rsp+50h] [rbp-298h] BYREF
  _QWORD v42[4]; // [rsp+130h] [rbp-1B8h] BYREF
  __int128 v43; // [rsp+150h] [rbp-198h] BYREF
  __int64 v44; // [rsp+160h] [rbp-188h]
  __int64 v45; // [rsp+168h] [rbp-180h]
  __int64 v46; // [rsp+170h] [rbp-178h]
  _QWORD v47[3]; // [rsp+178h] [rbp-170h] BYREF
  int v48; // [rsp+190h] [rbp-158h] BYREF
  _BYTE v49[28]; // [rsp+194h] [rbp-154h]
  __int128 v50; // [rsp+1B0h] [rbp-138h]
  _OWORD dest[14]; // [rsp+1C0h] [rbp-128h] BYREF
  _BYTE v52[72]; // [rsp+2A0h] [rbp-48h] BYREF

  v9 = a1;
  v34 = a4;
  v33 = a5;
  v10 = &v34;
  rustix::termios::tc::tcgetattr(src, &v34);
  if ( (src[0] & 1) == 0 )
  {
    *(_OWORD *)((char *)&dest[1] + 12) = src[2];
    dest[1] = *(_OWORD *)((char *)&src[1] + 4);
    dest[0] = *(_OWORD *)((char *)src + 4);
    rustix::termios::types::_::InternalBitFlags::set(dest);
    v10 = (unsigned int *)dest;
    rustix::termios::tc::tcsetattr(&v34, dest);
  }
  alacritty_terminal::tty::unix::ShellUser::from_env(src);
  v12 = *((_QWORD *)&src[0] + 1);
  v11 = *(_QWORD *)&src[0];
  if ( __OFSUB__(-*(_QWORD *)&src[0], 1LL) )
  {
    *(_QWORD *)a1 = *((_QWORD *)&src[0] + 1);
    *(_DWORD *)(a1 + 32) = 2;
    goto LABEL_25;
  }
  v37 = a1;
  fd = a4;
  v39 = src[0];
  v46 = *(_QWORD *)&src[1];
  v38 = *(_OWORD *)((char *)&src[1] + 8);
  v45 = *((_QWORD *)&src[2] + 1);
  v36 = src[3];
  if ( *a2 == 0x8000000000000000LL )
  {
    alacritty_terminal::tty::unix::default_shell_command(dest, *((_QWORD *)&src[3] + 1), *(_QWORD *)&src[4]);
  }
  else
  {
    std::process::Command::new(src, a2);
    std::process::Command::args(src, a2[4], a2[5]);
    memcpy(dest, src, sizeof(dest));
  }
  std::os::fd::owned::OwnedFd::try_clone(src, &v33);
  v13 = v37;
  if ( LODWORD(src[0]) == 1
    || (std::process::Command::stdin(dest, DWORD1(src[0])),
        std::os::fd::owned::OwnedFd::try_clone(src, &v33),
        LODWORD(src[0]) == 1) )
  {
    *(_QWORD *)v13 = *((_QWORD *)&src[0] + 1);
    *(_DWORD *)(v13 + 32) = 2;
    v14 = 1;
LABEL_23:
    core::ptr::drop_in_place<std::process::Command>(dest);
    if ( !v14 )
    {
      v10 = (unsigned int *)*((_QWORD *)&v36 + 1);
      core::ptr::drop_in_place<alloc::string::String>(v36, *((_QWORD *)&v36 + 1));
      v9 = v37;
      goto LABEL_27;
    }
    core::ptr::drop_in_place<alloc::string::String>(v39, *((_QWORD *)&v39 + 1));
    core::ptr::drop_in_place<alloc::string::String>(v38, *((_QWORD *)&v38 + 1));
    v10 = (unsigned int *)*((_QWORD *)&v36 + 1);
    core::ptr::drop_in_place<alloc::string::String>(v36, *((_QWORD *)&v36 + 1));
    v9 = v37;
LABEL_25:
    core::ptr::drop_in_place<std::os::fd::owned::OwnedFd>(v33, v10, v11, v12);
LABEL_27:
    core::ptr::drop_in_place<std::os::fd::owned::OwnedFd>(v34, v10, v22, v23);
    return v9;
  }
  std::process::Command::stderr(dest, DWORD1(src[0]));
  std::process::Command::stdout(dest, v33);
  v15 = core::fmt::num::imp::<impl usize>::_fmt(a3, v42, 20LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, v15);
  v44 = *(_QWORD *)&src[1];
  v43 = src[0];
  std::process::Command::env(dest, &v43);
  src[0] = v39;
  *(_QWORD *)&src[1] = v46;
  std::process::Command::env(dest, aUser, 4LL, src);
  src[0] = v38;
  *(_QWORD *)&src[1] = v45;
  std::process::Command::env(dest, aHome_0, 4LL, src);
  *(_QWORD *)&src[1] = v44;
  src[0] = v43;
  std::process::Command::env(dest, aWindowid, 8LL, src);
  v16 = fd;
  hashbrown::map::HashMap<K,V,S,A>::iter(src, a2 + 9);
  while ( 1 )
  {
    v17 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(src);
    if ( !v17 )
      break;
    std::process::Command::env(dest, v17);
  }
  std::process::Command::env_remove(dest, aXdgActivationT_1, 20LL);
  std::process::Command::env_remove(dest, aDesktopStartup_0, 18LL);
  v18 = 0x8000000000000000LL;
  if ( a2[6] != 0x8000000000000000LL )
  {
    <&str as alloc::string::SpecToString>::spec_to_string(src, a2[7], a2[8]);
    v18 = *(_QWORD *)&src[0];
    v50 = *(_OWORD *)((char *)src + 8);
  }
  *(_QWORD *)&src[0] = v18;
  *(_OWORD *)((char *)src + 8) = v50;
  *((_QWORD *)&src[1] + 1) = __PAIR64__(v16, a5);
  <std::process::Command as std::os::unix::process::CommandExt>::pre_exec(dest, src);
  std::os::unix::net::stream::UnixStream::pair(src);
  if ( LODWORD(src[0]) == 1 )
  {
    *(_QWORD *)v13 = *((_QWORD *)&src[0] + 1);
    *(_DWORD *)(v13 + 32) = 2;
LABEL_22:
    v14 = 0;
    goto LABEL_23;
  }
  LODWORD(v42[0]) = DWORD2(src[0]);
  signal_hook::low_level::pipe::register_raw(src, 17LL, DWORD1(src[0]));
  if ( (src[0] & 1) != 0 )
  {
    v19 = *((_QWORD *)&src[0] + 1);
LABEL_21:
    *(_QWORD *)v13 = v19;
    *(_DWORD *)(v13 + 32) = 2;
    core::ptr::drop_in_place<std::process::ChildStdin>(LODWORD(v42[0]));
    goto LABEL_22;
  }
  v20 = src[1];
  v21 = src[2];
  v19 = std::net::udp::UdpSocket::set_nonblocking(v42, 1LL);
  if ( v19 )
    goto LABEL_21;
  v25 = v42[0];
  std::process::Command::spawn(&v48, dest);
  if ( v48 == 1 )
  {
    v40 = *(_QWORD *)&v49[4];
    v26 = std::io::error::Error::kind();
    program = std::process::Command::get_program(dest);
    alloc::string::String::from_utf8_lossy(v47, program, v28);
    v42[0] = v47;
    v42[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v42[2] = &v40;
    v42[3] = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &off_8972E0;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = v42;
    *((_QWORD *)&src[1] + 1) = 2LL;
    core::option::Option<T>::map_or_else(v52, src);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v47[0], v47[1]);
    *(_QWORD *)v13 = std::io::error::Error::new(v26, v52);
    *(_DWORD *)(v13 + 32) = 2;
    core::ptr::drop_in_place<std::io::error::Error>(v40);
    core::ptr::drop_in_place<std::process::ChildStdin>(v25);
    v29 = 1;
  }
  else
  {
    alacritty_terminal::tty::unix::set_nonblocking(fd);
    *(_OWORD *)((char *)&src[1] + 8) = *(_OWORD *)&v49[12];
    *(_OWORD *)((char *)src + 12) = *(_OWORD *)v49;
    v30 = v34;
    *(_OWORD *)v13 = v20;
    *(_DWORD *)(v13 + 16) = v21;
    *(_QWORD *)(v13 + 52) = *(_QWORD *)&src[2];
    v31 = src[0];
    *(_OWORD *)(v13 + 36) = src[1];
    *(_OWORD *)(v13 + 20) = v31;
    *(_DWORD *)(v13 + 60) = v30;
    *(_DWORD *)(v13 + 64) = v25;
    v29 = 0;
  }
  core::ptr::drop_in_place<std::process::Command>(dest);
  v10 = (unsigned int *)*((_QWORD *)&v36 + 1);
  core::ptr::drop_in_place<alloc::string::String>(v36, *((_QWORD *)&v36 + 1));
  v32 = v29 == 0;
  v9 = v37;
  if ( !v32 )
    goto LABEL_27;
  return v9;
}