__int64 __fastcall alacritty::gl::GetUniformfv::load_with(__int64 a1)
{
  __int64 result; // rax
  void (__fastcall __noreturn *v2)(); // rcx
  _QWORD v3[2]; // [rsp+8h] [rbp-10h] BYREF

  v3[0] = a1;
  v3[1] = &unk_886F38;
  result = alacritty::gl::metaloadfn((__int64)v3, (__int64)aGlgetuniformfv_0, 14LL, &off_886270, 1LL);
  v2 = alacritty::gl::missing_fn_panic;
  if ( result )
    v2 = (void (__fastcall __noreturn *)())result;
  alacritty::gl::storage::GetUniformfv = v2;
  byte_8E5F60 = result != 0;
  return result;
}