__int64 __fastcall uu_pr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int128 v4; // xmm0
  unsigned __int64 v5; // rbx
  __int64 *v6; // rbp
  __m256i v8; // [rsp+0h] [rbp-6F8h] BYREF
  __int128 v9; // [rsp+30h] [rbp-6C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-6B8h]
  _BYTE v11[8]; // [rsp+50h] [rbp-6A8h] BYREF
  __int64 v12; // [rsp+58h] [rbp-6A0h]
  unsigned __int64 v13; // [rsp+60h] [rbp-698h]
  __int128 v14; // [rsp+68h] [rbp-690h] BYREF
  __int64 v15; // [rsp+78h] [rbp-680h]
  __int128 v16; // [rsp+80h] [rbp-678h] BYREF
  __int64 v17; // [rsp+90h] [rbp-668h]
  _OWORD v18[3]; // [rsp+98h] [rbp-660h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-630h]
  __m256i v20; // [rsp+D0h] [rbp-628h] BYREF
  __int128 v21; // [rsp+F0h] [rbp-608h] BYREF
  __int64 v22; // [rsp+100h] [rbp-5F8h]
  _BYTE v23[32]; // [rsp+108h] [rbp-5F0h] BYREF
  _BYTE v24[24]; // [rsp+128h] [rbp-5D0h] BYREF
  __int128 dest[21]; // [rsp+140h] [rbp-5B8h] BYREF
  _OWORD src[21]; // [rsp+290h] [rbp-468h] BYREF
  _BYTE v27[32]; // [rsp+3E0h] [rbp-318h] BYREF
  _BYTE v28[760]; // [rsp+400h] [rbp-2F8h] BYREF

  uucore::Args::collect_ignore(v11, a1, a2);
  uu_pr::recreate_arguments((__int64)&v21, v12, v13);
  uu_pr::uu_app(v28);
  *(_QWORD *)&src[1] = v22;
  src[0] = v21;
  clap_builder::builder::command::Command::try_get_matches_from_mut(dest, v28, src);
  if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&dest[0] + 1));
LABEL_24:
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v28);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v11);
    return v2;
  }
  v19 = *(_QWORD *)&dest[3];
  v18[2] = dest[2];
  v18[1] = dest[1];
  v18[0] = dest[0];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v18, aFiles, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(src, aFiles, 5LL, dest);
  if ( *(_QWORD *)&src[0]
    && (dest[3] = src[3],
        dest[2] = src[2],
        dest[1] = src[1],
        dest[0] = src[0],
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v8, dest),
        *(_OWORD *)v20.m256i_i8 = *(_OWORD *)&v8.m256i_u64[1],
        v8.m256i_i64[0] != 0x8000000000000000LL) )
  {
    *(__int128 *)((char *)dest + 8) = *(_OWORD *)v20.m256i_i8;
    *(_QWORD *)&dest[0] = v8.m256i_i64[0];
  }
  else
  {
    *(_QWORD *)&dest[0] = 0LL;
    *((_QWORD *)&dest[0] + 1) = 8LL;
    *(_QWORD *)&dest[1] = 0LL;
  }
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v14, dest);
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(dest);
  if ( !v15 )
    alloc::vec::Vec<T,A>::insert(&v14, 0LL, asc_67225, 1LL);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v18, aMerge, 5LL) )
  {
    v3 = alloc::alloc::Global::alloc_impl();
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v4 = v14;
    *(_QWORD *)(v3 + 16) = v15;
    *(_OWORD *)v3 = v4;
    alloc::slice::hack::into_vec(v24, v3, 1LL);
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v27, &v14);
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
      v24,
      v27);
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v23, v24);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16, v23);
  if ( (_QWORD)v16 != 0x8000000000000000LL )
  {
    while ( 1 )
    {
      v5 = v17;
      v10 = v17;
      v9 = v16;
      v6 = (__int64 *)*((_QWORD *)&v16 + 1);
      alloc::str::join_generic_copy(dest, v12, v13, asc_67224, 1LL);
      v8.m256i_i64[2] = *(_QWORD *)&dest[1];
      *(_OWORD *)v8.m256i_i8 = dest[0];
      uu_pr::build_options((__int64)src, (__int64)v18, v6, v5, *((__int64 *)&dest[0] + 1), *(__int64 *)&dest[1]);
      core::ptr::drop_in_place<alloc::string::String>(&v8);
      if ( *(_QWORD *)&src[0] == 2LL )
      {
        v8 = *(__m256i *)((char *)src + 8);
        uu_pr::print_error((__int64)v18, (__int64)&v8);
        v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
        core::ptr::drop_in_place<uu_pr::PrError>(&v8);
        goto LABEL_23;
      }
      memcpy(dest, src, 0x148uLL);
      itertools::Itertools::exactly_one(&v8, *((_QWORD *)&v9 + 1), *((_QWORD *)&v9 + 1) + 16 * v10);
      if ( v8.m256i_i32[0] == 2 )
        uu_pr::pr((__int64)&v20, *(_QWORD *)v8.m256i_i64[1], *(_QWORD *)(v8.m256i_i64[1] + 8), dest);
      else
        uu_pr::mpr(&v20, *((__int64 *)&v9 + 1), v10, (__int64)dest);
      if ( v20.m256i_i64[0] != 0x8000000000000005LL )
        break;
      core::ptr::drop_in_place<uu_pr::OutputOptions>(dest);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v9);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16, v23);
      if ( (_QWORD)v16 == 0x8000000000000000LL )
        goto LABEL_20;
    }
    v8 = v20;
    uu_pr::print_error((__int64)v18, (__int64)&v8);
    core::ptr::drop_in_place<uu_pr::PrError>(&v8);
    v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    core::ptr::drop_in_place<uu_pr::OutputOptions>(dest);
LABEL_23:
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v9);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(v23);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
    goto LABEL_24;
  }
LABEL_20:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(v23);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(v28);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v11);
  return 0LL;
}
