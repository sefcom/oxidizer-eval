__int64 __fastcall uu_env::string_expander::StringExpander::take_one(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+8h] [rbp-70h] BYREF
  __int64 v4; // [rsp+10h] [rbp-68h]
  char v5; // [rsp+18h] [rbp-60h]
  _DWORD v6[3]; // [rsp+19h] [rbp-5Fh]
  _QWORD v7[2]; // [rsp+28h] [rbp-50h] BYREF
  char v8; // [rsp+38h] [rbp-40h]
  _BYTE v9[7]; // [rsp+39h] [rbp-3Fh]
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]

  uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v3, (_QWORD *)(a1 + 24));
  v1 = v4;
  if ( v3 != 0x8000000000000000LL )
  {
    *(_DWORD *)&v9[3] = *(_DWORD *)((char *)v6 + 3);
    *(_DWORD *)v9 = v6[0];
    v7[0] = v3;
    v7[1] = v4;
    v8 = v5;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3, v7);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10, &v3);
    while ( v10 )
    {
      if ( v11 )
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          a1,
          v11,
          v11 + v12);
      else
        alloc::vec::Vec<T,A>::push(a1, HIDWORD(v12));
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10, &v3);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_env::string_parser::Chunk>>(&v3);
  }
  return v1;
}
