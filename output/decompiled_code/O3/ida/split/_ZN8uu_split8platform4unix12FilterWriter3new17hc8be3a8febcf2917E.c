        __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v10[28]; // [rsp+4h] [rbp-1C4h]
  _DWORD v11[2]; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-1A0h]
  __int128 v13; // [rsp+30h] [rbp-198h]
  __int128 v14; // [rsp+40h] [rbp-188h] BYREF
  __int64 v15; // [rsp+50h] [rbp-178h]
  __int128 v16; // [rsp+60h] [rbp-168h] BYREF
  __int64 v17; // [rsp+70h] [rbp-158h]
  __int64 v18; // [rsp+78h] [rbp-150h] BYREF
  __int128 v19; // [rsp+80h] [rbp-148h]
  __int64 v20; // [rsp+90h] [rbp-138h]
  _BYTE v21[56]; // [rsp+98h] [rbp-130h] BYREF
  _BYTE dest[248]; // [rsp+D0h] [rbp-F8h] BYREF

  uu_split::platform::unix::WithEnvVarSet::new((__int64)v21, a4, a5);
  std::env::var(&v18, aShell, 5LL);
  if ( v18 )
  {
    v17 = v20;
    v16 = v19;
    uu_split::platform::unix::FilterWriter::new::{{closure}}(&v14, &v16);
  }
  else
  {
    v15 = v20;
    v14 = v19;
  }
  std::process::Command::new(dest);
  v6 = std::process::Command::arg(dest, aC_0, 2LL);
  v7 = std::process::Command::arg(v6, a2, a3);
  v8 = std::process::Command::stdin(v7, 2LL);
  std::process::Command::spawn(v11, v8);
  if ( v11[0] )
  {
    *(_QWORD *)(a1 + 8) = v12;
    *(_DWORD *)a1 = 1;
    core::ptr::drop_in_place<std::process::Command>(dest);
  }
  else
  {
    *(_DWORD *)v10 = v11[1];
    *(_QWORD *)&v10[4] = v12;
    *(_OWORD *)&v10[12] = v13;
    core::ptr::drop_in_place<std::process::Command>(dest);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v10[12];
    *(_OWORD *)(a1 + 4) = *(_OWORD *)v10;
    *(_DWORD *)a1 = 0;
  }
  return core::ptr::drop_in_place<uu_split::platform::unix::WithEnvVarSet>(v21);
}
