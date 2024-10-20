bool uu_dd::is_fifo()
{
  _QWORD dest[22]; // [rsp+8h] [rbp-160h] BYREF
  _QWORD src[22]; // [rsp+B8h] [rbp-B0h] BYREF

  std::sys::pal::unix::fs::stat(src);
  if ( LODWORD(src[0]) == 2 )
  {
    dest[1] = src[1];
    dest[0] = 2LL;
LABEL_4:
    core::ptr::drop_in_place<std::io::error::Error>(&dest[1]);
    return 0;
  }
  memcpy(dest, src, sizeof(dest));
  if ( dest[0] == 2LL )
    goto LABEL_4;
  return (dest[7] & 0xF000) == 0x1000;
}
