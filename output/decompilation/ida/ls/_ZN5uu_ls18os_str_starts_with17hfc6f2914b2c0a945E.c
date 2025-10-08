__int64 __fastcall uu_ls::os_str_starts_with(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp

  v3 = core::slice::<impl [T]>::starts_with(a1, a2, a3, 1LL);
  core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000LL, a1);
  return v3;
}