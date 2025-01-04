__int64 __fastcall uu_tac::tac(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // r13
  char v13; // r14
  char v14; // r12
  __int128 v15; // rax
  __int128 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 (__fastcall **v22)(); // rdx
  __int64 v23; // rbx
  __m256i v25; // [rsp+8h] [rbp-210h] BYREF
  __int128 v26; // [rsp+28h] [rbp-1F0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-1E0h]
  __int128 v28; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-1C8h]
  int v30; // [rsp+64h] [rbp-1B4h]
  __int64 v31; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+70h] [rbp-1A8h]
  __int64 v33; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 (__fastcall **v34)(); // [rsp+80h] [rbp-198h]
  __int64 v35; // [rsp+88h] [rbp-190h] BYREF
  _QWORD v36[2]; // [rsp+90h] [rbp-188h] BYREF
  _QWORD v37[2]; // [rsp+A0h] [rbp-178h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-158h]
  __int64 v40; // [rsp+D0h] [rbp-148h]
  __int64 v41; // [rsp+D8h] [rbp-140h]
  _BYTE v42[24]; // [rsp+E0h] [rbp-138h] BYREF
  __int64 v43; // [rsp+F8h] [rbp-120h]
  __int64 v44; // [rsp+100h] [rbp-118h]
  __m256i v45; // [rsp+190h] [rbp-88h] BYREF
  __int64 v46; // [rsp+1B8h] [rbp-60h]
  _QWORD v47[2]; // [rsp+1C0h] [rbp-58h] BYREF
  __int128 v48; // [rsp+1D0h] [rbp-48h] BYREF
  __int64 v49; // [rsp+1E0h] [rbp-38h]

  v46 = a5;
  if ( a4 )
  {
    regex::regex::bytes::Regex::new(&v25, a5, a6);
    if ( !v25.m256i_i64[0] )
    {
      v43 = v25.m256i_i64[3];
      *(_OWORD *)&v42[8] = *(_OWORD *)&v25.m256i_u64[1];
      *(_QWORD *)v42 = 0x8000000000000000LL;
      return alloc::boxed::Box<T>::new(v42);
    }
    v41 = a6;
    v45 = v25;
  }
  else
  {
    v41 = a6;
    v45.m256i_i64[0] = 0LL;
  }
  v47[0] = a1;
  v47[1] = a1 + 16 * a2;
  v8 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v47);
  if ( !v8 )
  {
LABEL_35:
    core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&v45);
    return 0LL;
  }
  v30 = a3;
  while ( 1 )
  {
    v9 = *v8;
    v10 = v8[1];
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v8, v10, &unk_6D2CA, 1LL) )
      break;
    if ( (unsigned __int8)std::path::Path::is_dir(v9, v10) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, v9, v10);
      v43 = v25.m256i_i64[2];
      *(_OWORD *)&v42[8] = *(_OWORD *)v25.m256i_i8;
      *(_QWORD *)v42 = 0x8000000000000001LL;
      *(_QWORD *)&v26 = alloc::boxed::Box<T>::new(v42);
      *((_QWORD *)&v26 + 1) = &off_2C8B70;
      uucore::mods::error::set_exit_code(1LL);
      *(_QWORD *)&v15 = uucore::util_name();
      v28 = v15;
      v25.m256i_i64[0] = (__int64)&v28;
      v25.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v25.m256i_i64[2] = (__int64)&v26;
      v25.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)v42 = &unk_2C8B08;
      *(_QWORD *)&v42[8] = 3LL;
      v44 = 0LL;
      *(_QWORD *)&v42[16] = &v25;
      v43 = 2LL;
      std::io::stdio::_eprint(v42);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v26, *((_QWORD *)&v26 + 1));
    }
    else
    {
      std::fs::metadata(v42, v9, v10);
      if ( *(_QWORD *)v42 == 2LL )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, *(_QWORD *)&v42[8]);
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, v9, v10);
        v43 = v25.m256i_i64[2];
        *(_OWORD *)&v42[8] = *(_OWORD *)v25.m256i_i8;
        *(_QWORD *)v42 = 0x8000000000000002LL;
        *(_QWORD *)&v26 = alloc::boxed::Box<T>::new(v42);
        *((_QWORD *)&v26 + 1) = &off_2C8B70;
        uucore::mods::error::set_exit_code(1LL);
        *(_QWORD *)&v16 = uucore::util_name();
        v28 = v16;
        v25.m256i_i64[0] = (__int64)&v28;
        v25.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v25.m256i_i64[2] = (__int64)&v26;
        v25.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)v42 = &unk_2C8B08;
        *(_QWORD *)&v42[8] = 3LL;
        v44 = 0LL;
        *(_QWORD *)&v42[16] = &v25;
        v43 = 2LL;
        std::io::stdio::_eprint(v42);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v26, *((_QWORD *)&v26 + 1));
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
          *(_QWORD *)v42,
          *(_QWORD *)&v42[8]);
        uu_tac::try_mmap_path(&v35, v9, v10);
        if ( v35 )
        {
          v11 = v36[0];
          v12 = v36[1];
          goto LABEL_11;
        }
        std::fs::read(&v26, v9, v10);
        if ( (_QWORD)v26 != 0x8000000000000000LL )
        {
          v38 = v26;
          v12 = v27;
          v39 = v27;
          v11 = *((_QWORD *)&v26 + 1);
          v14 = 1;
          if ( v35 )
            core::ptr::drop_in_place<memmap2::Mmap>(v36);
          goto LABEL_22;
        }
        v40 = *((_QWORD *)&v26 + 1);
        v25.m256i_i64[0] = 0LL;
        v25.m256i_i64[1] = v9;
        v25.m256i_i64[2] = v10;
        v25.m256i_i8[24] = 1;
        *(_QWORD *)&v28 = &v25;
        *((_QWORD *)&v28 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v42 = &unk_636B0;
        *(_QWORD *)&v42[8] = 1LL;
        v44 = 0LL;
        *(_QWORD *)&v42[16] = &v28;
        v43 = 1LL;
        core::option::Option<T>::map_or_else(&v48, v42);
        v28 = v48;
        v29 = v49;
        <alloc::string::String as core::clone::Clone>::clone(&v25, &v28);
        *(_QWORD *)&v42[16] = v25.m256i_i64[2];
        *(_OWORD *)v42 = *(_OWORD *)v25.m256i_i8;
        v43 = v40;
        v33 = alloc::boxed::Box<T>::new(v42);
        v34 = &off_2C8B70;
        uucore::mods::error::set_exit_code(1LL);
        v31 = uucore::util_name();
        v32 = v22;
        v25.m256i_i64[0] = (__int64)&v31;
        v25.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v25.m256i_i64[2] = (__int64)&v33;
        v25.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)v42 = &unk_2C8B08;
        *(_QWORD *)&v42[8] = 3LL;
        v44 = 0LL;
        *(_QWORD *)&v42[16] = &v25;
        v43 = 2LL;
        std::io::stdio::_eprint(v42);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v33, v34);
        core::ptr::drop_in_place<alloc::string::String>(&v28);
        core::ptr::drop_in_place<core::option::Option<memmap2::Mmap>>(&v35);
      }
    }
