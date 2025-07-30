__int64 __fastcall backdoorautomater::sanitizer::sanitize_command_exist(__int64 a1)
{
  __int128 v1; // xmm0
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int128 v8; // [rsp+0h] [rbp-178h] BYREF
  __int64 v9; // [rsp+10h] [rbp-168h]
  _BYTE v10[24]; // [rsp+18h] [rbp-160h] BYREF
  _BYTE v11[56]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v12[8]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v13; // [rsp+70h] [rbp-108h]
  __int64 v14; // [rsp+78h] [rbp-100h]
  __int128 v15; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v16; // [rsp+B0h] [rbp-C8h]

  v1 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)&v15 = aCommandV;
  *((_QWORD *)&v15 + 1) = 11LL;
  v16 = v1;
  alloc::str::join_generic_copy(v10, &v15, 2LL, 1LL, 0LL);
  std::process::Command::new(&v15, aSh_1, 2LL);
  v2 = std::process::Command::arg(&v15, aC_3, 2LL);
  v3 = std::process::Command::arg(v2, v10);
  std::process::Command::output(v11, v3);
  core::result::Result<T,E>::expect(v12, v11, &off_22A6E8);
  core::ptr::drop_in_place<std::process::Command>(&v15);
  alloc::string::String::from_utf8_lossy(v11, v13, v14);
  v4 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v11);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v15, v4, v5);
  v9 = v16;
  v8 = v15;
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v11);
  v6 = v9;
  core::ptr::drop_in_place<alloc::string::String>(&v8);
  core::ptr::drop_in_place<std::process::Output>(v12);
  LOBYTE(v6) = v6 != 0;
  core::ptr::drop_in_place<alloc::string::String>(v10);
  return (unsigned int)v6;
}