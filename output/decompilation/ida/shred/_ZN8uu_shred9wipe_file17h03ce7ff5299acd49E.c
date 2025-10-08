__int64 __fastcall uu_shred::wipe_file(
        __int64 (__fastcall *a1)(),
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        char a8,
        unsigned __int8 a9,
        char a10)
{
  __int64 v11; // r12
  __int64 (__fastcall *v12)(); // r13
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  __int64 v19; // rbp
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // rbp
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r12
  bool v28; // cf
  unsigned int v29; // eax
  unsigned __int64 v30; // r15
  unsigned int v31; // eax
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 (__fastcall *v40)(); // rdx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 (__fastcall *v44)(); // rdx
  unsigned int v45; // [rsp+Ch] [rbp-26Ch] BYREF
  __int64 v46; // [rsp+10h] [rbp-268h] BYREF
  __int64 v47; // [rsp+18h] [rbp-260h]
  unsigned __int64 v48; // [rsp+20h] [rbp-258h]
  int v49; // [rsp+2Ch] [rbp-24Ch] BYREF
  __int64 v50; // [rsp+30h] [rbp-248h]
  __int64 *v51; // [rsp+38h] [rbp-240h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+40h] [rbp-238h]
  __int64 v53; // [rsp+48h] [rbp-230h]
  char v54; // [rsp+50h] [rbp-228h]
  int v55; // [rsp+5Ch] [rbp-21Ch]
  __int64 v56; // [rsp+60h] [rbp-218h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+68h] [rbp-210h]
  __int64 v58; // [rsp+70h] [rbp-208h]
  char v59; // [rsp+78h] [rbp-200h]
  __int64 v60; // [rsp+80h] [rbp-1F8h]
  unsigned __int64 v61; // [rsp+88h] [rbp-1F0h]
  __int64 v62; // [rsp+90h] [rbp-1E8h] BYREF
  int v63; // [rsp+98h] [rbp-1E0h]
  __int64 v64; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 (__fastcall **v65)(); // [rsp+A8h] [rbp-1D0h]
  __int64 dest; // [rsp+B8h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v67)(); // [rsp+C0h] [rbp-1B8h]
  __int128 v68; // [rsp+C8h] [rbp-1B0h]
  __int128 v69; // [rsp+D8h] [rbp-1A0h]
  __int128 v70; // [rsp+E8h] [rbp-190h]
  __int128 v71; // [rsp+F8h] [rbp-180h]
  __int128 v72; // [rsp+108h] [rbp-170h]
  __int64 v73; // [rsp+118h] [rbp-160h]
  unsigned __int64 v74; // [rsp+120h] [rbp-158h]
  __int64 (__fastcall *v75)(); // [rsp+168h] [rbp-110h]
  __int64 v76; // [rsp+170h] [rbp-108h]
  __int64 v77; // [rsp+178h] [rbp-100h]
  __int64 v78; // [rsp+180h] [rbp-F8h]
  unsigned __int64 v79; // [rsp+188h] [rbp-F0h] BYREF
  __int64 v80; // [rsp+190h] [rbp-E8h] BYREF
  __int64 **v81; // [rsp+198h] [rbp-E0h] BYREF
  __int64 (__fastcall *v82)(); // [rsp+1A0h] [rbp-D8h]
  __int64 *p_dest; // [rsp+1A8h] [rbp-D0h]
  __int64 (__fastcall *v84)(); // [rsp+1B0h] [rbp-C8h]
  __int64 v85; // [rsp+1B8h] [rbp-C0h]
  unsigned int v86; // [rsp+1D0h] [rbp-A8h]
  __int64 v87; // [rsp+1E8h] [rbp-90h]

  v78 = a6;
  v77 = a5;
  v55 = a4;
  v11 = a2;
  v12 = a1;
  std::fs::metadata(&dest);
  v13 = dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, a1);
  if ( v13 == 2 )
  {
    v56 = 1LL;
    v57 = a1;
    v58 = a2;
    v59 = 0;
    v51 = &v56;
    v52 = <os_display::Quoted as core::fmt::Display>::fmt;
    v18 = &unk_F9FD8;
LABEL_7:
    dest = (__int64)v18;
    v67 = (__int64 (__fastcall *)())(&dword_0 + 2);
    *(_QWORD *)&v69 = 0LL;
    *(_QWORD *)&v68 = &v51;
    *((_QWORD *)&v68 + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v81, &dest, v14, v15, v16, v17);
    LODWORD(v84) = 1;
    return alloc::boxed::Box<T>::new(&v81);
  }
  if ( !(unsigned __int8)std::path::Path::is_file(a1, a2) )
  {
    v56 = 1LL;
    v57 = a1;
    v58 = a2;
    v59 = 0;
    v51 = &v56;
    v52 = <os_display::Quoted as core::fmt::Display>::fmt;
    v18 = &unk_F9FF8;
    goto LABEL_7;
  }
  std::fs::metadata(&dest);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v81,
    &dest);
  if ( (_DWORD)v81 == 2 )
    return (__int64)v82;
  v50 = v87;
  if ( !a10 )
    goto LABEL_14;
  v21 = 128LL;
  if ( (v86 & 0x80u) != 0 )
    v21 = v86;
  v22 = std::fs::set_permissions(a1, a2, v21);
  v23 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v22);
  if ( v23 )
    return v23;
