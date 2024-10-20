char __fastcall uu_date::uumain::uumain::{{closure}}()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  char v3; // [rsp+7h] [rbp-51h]
  __int64 v4; // [rsp+18h] [rbp-40h]
  __int64 v5; // [rsp+28h] [rbp-30h]
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
  <str as alloc::string::ToString>::to_string(v6, "datethur]", 4LL);
  v5 = core::option::Option<T>::unwrap_or(v4, v6);
  v0 = alloc::string::String::as_str(v5);
  v3 = <T as core::convert::Into<U>>::into(v0, v1, &off_2CE708);
  core::ptr::drop_in_place<alloc::string::String>(v6);
  return v3;
}
