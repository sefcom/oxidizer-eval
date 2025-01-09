_QWORD *__fastcall uu_df::filesystem::Filesystem::new(_QWORD *dest, char *src, __int64 a3)
{
  char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-1D8h]
  __int128 v13; // [rsp+18h] [rbp-1D0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-1C0h]
  _OWORD v15[3]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-188h]
  _BYTE desta[232]; // [rsp+68h] [rbp-180h] BYREF
  _OWORD v18[7]; // [rsp+150h] [rbp-98h] BYREF
  __int64 v19; // [rsp+1C0h] [rbp-28h]

  v5 = src + 96;
  if ( !*((_QWORD *)src + 14) )
    v5 = src + 24;
  <alloc::string::String as core::clone::Clone>::clone(&v13, v5);
  v12 = v14;
  v11 = v13;
  ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))uucore::features::fsext::statfs)(
    desta,
    &v11,
    v6,
    v7,
    v8,
    v9);
  if ( *(_QWORD *)desta )
  {
    core::ptr::drop_in_place<core::result::Result<libc::unix::linux_like::linux::gnu::b64::x86_64::statfs,alloc::string::String>>(desta);
    *dest = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
    core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(src);
  }
  else
  {
    v19 = *(_QWORD *)&desta[120];
    v18[6] = *(_OWORD *)&desta[104];
    v18[5] = *(_OWORD *)&desta[88];
    v18[4] = *(_OWORD *)&desta[72];
    v18[3] = *(_OWORD *)&desta[56];
    v18[2] = *(_OWORD *)&desta[40];
    v18[1] = *(_OWORD *)&desta[24];
    v18[0] = *(_OWORD *)&desta[8];
    uucore::features::fsext::FsUsage::new(v15, v18);
    *(_QWORD *)&desta[168] = *(_QWORD *)(a3 + 16);
    *(_OWORD *)&desta[152] = *(_OWORD *)a3;
    memcpy(desta, src, 0x98uLL);
    *(_OWORD *)&desta[176] = v15[0];
    *(_OWORD *)&desta[192] = v15[1];
    *(_OWORD *)&desta[208] = v15[2];
    *(_QWORD *)&desta[224] = v16;
    memcpy(dest, desta, 0xE8uLL);
  }
  return dest;
}
