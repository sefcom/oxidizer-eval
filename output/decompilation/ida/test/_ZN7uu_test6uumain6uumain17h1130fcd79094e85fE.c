__int64 __fastcall uu_test::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rbp
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v19; // [rsp+8h] [rbp-3E0h]
  _BYTE v20[24]; // [rsp+10h] [rbp-3D8h] BYREF
  __int128 v21; // [rsp+28h] [rbp-3C0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-3B0h]
  _OWORD v23[2]; // [rsp+40h] [rbp-3A8h]
  __int64 v24; // [rsp+60h] [rbp-388h] BYREF
  __int64 v25; // [rsp+68h] [rbp-380h]
  __int64 v26; // [rsp+70h] [rbp-378h]
  __m256i v27; // [rsp+78h] [rbp-370h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-338h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-328h]
  _BYTE dest[736]; // [rsp+F0h] [rbp-2F8h] BYREF

  v24 = a1;
  v25 = a2;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v27, &v24);
  v2 = v27.m256i_i64[0];
  if ( __OFSUB__(-v27.m256i_i64[0], 1LL) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aTest, 4LL);
    v3 = *(_QWORD *)&dest[8];
    v2 = *(_QWORD *)dest;
    v4 = *(_QWORD *)&dest[16];
  }
  else
  {
    v4 = v27.m256i_i64[2];
    v3 = v27.m256i_i64[1];
  }
  v5 = uucore::util_name();
  v7 = v6;
  core::iter::traits::iterator::Iterator::collect(&v21, v24, v25);
  *(_DWORD *)dest = 0;
  v8 = core::char::methods::encode_utf8_raw(dest);
  if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(v5, v7, v8) )
    goto LABEL_15;
  v9 = 0x8000000000000000LL;
  v10 = v22;
  if ( !v22 )
    goto LABEL_21;
  v19 = v3;
  if ( v22 != 1 )
  {
    v11 = *((_QWORD *)&v21 + 1);
LABEL_12:
    v15 = v10 - 1;
    v22 = v15;
    v16 = *(_QWORD *)(v11 + 24 * v15);
    v4 = *(_QWORD *)(v11 + 24 * v15 + 8);
    if ( v16 != 0x8000000000000000LL
      && v4 != 0
      && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(v11 + 24 * v15 + 8),
                            *(_QWORD *)(v11 + 24 * v15 + 16),
                            asc_17583,
                            1LL) )
    {
      core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v16, v4);
      v3 = v19;
LABEL_15:
      *(_QWORD *)&dest[16] = v22;
      *(_OWORD *)dest = v21;
      uu_test::parser::parse(&v27, dest);
      if ( v27.m256i_i64[0] == 7 )
      {
        v29 = v27.m256i_i64[3];
        v28 = *(_OWORD *)&v27.m256i_u64[1];
        uu_test::uumain::uumain::{{closure}}(dest, &v28);
        *(_OWORD *)v20 = *(_OWORD *)&dest[9];
        *(_QWORD *)&v20[15] = *(_QWORD *)&dest[24];
        v23[0] = *(_OWORD *)v20;
        *(_QWORD *)((char *)v23 + 15) = *(_QWORD *)&dest[24];
        if ( *(_QWORD *)dest == 7LL )
        {
          if ( (dest[8] & 1) != 0 )
            v14 = 0LL;
          else
            v14 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
          goto LABEL_24;
        }
        *(_QWORD *)&dest[24] = *(_QWORD *)((char *)v23 + 15);
        *(_OWORD *)&dest[9] = v23[0];
        v17 = alloc::boxed::Box<T>::new(dest);
      }
      else
      {
        *(_OWORD *)v20 = *(_OWORD *)((char *)&v27.m256i_u64[1] + 1);
        *(_QWORD *)&v20[15] = v27.m256i_i64[3];
        v23[0] = *(_OWORD *)v20;
        *(_QWORD *)((char *)v23 + 15) = v27.m256i_i64[3];
        *(_QWORD *)&dest[24] = v27.m256i_i64[3];
        *(_OWORD *)&dest[9] = v23[0];
        *(_QWORD *)dest = v27.m256i_i64[0];
        dest[8] = v27.m256i_i8[8];
        v17 = alloc::boxed::Box<T>::new(dest);
      }
      v14 = v17;
LABEL_24:
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v2, v3);
      return v14;
    }
    v9 = v16;
    v3 = v19;
LABEL_21:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v27, aMissing, 11LL);
    *(_QWORD *)&dest[16] = v27.m256i_i64[2];
    *(_OWORD *)dest = *(_OWORD *)v27.m256i_i8;
    *(_DWORD *)&dest[24] = 2;
    v14 = alloc::boxed::Box<T>::new(dest);
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v9, v4);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v21);
    goto LABEL_24;
  }
  v26 = v4;
  v11 = *((_QWORD *)&v21 + 1);
  v12 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL);
  v13 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 16LL);
  if ( !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(v12, v13, aHelp_0, 6LL)
    && !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(v12, v13, aVersion, 9LL) )
  {
    goto LABEL_12;
  }
  uu_test::uu_app(dest);
  *(_QWORD *)v20 = v2;
  *(_QWORD *)&v20[8] = v19;
  *(_QWORD *)&v20[16] = v26;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v28, &v21);
  core::iter::traits::iterator::Iterator::chain(&v27, v20, &v28);
  clap_builder::builder::command::Command::get_matches_from(&v28, dest, &v27);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
  return 0LL;
}