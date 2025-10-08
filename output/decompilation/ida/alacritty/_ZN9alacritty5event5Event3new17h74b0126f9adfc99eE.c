void *__fastcall alacritty::event::Event::new(_QWORD *a1, const void *a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = <T as core::convert::Into<U>>::into(a3);
  *a1 = 1LL;
  a1[1] = v3;
  return memcpy(a1 + 2, a2, 0xB0uLL);
}