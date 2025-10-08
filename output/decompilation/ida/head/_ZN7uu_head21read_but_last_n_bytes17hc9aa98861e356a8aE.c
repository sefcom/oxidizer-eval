__int64 __fastcall uu_head::read_but_last_n_bytes(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v6; // [rsp+8h] [rbp-20h] BYREF
  __int64 v7[3]; // [rsp+10h] [rbp-18h] BYREF

  v7[0] = std::io::stdio::stdout();
  v6 = std::io::stdio::Stdout::lock(v7);
  if ( (uu_head::take::copy_all_but_n_bytes(a1, (__int64)&v6, a2) & 1) != 0 )
  {
    v3 = v2;
  }
  else
  {
    v3 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v6);
    if ( !v3 )
    {
      v4 = 0LL;
      goto LABEL_5;
    }
  }
  uu_head::wrap_in_stdout_error(v3);
  v4 = 1LL;
LABEL_5:
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v6);
  return v4;
}