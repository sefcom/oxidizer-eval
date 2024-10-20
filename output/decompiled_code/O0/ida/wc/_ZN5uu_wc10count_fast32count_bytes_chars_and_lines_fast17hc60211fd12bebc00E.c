_QWORD *__fastcall uu_wc::count_fast::count_bytes_chars_and_lines_fast(_QWORD *a1, __int64 a2)
{
  __int64 i; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *result; // rax
  __int64 v11; // [rsp+0h] [rbp-4088h]
  __int64 v12; // [rsp+8h] [rbp-4080h]
  char **v13; // [rsp+10h] [rbp-4078h]
  char v14[8]; // [rsp+28h] [rbp-4060h] BYREF
  _BYTE v15[8]; // [rsp+30h] [rbp-4058h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-4050h]
  __int128 v17; // [rsp+40h] [rbp-4048h]
  _QWORD s[2054]; // [rsp+58h] [rbp-4030h] BYREF

  v16 = a1;
  v17 = 0LL;
  v12 = 0LL;
  memset(s, 0, 0x4000uLL);
  v13 = &off_119090;
  for ( i = 0LL; ; i = v9 + v11 )
  {
    v11 = i;
    while ( 1 )
    {
      v4 = <std::fs::File as std::io::Read>::read(a2, s, 0x4000LL);
      v5 = v3;
      if ( !v4 )
        break;
      switch ( v3 & 3 )
      {
        case 0uLL:
          v6 = 16LL;
          goto LABEL_10;
        case 1uLL:
          v6 = 15LL;
LABEL_10:
          v7 = *(_BYTE *)(v3 + v6);
          break;
        case 2uLL:
          v7 = std::sys::pal::unix::decode_error_kind(HIDWORD(v3));
          break;
        case 3uLL:
          v7 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v3));
          if ( v7 == 41 )
            core::hint::unreachable_unchecked::precondition_check();
          return result;
      }
      if ( v7 != 35 )
        goto LABEL_23;
      std::io::error::repr_bitpacked::decode_repr(v14, v5);
      if ( v14[0] >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v15);
    }
    if ( !v3 )
      break;
    if ( v3 >= 0x4001 )
      core::slice::index::slice_end_index_len_fail(v3, 0x4000LL, &off_119078);
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(s, (char *)s + v3, 0LL);
    if ( __CFADD__(v8, v12) )
      goto LABEL_25;
    v12 += v8;
    if ( v5 <= 7 )
    {
      v14[0] = 10;
      v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(s, (char *)s + v5, 0LL, v14);
    }
    else
    {
      v9 = bytecount::integer_simd::chunk_count(s, v5, 10LL);
    }
    if ( __CFADD__(v9, v11) )
    {
      v13 = &off_1190D8;
LABEL_25:
      core::panicking::panic_const::panic_const_add_overflow(v13);
    }
  }
  v5 = 0LL;
LABEL_23:
  result = v16;
  *v16 = 0LL;
  result[1] = v12;
  result[2] = v11;
  *(_OWORD *)(result + 3) = v17;
  result[5] = v5;
  return result;
}
