__int64 __fastcall bat::theme_preview_file(__int64 a1)
{
  __int64 v1; // rax
  _BYTE v3[72]; // [rsp+0h] [rbp-48h] BYREF

  std::io::buffered::bufreader::BufReader<R>::with_capacity(v3);
  v1 = alloc::boxed::Box<T>::new(v3);
  return bat::input::Input::from_reader(a1, v1, &off_6C87F0);
}