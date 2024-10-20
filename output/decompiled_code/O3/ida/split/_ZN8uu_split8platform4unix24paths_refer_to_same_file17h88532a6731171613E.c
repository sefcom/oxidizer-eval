bool __fastcall uu_split::platform::unix::paths_refer_to_same_file(_BYTE *a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // rsi
  __int64 v5; // rax
  char v6; // bp
  int *v8; // rax
  _OWORD dest[9]; // [rsp+10h] [rbp-1D8h] BYREF
  _BYTE buf[152]; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v11; // [rsp+138h] [rbp-B0h]
  _OWORD v12[10]; // [rsp+140h] [rbp-A8h] BYREF

  if ( a2 != 1 || *a1 != 45 )
  {
    nix::sys::stat::stat(buf, a1);
    if ( !*(_DWORD *)buf )
    {
      v4 = &buf[8];
      goto LABEL_9;
    }
    v5 = *(unsigned int *)&buf[4];
LABEL_7:
    *(_QWORD *)&dest[0] = (v5 << 32) | 2;
    v6 = 0;
    goto LABEL_10;
  }
  std::io::stdio::stdin(a1, a1);
  if ( fstat(0, (struct stat *)buf) == -1 )
  {
    v8 = _errno_location();
    v5 = nix::errno::consts::from_i32((unsigned int)*v8);
    goto LABEL_7;
  }
  v4 = buf;
LABEL_9:
  memcpy(dest, v4, sizeof(dest));
  v6 = 1;
LABEL_10:
  nix::sys::stat::stat(buf, a3);
  if ( *(_DWORD *)buf )
  {
    *(_QWORD *)&v12[0] = ((unsigned __int64)*(unsigned int *)&buf[4] << 32) | 2;
    v11 = 1LL;
    core::ptr::drop_in_place<std::io::error::Error>(v12);
    if ( v6 )
      return 0;
  }
  else
  {
    memcpy(v12, &buf[8], 0x90uLL);
    if ( v6 )
      return v12[0] == dest[0];
  }
  core::ptr::drop_in_place<std::io::error::Error>(dest);
  return 0;
}
