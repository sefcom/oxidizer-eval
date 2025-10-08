__int64 __fastcall uu_cut::cut_files(__int64 a1, unsigned __int64 *a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 (__fastcall **v5)(); // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  char v11; // r15
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // r14
  __int128 v15; // rax
  __int64 v16; // rax
  __int128 *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // rax
  __int128 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 (__fastcall *v23)(); // rdx
  unsigned int v24; // eax
  __int64 (__fastcall *v25)(); // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 (__fastcall *v29)(); // rdx
  __int64 v30; // rbx
  __int128 v32; // [rsp+0h] [rbp-F8h] BYREF
  __int128 *v33; // [rsp+10h] [rbp-E8h]
  __int64 (__fastcall *v34)(); // [rsp+18h] [rbp-E0h]
  __int128 v35; // [rsp+28h] [rbp-D0h] BYREF
  __int128 *v36; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+40h] [rbp-B8h]
  __int128 v38; // [rsp+48h] [rbp-B0h] BYREF
  __int128 *v39; // [rsp+58h] [rbp-A0h]
  __int64 v40; // [rsp+60h] [rbp-98h]
  __int64 v41; // [rsp+68h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-80h] BYREF
  __int64 (__fastcall **v43)(); // [rsp+80h] [rbp-78h]
  __int128 v44; // [rsp+88h] [rbp-70h] BYREF
  __int64 v45; // [rsp+98h] [rbp-60h]
  __int64 v46; // [rsp+A0h] [rbp-58h]
  _QWORD *v47; // [rsp+A8h] [rbp-50h]
  __int128 *v48; // [rsp+B0h] [rbp-48h]
  unsigned __int64 *v49; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v50; // [rsp+C0h] [rbp-38h]

  v49 = a2;
  v2 = *(_QWORD *)(a1 + 16) == 0LL;
  v45 = a1;
  if ( v2 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v38, asc_1EC7A, 1LL);
    v33 = v39;
    v32 = v38;
    alloc::vec::Vec<T,A>::push(a1, &v32);
  }
  std::io::stdio::stdout();
  if ( (unsigned __int8)std::sys::io::is_terminal::isatty::is_terminal() )
  {
    v3 = std::io::stdio::stdout();
    v4 = alloc::boxed::Box<T>::new(v3);
    v5 = (__int64 (__fastcall **)())&unk_F9418;
  }
  else
  {
    v6 = std::io::stdio::stdout();
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v38, v6);
    v4 = alloc::boxed::Box<T>::new(&v38);
    v5 = &off_F93C8;
  }
  v42 = v4;
  v43 = v5;
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
    goto LABEL_28;
  v8 = *(_QWORD *)(v45 + 8);
  v9 = v8 + 24 * v7;
  v10 = v8 + 24;
  v50 = *v49;
  v48 = (__int128 *)v49[8];
  v47 = v49 + 1;
  v46 = v49[9];
  v11 = 0;
  do
  {
    v12 = v8;
    while ( 1 )
    {
      v8 = v10;
      v13 = *(_QWORD *)(v12 + 8);
      v14 = *(_QWORD *)(v12 + 16);
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, asc_1EC7A, 1LL) )
        break;
      if ( (v11 & 1) == 0 )
      {
        if ( v50 > 1 )
        {
          v21 = std::io::stdio::stdin();
          *(_QWORD *)&v19 = uu_cut::cut_fields(v21, &v42, v48, v46, (__int64)v47);
        }
        else
        {
          v18 = std::io::stdio::stdin();
          *(_QWORD *)&v19 = uu_cut::cut_bytes(v18, &v42, v48, v46, v47);
          *((_QWORD *)&v19 + 1) = &off_F9218;
        }
        v44 = v19;
        if ( (_QWORD)v19 )
        {
          v35 = v19;
          v22 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v19 + 1) + 88LL))(v19);
          uucore::mods::error::set_exit_code(v22);
          v36 = (__int128 *)uucore::util_name();
          v37 = v23;
          *(_QWORD *)&v32 = &v36;
          *((_QWORD *)&v32 + 1) = <&T as core::fmt::Display>::fmt;
          v33 = &v35;
          v34 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          *(_QWORD *)&v38 = &unk_F9340;
          *((_QWORD *)&v38 + 1) = 3LL;
          v41 = 0LL;
          v39 = &v32;
          v40 = 2LL;
          std::io::stdio::_eprint(&v38);
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v35);
        }
        else
        {
          core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v44);
        }
        v11 = 1;
        goto LABEL_25;
      }
