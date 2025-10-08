__int64 __fastcall uu_mkfifo::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // r15
  const char *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r15
  int v12; // ebx
  unsigned int v13; // eax
  __int64 (__fastcall *v14)(); // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // [rsp+0h] [rbp-488h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+8h] [rbp-480h]
  _BYTE v19[24]; // [rsp+10h] [rbp-478h] BYREF
  __m256i *v20; // [rsp+28h] [rbp-460h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+30h] [rbp-458h]
  __int64 *v22; // [rsp+38h] [rbp-450h]
  __int64 (__fastcall *v23)(); // [rsp+40h] [rbp-448h]
  __m256i v24; // [rsp+48h] [rbp-440h] BYREF
  __int128 v25; // [rsp+68h] [rbp-420h]
  __int64 v26; // [rsp+78h] [rbp-410h]
  __int128 v27; // [rsp+80h] [rbp-408h] BYREF
  __int64 v28; // [rsp+90h] [rbp-3F8h]
  _BYTE v29[32]; // [rsp+98h] [rbp-3F0h] BYREF
  __m256i v30; // [rsp+B8h] [rbp-3D0h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-3B0h]
  __int64 v32; // [rsp+E8h] [rbp-3A0h]
  __int128 v33; // [rsp+F0h] [rbp-398h] BYREF
  __m256i *v34; // [rsp+100h] [rbp-388h]
  __int128 v35; // [rsp+108h] [rbp-380h] BYREF
  __m256i *v36; // [rsp+118h] [rbp-370h]
  __int128 v37; // [rsp+120h] [rbp-368h] BYREF
  __m256i *v38; // [rsp+130h] [rbp-358h]
  _BYTE v39[24]; // [rsp+138h] [rbp-350h] BYREF
  __int128 dest; // [rsp+150h] [rbp-338h] BYREF
  __m256i *v41; // [rsp+160h] [rbp-328h]
  __int64 v42; // [rsp+168h] [rbp-320h]
  __int64 v43; // [rsp+170h] [rbp-318h]
  _QWORD v44[14]; // [rsp+418h] [rbp-70h] BYREF

  uu_mkfifo::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v24, &dest, a1, a2);
  if ( __OFSUB__(-v24.m256i_i64[0], 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v24.m256i_i64[1],
             &dest,
             v2,
             -v24.m256i_i64[0]);
  v32 = v26;
  v31 = v25;
  v30 = v24;
  v4 = (__int64)*(&uu_mkfifo::options::MODE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, &v30, aMode_0, v4);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aMode_0, v4, &dest);
  if ( v5 )
  {
    core::num::<impl usize>::from_ascii_radix(&v20, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
    if ( (_BYTE)v20 )
    {
      v29[0] = BYTE1(v20);
      v24.m256i_i64[0] = (__int64)v29;
      v24.m256i_i64[1] = (__int64)<core::num::error::ParseIntError as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_DD9B0;
      *((_QWORD *)&dest + 1) = 1LL;
      v43 = 0LL;
      v41 = &v24;
      v42 = 1LL;
      core::option::Option<T>::map_or_else(&v33, &dest);
      LODWORD(v42) = 1;
      dest = v33;
      v41 = v34;
      v6 = alloc::boxed::Box<T>::new(&dest);
LABEL_16:
      v16 = v6;
      goto LABEL_17;
    }
    v7 = (unsigned int)v21;
  }
  else
  {
    v7 = ~(unsigned __int16)uucore::features::mode::get_umask() & 0x1B6;
  }
  v8 = (__int64)*(&uu_mkfifo::options::FIFO + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, &v30, aFifo, v8);
  clap_builder::parser::error::MatchesError::unwrap(v44, aFifo, v8, &dest);
  if ( !v44[0] )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v24, aMissingOperand, 15LL);
    v41 = (__m256i *)v24.m256i_i64[2];
    dest = *(_OWORD *)v24.m256i_i8;
    LODWORD(v42) = 1;
    v6 = alloc::boxed::Box<T>::new(&dest);
    goto LABEL_16;
  }
  core::iter::traits::iterator::Iterator::collect(v39, v44);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v29, v39);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v27, v29);
  if ( (_QWORD)v27 == 0x8000000000000000LL )
  {
LABEL_14:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v29);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v30);
    return 0LL;
  }
  while ( 1 )
  {
    *(_QWORD *)&v19[16] = v28;
    *(_OWORD *)v19 = v27;
    <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&dest, *((_QWORD *)&v27 + 1));
    v9 = (const char *)core::result::Result<T,E>::unwrap(&dest);
    v11 = v10;
    v12 = mkfifo(v9, 0x1B6u);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v9, v11);
    if ( v12 == -1 )
    {
      v24.m256i_i64[0] = 0LL;
      *(_OWORD *)&v24.m256i_u64[1] = *(_OWORD *)&v19[8];
      v24.m256i_i8[24] = 1;
      v20 = &v24;
      v21 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_DD9C0;
      *((_QWORD *)&dest + 1) = 2LL;
      v43 = 0LL;
      v41 = (__m256i *)&v20;
      v42 = 1LL;
      core::option::Option<T>::map_or_else(&v35, &dest);
      LODWORD(v42) = 1;
      dest = v35;
      v41 = v36;
      v17 = alloc::boxed::Box<T>::new(&dest);
      v18 = &off_DDA50;
      v13 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v17);
      uucore::mods::error::set_exit_code(v13);
      v20 = (__m256i *)uucore::util_name();
      v21 = v14;
      v24.m256i_i64[0] = (__int64)&v20;
      v24.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v24.m256i_i64[2] = (__int64)&v17;
      v24.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_DD9E0;
      *((_QWORD *)&dest + 1) = 3LL;
      v43 = 0LL;
      v41 = &v24;
      v42 = 2LL;
      std::io::stdio::_eprint(&dest);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v17, v18);
    }
    v15 = std::fs::set_permissions(v19, v7);
    if ( v15 )
      break;
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0LL);
    core::ptr::drop_in_place<alloc::string::String>(*(_QWORD *)v19, *(_QWORD *)&v19[8]);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v27, v29);
    if ( (_QWORD)v27 == 0x8000000000000000LL )
      goto LABEL_14;
  }
  v17 = v15;
  v24.m256i_i64[0] = 0LL;
  *(_OWORD *)&v24.m256i_u64[1] = *(_OWORD *)&v19[8];
  v24.m256i_i8[24] = 1;
  v20 = &v24;
  v21 = <os_display::Quoted as core::fmt::Display>::fmt;
  v22 = &v17;
  v23 = <std::io::error::Error as core::fmt::Display>::fmt;
  *(_QWORD *)&dest = &off_DDA10;
  *((_QWORD *)&dest + 1) = 2LL;
  v43 = 0LL;
  v41 = (__m256i *)&v20;
  v42 = 2LL;
  core::option::Option<T>::map_or_else(&v37, &dest);
  LODWORD(v42) = 1;
  dest = v37;
  v41 = v38;
  v16 = alloc::boxed::Box<T>::new(&dest);
  core::ptr::drop_in_place<std::io::error::Error>(v17);
  core::ptr::drop_in_place<alloc::string::String>(*(_QWORD *)v19, *(_QWORD *)&v19[8]);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v29);
LABEL_17:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v30);
  return v16;
}