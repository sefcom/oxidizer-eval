void *__fastcall uu_sort::make_sort_mode_arg(void *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _BYTE src[640]; // [rsp+18h] [rbp-7B0h] BYREF
  _BYTE v8[640]; // [rsp+298h] [rbp-530h] BYREF
  _BYTE dest[688]; // [rsp+518h] [rbp-2B0h] BYREF

  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v8, dest, a4);
  clap_builder::builder::arg::Arg::long(dest, v8);
  clap_builder::builder::arg::Arg::help(v8, dest);
  clap_builder::builder::arg::Arg::action(src, v8, 2LL);
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(aGeneralNumeric_1, 20LL, a2, a3) )
  {
    memcpy(dest, src, 0x280uLL);
    clap_builder::builder::arg::Arg::conflicts_with(v8, dest);
    memcpy(src, v8, sizeof(src));
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(aHumanNumericSo_0, 18LL, a2, a3) )
  {
    memcpy(dest, src, 0x280uLL);
    clap_builder::builder::arg::Arg::conflicts_with(v8, dest);
    memcpy(src, v8, sizeof(src));
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(aMonthSort_0, 10LL, a2, a3) )
  {
    memcpy(dest, src, 0x280uLL);
    clap_builder::builder::arg::Arg::conflicts_with(v8, dest);
    memcpy(src, v8, sizeof(src));
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(aNumericSort_0, 12LL, a2, a3) )
  {
    memcpy(dest, src, 0x280uLL);
    clap_builder::builder::arg::Arg::conflicts_with(v8, dest);
    memcpy(src, v8, sizeof(src));
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(aVersionSort_0, 12LL, a2, a3) )
  {
    memcpy(dest, src, 0x280uLL);
    clap_builder::builder::arg::Arg::conflicts_with(v8, dest);
    memcpy(src, v8, sizeof(src));
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(aRandomSort_0, 11LL, a2, a3) )
  {
    memcpy(dest, src, 0x280uLL);
    clap_builder::builder::arg::Arg::conflicts_with(v8, dest);
    memcpy(src, v8, sizeof(src));
  }
  return memcpy(a1, src, 0x280uLL);
}