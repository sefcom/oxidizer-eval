char __fastcall alacritty_terminal::tty::unix::ShellUser::from_env(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // r12
  char result; // al
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-4B8h]
  __int64 v13; // [rsp+8h] [rbp-4B0h]
  __int64 v14; // [rsp+10h] [rbp-4A8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-4A0h]
  __int64 v16; // [rsp+20h] [rbp-498h]
  __int64 v17; // [rsp+28h] [rbp-490h]
  __int64 v18; // [rsp+30h] [rbp-488h]
  __int64 v19; // [rsp+38h] [rbp-480h]
  __int64 v20; // [rsp+40h] [rbp-478h] BYREF
  __int64 v21; // [rsp+48h] [rbp-470h]
  __int64 v22; // [rsp+50h] [rbp-468h]
  __int64 v23; // [rsp+58h] [rbp-460h] BYREF
  __int64 v24; // [rsp+60h] [rbp-458h]
  __int64 v25; // [rsp+68h] [rbp-450h]
  __int64 v26; // [rsp+78h] [rbp-440h]
  char s[1072]; // [rsp+88h] [rbp-430h] BYREF

  memset(s, 0, 0x400uLL);
  alacritty_terminal::tty::unix::get_pw_entry(&v23, s);
  std::env::var(&v14, aUser, 4LL);
  if ( v14 == 1 )
  {
    if ( !v23 )
    {
      a1[1] = v24;
      *a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v14);
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v20, v23);
    v1 = v20;
    v2 = v21;
    v3 = v22;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v14);
  }
  else
  {
    v1 = v15;
    v2 = v16;
    v3 = v17;
  }
  std::env::var(&v14, aHome_0, 4LL);
  if ( v14 == 1 )
  {
    if ( !v23 )
    {
      a1[1] = v24;
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v14);
      return core::ptr::drop_in_place<alloc::string::String>(v1, v2);
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v20, v25);
    v18 = v20;
    v19 = v21;
    v4 = v22;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v14);
  }
  else
  {
    v18 = v15;
    v19 = v16;
    v4 = v17;
  }
  std::env::var(&v14, aShell_0, 5LL);
  if ( v14 == 1 )
  {
    if ( v23 )
    {
      v5 = v2;
      v6 = v3;
      v12 = v1;
      v13 = v5;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v20, v26);
      v7 = v20;
      v8 = v21;
      v9 = v22;
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v14);
      result = 0;
      goto LABEL_13;
    }
    a1[1] = v24;
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v14);
    core::ptr::drop_in_place<alloc::string::String>(v18, v19);
    return core::ptr::drop_in_place<alloc::string::String>(v1, v2);
  }
  v11 = v2;
  v6 = v3;
  v12 = v1;
  v13 = v11;
  v7 = v15;
  v8 = v16;
  v9 = v17;
  result = v23 == 0;
LABEL_13:
  *a1 = v12;
  a1[1] = v13;
  a1[2] = v6;
  a1[3] = v18;
  a1[4] = v19;
  a1[5] = v4;
  a1[6] = v7;
  a1[7] = v8;
  a1[8] = v9;
  if ( result )
    return core::ptr::drop_in_place<std::io::error::Error>(v24);
  return result;
}