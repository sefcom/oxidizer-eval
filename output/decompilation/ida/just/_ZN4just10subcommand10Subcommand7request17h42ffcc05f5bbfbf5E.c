__int64 __fastcall just::subcommand::Subcommand::request(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int128 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // bp
  __int64 result; // rax
  __int64 v14; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+20h] [rbp-B8h]
  __int128 v17; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-A0h]
  _BYTE v19[152]; // [rsp+40h] [rbp-98h] BYREF

  if ( __OFSUB__(0LL, *a2) )
  {
    nix::sys::signal::SigSet::all(v19);
    v3 = nix::sys::signal::SigSet::thread_block(v19);
    core::result::Result<T,E>::unwrap(v3);
    v4 = nix::sys::signal::SigSet::wait(v19);
    v6 = v5;
    core::result::Result<T,E>::unwrap(v4, v5);
    v7 = nix::sys::signal::Signal::as_str(v6);
    v8 = &v17;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v17, v7);
    v16 = v18;
    v15 = v17;
    v9 = 1LL;
  }
  else
  {
    v8 = &v15;
    std::env::var_os(&v15, a2);
    v9 = 0LL;
  }
  v14 = v9;
  v10 = std::io::stdio::stdout(v8);
  v11 = serde_json::ser::to_writer(v10, &v14);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 8) = v11;
    v12 = 18;
  }
  else
  {
    v12 = 56;
  }
  result = core::ptr::drop_in_place<just::request::Response>(&v14);
  *(_BYTE *)a1 = v12;
  return result;
}