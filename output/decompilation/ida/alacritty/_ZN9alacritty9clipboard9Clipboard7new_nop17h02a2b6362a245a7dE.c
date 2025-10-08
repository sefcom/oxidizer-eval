void *__fastcall alacritty::clipboard::Clipboard::new_nop(_QWORD *a1)
{
  void *result; // rax

  *a1 = alloc::boxed::Box<T>::new();
  result = &unk_881728;
  a1[1] = &unk_881728;
  a1[2] = 0LL;
  return result;
}