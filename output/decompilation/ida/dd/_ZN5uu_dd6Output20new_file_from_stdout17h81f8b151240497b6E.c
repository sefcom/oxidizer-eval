__int64 __fastcall uu_dd::Output::new_file_from_stdout(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebp
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 v9; // rdx
  int v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+4h] [rbp-24h]
  __int64 v13; // [rsp+8h] [rbp-20h]

  std::io::stdio::stdout();
  uucore::mods::io::OwnedFileDescriptorOrHandle::from(&v11);
  if ( v11 == 1 )
  {
    *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
    *(_QWORD *)(a1 + 16) = v2;
    *(_BYTE *)a1 = 4;
  }
  else
  {
    v3 = v12;
    if ( (uu_dd::make_linux_oflags(a2 + 150) & 1) != 0 && (v12 = v4, v11 = 5, (nix::fcntl::fcntl(v3, &v11) & 1) != 0) )
    {
      *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<nix::errno::consts::Errno> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
      *(_QWORD *)(a1 + 16) = v9;
      *(_BYTE *)a1 = 4;
      core::ptr::drop_in_place<std::sys::fd::unix::FileDesc>(v3);
    }
    else
    {
      uu_dd::Output::prepare_file(a1, v3, a2, v5, v6, v7);
    }
  }
  return a1;
}