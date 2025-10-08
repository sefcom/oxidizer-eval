__int64 __fastcall alacritty::gl::UniformMatrix2x4fv::load_with(__int64 a1)
{
  __int64 result; // rax
  void (__fastcall __noreturn *v2)(); // rcx
  _QWORD v3[2]; // [rsp+8h] [rbp-10h] BYREF

  v3[0] = a1;
  v3[1] = &unk_886F38;
  result = alacritty::gl::metaloadfn((__int64)v3, (__int64)aGluniformmatri_4, 20LL, &off_8868D0, 1LL);
  v2 = alacritty::gl::missing_fn_panic;
  if ( result )
    v2 = (void (__fastcall __noreturn *)())result;
  alacritty::gl::storage::UniformMatrix2x4fv = v2;
  byte_8E67E0 = result != 0;
  return result;
}