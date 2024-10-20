__int64 __fastcall uu_split::custom_write_all(__int64 a1, const void *a2, size_t a3, _QWORD *a4, __int64 a5)
{
  __int64 v8; // rbp
  void *v9; // r12
  __int64 result; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  bool v19; // zf
  _BYTE v20[8]; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v21[56]; // [rsp+10h] [rbp-38h] BYREF

  v8 = a4[2];
  if ( *a4 - v8 > a3 )
  {
    v9 = (void *)(v8 + a4[1]);
    core::intrinsics::copy_nonoverlapping::precondition_check(a2, v9, 1LL, 1LL, a3);
    memcpy(v9, a2, a3);
    a4[2] = a3 + v8;
LABEL_3:
    *(_WORD *)a1 = 256;
    return a1;
  }
  v12 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, a2, a3);
  if ( !v12 )
    goto LABEL_3;
  switch ( v12 & 3 )
  {
    case 0uLL:
      v13 = 16LL;
      goto LABEL_12;
    case 1uLL:
      v13 = 15LL;
LABEL_12:
      LOBYTE(v13) = *(_BYTE *)(v12 + v13);
      break;
    case 2uLL:
      v14 = v12;
      LOBYTE(v13) = std::sys::pal::unix::decode_error_kind(HIDWORD(v12));
      v12 = v14;
      break;
    case 3uLL:
      v15 = v12;
      v16 = HIDWORD(v12);
      v17 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v12));
      v13 = v17;
      v19 = (_BYTE)v17 == 41;
      v12 = v15;
      if ( v19 )
        core::hint::unreachable_unchecked::precondition_check(v16, a2, v18, v13);
      return result;
  }
  if ( (_BYTE)v13 == 11 && *(_QWORD *)(a5 + 136) != 0x8000000000000000LL )
  {
    *(_WORD *)a1 = 0;
    std::io::error::repr_bitpacked::decode_repr(v20, v12);
    if ( v20[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v21);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v12;
    *(_BYTE *)a1 = 1;
  }
  return a1;
}
