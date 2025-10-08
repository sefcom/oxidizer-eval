_QWORD *__fastcall uu_dircolors::append_entry(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 a8)
{
  __int64 v13; // rax
  __int128 *v14; // rdi
  __int64 v16; // rax
  __int128 v17; // [rsp+0h] [rbp-F8h] BYREF
  __int128 **v18; // [rsp+10h] [rbp-E8h]
  __int64 v19; // [rsp+18h] [rbp-E0h]
  void *v20; // [rsp+20h] [rbp-D8h]
  __int64 v21; // [rsp+28h] [rbp-D0h]
  __int128 *v22; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+40h] [rbp-B8h]
  __int128 *v24; // [rsp+48h] [rbp-B0h]
  __int64 (__fastcall *v25)(); // [rsp+50h] [rbp-A8h]
  __int128 v26; // [rsp+58h] [rbp-A0h] BYREF
  __int128 **v27; // [rsp+68h] [rbp-90h]
  _QWORD v28[3]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v29; // [rsp+88h] [rbp-70h]
  __int64 v30; // [rsp+90h] [rbp-68h] BYREF
  __int128 v31; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v32[2]; // [rsp+A8h] [rbp-50h] BYREF
  _QWORD v33[8]; // [rsp+B8h] [rbp-40h] BYREF

  v29 = a2;
  v32[0] = a4;
  v32[1] = a5;
  v33[0] = a6;
  v33[1] = a7;
  v31 = a8;
  if ( (unsigned __int8)core::str::pattern::Pattern::is_prefix_of(a4, a5) )
  {
    LODWORD(v17) = 0;
    v13 = core::char::methods::encode_utf8_raw(46LL, &v17);
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(a4, a5, v13) )
    {
      v22 = (__int128 *)v32;
      v23 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v17 = &off_F5E80;
      *((_QWORD *)&v17 + 1) = 1LL;
      v20 = 0LL;
      v18 = &v22;
      v19 = 1LL;
      core::option::Option<T>::map_or_else(v28, &v17);
      if ( *a3 != 2 )
      {
LABEL_4:
        v22 = (__int128 *)v28;
        v23 = <alloc::string::String as core::fmt::Display>::fmt;
        v24 = &v31;
        v25 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v17 = &unk_F5E90;
        *((_QWORD *)&v17 + 1) = 3LL;
        v20 = 0LL;
        v18 = &v22;
        v19 = 2LL;
        core::option::Option<T>::map_or_else(&v26, &v17);
LABEL_11:
        v17 = v26;
        v18 = v27;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          v29,
          *((_QWORD *)&v26 + 1),
          (char *)v27 + *((_QWORD *)&v26 + 1));
        *a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        v14 = (__int128 *)v28;
LABEL_12:
        core::ptr::drop_in_place<alloc::string::String>(v14);
        return a1;
      }
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v28, a4, a5);
      if ( *a3 != 2 )
        goto LABEL_4;
    }
    v22 = &v31;
    v23 = <&T as core::fmt::Display>::fmt;
    v24 = (__int128 *)v28;
    v25 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_F5ED0;
    *((_QWORD *)&v17 + 1) = 4LL;
    v20 = &unk_1C128;
    v21 = 3LL;
    v18 = &v22;
    v19 = 2LL;
    core::option::Option<T>::map_or_else(&v26, &v17);
    goto LABEL_11;
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a6, a7, aOptions, 7LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a6, a7, aColor, 5LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a6, a7, aEightbit, 8LL) )
  {
    v28[0] = &off_F7CB8;
    v28[1] = &off_F7CB8 + 148;
    v16 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v28, v33);
    if ( !v16 )
    {
      v22 = (__int128 *)v32;
      v23 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v17 = &off_F5EC0;
      *((_QWORD *)&v17 + 1) = 1LL;
      v20 = 0LL;
      v18 = &v22;
      v19 = 1LL;
      core::option::Option<T>::map_or_else(a1, &v17);
      return a1;
    }
    v30 = v16 + 16;
    if ( *a3 == 2 )
    {
      v22 = &v31;
      v23 = <&T as core::fmt::Display>::fmt;
      v24 = (__int128 *)&v30;
      v25 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v17 = &off_F5ED0;
      *((_QWORD *)&v17 + 1) = 4LL;
      v20 = &unk_1C128;
      v21 = 3LL;
    }
    else
    {
      v22 = (__int128 *)&v30;
      v23 = <&T as core::fmt::Display>::fmt;
      v24 = &v31;
      v25 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v17 = &unk_F5E90;
      *((_QWORD *)&v17 + 1) = 3LL;
      v20 = 0LL;
    }
    v18 = &v22;
    v19 = 2LL;
    core::option::Option<T>::map_or_else(&v26, &v17);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      v29,
      *((_QWORD *)&v26 + 1),
      (char *)v27 + *((_QWORD *)&v26 + 1));
    *a1 = 0x8000000000000000LL;
    v14 = &v26;
    goto LABEL_12;
  }
  *a1 = 0x8000000000000000LL;
  return a1;
}