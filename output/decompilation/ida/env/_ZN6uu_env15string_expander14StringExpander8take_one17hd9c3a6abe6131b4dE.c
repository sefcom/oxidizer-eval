__int64 __fastcall uu_env::string_expander::StringExpander::take_one(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-68h] BYREF
  __int64 v3; // [rsp+8h] [rbp-60h]
  char v4; // [rsp+10h] [rbp-58h]
  _DWORD v5[3]; // [rsp+11h] [rbp-57h]
  _QWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+30h] [rbp-38h]
  _BYTE v8[7]; // [rsp+31h] [rbp-37h]
  int v9; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]

  uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v2, a1 + 24);
  result = v3;
  if ( !__OFSUB__(-v2, 1LL) )
  {
    *(_DWORD *)&v8[3] = *(_DWORD *)((char *)v5 + 3);
    *(_DWORD *)v8 = v5[0];
    v6[0] = v2;
    v6[1] = v3;
    v7 = v4;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2, v6);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9, &v2);
    if ( v9 == 1 )
    {
      do
      {
        if ( v10 )
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            a1,
            v10,
            v10 + v11);
        else
          alloc::vec::Vec<T,A>::push(a1, HIDWORD(v11));
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9, &v2);
      }
      while ( (v9 & 1) != 0 );
    }
    return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v2);
  }
  return result;
}