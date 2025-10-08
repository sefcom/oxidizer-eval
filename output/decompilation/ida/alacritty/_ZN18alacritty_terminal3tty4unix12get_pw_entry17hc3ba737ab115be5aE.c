__int64 __fastcall alacritty_terminal::tty::unix::get_pw_entry(__int64 *a1, char *a2)
{
  __uid_t v2; // ebp
  int v3; // eax
  char *pw_dir; // r15
  char *pw_shell; // r14
  size_t v6; // rax
  __int64 v7; // rdx
  size_t v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rbp
  size_t v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  const char *v15; // rsi
  __int64 v16; // rax
  __uid_t v17; // [rsp+Ch] [rbp-DCh] BYREF
  struct passwd *result; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-D0h]
  __int64 v20; // [rsp+20h] [rbp-C8h]
  passwd resultbuf; // [rsp+28h] [rbp-C0h] BYREF
  passwd v22; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v23[12]; // [rsp+88h] [rbp-60h] BYREF

  result = 0LL;
  v2 = getuid();
  v17 = v2;
  v3 = getpwuid_r(v2, &resultbuf, a2, 0x400uLL, &result);
  v22 = resultbuf;
  pw_dir = resultbuf.pw_dir;
  pw_shell = resultbuf.pw_shell;
  if ( v3 < 0 )
  {
    v15 = aGetpwuidRFaile;
LABEL_7:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v23, v15);
    v16 = alloc::boxed::Box<T>::new(v23);
    v13 = std::io::error::Error::_new(40LL, v16, &off_896CF0);
    a1[1] = v13;
    *a1 = 0LL;
    return v13;
  }
  if ( !result )
  {
    v15 = aPwNotFound;
    goto LABEL_7;
  }
  if ( resultbuf.pw_uid != v2 )
  {
    v23[0] = 0LL;
    core::panicking::assert_failed(0LL, &v22.pw_uid, &v17, v23, &off_897280);
  }
  v6 = strlen(resultbuf.pw_name);
  core::ffi::c_str::CStr::to_str(v23, resultbuf.pw_name, v6 + 1);
  v20 = core::result::Result<T,E>::unwrap(v23, &off_897298);
  v19 = v7;
  v8 = strlen(pw_dir);
  core::ffi::c_str::CStr::to_str(v23, pw_dir, v8 + 1);
  v9 = core::result::Result<T,E>::unwrap(v23, &off_8972B0);
  v11 = v10;
  v12 = strlen(pw_shell);
  core::ffi::c_str::CStr::to_str(v23, pw_shell, v12 + 1);
  v13 = core::result::Result<T,E>::unwrap(v23, &off_8972C8);
  *a1 = v20;
  a1[1] = v19;
  a1[2] = v9;
  a1[3] = v11;
  a1[4] = v13;
  a1[5] = v14;
  return v13;
}