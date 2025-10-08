__int64 __fastcall alacritty::gl::UniformMatrix2fv::load_with(__int64 a1)
{
  __int64 result; // rax
  void (__fastcall __noreturn *v2)(); // rcx
  _QWORD v3[2]; // [rsp+8h] [rbp-10h] BYREF

  v3[0] = a1;
  v3[1] = &unk_886F38;
  result = alacritty::gl::metaloadfn((__int64)v3, (__int64)aGluniformmatri_0, 18LL, &off_8868B0, 1LL);
  v2 = alacritty::gl::missing_fn_panic;
  if ( result )
    v2 = (void (__fastcall __noreturn *)())result;
  alacritty::gl::storage::UniformMatrix2fv = v2;
  byte_8E67C0 = result != 0;
  return result;
}