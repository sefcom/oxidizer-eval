__int64 __fastcall uu_wc::count_fast::count_bytes_chars_and_lines_fast(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  char v6; // al
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-4088h]
  char v10[8]; // [rsp+20h] [rbp-4068h] BYREF
  _BYTE v11[8]; // [rsp+28h] [rbp-4060h] BYREF
  __int128 v12; // [rsp+30h] [rbp-4058h]
  __int128 v13; // [rsp+40h] [rbp-4048h]
  _QWORD s[2054]; // [rsp+58h] [rbp-4030h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v9 = 0LL;
  memset(s, 0, 0x4000uLL);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = <std::fs::File as std::io::Read>::read(a2, s, 0x4000LL);
      v4 = v2;
      if ( !v3 )
        break;
      switch ( v2 & 3 )
      {
        case 0uLL:
          v5 = 16LL;
          goto LABEL_9;
        case 1uLL:
          v5 = 15LL;
LABEL_9:
          v6 = *(_BYTE *)(v2 + v5);
          break;
        case 2uLL:
          v6 = std::sys::pal::unix::decode_error_kind(HIDWORD(v2));
          break;
        case 3uLL:
          v6 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v2));
          if ( v6 == 41 )
            core::hint::unreachable_unchecked::precondition_check();
          return result;
      }
      if ( v6 != 35 )
        goto LABEL_21;
      std::io::error::repr_bitpacked::decode_repr(v10, v4);
      if ( v10[0] >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v11);
    }
    if ( !v2 )
      break;
    if ( v2 >= 0x4001 )
      core::slice::index::slice_end_index_len_fail(v2, 0x4000LL, &off_1190C0);
    if ( v2 <= 7 )
    {
      v10[0] = 10;
      v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(s, (char *)s + v2, 0LL, v10);
    }
    else
    {
      v7 = bytecount::integer_simd::chunk_count(s, v2, 10LL);
    }
    if ( __CFADD__(v7, v9) )
      core::panicking::panic_const::panic_const_add_overflow(&off_1190D8);
    v9 += v7;
  }
  v4 = 0LL;
LABEL_21:
  result = a1;
  *(_OWORD *)a1 = v13;
  *(_QWORD *)(a1 + 16) = v9;
  *(_OWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 40) = v4;
  return result;
}
