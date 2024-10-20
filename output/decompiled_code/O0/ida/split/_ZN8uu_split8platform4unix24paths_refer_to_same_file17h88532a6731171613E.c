__int64 __fastcall uu_split::platform::unix::paths_refer_to_same_file(void *src, size_t n, void *a3, size_t a4)
{
  __dev_t st_dev; // r15
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // r15
  int *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  struct stat v15; // [rsp+0h] [rbp-268h] BYREF
  _QWORD v16[2]; // [rsp+90h] [rbp-1D8h] BYREF
  _BYTE v17[136]; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v18; // [rsp+128h] [rbp-140h] BYREF
  _QWORD v19[18]; // [rsp+130h] [rbp-138h] BYREF
  _BYTE dest[136]; // [rsp+1C0h] [rbp-A8h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          src,
                          n,
                          anon_791dd9c0d2c869e43c67d741dd94c45b_56_llvm_17242572455711829746,
                          1LL) )
  {
    std::io::stdio::stdin();
    if ( fstat(0, &v15) != -1 )
    {
LABEL_3:
      st_dev = v15.st_dev;
      memcpy(dest, &v15.st_ino, sizeof(dest));
      v7 = 0LL;
      goto LABEL_9;
    }
    goto LABEL_6;
  }
  v8 = <[u8] as nix::NixPath>::with_nix_path(src, n, &v15);
  v10 = v9;
  if ( !v8 )
  {
    if ( v9 != -1 )
      goto LABEL_3;
LABEL_6:
    v11 = _errno_location();
    if ( ((unsigned __int8)v11 & 3) != 0 )
      goto LABEL_16;
    v10 = (unsigned int)nix::errno::consts::from_i32((unsigned int)*v11);
  }
  st_dev = (v10 << 32) | 2;
  v7 = 1LL;
LABEL_9:
  v16[0] = v7;
  v16[1] = st_dev;
  memcpy(v17, dest, sizeof(v17));
  if ( !(unsigned int)<[u8] as nix::NixPath>::with_nix_path(a3, a4, &v15) )
  {
    if ( (_DWORD)v12 != -1 )
    {
      memcpy(v19, &v15, sizeof(v19));
      v13 = 0LL;
      goto LABEL_13;
    }
    v11 = _errno_location();
    if ( ((unsigned __int8)v11 & 3) == 0 )
    {
      v12 = (unsigned int)nix::errno::consts::from_i32((unsigned int)*v11);
      goto LABEL_10;
    }
LABEL_16:
    core::panicking::panic_misaligned_pointer_dereference(
      4LL,
      v11,
      &anon_77e16c7defca1adeda749c3345405d55_238_llvm_10211869485132708612);
  }
LABEL_10:
  v19[0] = (v12 << 32) | 2;
  v13 = 1LL;
LABEL_13:
  v18 = v13;
  return uucore::features::fs::infos_refer_to_same_file(v16, &v18);
}
