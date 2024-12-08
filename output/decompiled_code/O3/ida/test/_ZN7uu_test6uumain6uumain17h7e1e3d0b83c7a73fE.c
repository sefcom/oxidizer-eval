__int64 __fastcall uu_test::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int128 v13; // [rsp+8h] [rbp-3E0h] BYREF
  __int64 v14; // [rsp+18h] [rbp-3D0h]
  _OWORD v15[2]; // [rsp+20h] [rbp-3C8h]
  _OWORD v16[2]; // [rsp+40h] [rbp-3A8h]
  __int64 v17; // [rsp+60h] [rbp-388h] BYREF
  __int64 v18; // [rsp+68h] [rbp-380h]
  __int128 v19; // [rsp+70h] [rbp-378h] BYREF
  __int64 v20; // [rsp+80h] [rbp-368h]
  __int128 v21; // [rsp+90h] [rbp-358h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-348h]
  __m256i v23; // [rsp+C8h] [rbp-320h] BYREF
  _BYTE v24[736]; // [rsp+100h] [rbp-2E8h] BYREF

  v17 = a1;
  v18 = a2;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(v24, &v17);
  if ( *(_QWORD *)v24 == 0x8000000000000000LL )
  {
    std::sys::os_str::bytes::Slice::to_owned(&v19, aTest, 4LL);
  }
  else
  {
    v20 = *(_QWORD *)&v24[16];
    v19 = *(_OWORD *)v24;
  }
  v2 = uucore::util_name();
  v4 = v3;
  core::iter::traits::iterator::Iterator::collect(&v13, v17, v18);
  *(_DWORD *)v24 = 0;
  v5 = core::char::methods::encode_utf8_raw(v24);
  if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(v2, v4, v5, v6) )
    goto LABEL_15;
  v7 = v14;
  if ( v14 != 1 )
    goto LABEL_11;
  if ( !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(
                           *(_QWORD *)(*((_QWORD *)&v13 + 1) + 8LL),
                           *(_QWORD *)(*((_QWORD *)&v13 + 1) + 16LL)) )
  {
    if ( !v14 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_112A58);
    if ( !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(
                             *(_QWORD *)(*((_QWORD *)&v13 + 1) + 8LL),
                             *(_QWORD *)(*((_QWORD *)&v13 + 1) + 16LL)) )
    {
      v7 = v14;
LABEL_11:
      if ( v7 )
      {
        v14 = v7 - 1;
        v9 = 3 * (v7 - 1);
        v10 = *(_QWORD *)(*((_QWORD *)&v13 + 1) + 8 * v9 + 16);
        v21 = *(_OWORD *)(*((_QWORD *)&v13 + 1) + 8 * v9);
        v22 = v10;
        if ( (_QWORD)v21 != 0x8000000000000000LL
          && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                *((_QWORD *)&v21 + 1),
                                v22,
                                asc_14086,
                                1LL) )
        {
          core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v21);
LABEL_15:
          *(_QWORD *)&v24[16] = v14;
          *(_OWORD *)v24 = v13;
          uu_test::parser::parse(&v23, v24);
          if ( v23.m256i_i64[0] == 7 )
          {
            v22 = v23.m256i_i64[3];
            v21 = *(_OWORD *)&v23.m256i_u64[1];
            uu_test::uumain::uumain::{{closure}}(v24, &v21);
            v16[0] = *(_OWORD *)&v24[9];
            *(_QWORD *)((char *)v16 + 15) = *(_QWORD *)&v24[24];
            v15[0] = v16[0];
            *(_QWORD *)((char *)v15 + 15) = *(_QWORD *)&v24[24];
            if ( *(_QWORD *)v24 == 7LL )
            {
              if ( (v24[8] & 1) != 0 )
                v8 = 0LL;
              else
                v8 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
              goto LABEL_25;
            }
            *(_QWORD *)&v24[24] = *(_QWORD *)((char *)v15 + 15);
            *(_OWORD *)&v24[9] = v15[0];
            v11 = alloc::boxed::Box<T>::new(v24);
          }
          else
          {
            v16[0] = *(_OWORD *)((char *)&v23.m256i_u64[1] + 1);
            *(_QWORD *)((char *)v16 + 15) = v23.m256i_i64[3];
            v15[0] = v16[0];
            *(_QWORD *)((char *)v15 + 15) = v23.m256i_i64[3];
            *(_QWORD *)&v24[24] = v23.m256i_i64[3];
            *(_OWORD *)&v24[9] = v15[0];
            *(_QWORD *)v24 = v23.m256i_i64[0];
            v24[8] = v23.m256i_i8[8];
            v11 = alloc::boxed::Box<T>::new(v24);
          }
          v8 = v11;
LABEL_25:
          core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v19);
          return v8;
        }
      }
      else
      {
        *(_QWORD *)&v21 = 0x8000000000000000LL;
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v23);
      *(_QWORD *)&v24[16] = v23.m256i_i64[2];
      *(_OWORD *)v24 = *(_OWORD *)v23.m256i_i8;
      *(_DWORD *)&v24[24] = 2;
      v8 = alloc::boxed::Box<T>::new(v24);
      core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v21);
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v13);
      goto LABEL_25;
    }
  }
  uu_test::uu_app(v24);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v21, &v13);
  core::iter::traits::iterator::Iterator::chain(&v23, &v19, &v21);
  clap_builder::builder::command::Command::get_matches_from(&v21, v24, &v23);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
  return 0LL;
}