LABEL_10:
      v10 = v8 + 24;
      v12 = v8;
      if ( v8 == v9 )
        goto LABEL_28;
    }
    if ( (unsigned __int8)std::path::Path::is_dir(v13, v14) )
    {
      *(_QWORD *)&v15 = uucore::util_name();
      v32 = v15;
      v36 = &v32;
      v37 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v38 = &unk_F9370;
      *((_QWORD *)&v38 + 1) = 2LL;
      v41 = 0LL;
      v39 = (__int128 *)&v36;
      v40 = 1LL;
      std::io::stdio::_eprint(&v38);
      v16 = *(_QWORD *)(v12 + 8);
      v17 = *(__int128 **)(v12 + 16);
      *(_QWORD *)&v32 = 0LL;
      *((_QWORD *)&v32 + 1) = v16;
      v33 = v17;
      LOBYTE(v34) = 0;
      v36 = &v32;
      v37 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v38 = &unk_F9390;
      *((_QWORD *)&v38 + 1) = 2LL;
      v41 = 0LL;
      v39 = (__int128 *)&v36;
      v40 = 1LL;
      std::io::stdio::_eprint(&v38);
      uucore::mods::error::set_exit_code(1LL);
      goto LABEL_10;
    }
    std::fs::File::open(&v38, v13, v14);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v32,
      &v38,
      *(_QWORD *)(v12 + 8),
      *(_QWORD *)(v12 + 16));
    *(_QWORD *)&v20 = v32;
    if ( (_QWORD)v32 )
    {
      *((_QWORD *)&v20 + 1) = *((_QWORD *)&v32 + 1);
      v44 = v32;
LABEL_24:
      v35 = v20;
      v24 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v20 + 1) + 88LL))(v20);
      uucore::mods::error::set_exit_code(v24);
      v36 = (__int128 *)uucore::util_name();
      v37 = v25;
      *(_QWORD *)&v32 = &v36;
      *((_QWORD *)&v32 + 1) = <&T as core::fmt::Display>::fmt;
      v33 = &v35;
      v34 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v38 = &unk_F9340;
      *((_QWORD *)&v38 + 1) = 3LL;
      v41 = 0LL;
      v39 = &v32;
      v40 = 2LL;
      std::io::stdio::_eprint(&v38);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v35);
      goto LABEL_25;
    }
    *(_QWORD *)&v20 = uu_cut::cut_files::{{closure}}(v49, &v42, DWORD2(v32));
    v44 = v20;
    if ( (_QWORD)v20 )
      goto LABEL_24;
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v44);
LABEL_25:
    v10 = v8 + 24;
  }
  while ( v8 != v9 );
LABEL_28:
  v26 = ((__int64 (__fastcall *)(__int64))v43[6])(v42);
  v27 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v26);
  *(_QWORD *)&v44 = v27;
  *((_QWORD *)&v44 + 1) = &off_F8E20;
  if ( v27 )
  {
    *(_QWORD *)&v35 = v27;
    *((_QWORD *)&v35 + 1) = &off_F8E20;
    v28 = uucore::mods::error::UError::code();
    uucore::mods::error::set_exit_code(v28);
    v36 = (__int128 *)uucore::util_name();
    v37 = v29;
    *(_QWORD *)&v32 = &v36;
    *((_QWORD *)&v32 + 1) = <&T as core::fmt::Display>::fmt;
    v33 = &v35;
    v34 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&v38 = &unk_F9340;
    *((_QWORD *)&v38 + 1) = 3LL;
    v41 = 0LL;
    v39 = &v32;
    v40 = 2LL;
    std::io::stdio::_eprint(&v38);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v35);
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v44);
  }
  v30 = v45;
  core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v42, v43);
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v30);
}