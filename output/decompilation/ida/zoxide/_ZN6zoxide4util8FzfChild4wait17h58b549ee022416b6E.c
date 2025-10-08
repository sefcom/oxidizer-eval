__int64 __fastcall zoxide::util::FzfChild::wait(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int v9; // [rsp+Ch] [rbp-6Ch] BYREF
  char **v10; // [rsp+10h] [rbp-68h] BYREF
  __int64 v11; // [rsp+18h] [rbp-60h]
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int128 v13; // [rsp+28h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+58h] [rbp-20h] BYREF
  char v17; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int8 v18; // [rsp+5Dh] [rbp-1Bh]
  __int64 v19; // [rsp+60h] [rbp-18h]

  v3 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = -1;
  core::ptr::drop_in_place<core::option::Option<std::process::ChildStdin>>(v3);
  v4 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 20) = -1;
  if ( v4 == -1 )
    core::option::unwrap_failed(&off_134BB0);
  v9 = v4;
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = 1LL;
  v15 = 0LL;
  v5 = std::io::append_to_string(&v14, &v9, 0LL);
  if ( (anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v5, v6) & 1) != 0 )
    goto LABEL_5;
  std::process::Child::wait(&v10, a2);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v16, &v10);
  if ( v16 != 1 )
  {
    if ( (v17 & 0x7F) == 0 )
    {
      switch ( v18 )
      {
        case 0u:
          *(_QWORD *)(a1 + 16) = v15;
          *(_OWORD *)a1 = v14;
          return core::ptr::drop_in_place<std::fs::File>(v9);
        case 1u:
          v10 = &off_134BA0;
          v11 = 1LL;
          v12 = 8LL;
          v13 = 0LL;
          v7 = anyhow::__private::format_err(&v10);
          goto LABEL_5;
        case 2u:
          v10 = &off_134B90;
          v11 = 1LL;
          v12 = 8LL;
          v13 = 0LL;
          v7 = anyhow::__private::format_err(&v10);
          goto LABEL_5;
        case 0x82u:
          v7 = anyhow::kind::Adhoc::new(130LL);
          goto LABEL_5;
      }
      if ( v18 == 255 || v18 <= 0x7Fu )
      {
        v10 = &off_134B70;
        v11 = 1LL;
        v12 = 8LL;
        v13 = 0LL;
        v7 = anyhow::__private::format_err(&v10);
        goto LABEL_5;
      }
    }
    v10 = &off_134B80;
    v11 = 1LL;
    v12 = 8LL;
    v13 = 0LL;
    v7 = anyhow::__private::format_err(&v10);
    goto LABEL_5;
  }
  v7 = v19;
LABEL_5:
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  core::ptr::drop_in_place<alloc::string::String>(&v14);
  return core::ptr::drop_in_place<std::fs::File>(v9);
}