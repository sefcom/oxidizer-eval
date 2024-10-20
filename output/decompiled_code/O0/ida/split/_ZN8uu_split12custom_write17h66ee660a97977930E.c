__int64 __fastcall uu_split::custom_write(void *src, size_t n, _QWORD *a3, __int64 a4)
{
  __int64 v6; // r13
  void *v7; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  char v14; // cl
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdi
  unsigned int v17; // eax
  _BYTE v18[8]; // [rsp+10h] [rbp-38h] BYREF
  _BYTE v19[48]; // [rsp+18h] [rbp-30h] BYREF

  v6 = a3[2];
  if ( *a3 - v6 > n )
  {
    v7 = (void *)(v6 + a3[1]);
    core::intrinsics::copy_nonoverlapping::precondition_check(src, v7, 1LL, 1LL, n);
    memcpy(v7, src, n);
    a3[2] = n + v6;
    return 0LL;
  }
  if ( !std::io::buffered::bufwriter::BufWriter<W>::write_cold(a3, src, n) )
    return 0LL;
  switch ( v11 & 3 )
  {
    case 0uLL:
      v12 = 16LL;
      goto LABEL_13;
    case 1uLL:
      v12 = 15LL;
LABEL_13:
      v14 = *(_BYTE *)(v11 + v12);
      break;
    case 2uLL:
      v13 = v11;
      v14 = std::sys::pal::unix::decode_error_kind(HIDWORD(v11));
      v11 = v13;
      break;
    case 3uLL:
      v15 = v11;
      v16 = HIDWORD(v11);
      v17 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v11));
      v14 = v17;
      v11 = v15;
      if ( (_BYTE)v17 == 41 )
        core::hint::unreachable_unchecked::precondition_check(v16, src, v15, v17);
      return result;
  }
  result = 1LL;
  if ( v14 == 11 && *(_QWORD *)(a4 + 136) != 0x8000000000000000LL )
  {
    std::io::error::repr_bitpacked::decode_repr(v18, v11);
    if ( v18[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v19);
    return 0LL;
  }
  return result;
}
