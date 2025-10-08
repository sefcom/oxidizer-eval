__int64 (__fastcall **__fastcall alacritty::clipboard::Clipboard::new(__int64 *a1, int a2, __int64 a3))()
{
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 (__fastcall **result)(); // rax
  __int64 clipboards_from_external; // [rsp+8h] [rbp-20h]

  if ( a2 != 6 )
    return (__int64 (__fastcall **)())<alacritty::clipboard::Clipboard as core::default::Default>::default(a1);
  clipboards_from_external = copypasta::wayland_clipboard::create_clipboards_from_external(a3);
  v4 = alloc::boxed::Box<T>::new(v3);
  v5 = alloc::boxed::Box<T>::new(clipboards_from_external);
  *a1 = v4;
  a1[1] = (__int64)&off_8816D8;
  a1[2] = v5;
  result = &off_881700;
  a1[3] = (__int64)&off_881700;
  return result;
}