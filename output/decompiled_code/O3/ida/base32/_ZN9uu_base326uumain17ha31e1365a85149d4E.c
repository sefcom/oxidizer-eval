__int64 __fastcall uu_base32::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 supports_fast_decode_and_encode; // r12
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v12; // rsi
  __int128 v13; // kr00_16
  __int64 v14; // rsi
  __int128 v15; // rax
  __int128 v16; // rax
  unsigned int v17; // ebx
  __int128 v18; // kr10_16
  __int64 v19; // rsi
  __int128 v21; // [rsp+0h] [rbp-3E8h] BYREF
  __m256i v22; // [rsp+10h] [rbp-3D8h] BYREF
  __int128 v23; // [rsp+30h] [rbp-3B8h] BYREF
  __int128 v24; // [rsp+40h] [rbp-3A8h]
  __int128 v25; // [rsp+50h] [rbp-398h]
  __int64 v26; // [rsp+60h] [rbp-388h]
  __int128 v27; // [rsp+70h] [rbp-378h] BYREF
  __m256i v28; // [rsp+80h] [rbp-368h]
  _OWORD v29[3]; // [rsp+A0h] [rbp-348h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-318h]
  __int128 v31; // [rsp+D8h] [rbp-310h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-300h]
  _BYTE v33[720]; // [rsp+F0h] [rbp-2F8h] BYREF

  uu_base32::base_common::base_app(v33, aEncodeDecodeDa, 375LL, aOptionFile, 21LL);
  clap_builder::builder::command::Command::try_get_matches_from(&v23, v33, a1, a2);
  if ( (_QWORD)v23 == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v23 + 1));
    v4 = v3;
  }
  else
  {
    v30 = v26;
    v29[2] = v25;
    v29[1] = v24;
    v29[0] = v23;
    uu_base32::base_common::Config::from(&v27, v29);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v29);
    v2 = *((_QWORD *)&v27 + 1);
    v4 = v28.m256i_i64[0];
    if ( (_QWORD)v27 != 2LL )
    {
      v22 = v28;
      v21 = v27;
      uu_base32::base_common::get_input(v33, &v21);
      v2 = *(_QWORD *)&v33[8];
      v4 = *(_QWORD *)&v33[16];
      if ( *(_QWORD *)v33 )
      {
        if ( v22.m256i_i64[0] != 0x8000000000000000LL )
        {
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v22);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22);
        }
      }
      else
      {
        v23 = *(_OWORD *)&v33[8];
        *(__m256i *)&v33[16] = v22;
        *(_OWORD *)v33 = v21;
        supports_fast_decode_and_encode = uu_base32::base_common::get_supports_fast_decode_and_encode(2LL);
        v7 = v6;
        *(_QWORD *)&v29[0] = std::io::stdio::stdout();
        *(_QWORD *)&v27 = std::io::stdio::Stdout::lock(v29);
        if ( v33[40] )
          v8 = uu_base32::base_common::fast_decode::fast_decode(
                 &v23,
                 &v27,
                 supports_fast_decode_and_encode,
                 v7,
                 v33[41]);
        else
          v8 = uu_base32::base_common::fast_encode::fast_encode(
                 (__int64 *)&v23,
                 (__int64)&v27,
                 supports_fast_decode_and_encode,
                 v7,
                 *(__int64 *)v33,
                 *(__int64 *)&v33[8]);
        v2 = v8;
        v4 = v9;
        v10 = v27;
        if ( (*(_DWORD *)(v27 + 12))-- == 1 )
        {
          *(_QWORD *)v10 = 0LL;
          if ( _InterlockedExchange((volatile __int32 *)(v10 + 8), 0) == 2 )
            std::sys::sync::mutex::futex::Mutex::wake(v10 + 8);
        }
        if ( *(_QWORD *)v7 )
          (*(void (__fastcall **)(__int64))v7)(supports_fast_decode_and_encode);
        v12 = *(_QWORD *)(v7 + 8);
        if ( v12 )
          _rust_dealloc(supports_fast_decode_and_encode, v12, *(_QWORD *)(v7 + 16));
        if ( *(_QWORD *)&v33[16] != 0x8000000000000000LL )
        {
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v33[16]);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33[16]);
        }
        v13 = v23;
        if ( **((_QWORD **)&v23 + 1) )
          (**((void (__fastcall ***)(_QWORD))&v23 + 1))(v23);
        v14 = *(_QWORD *)(*((_QWORD *)&v13 + 1) + 8LL);
        if ( v14 )
          _rust_dealloc(v13, v14, *(_QWORD *)(*((_QWORD *)&v13 + 1) + 16LL));
      }
    }
  }
  if ( v2 )
  {
    *(_QWORD *)&v21 = v2;
    *((_QWORD *)&v21 + 1) = v4;
    *(_QWORD *)&v23 = &v21;
    *((_QWORD *)&v23 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)v33 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    *(_QWORD *)&v33[8] = 1LL;
    *(_QWORD *)&v33[32] = 0LL;
    *(_QWORD *)&v33[16] = &v23;
    *(_QWORD *)&v33[24] = 1LL;
    alloc::fmt::format::format_inner(&v31, v33);
    v23 = v31;
    *(_QWORD *)&v24 = v32;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v31 + 1), v32, 1LL, 0LL) )
    {
      *(_QWORD *)&v15 = uucore::util_name();
      v29[0] = v15;
      *(_QWORD *)&v27 = v29;
      *((_QWORD *)&v27 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v33 = &unk_FF038;
      *(_QWORD *)&v33[8] = 2LL;
      *(_QWORD *)&v33[32] = 0LL;
      *(_QWORD *)&v33[16] = &v27;
      *(_QWORD *)&v33[24] = 1LL;
      std::io::stdio::_eprint(v33);
      *(_QWORD *)&v29[0] = &v23;
      *((_QWORD *)&v29[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v33 = &unk_FF058;
      *(_QWORD *)&v33[8] = 2LL;
      *(_QWORD *)&v33[32] = 0LL;
      *(_QWORD *)&v33[16] = v29;
      *(_QWORD *)&v33[24] = 1LL;
      std::io::stdio::_eprint(v33);
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v21 + 1) + 104LL))(v21) )
    {
      *(_QWORD *)&v16 = uucore::execution_phrase();
      v29[0] = v16;
      *(_QWORD *)&v27 = v29;
      *((_QWORD *)&v27 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v33 = &off_FF078;
      *(_QWORD *)&v33[8] = 2LL;
      *(_QWORD *)&v33[32] = 0LL;
      *(_QWORD *)&v33[16] = &v27;
      *(_QWORD *)&v33[24] = 1LL;
      std::io::stdio::_eprint(v33);
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v21 + 1) + 96LL))(v21);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v23);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v23);
    v18 = v21;
    if ( **((_QWORD **)&v21 + 1) )
      (**((void (__fastcall ***)(_QWORD))&v21 + 1))(v21);
    v19 = *(_QWORD *)(*((_QWORD *)&v18 + 1) + 8LL);
    if ( v19 )
      _rust_dealloc(v18, v19, *(_QWORD *)(*((_QWORD *)&v18 + 1) + 16LL));
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return v17;
}
