void *__fastcall uu_df::filesystem::Filesystem::new(_QWORD *dest, char *src, __int64 a3)
{
  char *v5; // rsi
  _OWORD v7[3]; // [rsp+8h] [rbp-1E0h] BYREF
  __int64 v8; // [rsp+38h] [rbp-1B0h]
  _BYTE v9[24]; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE desta[232]; // [rsp+58h] [rbp-190h] BYREF
  _OWORD v11[7]; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+1B0h] [rbp-38h]

  v5 = src + 96;
  if ( !*((_QWORD *)src + 14) )
    v5 = src + 24;
  <alloc::string::String as core::clone::Clone>::clone(v9, v5);
  uucore::features::fsext::statfs(desta, v9);
  if ( (desta[0] & 1) != 0 )
  {
    core::ptr::drop_in_place<core::result::Result<libc::unix::linux_like::linux::gnu::b64::x86_64::statfs,alloc::string::String>>(desta);
    *dest = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a3);
    return (void *)core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(src);
  }
  else
  {
    v12 = *(_QWORD *)&desta[120];
    v11[6] = *(_OWORD *)&desta[104];
    v11[5] = *(_OWORD *)&desta[88];
    v11[4] = *(_OWORD *)&desta[72];
    v11[3] = *(_OWORD *)&desta[56];
    v11[2] = *(_OWORD *)&desta[40];
    v11[1] = *(_OWORD *)&desta[24];
    v11[0] = *(_OWORD *)&desta[8];
    uucore::features::fsext::FsUsage::new(v7, v11);
    memcpy(desta, src, 0x98uLL);
    *(_OWORD *)&desta[152] = *(_OWORD *)a3;
    *(_QWORD *)&desta[168] = *(_QWORD *)(a3 + 16);
    *(_OWORD *)&desta[176] = v7[0];
    *(_OWORD *)&desta[192] = v7[1];
    *(_OWORD *)&desta[208] = v7[2];
    *(_QWORD *)&desta[224] = v8;
    return memcpy(dest, desta, 0xE8uLL);
  }
}