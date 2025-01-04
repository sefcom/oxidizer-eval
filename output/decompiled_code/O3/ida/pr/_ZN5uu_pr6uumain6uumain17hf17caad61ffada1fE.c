__int64 __fastcall uu_pr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m256i v12; // [rsp+0h] [rbp-6F8h] BYREF
  __int128 v13; // [rsp+30h] [rbp-6C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-6B8h]
  _BYTE v15[8]; // [rsp+50h] [rbp-6A8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-6A0h]
  __int64 v17; // [rsp+60h] [rbp-698h]
  __int128 v18; // [rsp+68h] [rbp-690h] BYREF
  __int64 v19; // [rsp+78h] [rbp-680h]
  __int128 v20; // [rsp+80h] [rbp-678h] BYREF
  __int64 v21; // [rsp+90h] [rbp-668h]
  _OWORD v22[3]; // [rsp+98h] [rbp-660h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-630h]
  __m256i v24; // [rsp+D0h] [rbp-628h] BYREF
  __int128 v25; // [rsp+F0h] [rbp-608h] BYREF
  __int64 v26; // [rsp+100h] [rbp-5F8h]
  _BYTE v27[32]; // [rsp+108h] [rbp-5F0h] BYREF
  _BYTE v28[24]; // [rsp+128h] [rbp-5D0h] BYREF
  _OWORD dest[21]; // [rsp+140h] [rbp-5B8h] BYREF
  _OWORD src[21]; // [rsp+290h] [rbp-468h] BYREF
  _BYTE v31[32]; // [rsp+3E0h] [rbp-318h] BYREF
  _BYTE v32[760]; // [rsp+400h] [rbp-2F8h] BYREF

  uucore::Args::collect_ignore(v15, a1, a2);
  uu_pr::recreate_arguments(&v25, v16, v17);
  uu_pr::uu_app(v32);
  *(_QWORD *)&src[1] = v26;
  src[0] = v25;
  clap_builder::builder::command::Command::try_get_matches_from_mut(dest, v32, src);
  if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&dest[0] + 1));
LABEL_24:
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v32);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v15);
    return v2;
  }
  v23 = *(_QWORD *)&dest[3];
  v22[2] = dest[2];
  v22[1] = dest[1];
  v22[0] = dest[0];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v22, aFiles, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(src, aFiles, 5LL, dest);
  if ( *(_QWORD *)&src[0]
    && (dest[3] = src[3],
        dest[2] = src[2],
        dest[1] = src[1],
        dest[0] = src[0],
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v12, dest),
        *(_OWORD *)v24.m256i_i8 = *(_OWORD *)&v12.m256i_u64[1],
        v12.m256i_i64[0] != 0x8000000000000000LL) )
  {
    *(_OWORD *)((char *)dest + 8) = *(_OWORD *)v24.m256i_i8;
    *(_QWORD *)&dest[0] = v12.m256i_i64[0];
  }
  else
  {
    *(_QWORD *)&dest[0] = 0LL;
    *((_QWORD *)&dest[0] + 1) = 8LL;
    *(_QWORD *)&dest[1] = 0LL;
  }
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v18, dest);
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(dest);
  if ( !v19 )
    alloc::vec::Vec<T,A>::insert(&v18, 0LL, asc_67225, 1LL);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v22, aMerge, 5LL) )
  {
    v3 = alloc::alloc::Global::alloc_impl();
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v4 = v18;
    *(_QWORD *)(v3 + 16) = v19;
    *(_OWORD *)v3 = v4;
    alloc::slice::hack::into_vec(v28, v3, 1LL);
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v31, &v18);
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
      v28,
      v31);
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v27, v28);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v20, v27);
  if ( (_QWORD)v20 != 0x8000000000000000LL )
  {
    while ( 1 )
    {
      v5 = v21;
      v14 = v21;
      v13 = v20;
      v6 = *((_QWORD *)&v20 + 1);
      alloc::str::join_generic_copy(dest, v16, v17, asc_67224, 1LL);
      v12.m256i_i64[2] = *(_QWORD *)&dest[1];
      *(_OWORD *)v12.m256i_i8 = dest[0];
      uu_pr::build_options(src, v22, v6, v5, *((_QWORD *)&dest[0] + 1));
      core::ptr::drop_in_place<alloc::string::String>(&v12);
      if ( *(_QWORD *)&src[0] == 2LL )
      {
        v12 = *(__m256i *)((char *)src + 8);
        ((void (__fastcall *)(_OWORD *, __m256i *))uu_pr::print_error)(v22, &v12);
        v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
        core::ptr::drop_in_place<uu_pr::PrError>(&v12);
        goto LABEL_23;
      }
      memcpy(dest, src, 0x148uLL);
      itertools::Itertools::exactly_one(&v12, *((_QWORD *)&v13 + 1), *((_QWORD *)&v13 + 1) + 16 * v14);
      if ( v12.m256i_i32[0] == 2 )
        uu_pr::pr(&v24, *(_QWORD *)v12.m256i_i64[1], *(_QWORD *)(v12.m256i_i64[1] + 8), dest);
      else
        uu_pr::mpr(&v24, *((_QWORD *)&v13 + 1), v14, dest);
      if ( v24.m256i_i64[0] != 0x8000000000000005LL )
        break;
      core::ptr::drop_in_place<uu_pr::OutputOptions>(dest);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v13);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v20, v27);
      if ( (_QWORD)v20 == 0x8000000000000000LL )
        goto LABEL_20;
    }
    v12 = v24;
    ((void (__fastcall *)(_OWORD *, __m256i *, __int64, __int64, __int64, __int64))uu_pr::print_error)(
      v22,
      &v12,
      v7,
      v8,
      v9,
      v10);
    core::ptr::drop_in_place<uu_pr::PrError>(&v12);
    v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    core::ptr::drop_in_place<uu_pr::OutputOptions>(dest);
LABEL_23:
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v13);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(v27);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v22);
    goto LABEL_24;
  }
LABEL_20:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(v27);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v22);
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(v32);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v15);
  return 0LL;
}
