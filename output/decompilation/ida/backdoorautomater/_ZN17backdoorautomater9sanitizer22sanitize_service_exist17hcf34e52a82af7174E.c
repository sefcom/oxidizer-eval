__int64 __fastcall backdoorautomater::sanitizer::sanitize_service_exist(__int64 a1)
{
  __int128 v1; // xmm0
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int128 v7; // [rsp+0h] [rbp-178h] BYREF
  __int64 v8; // [rsp+10h] [rbp-168h]
  _BYTE v9[24]; // [rsp+18h] [rbp-160h] BYREF
  _BYTE v10[56]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v11[32]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v12; // [rsp+88h] [rbp-F0h]
  __int64 v13; // [rsp+90h] [rbp-E8h]
  __int128 v14; // [rsp+A0h] [rbp-D8h] BYREF
  _OWORD v15[12]; // [rsp+B0h] [rbp-C8h]

  v1 = *(_OWORD *)(a1 + 8);
  *(_QWORD *)&v14 = aSystemctlStatu;
  *((_QWORD *)&v14 + 1) = 17LL;
  v15[0] = v1;
  alloc::str::join_generic_copy(v9, &v14, 2LL, 1LL, 0LL);
  std::process::Command::new(&v14, aSh_1, 2LL);
  v2 = std::process::Command::arg(&v14, aC_3, 2LL);
  v3 = std::process::Command::arg(v2, v9);
  std::process::Command::output(v10, v3);
  core::result::Result<T,E>::expect(v11, v10, &off_22A728);
  core::ptr::drop_in_place<std::process::Command>(&v14);
  alloc::string::String::from_utf8_lossy(v10, v12, v13);
  v4 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v10);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v14, v4, v5);
  v8 = *(_QWORD *)&v15[0];
  v7 = v14;
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v10);
  if ( !v8 )
  {
    *(_QWORD *)&v14 = &off_22A740;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15[0] = 8uLL;
    core::panicking::panic_fmt(&v14, &off_22A750);
  }
  core::ptr::drop_in_place<alloc::string::String>(&v7);
  core::ptr::drop_in_place<std::process::Output>(v11);
  return core::ptr::drop_in_place<alloc::string::String>(v9);
}