LABEL_7:
    v8 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v47);
    if ( !v8 )
      goto LABEL_35;
  }
  uu_tac::try_mmap_stdin(&v26);
  if ( (_QWORD)v26 )
  {
    v11 = *((_QWORD *)&v26 + 1);
    v12 = v27;
LABEL_11:
    v37[0] = v11;
    v37[1] = v12;
    v13 = 1;
    v14 = 0;
    goto LABEL_23;
  }
  *(_QWORD *)&v28 = 0LL;
  *((_QWORD *)&v28 + 1) = 1LL;
  v29 = 0LL;
  v33 = std::io::stdio::stdin();
  v17 = <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v33, &v28);
  v19 = v18;
  if ( v17 == 1 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, aStdin, 5LL);
    *(_QWORD *)&v42[16] = v25.m256i_i64[2];
    *(_OWORD *)v42 = *(_OWORD *)v25.m256i_i8;
    v43 = v19;
    v31 = alloc::boxed::Box<T>::new(v42);
    v32 = &off_2C8B70;
    uucore::mods::error::set_exit_code(1LL);
    v35 = uucore::util_name();
    v36[0] = v20;
    v25.m256i_i64[0] = (__int64)&v35;
    v25.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    v25.m256i_i64[2] = (__int64)&v31;
    v25.m256i_i64[3] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)v42 = &unk_2C8B08;
    *(_QWORD *)&v42[8] = 3LL;
    v44 = 0LL;
    *(_QWORD *)&v42[16] = &v25;
    v43 = 2LL;
    std::io::stdio::_eprint(v42);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v31, v32);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v28);
    core::ptr::drop_in_place<core::option::Option<memmap2::Mmap>>(&v26);
    goto LABEL_7;
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v17, v18);
  v38 = v28;
  v12 = v29;
  v39 = v29;
  v11 = *((_QWORD *)&v28 + 1);
  v14 = 1;
  if ( (_QWORD)v26 )
    core::ptr::drop_in_place<memmap2::Mmap>((char *)&v26 + 8);
LABEL_22:
  v13 = 0;
LABEL_23:
  if ( v45.m256i_i64[0] )
    v21 = uu_tac::buffer_tac_regex(v11, v12, v45.m256i_i64[0], v45.m256i_i64[1], v30);
  else
    v21 = uu_tac::buffer_tac(v11, v12, v30, v46, v41);
  if ( !v21 )
  {
    if ( v14 )
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v38);
    if ( v13 )
      core::ptr::drop_in_place<memmap2::Mmap>(v37);
    goto LABEL_7;
  }
  *(_QWORD *)&v42[8] = v21;
  *(_QWORD *)v42 = 0x8000000000000004LL;
  v23 = alloc::boxed::Box<T>::new(v42);
  if ( v14 )
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v38);
  if ( v13 )
    core::ptr::drop_in_place<memmap2::Mmap>(v37);
  core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&v45);
  return v23;
}
