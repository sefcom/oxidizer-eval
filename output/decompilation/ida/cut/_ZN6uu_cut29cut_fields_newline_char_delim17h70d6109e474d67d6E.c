__int64 __fastcall uu_cut::cut_fields_newline_char_delim(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v12; // r15
  char v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  char v20; // [rsp+4h] [rbp-94h]
  __int64 v21; // [rsp+8h] [rbp-90h]
  __int128 *v22; // [rsp+10h] [rbp-88h]
  _BYTE v23[8]; // [rsp+18h] [rbp-80h] BYREF
  __int64 v24; // [rsp+20h] [rbp-78h]
  unsigned __int64 v25; // [rsp+28h] [rbp-70h]
  __int128 v26; // [rsp+30h] [rbp-68h] BYREF
  char v27; // [rsp+40h] [rbp-58h]
  char v28; // [rsp+60h] [rbp-38h]

  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v26, a1);
  v20 = a6;
  v28 = a6;
  core::iter::traits::iterator::Iterator::collect(v23, &v26);
  if ( a5 )
  {
    v22 = &a4[a5];
    v21 = v24;
    v12 = v25;
    v13 = 0;
    while ( 1 )
    {
      v26 = *a4;
      v27 = 0;
      if ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v26) & 1) != 0 )
      {
        v15 = v14 - 1;
        if ( v14 - 1 < v12 )
          break;
      }
LABEL_3:
      if ( ++a4 == v22 )
        goto LABEL_13;
    }
    if ( (v13 & 1) == 0
      || (v16 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, a3, a7, a8)) == 0 )
    {
      do
      {
        v16 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(
                a2,
                a3,
                *(_QWORD *)(v21 + 24 * v15 + 8),
                *(_QWORD *)(v21 + 24 * v15 + 16));
        if ( v16 )
          break;
        v13 = 1;
        if ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v26) & 1) == 0 )
          goto LABEL_3;
        v15 = v17 - 1;
        if ( v17 - 1 >= v12 )
          goto LABEL_3;
        v16 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, a3, a7, a8);
      }
      while ( !v16 );
    }
  }
  else
  {
LABEL_13:
    LOBYTE(v26) = v20;
    v16 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, a3, &v26, 1LL);
    if ( !v16 )
    {
      v18 = 0LL;
      goto LABEL_15;
    }
  }
  v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
LABEL_15:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<u8>>>(v23);
  return v18;
}