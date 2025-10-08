__int64 __fastcall uu_head::read_but_last_n_lines(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h] BYREF
  __int64 v13[4]; // [rsp+18h] [rbp-20h] BYREF

  v12 = a1;
  v13[0] = std::io::stdio::stdout();
  v11 = std::io::stdio::Stdout::lock(v13);
  if ( !a2 )
  {
    v8 = <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v12, &v11);
    v6 = v9;
    if ( (v8 & 1) == 0 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v4 = uu_head::take::copy_all_but_n_lines(a1, (__int64)&v11, a2, a3);
  v6 = v5;
  if ( (v4 & 1) != 0 )
  {
LABEL_6:
    v7 = v6;
    goto LABEL_7;
  }
  v7 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v11);
  if ( v7 )
  {
LABEL_7:
    uu_head::wrap_in_stdout_error(v7);
    v8 = 1LL;
    goto LABEL_8;
  }
  v8 = 0LL;
LABEL_8:
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v11);
  return v8;
}