__int64 __fastcall sniffnet::gui::sniffer::Sniffer::open_web(char a1)
{
  __int64 v1; // rbx
  char *v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[3]; // [rsp+0h] [rbp-158h] BYREF
  int v13; // [rsp+18h] [rbp-140h]
  _QWORD v14[2]; // [rsp+28h] [rbp-130h] BYREF
  int v15; // [rsp+38h] [rbp-120h]
  int v16; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v17[28]; // [rsp+44h] [rbp-114h]
  _BYTE v18[248]; // [rsp+60h] [rbp-F8h] BYREF

  v1 = qword_18E9660[a1];
  v2 = (char *)dword_18E96A8 + dword_18E96A8[a1];
  std::process::Command::new(v18);
  std::process::Command::arg(v18, v2, v1);
  std::process::Command::spawn(v12, v18);
  v14[0] = aSrcGuiSnifferR;
  v14[1] = 18LL;
  v15 = 709;
  <core::result::Result<T,E> as sniffnet::utils::error_logger::ErrorLogger<T,E>>::log_err(&v16, v12, v14);
  if ( v16 == 1 )
  {
    core::ptr::drop_in_place<core::result::Result<std::process::Child,std::io::error::Error>>(&v16);
    return core::ptr::drop_in_place<std::process::Command>(v18, v12, v7, v8, v9, v10, v12[0], v12[1], v12[2], v13);
  }
  else
  {
    core::ptr::drop_in_place<std::process::Command>(
      v18,
      v12,
      v3,
      v4,
      v5,
      v6,
      *(_QWORD *)v17,
      *(_QWORD *)&v17[8],
      *(_OWORD *)&v17[12] >> 32,
      *(_DWORD *)&v17[24]);
    std::process::Child::wait(v18, v12);
    core::result::Result<T,E>::unwrap_or_default(v18);
    return core::ptr::drop_in_place<std::process::Child>(v12);
  }
}