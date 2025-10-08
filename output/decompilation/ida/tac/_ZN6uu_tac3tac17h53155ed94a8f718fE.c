__int64 __fastcall uu_tac::tac(__int64 *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // r12
  __int64 *v9; // r15
  __int64 *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int128 v16; // rax
  __int128 v17; // rax
  __int128 v18; // rax
  __int64 v19; // rbx
  __int128 v20; // rax
  __int64 v21; // rsi
  char v22; // bp
  char v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v27; // rbx
  __m256i v28; // [rsp+0h] [rbp-1B8h] BYREF
  __int128 v29; // [rsp+20h] [rbp-198h] BYREF
  __int64 v30; // [rsp+30h] [rbp-188h]
  __int128 v31; // [rsp+38h] [rbp-180h] BYREF
  __int64 v32; // [rsp+48h] [rbp-170h]
  int v33; // [rsp+54h] [rbp-164h]
  __int128 v34; // [rsp+58h] [rbp-160h]
  __int64 v35; // [rsp+68h] [rbp-150h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+70h] [rbp-148h]
  __int128 v37; // [rsp+78h] [rbp-140h] BYREF
  __int64 v38; // [rsp+88h] [rbp-130h]
  _QWORD v39[2]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-118h]
  __int64 v41; // [rsp+A8h] [rbp-110h]
  _BYTE dest[24]; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-F0h]
  __int64 v44; // [rsp+D0h] [rbp-E8h]
  __m256i v45[2]; // [rsp+160h] [rbp-58h] BYREF

  v33 = a3;
  v8 = a1;
  if ( a4 )
  {
    regex::regex::bytes::Regex::new(&v28, a5, a6);
    if ( !v28.m256i_i64[0] )
    {
      v43 = v28.m256i_i64[3];
      *(_OWORD *)&dest[8] = *(_OWORD *)&v28.m256i_u64[1];
      *(_QWORD *)dest = 0x8000000000000000LL;
      return alloc::boxed::Box<T>::new(dest);
    }
    v40 = a5;
    v41 = a6;
    v45[0] = v28;
    if ( !a2 )
    {
LABEL_33:
      core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(v45);
      return 0LL;
    }
  }
  else
  {
    v40 = a5;
    v41 = a6;
    v45[0].m256i_i64[0] = 0LL;
    if ( !a2 )
      goto LABEL_33;
  }
  v9 = &a1[2 * a2];
  v10 = a1 + 2;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *v8;
        v12 = v8[1];
        v8 = v10;
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12) )
          break;
        uu_tac::try_mmap_stdin(dest);
        if ( *(_DWORD *)dest == 1 )
          goto LABEL_21;
        core::ptr::drop_in_place<core::option::Option<memmap2::Mmap>>(dest);
        *(_QWORD *)&v31 = 0LL;
        *((_QWORD *)&v31 + 1) = 1LL;
        v32 = 0LL;
        v35 = std::io::stdio::stdin();
        v13 = <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v35, &v31);
        v15 = v14;
        if ( (v13 & 1) == 0 )
        {
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v13, v14);
          v19 = *((_QWORD *)&v31 + 1);
          v34 = v31;
          v21 = v32;
          v23 = 1;
          v22 = 0;
          v24 = v45[0].m256i_i64[0];
          if ( v45[0].m256i_i64[0] )
            goto LABEL_24;
          goto LABEL_26;
        }
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, aStdin, 5LL);
        *(_QWORD *)&dest[16] = v28.m256i_i64[2];
        *(_OWORD *)dest = *(_OWORD *)v28.m256i_i8;
        v43 = v15;
        *(_QWORD *)&v37 = alloc::boxed::Box<T>::new(dest);
        *((_QWORD *)&v37 + 1) = &off_233B90;
        uucore::mods::error::set_exit_code(1LL);
        *(_QWORD *)&v16 = uucore::util_name();
        v29 = v16;
        v28.m256i_i64[0] = (__int64)&v29;
        v28.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v28.m256i_i64[2] = (__int64)&v37;
        v28.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)dest = &unk_233B40;
        *(_QWORD *)&dest[8] = 3LL;
        v44 = 0LL;
        *(_QWORD *)&dest[16] = &v28;
        v43 = 2LL;
        std::io::stdio::_eprint(dest);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
          v37,
          *((_QWORD *)&v37 + 1));
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v31, *((_QWORD *)&v31 + 1));
        v10 = v8 + 2;
        if ( v8 == v9 )
          goto LABEL_33;
      }
      if ( !(unsigned __int8)std::path::Path::is_dir(v11, v12) )
        break;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, v11, v12);
      v43 = v28.m256i_i64[2];
      *(_OWORD *)&dest[8] = *(_OWORD *)v28.m256i_i8;
      *(_QWORD *)dest = 0x8000000000000001LL;
      *(_QWORD *)&v29 = alloc::boxed::Box<T>::new(dest);
      *((_QWORD *)&v29 + 1) = &off_233B90;
      uucore::mods::error::set_exit_code(1LL);
      *(_QWORD *)&v17 = uucore::util_name();
      v31 = v17;
      v28.m256i_i64[0] = (__int64)&v31;
      v28.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v28.m256i_i64[2] = (__int64)&v29;
      v28.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_233B40;
      *(_QWORD *)&dest[8] = 3LL;
      v44 = 0LL;
      *(_QWORD *)&dest[16] = &v28;
      v43 = 2LL;
      std::io::stdio::_eprint(dest);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
        v29,
        *((_QWORD *)&v29 + 1));
