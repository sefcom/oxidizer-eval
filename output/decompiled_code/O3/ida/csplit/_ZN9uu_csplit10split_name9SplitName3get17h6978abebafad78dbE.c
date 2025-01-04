__int64 __fastcall uu_csplit::split_name::SplitName::get(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _BYTE v6[8]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h]
  __int64 v8; // [rsp+18h] [rbp-40h]
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]

  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v6);
  v4 = uucore::features::format::Format<F>::fmt(a2 + 24, v6, a3);
  core::result::Result<T,E>::unwrap(v4);
  alloc::string::String::from_utf8_lossy(v9, v7, v8);
  <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(a1, v10, v11);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v6);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v9);
  return a1;
}
