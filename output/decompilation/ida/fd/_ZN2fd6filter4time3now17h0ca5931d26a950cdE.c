__int64 __fastcall fd::filter::time::now(__int64 a1)
{
  __int64 v1; // rax
  _BYTE v3[64]; // [rsp+8h] [rbp-40h] BYREF

  v1 = jiff::now::sys::system_time();
  <jiff::zoned::Zoned as core::convert::TryFrom<std::time::SystemTime>>::try_from(v3, v1);
  return core::result::Result<T,E>::expect(a1, v3);
}