LABEL_19:
      v10 = v8 + 2;
      if ( v8 == v9 )
        goto LABEL_33;
    }
    std::fs::metadata(dest);
    if ( *(_QWORD *)dest == 2LL )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, *(_QWORD *)&dest[8]);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, v11, v12);
      v43 = v28.m256i_i64[2];
      *(_OWORD *)&dest[8] = *(_OWORD *)v28.m256i_i8;
      *(_QWORD *)dest = 0x8000000000000002LL;
      *(_QWORD *)&v29 = alloc::boxed::Box<T>::new(dest);
      *((_QWORD *)&v29 + 1) = &off_233B90;
      uucore::mods::error::set_exit_code(1LL);
      *(_QWORD *)&v18 = uucore::util_name();
      v31 = v18;
      v28.m256i_i64[0] = (__int64)&v31;
      v28.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v28.m256i_i64[2] = (__int64)&v29;
      v28.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_233B40;
      *(_QWORD *)&dest[8] = 3LL;
      v44 = 0LL;
      *(_QWORD *)&dest[16] = &v28;
      v43 = 2LL;
      std::io::stdio::_eprint(dest);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
        v29,
        *((_QWORD *)&v29 + 1));
      goto LABEL_19;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
      *(_QWORD *)dest,
      *(_QWORD *)&dest[8]);
    uu_tac::try_mmap_path(dest, v11, v12);
    if ( *(_DWORD *)dest == 1 )
    {
LABEL_21:
      v19 = *(_QWORD *)&dest[8];
      v21 = *(_QWORD *)&dest[16];
      v39[0] = *(_QWORD *)&dest[8];
      v39[1] = *(_QWORD *)&dest[16];
      v22 = 1;
      v23 = 0;
      v24 = v45[0].m256i_i64[0];
      if ( v45[0].m256i_i64[0] )
        goto LABEL_24;
      goto LABEL_26;
    }
    core::ptr::drop_in_place<core::option::Option<memmap2::Mmap>>(dest);
    std::fs::read(&v37, v11, v12);
    v19 = *((_QWORD *)&v37 + 1);
    if ( (_QWORD)v37 == 0x8000000000000000LL )
    {
      v28.m256i_i64[0] = 0LL;
      v28.m256i_i64[1] = v11;
      v28.m256i_i64[2] = v12;
      v28.m256i_i8[24] = 1;
      *(_QWORD *)&v29 = &v28;
      *((_QWORD *)&v29 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_51860;
      *(_QWORD *)&dest[8] = 1LL;
      v44 = 0LL;
      *(_QWORD *)&dest[16] = &v29;
      v43 = 1LL;
      core::option::Option<T>::map_or_else(&v31, dest);
      v29 = v31;
      v30 = v32;
      <alloc::string::String as core::clone::Clone>::clone(&v28, &v29);
      *(_QWORD *)&dest[16] = v28.m256i_i64[2];
      *(_OWORD *)dest = *(_OWORD *)v28.m256i_i8;
      v43 = v19;
      v35 = alloc::boxed::Box<T>::new(dest);
      v36 = &off_233B90;
      uucore::mods::error::set_exit_code(1LL);
      *(_QWORD *)&v20 = uucore::util_name();
      v31 = v20;
      v28.m256i_i64[0] = (__int64)&v31;
      v28.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v28.m256i_i64[2] = (__int64)&v35;
      v28.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_233B40;
      *(_QWORD *)&dest[8] = 3LL;
      v44 = 0LL;
      *(_QWORD *)&dest[16] = &v28;
      v43 = 2LL;
      std::io::stdio::_eprint(dest);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v35, v36);
      core::ptr::drop_in_place<alloc::string::String>(&v29);
      goto LABEL_19;
    }
    v21 = v38;
    v23 = 1;
    v22 = 0;
    v34 = v37;
    v24 = v45[0].m256i_i64[0];
    if ( v45[0].m256i_i64[0] )
    {
LABEL_24:
      v25 = uu_tac::buffer_tac_regex(v19, v21, v24, v45[0].m256i_i64[1], v33);
      goto LABEL_27;
    }
LABEL_26:
    v25 = uu_tac::buffer_tac(v19, v21, v33, v40, v41);
LABEL_27:
    if ( v25 )
      break;
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0LL);
    if ( v23 )
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v34, *((_QWORD *)&v34 + 1));
    if ( v22 )
      core::ptr::drop_in_place<memmap2::Mmap>(v39);
    v10 = &v8[2 * (unsigned int)(v8 != v9)];
    if ( v8 == v9 )
      goto LABEL_33;
  }
  *(_QWORD *)&dest[8] = v25;
  *(_QWORD *)dest = 0x8000000000000004LL;
  v27 = alloc::boxed::Box<T>::new(dest);
  if ( v23 )
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v34, *((_QWORD *)&v34 + 1));
  if ( v22 )
    core::ptr::drop_in_place<memmap2::Mmap>(v39);
  core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(v45);
  return v27;
}