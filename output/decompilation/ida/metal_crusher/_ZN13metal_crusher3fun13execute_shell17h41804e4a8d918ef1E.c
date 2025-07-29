__int64 __fastcall metal_crusher::fun::execute_shell(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _BYTE v5[28]; // [rsp+4h] [rbp-124h] BYREF
  _BYTE v6[32]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v7[232]; // [rsp+40h] [rbp-E8h] BYREF

  std::process::Command::new(v7, aSh, 2LL);
  v2 = std::process::Command::arg(v7, aC, 2LL);
  v3 = std::process::Command::arg(v2, a1, a2);
  std::process::Command::spawn(v6, v3);
  core::result::Result<T,E>::unwrap(v5, v6);
  core::ptr::drop_in_place<std::process::Child>(v5);
  return core::ptr::drop_in_place<std::process::Command>(v7);
}