__int64 __fastcall just::subcommand::Subcommand::edit(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-128h] BYREF
  __int64 v4; // [rsp+10h] [rbp-118h]
  __int128 v5; // [rsp+18h] [rbp-110h] BYREF
  __int64 v6; // [rsp+28h] [rbp-100h]
  _BYTE v7[248]; // [rsp+30h] [rbp-F8h] BYREF

  std::env::var_os(v7, aVisual, 6LL);
  core::option::Option<T>::or_else(&v5, v7);
  if ( __OFSUB__(0LL, (_QWORD)v5) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v3, aVim);
  }
  else
  {
    v4 = v6;
    v3 = v5;
  }
  std::process::Command::new(v7, &v3);
  std::process::Command::current_dir(v7, a2 + 24);
  std::process::Command::arg(v7, a2);
  std::process::Command::status(&v5, v7);
  core::ptr::drop_in_place<std::process::Command>(v7);
  if ( (_DWORD)v5 == 1 )
  {
    result = *((_QWORD *)&v5 + 1);
    *(_QWORD *)(a1 + 32) = v4;
    *(_OWORD *)(a1 + 16) = v3;
    *(_BYTE *)a1 = 19;
    *(_QWORD *)(a1 + 8) = result;
  }
  else
  {
    result = DWORD1(v5);
    if ( DWORD1(v5) )
    {
      *(_QWORD *)(a1 + 24) = v4;
      *(_OWORD *)(a1 + 8) = v3;
      *(_BYTE *)a1 = 20;
      *(_DWORD *)(a1 + 4) = result;
    }
    else
    {
      *(_BYTE *)a1 = 56;
      return core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v3);
    }
  }
  return result;
}