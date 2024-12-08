        char a10)
{
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  __int64 *v28; // rbx
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r15
  unsigned int v31; // eax
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD **v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 (__fastcall *v47)(); // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdi
  __int64 (__fastcall *v52)(); // rdx
  __int64 v53; // [rsp+0h] [rbp-2C8h] BYREF
  __int64 *v54; // [rsp+8h] [rbp-2C0h]
  __int64 v55; // [rsp+10h] [rbp-2B8h] BYREF
  __int64 v56; // [rsp+18h] [rbp-2B0h] BYREF
  __int64 v57; // [rsp+20h] [rbp-2A8h]
  unsigned __int64 v58; // [rsp+28h] [rbp-2A0h]
  __int64 **p_dest; // [rsp+30h] [rbp-298h] BYREF
  __int64 (__fastcall *v60)(); // [rsp+38h] [rbp-290h]
  __int64 **v61; // [rsp+40h] [rbp-288h]
  __int64 v62; // [rsp+48h] [rbp-280h]
  __int64 *v63; // [rsp+50h] [rbp-278h]
  __int64 v64; // [rsp+58h] [rbp-270h]
  __int64 v65; // [rsp+60h] [rbp-268h]
  __int64 v66; // [rsp+68h] [rbp-260h]
  unsigned __int64 v67; // [rsp+70h] [rbp-258h]
  __int64 v68; // [rsp+78h] [rbp-250h] BYREF
  int v69; // [rsp+80h] [rbp-248h]
  __int64 v70; // [rsp+88h] [rbp-240h] BYREF
  __int64 (__fastcall *v71)(); // [rsp+90h] [rbp-238h]
  __int64 *v72; // [rsp+98h] [rbp-230h]
  char v73; // [rsp+A0h] [rbp-228h]
  __int64 v74; // [rsp+A8h] [rbp-220h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-218h]
  __int128 v76; // [rsp+B8h] [rbp-210h]
  __int128 v77; // [rsp+C8h] [rbp-200h]
  __int128 v78; // [rsp+D8h] [rbp-1F0h]
  __int128 v79; // [rsp+E8h] [rbp-1E0h]
  __int128 v80; // [rsp+F8h] [rbp-1D0h]
  __int64 v81; // [rsp+108h] [rbp-1C0h]
  unsigned __int64 v82; // [rsp+110h] [rbp-1B8h]
  __int64 v83; // [rsp+118h] [rbp-1B0h]
  __int64 v84; // [rsp+128h] [rbp-1A0h]
  __int64 v85; // [rsp+138h] [rbp-190h]
  __int64 v86; // [rsp+140h] [rbp-188h]
  char v87; // [rsp+148h] [rbp-180h]
  __int64 v88; // [rsp+150h] [rbp-178h]
  __int64 v89; // [rsp+160h] [rbp-168h]
  __int64 v90; // [rsp+170h] [rbp-158h]
  __int64 v91; // [rsp+178h] [rbp-150h]
  char v92; // [rsp+180h] [rbp-148h]
  __int64 ***v93; // [rsp+188h] [rbp-140h] BYREF
  __int64 (__fastcall *v94)(); // [rsp+190h] [rbp-138h]
  __int64 v95; // [rsp+1A8h] [rbp-120h]
  __int64 v96; // [rsp+1B0h] [rbp-118h]
  __int64 v97; // [rsp+1B8h] [rbp-110h]
  unsigned __int64 v98; // [rsp+1C0h] [rbp-108h] BYREF
  __int64 v99; // [rsp+1C8h] [rbp-100h] BYREF
  _BYTE v100[24]; // [rsp+1D0h] [rbp-F8h] BYREF
  __int64 *dest; // [rsp+1E8h] [rbp-E0h] BYREF
  __int64 (__fastcall *v102)(); // [rsp+1F0h] [rbp-D8h]
  __int64 *v103; // [rsp+1F8h] [rbp-D0h]
  __int64 (__fastcall *v104)(); // [rsp+200h] [rbp-C8h]
  unsigned __int64 *v105; // [rsp+208h] [rbp-C0h]
  __int64 (__fastcall *v106)(); // [rsp+210h] [rbp-B8h]
  _BYTE *v107; // [rsp+218h] [rbp-B0h]
  __int64 (__fastcall *v108)(); // [rsp+220h] [rbp-A8h]
  __int64 v109; // [rsp+238h] [rbp-90h]

  v65 = a6;
  v97 = a5;
  std::fs::metadata(&v74, a1, a2);
  v14 = v74;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v74);
  if ( v14 == 2 )
  {
    p_dest = (__int64 **)(&dword_0 + 1);
    v60 = a1;
    v61 = a2;
    LOBYTE(v62) = 0;
    v93 = &p_dest;
    v94 = <os_display::Quoted as core::fmt::Display>::fmt;
    v19 = &unk_137D90;
LABEL_7:
    v74 = (__int64)v19;
    v75 = 2LL;
    *(_QWORD *)&v77 = 0LL;
    *(_QWORD *)&v76 = &v93;
    *((_QWORD *)&v76 + 1) = 1LL;
    core::option::Option<T>::map_or_else(
      &dest,
      &v74,
      v15,
      v16,
      v17,
      v18,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      p_dest,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    LODWORD(v104) = 1;
    return alloc::boxed::Box<T>::new(&dest);
  }
  if ( !(unsigned __int8)std::path::Path::is_file(a1, a2) )
  {
    p_dest = (__int64 **)(&dword_0 + 1);
    v60 = a1;
    v61 = a2;
    LOBYTE(v62) = 0;
    v93 = &p_dest;
    v94 = <os_display::Quoted as core::fmt::Display>::fmt;
    v19 = &unk_137C30;
    goto LABEL_7;
  }
  std::fs::metadata(&v74, a1, a2);
  v20 = (unsigned __int64)&v74;
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&dest);
  if ( (_DWORD)dest == 2 )
    return (__int64)v102;
  HIDWORD(v66) = a4;
  v54 = (__int64 *)a2;
  v23 = v109;
  if ( !a10 )
    goto LABEL_14;
  v24 = 128LL;
  if ( (char)v108 < 0 )
    v24 = (unsigned int)v108;
  v20 = (unsigned __int64)v54;
  v25 = std::fs::set_permissions(a1, v54, v24);
  v26 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v25);
  if ( v26 )
    return v26;
