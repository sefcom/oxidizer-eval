__int64 __fastcall uu_chmod::Chmoder::chmod(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int8 v6; // dl
  char v7; // si
  _BOOL4 v8; // ecx
  int v9; // edx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(); // r14
  __int64 *v12; // rbp
  int v13; // ebx
  unsigned int v14; // eax
  __int64 (__fastcall *v15)(); // rdx
  unsigned int v16; // eax
  __int64 (__fastcall *v17)(); // rdx
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v27; // [rsp+Bh] [rbp-18Dh]
  char v28; // [rsp+Ch] [rbp-18Ch]
  char v29; // [rsp+Eh] [rbp-18Ah]
  unsigned __int8 v30; // [rsp+Fh] [rbp-189h]
  _QWORD **v31; // [rsp+10h] [rbp-188h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+18h] [rbp-180h]
  _QWORD *v33; // [rsp+20h] [rbp-178h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+28h] [rbp-170h]
  __int64 *v35; // [rsp+30h] [rbp-168h]
  __int64 (__fastcall *v36)(); // [rsp+38h] [rbp-160h]
  __int64 v37; // [rsp+40h] [rbp-158h]
  __int64 v38; // [rsp+48h] [rbp-150h] BYREF
  __int64 (__fastcall **v39)(); // [rsp+50h] [rbp-148h]
  __int64 v40; // [rsp+58h] [rbp-140h]
  int v41; // [rsp+64h] [rbp-134h]
  _BYTE *v42; // [rsp+68h] [rbp-130h]
  __int128 dest; // [rsp+70h] [rbp-128h] BYREF
  _QWORD *v44; // [rsp+80h] [rbp-118h]
  __int64 v45; // [rsp+88h] [rbp-110h]
  __int64 v46; // [rsp+90h] [rbp-108h]
  __int128 v47; // [rsp+120h] [rbp-78h] BYREF
  _QWORD *v48; // [rsp+130h] [rbp-68h]
  __int128 v49; // [rsp+138h] [rbp-60h] BYREF
  _QWORD *v50; // [rsp+148h] [rbp-50h]
  __int128 v51; // [rsp+150h] [rbp-48h] BYREF
  _QWORD *v52; // [rsp+160h] [rbp-38h]

  if ( !a3 )
    return 0LL;
  v3 = a2;
  v4 = a2 + 24 * a3;
  v5 = a2 + 24;
  v6 = a1[37];
  v27 = a1[33];
  v29 = a1[34];
  v7 = a1[36];
  v8 = a1[38] == 0;
  v42 = a1;
  v28 = a1[35];
  v30 = v6;
  v9 = v6 ^ 1;
  if ( (v7 & 1) != 0 )
    v9 = v8;
  v41 = v9;
  v10 = 0LL;
  while ( 2 )
  {
    v37 = v10;
    while ( 1 )
    {
      v11 = *(__int64 (__fastcall **)())(v3 + 8);
      v12 = *(__int64 **)(v3 + 16);
      v3 = v5;
      std::fs::metadata(&dest);
      v13 = dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
        dest,
        *((_QWORD *)&dest + 1));
      if ( v13 != 2 )
        break;
      if ( (unsigned __int8)std::path::Path::is_symlink(v11, v12) )
      {
        if ( (v41 & 1) != 0 )
          goto LABEL_7;
        if ( (v27 & 1) == 0 )
        {
          v33 = 0LL;
          v34 = v11;
          v35 = v12;
          LOBYTE(v36) = 1;
          v31 = &v33;
          v32 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&dest = &off_EB948;
          *((_QWORD *)&dest + 1) = 1LL;
          v46 = 0LL;
          v44 = &v31;
          v45 = 1LL;
          core::option::Option<T>::map_or_else(&v47, &dest);
          LODWORD(v45) = 1;
          dest = v47;
          v44 = v48;
          v38 = alloc::boxed::Box<T>::new(&dest);
          v39 = &off_EBA08;
          v14 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v38);
          uucore::mods::error::set_exit_code(v14);
          v31 = (_QWORD **)uucore::util_name();
          v32 = v15;
          v33 = &v31;
          v34 = <&T as core::fmt::Display>::fmt;
          v35 = &v38;
          v36 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          *(_QWORD *)&dest = &unk_EB958;
          *((_QWORD *)&dest + 1) = 3LL;
          v46 = 0LL;
          v44 = &v33;
          v45 = 2LL;
          std::io::stdio::_eprint(&dest);
          core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v38, v39);
          uucore::mods::error::set_exit_code(1LL);
        }
        if ( (v29 & 1) != 0 )
        {
          v33 = 0LL;
          v34 = v11;
          v35 = v12;
          LOBYTE(v36) = 1;
          v31 = &v33;
          v32 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&dest = &off_EB988;
          *((_QWORD *)&dest + 1) = 2LL;
          v46 = 0LL;
          v44 = &v31;
          v45 = 1LL;
          std::io::stdio::_print(&dest);
        }
      }
      else if ( (v27 & 1) == 0 )
      {
        v33 = 0LL;
        v34 = v11;
        v35 = v12;
        LOBYTE(v36) = 1;
        v31 = &v33;
        v32 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_EB9A8;
        *((_QWORD *)&dest + 1) = 2LL;
        v46 = 0LL;
        v44 = &v31;
        v45 = 1LL;
        core::option::Option<T>::map_or_else(&v49, &dest);
        LODWORD(v45) = 1;
        dest = v49;
        v44 = v50;
        v38 = alloc::boxed::Box<T>::new(&dest);
        v39 = &off_EBA08;
        v16 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v38);
        uucore::mods::error::set_exit_code(v16);
        v31 = (_QWORD **)uucore::util_name();
        v32 = v17;
        v33 = &v31;
        v34 = <&T as core::fmt::Display>::fmt;
        v35 = &v38;
        v36 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_EB958;
        *((_QWORD *)&dest + 1) = 3LL;
        v46 = 0LL;
        v44 = &v33;
        v45 = 2LL;
        std::io::stdio::_eprint(&dest);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v38, v39);
      }
      uucore::mods::error::set_exit_code(1LL);
LABEL_7:
      v5 = v3 + 24;
      if ( v3 == v4 )
        return v37;
    }
    if ( (v30 & 1) == 0 && (unsigned __int8)std::path::Path::is_symlink(v11, v12) )
      goto LABEL_7;
    if ( (v7 & 1) == 0 )
    {
      v22 = v40;
      v23 = uu_chmod::Chmoder::chmod_file(v42, v11, v12);
      v19 = core::result::Result<T,E>::and(v23, v24, v37, v22);
      v21 = v25;
      goto LABEL_25;
    }
    v18 = v40;
    if ( (v28 & 1) != 0
      && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12, asc_1A12E, 1LL) )
    {
      v33 = 0LL;
      v34 = v11;
      v35 = v12;
      LOBYTE(v36) = 1;
      v31 = &v33;
      v32 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_EB9C8;
      *((_QWORD *)&dest + 1) = 2LL;
      v46 = 0LL;
      v44 = &v31;
      v45 = 1LL;
      core::option::Option<T>::map_or_else(&v51, &dest);
      LODWORD(v45) = 1;
      dest = v51;
      v44 = v52;
      v19 = alloc::boxed::Box<T>::new(&dest);
      core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v37, v18);
    }
    else
    {
      v19 = uu_chmod::Chmoder::walk_dir(v42, v11, v12);
      v21 = v20;
      core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v37, v18);
LABEL_25:
      v5 = v3 + 24;
      v10 = v19;
      v40 = v21;
      if ( v3 != v4 )
        continue;
    }
    return v19;
  }
}