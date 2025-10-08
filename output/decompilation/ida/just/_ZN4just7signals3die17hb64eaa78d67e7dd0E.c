void __fastcall __noreturn just::signals::die(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // [rsp+0h] [rbp-238h] BYREF
  _BYTE v5[16]; // [rsp+8h] [rbp-230h] BYREF
  _BYTE s[544]; // [rsp+18h] [rbp-220h] BYREF

  v4 = 0LL;
  memset(s, 0, 0x200uLL);
  just::signals::die::{{closure}}(s, &v4, aError_1, 7LL);
  just::signals::die::{{closure}}(s, &v4, a1, a2);
  just::signals::die::{{closure}}(s, &v4, asc_6E198, 1LL);
  v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0LL, v4, s, 512LL, &off_430F50);
  nix::unistd::write(v5, 2LL, v2, v3);
  std::process::abort();
}