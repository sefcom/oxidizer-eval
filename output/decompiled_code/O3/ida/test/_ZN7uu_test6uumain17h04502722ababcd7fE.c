__int64 __fastcall uu_test::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r15
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 (__fastcall **v11)(); // rdx
  __int8 v12; // cl
  _OWORD *v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rax
  _OWORD *v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // rax
  __int128 v20; // rax
  __int128 v21; // kr00_16
  __int64 v22; // rsi
  __int128 v24; // [rsp+0h] [rbp-3D8h] BYREF
  __int64 v25; // [rsp+10h] [rbp-3C8h]
  __int128 v26; // [rsp+18h] [rbp-3C0h] BYREF
  __int64 v27; // [rsp+28h] [rbp-3B0h]
  __m256i v28; // [rsp+30h] [rbp-3A8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-388h]
  __int64 v30; // [rsp+58h] [rbp-380h]
  __int64 v31; // [rsp+60h] [rbp-378h]
  _OWORD v32[2]; // [rsp+70h] [rbp-368h]
  __int64 v33; // [rsp+90h] [rbp-348h] BYREF
  __int64 v34; // [rsp+98h] [rbp-340h]
  __int128 v35; // [rsp+A0h] [rbp-338h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-328h]
  __int128 v37; // [rsp+D8h] [rbp-300h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-2F0h]
  __m256i v39; // [rsp+F0h] [rbp-2E8h] BYREF
  __int64 v40; // [rsp+110h] [rbp-2C8h]

  v33 = a1;
  v34 = a2;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v39, &v33);
  if ( v39.m256i_i64[0] == 0x8000000000000000LL )
  {
    std::sys::os_str::bytes::Slice::to_owned(&v24, aTest, 4LL);
  }
  else
  {
    v25 = v39.m256i_i64[2];
    v24 = *(_OWORD *)v39.m256i_i8;
  }
  v2 = uucore::util_name();
  v4 = v3;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v26, v33, v34);
  v39.m256i_i32[0] = 91;
  if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(v2, v4, &v39, 1LL) )
    goto LABEL_17;
  v5 = v27;
  if ( v27 == 1 )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(*((_QWORD *)&v26 + 1) + 8LL),
                            *(_QWORD *)(*((_QWORD *)&v26 + 1) + 16LL),
                            aHelp,
                            6LL) )
      goto LABEL_9;
    if ( !v27 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_DF4E8);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(*((_QWORD *)&v26 + 1) + 8LL),
                            *(_QWORD *)(*((_QWORD *)&v26 + 1) + 16LL),
                            aVersion,
                            9LL) )
    {
LABEL_9:
      uu_test::uu_app(&v39);
      v28.m256i_i64[2] = v25;
      *(_OWORD *)v28.m256i_i8 = v24;
      v28.m256i_i64[3] = *((_QWORD *)&v26 + 1);
      v29 = *((_QWORD *)&v26 + 1);
      v30 = v26;
      v31 = *((_QWORD *)&v26 + 1) + 24 * v27;
      clap_builder::builder::command::Command::get_matches_from(&v35, &v39, &v28);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v35);
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
    v5 = v27;
  }
  if ( v5 )
  {
    v27 = v5 - 1;
    v7 = 3 * (v5 - 1);
    v8 = *(_QWORD *)(*((_QWORD *)&v26 + 1) + 8 * v7 + 16);
    *(_OWORD *)v28.m256i_i8 = *(_OWORD *)(*((_QWORD *)&v26 + 1) + 8 * v7);
    v28.m256i_i64[2] = v8;
    if ( v28.m256i_i64[0] != 0x8000000000000000LL
      && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v28.m256i_i64[1],
                            v28.m256i_i64[2],
                            asc_101AD,
                            1LL) )
    {
      if ( v28.m256i_i64[0] != 0x8000000000000000LL )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v28);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
      }
