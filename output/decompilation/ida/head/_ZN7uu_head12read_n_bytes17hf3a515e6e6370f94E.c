__int64 uu_head::read_n_bytes()
{
  __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-18h] BYREF

  v6[0] = std::io::Read::take();
  v6[1] = v0;
  v5 = std::io::stdio::stdout();
  v4 = std::io::stdio::Stdout::lock(&v5);
  if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(v6, &v4) )
  {
    v2 = v1;
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
  }
  else
  {
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
    return 0LL;
  }
  return v2;
}
