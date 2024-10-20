__int64 *__fastcall uu_base32::base_common::get_input(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r14
  char v3; // dl
  char v4; // bp
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // r14
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  int v12; // [rsp+8h] [rbp-60h]
  __int16 v13; // [rsp+Ch] [rbp-5Ch]
  _DWORD v14[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-50h]
  _QWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  char v17; // [rsp+30h] [rbp-38h]

  if ( a2[2] == 0x8000000000000000LL )
  {
    v16[0] = std::io::stdio::stdin();
    v2 = std::io::stdio::Stdin::lock(v16);
    v16[1] = v2;
    v4 = v3 & 1;
    v17 = v3 & 1;
    v5 = _rust_alloc(16LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    *(_QWORD *)v5 = v2;
    *(_BYTE *)(v5 + 8) = v4;
    v6 = &off_12C520;
LABEL_10:
    v9 = 0LL;
    goto LABEL_11;
  }
  v11 = 0x1B600000000LL;
  v12 = 1;
  v13 = 0;
  v7 = a2[3];
  v8 = a2[4];
  v9 = 1LL;
  core::slice::raw::from_raw_parts::precondition_check(v7, 1LL, 1LL, v8);
  std::fs::OpenOptions::_open(v14, &v11, v7, v8);
  if ( !v14[0] )
  {
    LODWORD(v6) = v14[1];
LABEL_8:
    v5 = _rust_alloc(4LL, 4LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v5 = (_DWORD)v6;
    v6 = &off_12C578;
    goto LABEL_10;
  }
  v5 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
         v15,
         a2 + 2);
  v6 = &anon_fab1997b4aa932db2117a172ac34a10e_8_llvm_952428305046595287;
  if ( !v5 )
    goto LABEL_8;
LABEL_11:
  a1[1] = v5;
  a1[2] = (__int64)v6;
  *a1 = v9;
  return a1;
}
