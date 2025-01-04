void *__fastcall uu_tail::follow::files::FileHandling::update_metadata(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r12
  __int64 *p_src; // rsi
  _QWORD *mut; // rax
  __int64 v8; // [rsp+0h] [rbp-178h] BYREF
  __int64 src; // [rsp+8h] [rbp-170h] BYREF
  _BYTE dest[168]; // [rsp+B0h] [rbp-C8h] BYREF

  v4 = *a4;
  if ( *a4 != 2 )
  {
    p_src = a4 + 1;
LABEL_6:
    memcpy(dest, p_src, sizeof(dest));
    goto LABEL_7;
  }
  std::fs::metadata(&v8, a2, a3);
  v4 = v8;
  if ( v8 != 2 )
  {
    p_src = &src;
    goto LABEL_6;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src);
LABEL_7:
  mut = (_QWORD *)uu_tail::follow::files::FileHandling::get_mut(a1);
  *mut = v4;
  return memcpy(mut + 1, dest, 0xA8uLL);
}
