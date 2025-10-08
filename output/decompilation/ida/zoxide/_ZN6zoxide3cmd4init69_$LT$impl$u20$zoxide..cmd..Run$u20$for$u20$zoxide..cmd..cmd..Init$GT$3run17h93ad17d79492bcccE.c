__int64 __fastcall zoxide::cmd::init::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Init>::run(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  char v3; // bp
  char v4; // al
  char v5; // cl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // [rsp+0h] [rbp-98h] BYREF
  __int64 v14; // [rsp+8h] [rbp-90h]
  int v15; // [rsp+10h] [rbp-88h]
  _QWORD v16[2]; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v17[6]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v19[6]; // [rsp+68h] [rbp-30h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(a1 + 24) )
    v2 = 0LL;
  else
    v2 = *(_QWORD *)(a1 + 8);
  v3 = zoxide::config::echo();
  v4 = zoxide::config::resolve_symlinks();
  v5 = *(_BYTE *)(a1 + 25);
  v13 = v2;
  v14 = v1;
  LOBYTE(v15) = v5;
  BYTE1(v15) = v3;
  BYTE2(v15) = v4;
  switch ( *(_BYTE *)(a1 + 26) )
  {
    case 0:
      ((void (__fastcall *)(_QWORD *, __int64 *))askama::Template::render_with_values)(v17, &v13);
      break;
    case 1:
      ((void (__fastcall *)(_QWORD *, __int64 *))askama::Template::render_with_values)(v17, &v13);
      break;
    case 2:
      ((void (__fastcall *)(_QWORD *, __int64 *))askama::Template::render_with_values)(v17, &v13);
      break;
    case 3:
      ((void (__fastcall *)(_QWORD *, __int64 *))askama::Template::render_with_values)(v17, &v13);
      break;
    case 4:
      ((void (__fastcall *)(_QWORD *, __int64 *))askama::Template::render_with_values)(v17, &v13);
      break;
    case 5:
      ((void (__fastcall *)(_QWORD *, __int64 *))askama::Template::render_with_values)(v17, &v13);
      break;
    case 6:
      ((void (__fastcall *)(_QWORD *, __int64 *))askama::Template::render_with_values)(v17, &v13);
      break;
    case 7:
      ((void (__fastcall *)(_QWORD *, __int64 *))askama::Template::render_with_values)(v17, &v13);
      break;
    case 8:
      ((void (__fastcall *)(_QWORD *, __int64 *))askama::Template::render_with_values)(v17, &v13);
      break;
  }
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(
    v16,
    v17,
    v6,
    v7,
    v8,
    v9,
    v13,
    v14,
    v15);
  result = v16[1];
  if ( !__OFSUB__(-v16[0], 1LL) )
  {
    v18 = std::io::stdio::stdout();
    v19[0] = v16;
    v19[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v17[0] = &unk_134950;
    v17[1] = 2LL;
    v17[4] = 0LL;
    v17[2] = v19;
    v17[3] = 1LL;
    v11 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v18, v17);
    v12 = <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(
            v11,
            aStdout,
            6LL);
    core::ptr::drop_in_place<alloc::string::String>(v16);
    return v12;
  }
  return result;
}