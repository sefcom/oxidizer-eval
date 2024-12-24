__int64 __fastcall uu_cut::cut_files(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 *v7; // rbx
  __int128 v8; // rax
  __int128 v9; // rax
  __int64 v10; // rax
  __int64 (__fastcall **v11)(); // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(); // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(); // rdx
  __int128 *v21; // [rsp+0h] [rbp-E8h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+8h] [rbp-E0h]
  __int128 v23; // [rsp+10h] [rbp-D8h] BYREF
  __int64 *v24; // [rsp+20h] [rbp-C8h]
  __int64 (__fastcall *v25)(); // [rsp+28h] [rbp-C0h]
  int v26; // [rsp+34h] [rbp-B4h]
  __int128 v27; // [rsp+38h] [rbp-B0h] BYREF
  __int64 *v28; // [rsp+48h] [rbp-A0h]
  __int64 v29; // [rsp+50h] [rbp-98h]
  __int64 v30; // [rsp+58h] [rbp-90h]
  __int64 v31; // [rsp+68h] [rbp-80h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+70h] [rbp-78h]
  unsigned __int64 *v33; // [rsp+78h] [rbp-70h]
  __int64 v34; // [rsp+80h] [rbp-68h]
  __int64 v35; // [rsp+88h] [rbp-60h]
  unsigned __int64 *v36; // [rsp+90h] [rbp-58h]
  __int64 v37; // [rsp+98h] [rbp-50h]
  _QWORD v38[2]; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v39; // [rsp+B0h] [rbp-38h]

  v36 = a2;
  v2 = *(_QWORD *)(a1 + 16);
  v37 = a1;
  if ( !v2 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, asc_1DD22, 1LL);
    v24 = v28;
    v23 = v27;
    alloc::vec::Vec<T,A>::push(a1, &v23);
    v2 = *(_QWORD *)(a1 + 16);
  }
  v3 = *(_QWORD *)(a1 + 8) + 24 * v2;
  v38[0] = *(_QWORD *)(a1 + 8);
  v38[1] = v3;
  v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v38);
  if ( !v4 )
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v37);
  v5 = v4;
  v39 = *v36;
  v35 = v36[8];
  v34 = v36[9];
  v33 = v36 + 1;
  v26 = 0;
  do
  {
    if ( (v26 & 1) == 0 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 8);
        v7 = *(__int64 **)(v5 + 16);
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, asc_1DD22, 1LL) )
          break;
        if ( !(unsigned __int8)std::path::Path::is_dir(v6, v7) )
          goto LABEL_14;
        *(_QWORD *)&v8 = uucore::util_name();
        v23 = v8;
        v21 = &v23;
        v22 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v27 = &unk_129EA8;
        *((_QWORD *)&v27 + 1) = 2LL;
        v30 = 0LL;
        v28 = (__int64 *)&v21;
        v29 = 1LL;
        std::io::stdio::_eprint(&v27);
        *(_QWORD *)&v23 = 0LL;
        *((_QWORD *)&v23 + 1) = v6;
        v24 = v7;
        LOBYTE(v25) = 0;
        v21 = &v23;
        v22 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v27 = &unk_129EC8;
        *((_QWORD *)&v27 + 1) = 2LL;
        v30 = 0LL;
        v28 = (__int64 *)&v21;
        v29 = 1LL;
        std::io::stdio::_eprint(&v27);
        uucore::mods::error::set_exit_code(1LL);
        v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v38);
        if ( !v5 )
          return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v37);
      }
      if ( v39 >= 2 )
      {
        v17 = std::io::stdio::stdin();
        v13 = uu_cut::cut_fields(v17, v35, v34, (__int64)v33);
      }
      else
      {
        v12 = std::io::stdio::stdin();
        v13 = uu_cut::cut_bytes(v12, v35, v34, (__int64)v33);
      }
      LOBYTE(v14) = 1;
      v26 = v14;
      if ( v13 )
      {
        v31 = v13;
        v32 = &off_129DF0;
        v18 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v13);
        uucore::mods::error::set_exit_code(v18);
        v21 = (__int128 *)uucore::util_name();
        v22 = v19;
        *(_QWORD *)&v23 = &v21;
        *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
        v24 = &v31;
        v25 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v27 = &unk_129E78;
        *((_QWORD *)&v27 + 1) = 3LL;
        v30 = 0LL;
        v28 = (__int64 *)&v23;
        v29 = 2LL;
        std::io::stdio::_eprint(&v27);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v31);
      }
      goto LABEL_23;
    }
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      v7 = *(__int64 **)(v5 + 16);
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, asc_1DD22, 1LL) )
        break;
LABEL_10:
      v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v38);
      if ( !v5 )
        return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v37);
    }
    if ( (unsigned __int8)std::path::Path::is_dir(v6, v7) )
    {
      *(_QWORD *)&v9 = uucore::util_name();
      v23 = v9;
      v21 = &v23;
      v22 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v27 = &unk_129EA8;
      *((_QWORD *)&v27 + 1) = 2LL;
      v30 = 0LL;
      v28 = (__int64 *)&v21;
      v29 = 1LL;
      std::io::stdio::_eprint(&v27);
      *(_QWORD *)&v23 = 0LL;
      *((_QWORD *)&v23 + 1) = v6;
      v24 = v7;
      LOBYTE(v25) = 0;
      v21 = &v23;
      v22 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v27 = &unk_129EC8;
      *((_QWORD *)&v27 + 1) = 2LL;
      v30 = 0LL;
      v28 = (__int64 *)&v21;
      v29 = 1LL;
      std::io::stdio::_eprint(&v27);
      uucore::mods::error::set_exit_code(1LL);
      goto LABEL_10;
    }
LABEL_14:
    std::fs::File::open(&v27, v6, v7);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v23,
      &v27,
      v5);
    v10 = v23;
    if ( (_QWORD)v23 )
    {
      v11 = (__int64 (__fastcall **)())*((_QWORD *)&v23 + 1);
      goto LABEL_19;
    }
    v10 = uu_cut::cut_files::{{closure}}(v36, DWORD2(v23));
    v11 = &off_129DF0;
    if ( v10 )
    {
LABEL_19:
      v31 = v10;
      v32 = v11;
      v15 = ((unsigned int (__fastcall *)(__int64))v11[12])(v10);
      uucore::mods::error::set_exit_code(v15);
      v21 = (__int128 *)uucore::util_name();
      v22 = v16;
      *(_QWORD *)&v23 = &v21;
      *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
      v24 = &v31;
      v25 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v27 = &unk_129E78;
      *((_QWORD *)&v27 + 1) = 3LL;
      v30 = 0LL;
      v28 = (__int64 *)&v23;
      v29 = 2LL;
      std::io::stdio::_eprint(&v27);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v31);
    }
LABEL_23:
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v38);
  }
  while ( v5 );
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v37);
}
