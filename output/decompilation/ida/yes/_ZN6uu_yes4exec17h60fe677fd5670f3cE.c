__int64 __fastcall uu_yes::exec(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8[5]; // [rsp+10h] [rbp-28h] BYREF

  v8[0] = std::io::stdio::stdout();
  v2 = std::io::stdio::Stdout::lock(v8);
  v7 = v2;
  v3 = uucore::features::signals::enable_pipe_errors();
  if ( (_DWORD)v3 == 134 )
  {
    do
      v4 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v7, a1, a2);
    while ( !v4 );
    v5 = v4;
    v2 = v7;
  }
  else
  {
    v5 = (v3 << 32) | 2;
  }
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v2);
  return v5;
}