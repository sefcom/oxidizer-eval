__int64 __fastcall uu_dd::Output::new_file_from_stdout(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebp
  unsigned int v5; // edx
  unsigned int v6; // edx
  __int64 v7; // rdx
  int v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+4h] [rbp-24h]
  __int64 v11; // [rsp+8h] [rbp-20h]

  v2 = std::io::stdio::stdout();
  uucore::mods::io::OwnedFileDescriptorOrHandle::from(&v9, v2);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
    *(_QWORD *)(a1 + 16) = v3;
    *(_BYTE *)a1 = 4;
  }
  else
  {
    v4 = v10;
    if ( (unsigned int)uu_dd::make_linux_oflags(a2 + 150) == 1
      && (v10 = v5, v9 = 5, (unsigned int)nix::fcntl::fcntl(v4, &v9)) )
    {
      *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<nix::errno::consts::Errno> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
      *(_QWORD *)(a1 + 16) = v7;
      *(_BYTE *)a1 = 4;
      core::ptr::drop_in_place<uucore::mods::io::OwnedFileDescriptorOrHandle>(v4);
    }
    else
    {
      uu_dd::Output::prepare_file(a1, v4, a2);
    }
  }
  return a1;
}
