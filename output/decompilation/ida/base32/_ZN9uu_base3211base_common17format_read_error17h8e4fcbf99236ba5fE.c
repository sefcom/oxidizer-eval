__int64 __fastcall uu_base32::base_common::format_read_error(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 i; // rax
  unsigned int v4; // edx
  __int64 v5; // rbx
  unsigned int v7; // eax
  char v8; // [rsp+Fh] [rbp-D9h] BYREF
  _QWORD v9[3]; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v10; // [rsp+28h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+38h] [rbp-B0h]
  __int64 v12; // [rsp+48h] [rbp-A0h]
  __int64 v13; // [rsp+58h] [rbp-90h]
  _OWORD v14[2]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v15[8]; // [rsp+88h] [rbp-60h] BYREF
  __int64 v16; // [rsp+90h] [rbp-58h]
  __int64 v17; // [rsp+98h] [rbp-50h]
  _QWORD v18[9]; // [rsp+A0h] [rbp-48h] BYREF

  v8 = a2;
  <T as alloc::string::ToString>::to_string(v15, &v8);
  v2 = v17;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v10, v17, 0LL);
  v13 = a1;
  if ( (_QWORD)v10 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v10 + 1), v11);
  v9[0] = *((_QWORD *)&v10 + 1);
  v9[1] = v11;
  v9[2] = 0LL;
  v18[0] = v16;
  v18[1] = v16 + v2;
  v18[2] = 0LL;
  for ( i = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v18);
        v4 != (_DWORD)&loc_10FFFF + 1;
        i = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v18) )
  {
    if ( i )
    {
      alloc::string::String::push(v9, v4);
    }
    else
    {
      core::unicode::unicode_data::conversions::to_upper(v14, v4);
      core::char::CaseMappingIter::new(&v10, v14);
      v14[1] = v11;
      v14[0] = v10;
      while ( 1 )
      {
        v7 = <core::char::ToUppercase as core::iter::traits::iterator::Iterator>::next(v14);
        if ( v7 == (_DWORD)&loc_10FFFF + 1 )
          break;
        alloc::string::String::push(v9, v7);
      }
      core::ptr::drop_in_place<core::char::ToUppercase>(v14);
    }
  }
  *(_QWORD *)&v14[0] = v9;
  *((_QWORD *)&v14[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v10 = &off_149910;
  *((_QWORD *)&v10 + 1) = 1LL;
  v12 = 0LL;
  *(_QWORD *)&v11 = v14;
  *((_QWORD *)&v11 + 1) = 1LL;
  v5 = v13;
  core::option::Option<T>::map_or_else(v13, &v10);
  core::ptr::drop_in_place<alloc::string::String>(v9);
  core::ptr::drop_in_place<alloc::string::String>(v15);
  return v5;
}
