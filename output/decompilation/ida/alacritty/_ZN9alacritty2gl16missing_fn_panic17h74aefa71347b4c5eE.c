void __noreturn alacritty::gl::missing_fn_panic()
{
  _QWORD v0[3]; // [rsp+8h] [rbp-30h] BYREF
  __int128 v1; // [rsp+20h] [rbp-18h]

  v0[0] = &off_886F10;
  v0[1] = 1LL;
  v0[2] = 8LL;
  v1 = 0LL;
  core::panicking::panic_fmt(v0, &off_886F20);
}