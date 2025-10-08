__int64 __fastcall alacritty::migrate::Migration::new_path(__int64 a1, _QWORD *a2)
{
  _BYTE v3[40]; // [rsp-28h] [rbp-28h] BYREF

  if ( !__OFSUB__(0LL, a2[2]) )
    return <alloc::string::String as core::clone::Clone>::clone(a1, a2 + 2);
  alloc::string::String::from_utf8_lossy(v3, *a2, a2[1]);
  return <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from(a1, v3);
}