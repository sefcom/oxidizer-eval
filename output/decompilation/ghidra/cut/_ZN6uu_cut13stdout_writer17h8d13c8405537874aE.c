void __rustcall uu_cut::stdout_writer(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_30 [5];
  
  local_30[0] = std::io::stdio::stdout();
  cVar2 = std::sys::pal::unix::io::is_terminal(local_30);
  if (cVar2 == '\0') {
    uVar1 = std::io::stdio::stdout();
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_30,0x2000,uVar1);
    ::alloc::boxed::Box<T>::new(local_30);
  }
  else {
    uVar1 = std::io::stdio::stdout();
    ::alloc::boxed::Box<T>::new(uVar1);
  }
  return;
}