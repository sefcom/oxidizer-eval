_DWORD *__fastcall uu_env::EnvAppData::run_program(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r15
  _QWORD *v4; // r14
  unsigned __int64 v5; // rdx
  __int128 *v6; // r13
  __int128 *v7; // rbx
  __int128 *v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r15
  sigset_t **v11; // rax
  __int64 v12; // rbp
  __int128 v13; // xmm0
  sigset_t **v14; // r14
  __int64 v15; // r12
  char v16; // bp
  _DWORD *v17; // rax
  _DWORD *v18; // rbx
  unsigned int v19; // ebx
  unsigned __int8 v20; // bp^1
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  char **v24; // rdi
  __int64 v25; // [rsp+0h] [rbp-298h] BYREF
  int v26; // [rsp+Ch] [rbp-28Ch]
  sigset_t *p_set; // [rsp+10h] [rbp-288h] BYREF
  __int128 v28; // [rsp+18h] [rbp-280h]
  __int64 (__fastcall *v29)(); // [rsp+28h] [rbp-270h]
  const char *v30; // [rsp+30h] [rbp-268h] BYREF
  __int64 v31; // [rsp+38h] [rbp-260h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-258h]
  unsigned __int64 v33; // [rsp+48h] [rbp-250h]
  char **v34; // [rsp+50h] [rbp-248h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+58h] [rbp-240h]
  sigset_t *p_p_set; // [rsp+60h] [rbp-238h]
  __int64 (__fastcall *v37)(); // [rsp+68h] [rbp-230h]
  sigset_t **v38; // [rsp+70h] [rbp-228h]
  __int64 (__fastcall *v39)(); // [rsp+78h] [rbp-220h]
  __int64 v40; // [rsp+F0h] [rbp-1A8h]
  __int64 v41; // [rsp+F8h] [rbp-1A0h]
  sigset_t set; // [rsp+100h] [rbp-198h] BYREF
  int v43; // [rsp+188h] [rbp-110h]
  _BYTE v44[256]; // [rsp+198h] [rbp-100h] BYREF

  v26 = a3;
  v40 = a1;
  v3 = a2[11];
  if ( !v3 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_10C730);
  v4 = (_QWORD *)a2[10];
  v5 = v4[1];
  v6 = (__int128 *)(v4 + 2);
  v33 = *v4;
  v32 = v5;
  std::sys::pal::unix::process::process_common::Command::new(v44);
  v7 = (__int128 *)&v4[2 * v3];
  v41 = v3;
  if ( v3 != 1 )
  {
    v8 = (__int128 *)(v4 + 2);
    do
    {
      std::sys::pal::unix::process::process_common::Command::arg(v44, *(_QWORD *)v8, *((_QWORD *)v8 + 1));
      ++v8;
    }
    while ( v8 != v7 );
  }
  v9 = a2[17];
  if ( v9 )
  {
    v10 = a2[18];
    std::sys::pal::unix::process::process_common::Command::set_arg_0(v44, a2[17], v10);
    if ( !(_BYTE)v26 )
      goto LABEL_12;
    set.__val[0] = 1LL;
    set.__val[1] = v9;
    set.__val[2] = v10;
    LOBYTE(set.__val[3]) = 1;
    p_set = &set;
    *(_QWORD *)&v28 = <os_display::Quoted as core::fmt::Display>::fmt;
    v34 = &off_10C748;
    v35 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v38 = 0LL;
    p_p_set = (sigset_t *)&p_set;
    v37 = (__int64 (__fastcall *)())(&dword_0 + 1);
    std::io::stdio::_eprint(&v34);
  }
  else
  {
    v10 = v32;
    v9 = v33;
    if ( !(_BYTE)v26 )
      goto LABEL_12;
  }
  set.__val[0] = 1LL;
  set.__val[1] = v33;
  set.__val[2] = v32;
  LOBYTE(set.__val[3]) = 0;
  p_set = &set;
  *(_QWORD *)&v28 = <os_display::Quoted as core::fmt::Display>::fmt;
  v34 = &off_10C768;
  v35 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v38 = 0LL;
  p_p_set = (sigset_t *)&p_set;
  v37 = (__int64 (__fastcall *)())(&dword_0 + 1);
  std::io::stdio::_eprint(&v34);
  v30 = aArg_0;
  v31 = 6LL;
  set.__val[0] = 1LL;
  set.__val[1] = v9;
  set.__val[2] = v10;
  LOBYTE(set.__val[3]) = 1;
  p_set = (sigset_t *)&v30;
  *(_QWORD *)&v28 = <&T as core::fmt::Display>::fmt;
  *((_QWORD *)&v28 + 1) = &set;
  v29 = <os_display::Quoted as core::fmt::Display>::fmt;
  v34 = (char **)&unk_10C788;
  v35 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v38 = 0LL;
  p_p_set = (sigset_t *)&p_set;
  v37 = (__int64 (__fastcall *)())(&dword_0 + 2);
  std::io::stdio::_eprint(&v34);
  if ( v41 != 1 )
  {
    v11 = &p_set;
    v12 = 1LL;
    do
    {
      v25 = v12;
      v13 = *v6;
      p_set = (sigset_t *)(&dword_0 + 1);
      v28 = v13;
      LOBYTE(v29) = 1;
      v34 = (char **)&v30;
      v35 = <&T as core::fmt::Display>::fmt;
      p_p_set = (sigset_t *)&v25;
      v37 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v14 = v11;
      v38 = v11;
      v39 = <os_display::Quoted as core::fmt::Display>::fmt;
      set.__val[0] = (unsigned __int64)&unk_10C820;
      set.__val[1] = 4LL;
      set.__val[4] = 0LL;
      set.__val[2] = (unsigned __int64)&v34;
      set.__val[3] = 3LL;
      std::io::stdio::_eprint(&set);
      ++v12;
      ++v6;
      v11 = v14;
    }
    while ( v6 != v7 );
  }
LABEL_12:
  std::process::Command::status(&v30, v44);
  if ( (_DWORD)v30 )
  {
    v15 = v31;
    if ( (unsigned __int8)std::io::error::Error::kind(v31) && (unsigned __int8)std::io::error::Error::kind(v15) != 20 )
    {
      v25 = v15;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      *(_OWORD *)set.__val = xmmword_112018;
      p_set = &set;
      *(_QWORD *)&v28 = <&T as core::fmt::Display>::fmt;
      v34 = (char **)&unk_10C630;
      v35 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v38 = 0LL;
      p_p_set = (sigset_t *)&p_set;
      v37 = (__int64 (__fastcall *)())(&dword_0 + 1);
      std::io::stdio::_eprint(&v34);
      set.__val[0] = (unsigned __int64)&v25;
      set.__val[1] = (unsigned __int64)<std::io::error::Error as core::fmt::Debug>::fmt;
      v34 = &off_10C800;
      v35 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v38 = 0LL;
      p_p_set = &set;
      v37 = (__int64 (__fastcall *)())(&dword_0 + 1);
      std::io::stdio::_eprint(&v34);
      v22 = (_DWORD *)_rust_alloc(4LL, 4LL);
      if ( !v22 )
        alloc::alloc::handle_alloc_error(4LL, 4LL);
      v18 = v22;
      *v22 = 126;
      core::ptr::drop_in_place<std::io::error::Error>(&v25);
    }
    else
    {
      v16 = *(_BYTE *)(v40 + 1);
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      *(_OWORD *)set.__val = xmmword_112018;
      p_set = &set;
      *(_QWORD *)&v28 = <&T as core::fmt::Display>::fmt;
      v34 = (char **)&unk_10C630;
      v35 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v38 = 0LL;
      p_p_set = (sigset_t *)&p_set;
      v37 = (__int64 (__fastcall *)())(&dword_0 + 1);
      std::io::stdio::_eprint(&v34);
      set.__val[0] = 1LL;
      set.__val[1] = v33;
      set.__val[2] = v32;
      LOBYTE(set.__val[3]) = 1;
      p_set = &set;
      *(_QWORD *)&v28 = <os_display::Quoted as core::fmt::Display>::fmt;
      v34 = (char **)&unk_10C6E0;
      v35 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v38 = 0LL;
      p_p_set = (sigset_t *)&p_set;
      v37 = (__int64 (__fastcall *)())(&dword_0 + 1);
      std::io::stdio::_eprint(&v34);
      if ( !v16 )
      {
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        *(_OWORD *)set.__val = xmmword_112018;
        p_set = &set;
        *(_QWORD *)&v28 = <&T as core::fmt::Display>::fmt;
        v34 = (char **)&unk_10C630;
        v35 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v38 = 0LL;
        p_p_set = (sigset_t *)&p_set;
        v37 = (__int64 (__fastcall *)())(&dword_0 + 1);
        std::io::stdio::_eprint(&v34);
        set.__val[0] = (unsigned __int64)&off_10C700;
        set.__val[1] = (unsigned __int64)<&T as core::fmt::Display>::fmt;
        v34 = (char **)&unk_10C710;
        v35 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v38 = 0LL;
        p_p_set = &set;
        v37 = (__int64 (__fastcall *)())(&dword_0 + 1);
        std::io::stdio::_eprint(&v34);
      }
      v17 = (_DWORD *)_rust_alloc(4LL, 4LL);
      if ( !v17 )
        alloc::alloc::handle_alloc_error(4LL, 4LL);
      v18 = v17;
      *v17 = 127;
      core::ptr::drop_in_place<std::io::error::Error>(&v31);
    }
  }
  else
  {
    if ( !HIDWORD(v30) )
    {
      core::ptr::drop_in_place<std::process::Command>(v44);
      return 0LL;
    }
    v19 = BYTE4(v30) & 0x7F;
    if ( (BYTE4(v30) & 0x7F) != 0 )
    {
      if ( (char)(v19 + 1) >= 2 )
      {
        if ( v19 >= 0x20 )
        {
          LODWORD(v34) = 22;
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v34, &unk_10C418, &off_10C7D0);
        }
        sigfillset((sigset_t *)&set.__val[1]);
        set.__val[0] = 0LL;
        v43 = 0;
        nix::sys::signal::sigaction(&v34, v19, &set);
        nix::sys::signal::raise(v19);
        v24 = &off_10C7E8;
      }
      else
      {
        v24 = &off_10C7B8;
      }
      core::option::unwrap_failed(v24);
    }
    v20 = BYTE5(v30);
    v21 = (_DWORD *)_rust_alloc(4LL, 4LL);
    if ( !v21 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v18 = v21;
    *v21 = v20;
  }
  core::ptr::drop_in_place<std::process::Command>(v44);
  return v18;
}