LABEL_14:
  v56 = 0LL;
  v57 = 1LL;
  v58 = 0LL;
  v96 = v23;
  v27 = v23 == 0;
  v28 = v54;
  if ( !v27 )
  {
    if ( a3 > 3 )
    {
      v67 = a3 / 0x16;
      if ( a3 >= 0x16 )
      {
        v30 = 0LL;
        do
        {
          v30 = <usize as core::iter::range::Step>::forward_unchecked(v30, v20);
          v74 = 0LL;
          v75 = 22LL;
          v80 = xmmword_1EF28;
          v79 = xmmword_1EF18;
          v78 = xmmword_1EF08;
          v77 = xmmword_1EEF8;
          v76 = xmmword_1EEE8;
          v81 = 0xEE000000DD00LL;
          while ( 1 )
          {
            v31 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v74);
            if ( (_BYTE)v31 == 2 )
              break;
            v20 = v31;
            alloc::vec::Vec<T,A>::push(&v56, v31);
          }
          core::ptr::drop_in_place<core::array::iter::IntoIter<uu_shred::Pattern,22_usize>>(&v74);
        }
        while ( v30 < v67 );
      }
      v74 = 0LL;
      v75 = 22LL;
      v76 = xmmword_1EEE8;
      v77 = xmmword_1EEF8;
      v78 = xmmword_1EF08;
      v79 = xmmword_1EF18;
      v80 = xmmword_1EF28;
      v81 = 0xEE000000DD00LL;
      v32 = a3 - 22 * v67;
      v82 = v32;
      if ( a3 != 22 * v67 )
      {
        do
        {
          v82 = v32 - 1;
          v33 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v74);
          if ( (_BYTE)v33 == 2 )
            break;
          v20 = v33;
          alloc::vec::Vec<T,A>::push(&v56, v33);
          v32 = v82;
        }
        while ( v82 );
      }
      core::ptr::drop_in_place<core::iter::adapters::take::Take<core::array::iter::IntoIter<uu_shred::Pattern,22_usize>>>(
        &v74,
        v20);
      v74 = rand::rngs::thread::thread_rng();
      <[T] as rand::seq::SliceRandom>::shuffle(v57, v58, &v74);
      v34 = a3 / 0xA + 3;
      v35 = a3 / 0xA + 2;
      v36 = a3 - 1;
      v37 = 0LL;
      do
      {
        if ( (v35 | (v36 * v37)) >> 32 )
          v38 = v36 * v37 / v35;
        else
          v38 = (int)v36 * (int)v37 / (unsigned int)v35;
        if ( v38 >= v58 )
          core::panicking::panic_bounds_check(v38, v58, &off_137CF8);
        v37 = <usize as core::iter::range::Step>::forward_unchecked(v37, v58);
        *(_BYTE *)(v57 + 4 * v38) = 2;
      }
      while ( v37 < v34 );
      core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v74);
      v28 = v54;
    }
    else
    {
      v29 = 0LL;
      while ( v29 < a3 )
      {
        v29 = <usize as core::iter::range::Step>::forward_unchecked(v29, v20);
        v20 = 2LL;
        alloc::vec::Vec<T,A>::push(&v56, 2LL);
      }
    }
    if ( a8 )
      alloc::vec::Vec<T,A>::push(&v56, 0LL);
  }
  v98 = v58;
  v74 = 0x1B600000000LL;
  LODWORD(v75) = 256;
  WORD2(v75) = 0;
  std::fs::OpenOptions::open(&dest, &v74, a1, v28);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &p_dest,
    &dest,
    a1,
    v28);
  v21 = (__int64)p_dest;
  if ( p_dest )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<uu_shred::PassType>>(&v56);
  }
  else
  {
    HIDWORD(v53) = (_DWORD)v60;
    v39 = v65;
    if ( !v97 )
      v39 = v96;
    v65 = v39;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v93, &v56);
    v95 = 0LL;
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v68, &v93);
    while ( (_BYTE)v69 != 3 )
    {
      v46 = v68;
      HIDWORD(v55) = v69;
      if ( a9 )
      {
        uu_shred::pass_name((__int64)v100, (_BYTE *)&v55 + 4, v40, v41, v42, v43);
        dest = (__int64 *)uucore::util_name();
        v102 = v47;
        p_dest = &dest;
        v60 = <&T as core::fmt::Display>::fmt;
        v74 = (__int64)&unk_137BF0;
        v75 = 2LL;
        *(_QWORD *)&v77 = 0LL;
        *(_QWORD *)&v76 = &p_dest;
        *((_QWORD *)&v76 + 1) = 1LL;
        std::io::stdio::_eprint(&v74);
        v70 = 1LL;
        v71 = a1;
        v72 = v54;
        v73 = 0;
        v99 = v46 + 1;
        dest = &v70;
        v102 = <os_display::Quoted as core::fmt::Display>::fmt;
        v103 = &v99;
        v104 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v105 = &v98;
        v106 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v107 = v100;
        v108 = <alloc::string::String as core::fmt::Display>::fmt;
        v74 = 2LL;
        *(_QWORD *)&v76 = 2LL;
        *(_QWORD *)&v77 = 0LL;
        *((_QWORD *)&v77 + 1) = 32LL;
        LOBYTE(v78) = 3;
        *((_QWORD *)&v78 + 1) = 2LL;
        *((_QWORD *)&v79 + 1) = 0LL;
        *(_QWORD *)&v80 = 2LL;
        *((_QWORD *)&v80 + 1) = 1LL;
        v81 = 32LL;
        LOBYTE(v82) = 3;
        v83 = 2LL;
        v84 = 2LL;
        v85 = 2LL;
        v86 = 32LL;
        v87 = 3;
        v88 = 2LL;
        v89 = 2LL;
        v90 = 3LL;
        v91 = 32LL;
        v92 = 3;
        p_dest = (__int64 **)&unk_137D10;
        v60 = (__int64 (__fastcall *)())&byte_5;
        v63 = &v74;
        v64 = 4LL;
        v61 = &dest;
        v62 = 4LL;
        std::io::stdio::_eprint(&p_dest);
        core::ptr::drop_in_place<alloc::string::String>(v100);
      }
      v48 = uu_shred::do_pass((char *)&v53 + 4, (char *)&v55 + 4, a7, v65);
      v49 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
              v48,
              a1,
              v54);
      if ( v49 )
      {
        v70 = v49;
        v71 = (__int64 (__fastcall *)())v50;
        v51 = (*(unsigned int (__fastcall **)(__int64))(v50 + 96))(v49);
        uucore::mods::error::set_exit_code(v51);
        p_dest = (__int64 **)uucore::util_name();
        v60 = v52;
        dest = (__int64 *)&p_dest;
        v102 = <&T as core::fmt::Display>::fmt;
        v103 = &v70;
        v104 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v74 = (__int64)&unk_137D60;
        v75 = 3LL;
        *(_QWORD *)&v77 = 0LL;
        *(_QWORD *)&v76 = &dest;
        *((_QWORD *)&v76 + 1) = 2LL;
        std::io::stdio::_eprint(&v74);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v70, v71);
      }
      <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v68, &v93);
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<uu_shred::PassType>>>(&v93);
    v44 = v54;
    if ( BYTE4(v66)
      && (v45 = uu_shred::do_remove(a1, v54, a1, v54, a9, BYTE4(v66)),
          (v21 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                   v45,
                   a1,
                   v44)) != 0) )
    {
      core::ptr::drop_in_place<std::fs::File>(HIDWORD(v53));
    }
    else
    {
      core::ptr::drop_in_place<std::fs::File>(HIDWORD(v53));
      return 0LL;
    }
  }
  return v21;
}