LABEL_14:
  v46 = 0LL;
  v47 = 1LL;
  v48 = 0LL;
  if ( v50 )
  {
    if ( a3 > 3 )
    {
      alloc::vec::Vec<T,A>::push(&v46, 2LL, &off_FA120);
      v75 = a1;
      v76 = a2;
      v25 = core::cmp::Ord::max(a3 / 0xA, 3LL);
      v26 = a3 - v25;
      v61 = v26 / 0x16;
      if ( v26 >= 0x16 )
      {
        v27 = 1LL;
        do
        {
          dest = 0LL;
          v67 = (__int64 (__fastcall *)())(&dword_14 + 2);
          v72 = xmmword_1AC10;
          v71 = xmmword_1AC00;
          v70 = xmmword_1ABF0;
          v69 = xmmword_1ABE0;
          v68 = xmmword_1ABD0;
          v73 = 0xEE000000DD00LL;
          while ( 1 )
          {
            v29 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&dest);
            if ( (_BYTE)v29 == 2 )
              break;
            alloc::vec::Vec<T,A>::push(&v46, v29, &off_FA198);
          }
          v28 = v27 < v61;
          v27 += v27 < v61;
        }
        while ( v28 );
      }
      dest = 0LL;
      v67 = (__int64 (__fastcall *)())(&dword_14 + 2);
      v68 = xmmword_1ABD0;
      v69 = xmmword_1ABE0;
      v70 = xmmword_1ABF0;
      v71 = xmmword_1AC00;
      v72 = xmmword_1AC10;
      v73 = 0xEE000000DD00LL;
      v30 = v26 - 22 * v61;
      if ( v30 )
      {
        do
        {
          v74 = v30 - 1;
          v31 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&dest);
          if ( (_BYTE)v31 == 2 )
            break;
          alloc::vec::Vec<T,A>::push(&v46, v31, &off_FA180);
          v30 = v74;
        }
        while ( v74 );
      }
      v32 = v25 - 1;
      v11 = v76;
      v12 = v75;
      while ( --v32 )
        alloc::vec::Vec<T,A>::push(&v46, 2LL, &off_FA168);
      v81 = (__int64 **)rand::rngs::thread::rng();
      if ( !v48 )
        core::slice::index::slice_start_index_len_fail(1LL, 0LL, &off_FA150);
      if ( v48 >= 3 )
        <[T] as rand::seq::slice::SliceRandom>::partial_shuffle(&dest, v47 + 4, v48 - 1, &v81, v48 - 1);
      alloc::vec::Vec<T,A>::push(&v46, 2LL, &off_FA138);
      core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v81);
    }
    else
    {
      v24 = a3 + 1;
      while ( --v24 )
        alloc::vec::Vec<T,A>::push(&v46, 2LL, &off_FA1C8);
    }
    if ( a8 )
      alloc::vec::Vec<T,A>::push(&v46, 0LL, &off_FA1B0);
  }
  v79 = v48;
  dest = 0x1B600000000LL;
  LODWORD(v67) = 256;
  WORD2(v67) = 0;
  std::fs::OpenOptions::open(&v81, &dest, v12, v11);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v56,
    &v81,
    v12,
    v11);
  v19 = v56;
  if ( v56 )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<uu_shred::PassType>>(v46, v47);
  }
  else
  {
    v45 = (unsigned int)v57;
    v33 = v50;
    if ( (v77 & 1) != 0 )
      v33 = v78;
    v50 = v33;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v56, &v46);
    v60 = 0LL;
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v62, &v56);
    while ( (_BYTE)v63 != 3 )
    {
      v39 = v62;
      v49 = v63;
      if ( a9 )
      {
        uu_shred::pass_name((__int64)&v64, (unsigned __int8 *)&v49, v34, v35, v36, v37);
        v81 = (__int64 **)uucore::util_name();
        v82 = v40;
        v51 = (__int64 *)&v81;
        v52 = <&T as core::fmt::Display>::fmt;
        dest = (__int64)&unk_F9F98;
        v67 = (__int64 (__fastcall *)())(&dword_0 + 2);
        *(_QWORD *)&v69 = 0LL;
        *(_QWORD *)&v68 = &v51;
        *((_QWORD *)&v68 + 1) = 1LL;
        std::io::stdio::_eprint(&dest);
        v51 = (_QWORD *)(&dword_0 + 1);
        v52 = v12;
        v53 = v11;
        v54 = 0;
        v80 = v39 + 1;
        dest = (__int64)&v51;
        v67 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v68 = &v80;
        *((_QWORD *)&v68 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)&v69 = &v79;
        *((_QWORD *)&v69 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)&v70 = &v64;
        *((_QWORD *)&v70 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v81 = (__int64 **)&unk_FA018;
        v82 = (__int64 (__fastcall *)())&byte_5;
        v85 = 0LL;
        p_dest = &dest;
        v84 = (__int64 (__fastcall *)())&byte_4;
        std::io::stdio::_eprint(&v81);
        core::ptr::drop_in_place<alloc::string::String>(&v64);
      }
      v41 = uu_shred::do_pass(&v45, &v49, a7, v50);
      v42 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
              v41,
              v12,
              v11);
      if ( v42 )
      {
        v64 = v42;
        v65 = &off_F9BB8;
        v43 = (unsigned int)uucore::mods::error::UError::code();
        uucore::mods::error::set_exit_code(v43);
        v51 = (__int64 *)uucore::util_name();
        v52 = v44;
        v81 = &v51;
        v82 = <&T as core::fmt::Display>::fmt;
        p_dest = &v64;
        v84 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        dest = (__int64)&unk_FA068;
        v67 = (__int64 (__fastcall *)())(&dword_0 + 3);
        *(_QWORD *)&v69 = 0LL;
        *(_QWORD *)&v68 = &v81;
        *((_QWORD *)&v68 + 1) = 2LL;
        std::io::stdio::_eprint(&dest);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v64, v65);
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
          0LL,
          &off_F9BB8);
      }
      <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v62, &v56);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<uu_shred::PassType>>>(&v56);
    if ( (_BYTE)v55
      && (v38 = uu_shred::do_remove(v12, v11, v12, v11, a9, (unsigned __int8)v55),
          (v19 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                   v38,
                   v12,
                   v11)) != 0) )
    {
      core::ptr::drop_in_place<std::fs::File>(v45);
    }
    else
    {
      core::ptr::drop_in_place<std::fs::File>(v45);
      return 0LL;
    }
  }
  return v19;
}