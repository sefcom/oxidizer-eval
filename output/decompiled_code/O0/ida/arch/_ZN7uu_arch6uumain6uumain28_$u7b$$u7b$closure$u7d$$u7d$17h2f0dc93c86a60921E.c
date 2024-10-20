__int64 __fastcall uu_arch::uumain::uumain::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+10h] [rbp-28h]
  _QWORD v4[4]; // [rsp+18h] [rbp-20h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v3 = uucore::mods::error::USimpleError::new(1LL, aCannotGetSyste, 22LL);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v4);
  return v3;
}
