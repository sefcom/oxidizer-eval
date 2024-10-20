__int64 __fastcall uu_uniq::Uniq::print_line(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  struct _Unwind_Exception *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v25; // [rsp+0h] [rbp-278h]
  int v26; // [rsp+8h] [rbp-270h]
  int v27; // [rsp+10h] [rbp-268h]
  int v28; // [rsp+18h] [rbp-260h]
  int v29; // [rsp+20h] [rbp-258h]
  int v30; // [rsp+28h] [rbp-250h]
  int v31; // [rsp+30h] [rbp-248h]
  struct _Unwind_Exception *v32; // [rsp+60h] [rbp-218h]
  int v33; // [rsp+68h] [rbp-210h]
  char line_terminator; // [rsp+97h] [rbp-1E1h]
  __int64 v38; // [rsp+98h] [rbp-1E0h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-1D8h]
  __int64 v40; // [rsp+A8h] [rbp-1D0h]
  __int64 v41; // [rsp+B0h] [rbp-1C8h]
  __int64 v42; // [rsp+B8h] [rbp-1C0h]
  char v43; // [rsp+C7h] [rbp-1B1h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-1B0h]
  __int64 v45; // [rsp+D0h] [rbp-1A8h]
  __int64 v46; // [rsp+D8h] [rbp-1A0h]
  __int128 v47; // [rsp+E0h] [rbp-198h] BYREF
  __int64 v48; // [rsp+F0h] [rbp-188h]
  __int128 v49; // [rsp+F8h] [rbp-180h] BYREF
  __int64 v50; // [rsp+108h] [rbp-170h]
  int v51[12]; // [rsp+110h] [rbp-168h] BYREF
  _OWORD v52[2]; // [rsp+140h] [rbp-138h] BYREF
  _OWORD v53[3]; // [rsp+160h] [rbp-118h] BYREF
  __int64 v54; // [rsp+190h] [rbp-E8h]
  unsigned __int128 v55; // [rsp+198h] [rbp-E0h]
  __int128 v56; // [rsp+1A8h] [rbp-D0h]
  __int128 v57; // [rsp+1B8h] [rbp-C0h]
  __int64 v58; // [rsp+1C8h] [rbp-B0h]
  char v59; // [rsp+1D7h] [rbp-A1h]
  __int64 v60; // [rsp+1D8h] [rbp-A0h]
  unsigned __int64 v61; // [rsp+1E0h] [rbp-98h]
  __int64 v62; // [rsp+1E8h] [rbp-90h]
  __int64 v63; // [rsp+1F0h] [rbp-88h]
  _BYTE v64[24]; // [rsp+1F8h] [rbp-80h] BYREF
  _BYTE v65[32]; // [rsp+210h] [rbp-68h] BYREF
  int v66[9]; // [rsp+230h] [rbp-48h] BYREF
  _BYTE v67[17]; // [rsp+257h] [rbp-21h] BYREF
  __int128 v68; // [rsp+268h] [rbp-10h]

  v38 = a5;
  line_terminator = uu_uniq::Uniq::get_line_terminator();
  if ( (uu_uniq::Uniq::should_print_delimiter(a1, v38, a6 & 1) & 1) != 0
    && (v43 = line_terminator,
        v6 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, &v43, 1LL),
        v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v6),
        v41 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v7, v8),
        v42 = v9,
        v41) )
  {
    v39 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v41,
            v42,
            &off_11A008);
    v40 = v10;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 51) & 1) != 0 )
    {
      *(_QWORD *)&v68 = &v38;
      *((_QWORD *)&v68 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v52[1] = v68;
      v52[0] = v68;
      v59 = 3;
      v60 = 2LL;
      v63 = 7LL;
      v62 = 0LL;
      *(_QWORD *)&v57 = 0LL;
      *((_QWORD *)&v57 + 1) = 32LL;
      LOBYTE(v58) = 3;
      v55 = __PAIR128__(v61, 2LL);
      *(_QWORD *)&v56 = 0LL;
      *((_QWORD *)&v56 + 1) = 7LL;
      v54 = v58;
      v53[2] = v57;
      v53[1] = v56;
      v53[0] = __PAIR128__(v61, 2LL);
      core::fmt::Arguments::new_v1_formatted(
        (unsigned int)v51,
        (unsigned int)&unk_119FD0,
        2,
        (unsigned int)v52,
        1,
        (unsigned int)v53,
        1LL);
      alloc::fmt::format(&v49, v51);
      v48 = v50;
      v47 = v49;
      v11 = alloc::string::String::as_bytes(&v47);
      v32 = v12;
      v33 = v11;
      v30 = core::slice::<impl [T]>::iter(v11, v12);
      v31 = v16;
      v17 = core::slice::<impl [T]>::iter(a3, a4);
      core::iter::traits::iterator::Iterator::chain(
        (int)v66,
        v30,
        v31,
        v17,
        v18,
        v19,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v18,
        v17,
        v31,
        v30,
        (int)v51,
        v32,
        v33);
      core::iter::traits::iterator::Iterator::copied(v65, v66);
      core::iter::traits::iterator::Iterator::collect(v64, v65);
      v20 = alloc::vec::Vec<T,A>::as_slice(v64);
      v46 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, v20, v21);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v64);
      core::ptr::drop_in_place<alloc::string::String>(&v47);
    }
    else
    {
      v46 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, a3, a4);
    }
    v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v46);
    v44 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v13, v14);
    v45 = v15;
    if ( v44 )
    {
      v39 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v44,
              v45,
              &off_119FF0);
    }
    else
    {
      v67[0] = line_terminator;
      v22 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, v67, 1LL);
      v39 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v22);
    }
    v40 = v23;
  }
  return v39;
}
