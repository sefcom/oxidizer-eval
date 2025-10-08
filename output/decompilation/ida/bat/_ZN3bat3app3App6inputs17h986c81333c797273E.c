__int64 __fastcall bat::app::App::inputs(__int64 a1, __int64 a2)
{
  void *v2; // r14
  _OWORD *v3; // r15
  unsigned __int64 v4; // rcx
  bool v5; // r12
  __int64 v6; // rbp
  __int64 (__fastcall **v7)(); // rbx
  char v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rax
  void *v14; // r14
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  char v18; // [rsp+Ch] [rbp-20Ch]
  unsigned __int64 v19; // [rsp+10h] [rbp-208h]
  __int128 v20; // [rsp+18h] [rbp-200h]
  __int64 v21; // [rsp+28h] [rbp-1F0h]
  __int128 v23; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-1D0h]
  _OWORD src[10]; // [rsp+50h] [rbp-1C8h] BYREF
  _QWORD v26[3]; // [rsp+F0h] [rbp-128h] BYREF
  int v27; // [rsp+108h] [rbp-110h] BYREF
  __int64 v28; // [rsp+110h] [rbp-108h]
  __int64 v29; // [rsp+118h] [rbp-100h]
  _BYTE v30[56]; // [rsp+130h] [rbp-E8h] BYREF
  _QWORD v31[8]; // [rsp+168h] [rbp-B0h] BYREF
  _QWORD v32[14]; // [rsp+1A8h] [rbp-70h] BYREF

  v2 = &unk_85489;
  v3 = src;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, &unk_85489, 9LL);
  clap_builder::parser::error::MatchesError::unwrap(v31, &unk_85489, 9LL, src);
  if ( v31[0] )
  {
    core::iter::traits::iterator::Iterator::collect(src, v31);
    v21 = *((_QWORD *)&src[0] + 1);
    v19 = *(_QWORD *)&src[0];
    v2 = *(void **)&src[1];
  }
  else
  {
    v19 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, a2, aFile_1, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(v32, aFile_1, 4LL, src);
  if ( !v32[0] )
  {
    v5 = 1;
    *(_QWORD *)&v20 = 0x8000000000000000LL;
    v4 = v19;
    if ( v19 != 0x8000000000000000LL )
      goto LABEL_23;
    goto LABEL_9;
  }
  core::iter::traits::iterator::Iterator::collect(src, v32);
  v3 = *(_OWORD **)&src[1];
  v4 = v19;
  v20 = src[0];
  v5 = *(_QWORD *)&src[0] == 0x8000000000000000LL;
  if ( *(_QWORD *)&src[0] == 0x8000000000000000LL || v19 == 0x8000000000000000LL )
  {
    if ( v19 != 0x8000000000000000LL )
      goto LABEL_23;
LABEL_9:
    v6 = alloc::boxed::Box<T>::new();
    v18 = 1;
    v7 = (__int64 (__fastcall **)())&unk_6C83F0;
    v8 = 1;
    if ( v5 )
      goto LABEL_24;
    goto LABEL_10;
  }
  if ( v2 != *(void **)&src[1] )
  {
    <bat::error::Error as core::convert::From<&str>>::from(src, aMustBeOneFileN, 37LL);
    *(_OWORD *)(a1 + 64) = src[4];
    v15 = src[0];
    v16 = src[1];
    v17 = src[2];
    *(_OWORD *)(a1 + 48) = src[3];
    *(_OWORD *)(a1 + 32) = v17;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
    core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<&std::path::Path>>>(v20, *((_QWORD *)&v20 + 1));
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v19, v21);
  }
  v4 = v19;
LABEL_23:
  v26[0] = v4;
  v26[1] = v21;
  v26[2] = v2;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, v26);
  v6 = alloc::boxed::Box<T>::new(src);
  v7 = &off_6C8428;
  v18 = 0;
  v8 = 0;
  if ( v5 )
  {
LABEL_24:
    v13 = alloc::alloc::Global::alloc_impl(8LL, 160LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 160LL);
    v14 = (void *)v13;
    ((void (__fastcall *)(_OWORD *, __int64))v7[3])(src, v6);
    bat::input::new_stdin_input(src);
    memcpy(v14, src, 0xA0uLL);
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 24) = 1LL;
    *(_BYTE *)a1 = 13;
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v6, v7);
    result = core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<&std::path::Path>>>(
               v20,
               *((_QWORD *)&v20 + 1));
    if ( v8 || !v18 )
      return result;
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v19, v21);
  }
LABEL_10:
  v9 = alloc::boxed::Box<T>::new(*((_QWORD *)&v20 + 1), *((_QWORD *)&v20 + 1) + 16LL * (_QWORD)v3);
  *(_QWORD *)&v23 = 0LL;
  *((_QWORD *)&v23 + 1) = 8LL;
  v24 = 0LL;
  core::iter::traits::iterator::Iterator::zip(v30, v9, &unk_6C8460, v6, v7);
  while ( 1 )
  {
    <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v27, v30);
    if ( v27 != 1 )
      break;
    if ( v28 )
    {
      core::str::converts::from_utf8(src, v28, v29);
      v10 = *(_QWORD *)&src[1];
      if ( LOBYTE(src[0]) )
        v10 = 0LL;
      v11 = *((_QWORD *)&src[0] + 1);
      if ( LOBYTE(src[0]) )
        v11 = 1LL;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v10, asc_85492, 1LL) )
      {
        bat::input::new_stdin_input(src);
        alloc::vec::Vec<T,A>::push(&v23, src, &off_6C84B0);
      }
      else
      {
        bat::input::new_file_input(src);
        alloc::vec::Vec<T,A>::push(&v23, src, &off_6C8498);
      }
    }
  }
  core::ptr::drop_in_place<core::iter::adapters::zip::Zip<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = core::option::Option<&std::path::Path>>,alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = core::option::Option<&std::path::Path>>>>(v30);
  *(_QWORD *)(a1 + 24) = v24;
  *(_OWORD *)(a1 + 8) = v23;
  *(_BYTE *)a1 = 13;
  return core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<&std::path::Path>>>(v20, *((_QWORD *)&v20 + 1));
}