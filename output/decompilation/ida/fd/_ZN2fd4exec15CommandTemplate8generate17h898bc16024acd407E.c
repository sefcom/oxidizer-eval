void *__fastcall fd::exec::CommandTemplate::generate(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rdx
  _BYTE v16[24]; // [rsp+8h] [rbp-130h] BYREF
  _BYTE src[280]; // [rsp+20h] [rbp-118h] BYREF

  if ( !a3 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_402288);
  fd::fmt::FormatTemplate::generate(v16, a2, a4, a5, a6, a7);
  argmax::Command::new(src);
  v11 = 32 * a3;
  if ( v11 == 32 )
    return memcpy(a1, src, 0xE8uLL);
  v12 = a2 + 32;
  v13 = v11 - 32;
  while ( 1 )
  {
    fd::fmt::FormatTemplate::generate(v16, v12, a4, a5, a6, a7);
    if ( (argmax::Command::try_arg(src, v16) & 1) != 0 )
      break;
    v12 += 32LL;
    v13 -= 32LL;
    if ( !v13 )
      return memcpy(a1, src, 0xE8uLL);
  }
  a1[1] = v14;
  *a1 = 0x8000000000000000LL;
  return (void *)core::ptr::drop_in_place<argmax::Command>(src);
}