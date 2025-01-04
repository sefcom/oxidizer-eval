_QWORD *__fastcall uu_df::filesystem::Filesystem::new(_QWORD *dest, char *src, __int64 a3)
{
  char *v5; // rsi
  __int128 v7; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v8; // [rsp+10h] [rbp-1D8h]
  __int128 v9; // [rsp+18h] [rbp-1D0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-1C0h]
  _OWORD v11[3]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v12; // [rsp+60h] [rbp-188h]
  _BYTE desta[232]; // [rsp+68h] [rbp-180h] BYREF
  _OWORD v14[7]; // [rsp+150h] [rbp-98h] BYREF
  __int64 v15; // [rsp+1C0h] [rbp-28h]

  v5 = src + 96;
  if ( !*((_QWORD *)src + 14) )
    v5 = src + 24;
  <alloc::string::String as core::clone::Clone>::clone(&v9, v5);
  v8 = v10;
  v7 = v9;
  ((void (__fastcall *)(_BYTE *, __int128 *))uucore::features::fsext::statfs)(desta, &v7);
  if ( *(_QWORD *)desta )
  {
    core::ptr::drop_in_place<core::result::Result<libc::unix::linux_like::linux::gnu::b64::x86_64::statfs,alloc::string::String>>(desta);
    *dest = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
    core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(src);
  }
  else
  {
    v15 = *(_QWORD *)&desta[120];
    v14[6] = *(_OWORD *)&desta[104];
    v14[5] = *(_OWORD *)&desta[88];
    v14[4] = *(_OWORD *)&desta[72];
    v14[3] = *(_OWORD *)&desta[56];
    v14[2] = *(_OWORD *)&desta[40];
    v14[1] = *(_OWORD *)&desta[24];
    v14[0] = *(_OWORD *)&desta[8];
    uucore::features::fsext::FsUsage::new(v11, v14);
    *(_QWORD *)&desta[168] = *(_QWORD *)(a3 + 16);
    *(_OWORD *)&desta[152] = *(_OWORD *)a3;
    memcpy(desta, src, 0x98uLL);
    *(_OWORD *)&desta[176] = v11[0];
    *(_OWORD *)&desta[192] = v11[1];
    *(_OWORD *)&desta[208] = v11[2];
    *(_QWORD *)&desta[224] = v12;
    memcpy(dest, desta, 0xE8uLL);
  }
  return dest;
}