LABEL_17:
      v39.m256i_i64[2] = v27;
      *(_OWORD *)v39.m256i_i8 = v26;
      uu_test::parser::parse(&v28, &v39);
      v9 = v28.m256i_i64[0];
      if ( v28.m256i_i64[0] == 7 )
      {
        v36 = v28.m256i_i64[3];
        v35 = *(_OWORD *)&v28.m256i_u64[1];
        uu_test::eval(&v39, &v35);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v35);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35);
        v32[0] = *(_OWORD *)((char *)&v39.m256i_u64[1] + 1);
        *(_QWORD *)((char *)v32 + 15) = v39.m256i_i64[3];
        *(_OWORD *)v28.m256i_i8 = v32[0];
        *(__int64 *)((char *)&v28.m256i_i64[1] + 7) = v39.m256i_i64[3];
        if ( v39.m256i_i64[0] == 7 )
        {
          if ( (v39.m256i_i8[8] & 1) != 0 )
          {
            v10 = 0LL;
          }
          else
          {
            v10 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
            v4 = v11;
          }
          goto LABEL_31;
        }
        v39.m256i_i64[3] = *(__int64 *)((char *)&v28.m256i_i64[1] + 7);
        *(_OWORD *)((char *)&v39.m256i_u64[1] + 1) = *(_OWORD *)v28.m256i_i8;
        v13 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v13 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
      }
      else
      {
        v12 = v28.m256i_i8[8];
        v32[0] = *(_OWORD *)((char *)&v28.m256i_u64[1] + 1);
        *(_QWORD *)((char *)v32 + 15) = v28.m256i_i64[3];
        *(_OWORD *)v28.m256i_i8 = v32[0];
        *(__int64 *)((char *)&v28.m256i_i64[1] + 7) = v28.m256i_i64[3];
        v39.m256i_i64[3] = v28.m256i_i64[3];
        *(_OWORD *)((char *)&v39.m256i_u64[1] + 1) = *(_OWORD *)v28.m256i_i8;
        v39.m256i_i64[0] = v9;
        v39.m256i_i8[8] = v12;
        v13 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v13 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
      }
      v10 = (__int64)v13;
      v14 = *(_OWORD *)v39.m256i_i8;
      v13[1] = *(_OWORD *)&v39.m256i_u64[2];
      *v13 = v14;
      v4 = &off_DF538;
      goto LABEL_31;
    }
  }
  else
  {
    v28.m256i_i64[0] = 0x8000000000000000LL;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v39, 11LL, 0LL);
  v15 = v39.m256i_i64[1];
  if ( v39.m256i_i64[0] )
    alloc::raw_vec::handle_error(v39.m256i_i64[1], v39.m256i_i64[2]);
  v16 = v39.m256i_i64[2];
  *(_QWORD *)v39.m256i_i64[2] = 0x20676E697373696DLL;
  *(_DWORD *)(v16 + 7) = 660416288;
  v39.m256i_i32[6] = 2;
  v39.m256i_i64[0] = v15;
  v39.m256i_i64[1] = v16;
  v39.m256i_i64[2] = 11LL;
  v17 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v17 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v10 = (__int64)v17;
  v18 = *(_OWORD *)v39.m256i_i8;
  v17[1] = *(_OWORD *)&v39.m256i_u64[2];
  *v17 = v18;
  if ( v28.m256i_i64[0] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v28);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
  }
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v26);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26);
  v4 = &off_DF5E0;
LABEL_31:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v24);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v24);
  if ( !v10 )
    return (unsigned int)uucore::mods::error::get_exit_code();
  *(_QWORD *)&v24 = v10;
  *((_QWORD *)&v24 + 1) = v4;
  v28.m256i_i64[0] = (__int64)&v24;
  v28.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v39.m256i_i64[0] = (__int64)&unk_FF60;
  v39.m256i_i64[1] = 1LL;
  v40 = 0LL;
  v39.m256i_i64[2] = (__int64)&v28;
  v39.m256i_i64[3] = 1LL;
  alloc::fmt::format::format_inner(&v37, &v39);
  *(_OWORD *)v28.m256i_i8 = v37;
  v28.m256i_i64[2] = v38;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v37 + 1), v38, 1LL, 0LL) )
  {
    *(_QWORD *)&v19 = uucore::util_name();
    v35 = v19;
    *(_QWORD *)&v26 = &v35;
    *((_QWORD *)&v26 + 1) = <&T as core::fmt::Display>::fmt;
    v39.m256i_i64[0] = (__int64)&unk_DF488;
    v39.m256i_i64[1] = 2LL;
    v40 = 0LL;
    v39.m256i_i64[2] = (__int64)&v26;
    v39.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v39);
    *(_QWORD *)&v35 = &v28;
    *((_QWORD *)&v35 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v39.m256i_i64[0] = (__int64)&unk_DF4A8;
    v39.m256i_i64[1] = 2LL;
    v40 = 0LL;
    v39.m256i_i64[2] = (__int64)&v35;
    v39.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v39);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v24 + 1) + 104LL))(v24) )
  {
    *(_QWORD *)&v20 = uucore::execution_phrase();
    v35 = v20;
    *(_QWORD *)&v26 = &v35;
    *((_QWORD *)&v26 + 1) = <&T as core::fmt::Display>::fmt;
    v39.m256i_i64[0] = (__int64)&off_DF4C8;
    v39.m256i_i64[1] = 2LL;
    v40 = 0LL;
    v39.m256i_i64[2] = (__int64)&v26;
    v39.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v39);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v24 + 1) + 96LL))(v24);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v28);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
  v21 = v24;
  if ( **((_QWORD **)&v24 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v24 + 1))(v24);
  v22 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL);
  if ( v22 )
    _rust_dealloc(v21, v22, *(_QWORD *)(*((_QWORD *)&v21 + 1) + 16LL));
  return v6;
}
