__int64 __fastcall uu_head::read_n_lines(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-48h] BYREF
  char v9; // [rsp+20h] [rbp-38h]
  _BYTE v10[48]; // [rsp+28h] [rbp-30h] BYREF

  v8[0] = a1;
  v8[1] = a2;
  v9 = a3;
  v7 = std::io::stdio::stdout();
  v3 = std::io::stdio::Stdout::lock(&v7);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v10, 0x4000LL, v3);
  if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(v8, v10) )
  {
    v5 = v4;
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v10);
  }
  else
  {
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v10);
    return 0LL;
  }
  return v5;
}
