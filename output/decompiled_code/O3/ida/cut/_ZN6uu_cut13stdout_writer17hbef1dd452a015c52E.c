__int64 uu_cut::stdout_writer()
{
  __int64 v0; // rax
  __int64 v2; // rax
  _QWORD v3[6]; // [rsp+8h] [rbp-30h] BYREF

  v3[0] = std::io::stdio::stdout();
  if ( (unsigned __int8)std::sys::pal::unix::io::is_terminal(v3) )
  {
    v0 = std::io::stdio::stdout();
    return alloc::boxed::Box<T>::new(v0);
  }
  else
  {
    v2 = std::io::stdio::stdout();
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v3, 0x2000LL, v2);
    return alloc::boxed::Box<T>::new(v3);
  }
}
