void *__fastcall uu_tail::follow::files::FileHandling::update_metadata(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r13
  __int64 v7; // r12
  char *p_src; // rsi
  _QWORD *mut; // rax
  __int64 v11; // [rsp+0h] [rbp-178h] BYREF
  __int64 v12; // [rsp+8h] [rbp-170h]
  char src; // [rsp+10h] [rbp-168h] BYREF
  _BYTE dest[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v6 = *a4;
  if ( *a4 != 2LL )
  {
    v7 = a4[1];
    p_src = (char *)(a4 + 2);
LABEL_6:
    memcpy(dest, p_src, sizeof(dest));
    goto LABEL_7;
  }
  std::sys::pal::unix::fs::stat(&v11);
  v6 = v11;
  v7 = v12;
  if ( v11 != 2 )
  {
    p_src = &src;
    goto LABEL_6;
  }
  core::ptr::drop_in_place<std::io::error::Error>(v12);
LABEL_7:
  mut = (_QWORD *)uu_tail::follow::files::FileHandling::get_mut(a1, a2, a3);
  *mut = v6;
  mut[1] = v7;
  return memcpy(mut + 2, dest, 0xA0uLL);
}
