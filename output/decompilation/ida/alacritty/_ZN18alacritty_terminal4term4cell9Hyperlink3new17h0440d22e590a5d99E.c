__int64 __fastcall alacritty_terminal::term::cell::Hyperlink::new(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v4[48]; // [rsp+18h] [rbp-30h] BYREF

  alacritty_terminal::term::cell::HyperlinkInner::new(v4, a1, a2);
  v3[0] = 1LL;
  v3[1] = 1LL;
  return alloc::boxed::Box<T>::new(v3);
}