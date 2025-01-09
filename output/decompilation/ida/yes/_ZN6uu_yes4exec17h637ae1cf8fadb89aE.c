__int64 __fastcall uu_yes::exec(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+Ch] [rbp-2Ch] BYREF
  __int64 v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v10[0] = std::io::stdio::stdout();
  v2 = std::io::stdio::Stdout::lock(v10);
  v8 = v2;
  v3 = uucore::features::signals::enable_pipe_errors();
  if ( (_DWORD)v3 == 134 )
  {
    v9 = 1;
    v4 = uu_yes::splice::splice_data(a1, a2, &v9);
    if ( !v4 )
    {
      do
        v4 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v8, a1, a2);
      while ( !v4 );
      v2 = v8;
    }
  }
  else
  {
    v4 = (v3 << 32) | 2;
  }
  v5 = v2;
  v6 = v4;
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v5);
  return v6;
}
