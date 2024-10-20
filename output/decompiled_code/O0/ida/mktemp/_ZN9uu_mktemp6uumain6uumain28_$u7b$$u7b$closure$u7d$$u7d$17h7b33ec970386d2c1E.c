__int64 __fastcall uu_mktemp::uumain::uumain::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-30h]
  unsigned int v4; // [rsp+14h] [rbp-24h]
  _QWORD v5[4]; // [rsp+18h] [rbp-20h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  v4 = (*(__int64 (__fastcall **)(__int64))(a2 + 96))(a1);
  v3 = <T as core::convert::Into<U>>::into(v4, &off_1190B0);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v5);
  return v3;
}
