_QWORD *__fastcall uu_ls::get_metadata_with_deref_opt(_QWORD *dest, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[23]; // [rsp+0h] [rbp-B8h] BYREF

  if ( !a4 )
  {
    std::sys::pal::unix::fs::lstat(v5);
    if ( v5[0] != 2LL )
      goto LABEL_3;
LABEL_5:
    dest[1] = v5[1];
    *dest = 2LL;
    return dest;
  }
  std::sys::pal::unix::fs::stat(v5);
  if ( v5[0] == 2LL )
    goto LABEL_5;
LABEL_3:
  memcpy(dest, v5, 0xB0uLL);
  return dest;
}
