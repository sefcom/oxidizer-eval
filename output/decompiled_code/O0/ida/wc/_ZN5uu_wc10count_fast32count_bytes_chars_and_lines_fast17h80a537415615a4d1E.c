__int64 __fastcall uu_wc::count_fast::count_bytes_chars_and_lines_fast(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-4088h]
  __int64 v11; // [rsp+8h] [rbp-4080h]
  char **v12; // [rsp+10h] [rbp-4078h]
  _BYTE v13[8]; // [rsp+30h] [rbp-4058h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-4050h] BYREF
  __int128 v15; // [rsp+40h] [rbp-4048h]
  __int64 v16; // [rsp+50h] [rbp-4038h]
  _QWORD s[2054]; // [rsp+58h] [rbp-4030h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v11 = 0LL;
  memset(s, 0, 0x4000uLL);
  v12 = &off_1190A8;
  for ( i = 0LL; ; i = v8 + v10 )
  {
    v10 = i;
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
        goto LABEL_20;
      std::io::error::repr_bitpacked::decode_repr(v13, v5);
      if ( v13[0] >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v14);
    }
    if ( !v3 )
      break;
    if ( __CFADD__(v3, v11) )
      goto LABEL_22;
    v11 += v3;
    if ( v3 >= 0x4001 )
      core::slice::index::slice_end_index_len_fail(v3, 0x4000LL, &off_119078);
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(s, (char *)s + v3, 0LL);
    if ( __CFADD__(v8, v10) )
    {
      v12 = &off_119090;
LABEL_22:
      core::panicking::panic_const::panic_const_add_overflow(v12);
    }
  }
  v5 = 0LL;
LABEL_20:
  result = a1;
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v10;
  *(_OWORD *)(a1 + 16) = v15;
  *(_QWORD *)(a1 + 32) = v16;
  *(_QWORD *)(a1 + 40) = v5;
  return result;
}
