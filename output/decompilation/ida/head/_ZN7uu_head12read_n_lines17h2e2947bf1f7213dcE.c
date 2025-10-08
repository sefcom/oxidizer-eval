__int64 __fastcall uu_head::read_n_lines(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v9[2]; // [rsp+8h] [rbp-50h] BYREF
  char v10; // [rsp+18h] [rbp-40h]
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF

  v9[0] = a1;
  v9[1] = a2;
  v10 = a3;
  v8 = std::io::stdio::stdout();
  v3 = std::io::stdio::Stdout::lock(&v8);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v11, v3);
  if ( (<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(v9, v11) & 1) != 0 )
  {
    v5 = v4;
  }
  else
  {
    v5 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v11);
    if ( !v5 )
    {
      v6 = 0LL;
      goto LABEL_5;
    }
  }
  uu_head::wrap_in_stdout_error(v5);
  v6 = 1LL;
LABEL_5:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v11);
  return v6;
}