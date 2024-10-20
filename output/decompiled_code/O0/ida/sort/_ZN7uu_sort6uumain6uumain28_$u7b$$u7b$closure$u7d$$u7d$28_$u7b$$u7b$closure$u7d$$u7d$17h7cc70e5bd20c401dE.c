__int64 __fastcall uu_sort::uumain::uumain::{{closure}}::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-50h]
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = <alloc::string::String as core::ops::deref::Deref>::deref(a1);
  uu_sort::format_error_message(v6, a2, v2, v3, aBufferSize, 11LL);
  v5 = uucore::mods::error::USimpleError::new(2LL, v6);
  core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(a2);
  return v5;
}
