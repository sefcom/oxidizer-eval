__int64 __fastcall uu_split::platform::unix::FilterWriter::new(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int128 v6; // xmm0
  _OWORD v8[2]; // [rsp+0h] [rbp-198h] BYREF
  _DWORD v9[2]; // [rsp+20h] [rbp-178h] BYREF
  __int64 v10; // [rsp+28h] [rbp-170h]
  __int128 v11; // [rsp+30h] [rbp-168h]
  __int128 v12; // [rsp+40h] [rbp-158h] BYREF
  __int64 v13; // [rsp+50h] [rbp-148h]
  _BYTE v14[56]; // [rsp+58h] [rbp-140h] BYREF
  _BYTE dest[264]; // [rsp+90h] [rbp-108h] BYREF

  uu_split::platform::unix::WithEnvVarSet::new((__int64)v14, a4, a5);
  std::env::var(v8, aShell, 5LL);
  if ( LODWORD(v8[0]) == 1 )
  {
    uu_split::platform::unix::FilterWriter::new::{{closure}}(&v12, *((_QWORD *)&v8[0] + 1), *(_QWORD *)&v8[1]);
  }
  else
  {
    v13 = *((_QWORD *)&v8[1] + 1);
    v12 = *(_OWORD *)((char *)v8 + 8);
  }
  std::process::Command::new(dest);
  std::process::Command::arg(dest, aC, 2LL);
  std::process::Command::arg(dest, a2, a3);
  std::process::Command::stdin(dest);
  std::process::Command::spawn(v9, dest);
  if ( v9[0] == 1 )
  {
    *(_QWORD *)(a1 + 8) = v10;
    *(_DWORD *)a1 = 1;
    core::ptr::drop_in_place<std::process::Command>(dest);
  }
  else
  {
    LODWORD(v8[0]) = v9[1];
    *(_QWORD *)((char *)v8 + 4) = v10;
    *(_OWORD *)((char *)v8 + 12) = v11;
    core::ptr::drop_in_place<std::process::Command>(dest);
    v6 = v8[0];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)v8 + 12);
    *(_OWORD *)(a1 + 4) = v6;
    *(_DWORD *)a1 = 0;
  }
  return core::ptr::drop_in_place<uu_split::platform::unix::WithEnvVarSet>(v14);
}