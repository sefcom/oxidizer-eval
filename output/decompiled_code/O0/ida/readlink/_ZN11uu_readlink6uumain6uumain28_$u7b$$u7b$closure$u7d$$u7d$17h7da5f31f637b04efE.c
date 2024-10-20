__int64 __fastcall uu_readlink::uumain::uumain::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE v4[32]; // [rsp+18h] [rbp-20h] BYREF

  v2 = <alloc::string::String as core::ops::deref::Deref>::deref(a2);
  os_display::native::Quotable::maybe_quote(v4, v2);
  <T as alloc::string::ToString>::to_string(a1, v4);
  return a1;
}
