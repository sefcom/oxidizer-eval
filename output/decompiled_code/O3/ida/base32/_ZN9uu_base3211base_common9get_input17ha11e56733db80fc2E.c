__int64 *__fastcall uu_base32::base_common::get_input(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r14
  char v3; // dl
  char v4; // bp
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rcx
  __int64 v7; // rdx
  int v8; // ebp
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+8h] [rbp-30h]
  __int16 v12; // [rsp+Ch] [rbp-2Ch]
  _DWORD v13[2]; // [rsp+10h] [rbp-28h] BYREF
  __int64 v14; // [rsp+18h] [rbp-20h]

  if ( a2[2] == 0x8000000000000000LL )
  {
    v10 = std::io::stdio::stdin();
    v2 = std::io::stdio::Stdin::lock(&v10);
    v10 = v2;
    v4 = v3 & 1;
    LOBYTE(v11) = v3 & 1;
    v5 = _rust_alloc(16LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *(_QWORD *)v5 = v2;
    *(_BYTE *)(v5 + 8) = v4;
    v6 = &off_101B50;
LABEL_8:
    v7 = 0LL;
    goto LABEL_9;
  }
  v10 = 0x1B600000000LL;
  v11 = 1;
  v12 = 0;
  std::fs::OpenOptions::_open(v13, &v10, a2[3], a2[4]);
  if ( !v13[0] )
  {
    v8 = v13[1];
    v5 = _rust_alloc(4LL, 4LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v5 = v8;
    v6 = &off_101BA8;
    goto LABEL_8;
  }
  v5 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
         v14,
         a2 + 2);
  v7 = 1LL;
  v6 = &anon_aee8d0926622a1c6e97588a73d77e694_9_llvm_9973493521462227259;
LABEL_9:
  a1[1] = v5;
  a1[2] = (__int64)v6;
  *a1 = v7;
  return a1;
}
