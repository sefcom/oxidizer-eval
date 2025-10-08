__int64 __fastcall uu_base32::base_common::format_read_error(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 i; // rax
  unsigned int v5; // edx
  __int64 v6; // rbx
  unsigned int v8; // eax
  char v9; // [rsp+7h] [rbp-C1h] BYREF
  _QWORD *v10; // [rsp+8h] [rbp-C0h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+10h] [rbp-B8h]
  __int64 v12; // [rsp+18h] [rbp-B0h]
  _QWORD v13[3]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-90h]
  _BYTE v15[8]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD *v16; // [rsp+48h] [rbp-80h]
  __int64 v17; // [rsp+50h] [rbp-78h]
  _QWORD v18[6]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v19[60]; // [rsp+8Ch] [rbp-3Ch] BYREF

  v14 = a1;
  v9 = a2;
  <T as alloc::string::SpecToString>::spec_to_string(v15, &v9);
  v2 = v17;
  v13[0] = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v17, 1LL, 1LL, &off_10E438);
  v13[1] = v3;
  v13[2] = 0LL;
  v10 = v16;
  v11 = (__int64 (__fastcall *)())((char *)v16 + v2);
  v12 = 0LL;
  for ( i = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v10);
        v5 != (_DWORD)&unk_110000;
        i = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v10) )
  {
    if ( i )
    {
      alloc::string::String::push(v13, v5);
    }
    else
    {
      core::unicode::unicode_data::conversions::to_upper(v19, v5);
      core::char::CaseMappingIter::new(v18, v19);
      while ( 1 )
      {
        v8 = <core::char::ToUppercase as core::iter::traits::iterator::Iterator>::next(v18);
        if ( v8 == (_DWORD)&unk_110000 )
          break;
        alloc::string::String::push(v13, v8);
      }
    }
  }
  v10 = v13;
  v11 = <alloc::string::String as core::fmt::Display>::fmt;
  v18[0] = &off_10E428;
  v18[1] = 1LL;
  v18[4] = 0LL;
  v18[2] = &v10;
  v18[3] = 1LL;
  v6 = v14;
  core::option::Option<T>::map_or_else(v14, v18);
  core::ptr::drop_in_place<alloc::string::String>(v13);
  core::ptr::drop_in_place<alloc::string::String>(v15);
  return v6;
}