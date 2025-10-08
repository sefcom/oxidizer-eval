__int64 __fastcall uu_chmod::Chmoder::chmod_file(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int8 v4; // bl
  __int64 v5; // r12
  char is_symlink; // al
  __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // r15
  unsigned __int8 v13; // al
  unsigned __int8 is_dir; // al
  __int64 v15; // rbx
  unsigned int umask; // ebx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int128 v27; // [rsp+0h] [rbp-238h] BYREF
  _QWORD *v28; // [rsp+10h] [rbp-228h]
  __int64 (__fastcall *v29)(); // [rsp+18h] [rbp-220h]
  __int128 v30; // [rsp+20h] [rbp-218h] BYREF
  _BYTE *v31; // [rsp+30h] [rbp-208h]
  __int64 v32; // [rsp+38h] [rbp-200h]
  __int64 v33; // [rsp+40h] [rbp-1F8h]
  _BYTE *v34; // [rsp+58h] [rbp-1E0h]
  _BYTE v35[24]; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+78h] [rbp-1C0h]
  _QWORD *v37; // [rsp+80h] [rbp-1B8h]
  __int64 (__fastcall *v38)(); // [rsp+88h] [rbp-1B0h]
  __int16 v39; // [rsp+A0h] [rbp-198h]
  unsigned int v40; // [rsp+B4h] [rbp-184h]
  __int64 v41; // [rsp+B8h] [rbp-180h]
  _QWORD *v42; // [rsp+C0h] [rbp-178h]
  __int64 v43; // [rsp+C8h] [rbp-170h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-168h]
  _QWORD v45[3]; // [rsp+E0h] [rbp-158h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-140h] BYREF
  __int64 v47; // [rsp+108h] [rbp-130h]
  __int128 v48; // [rsp+110h] [rbp-128h] BYREF
  __int64 v49; // [rsp+120h] [rbp-118h]
  __int128 v50; // [rsp+128h] [rbp-110h] BYREF
  __int64 v51; // [rsp+138h] [rbp-100h]
  _BYTE v52[24]; // [rsp+140h] [rbp-F8h] BYREF
  int v53; // [rsp+158h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+160h] [rbp-D8h]
  int v55; // [rsp+190h] [rbp-A8h]

  v4 = *(_BYTE *)(a1 + 37);
  uucore::features::perms::get_metadata(&v53, a2, a3, v4);
  if ( v53 == 2 )
  {
    v5 = v54;
    v45[0] = v54;
    is_symlink = std::path::Path::is_symlink(a2, a3);
    if ( v4 || is_symlink != 1 )
    {
      *(_QWORD *)&v30 = 1LL;
      *((_QWORD *)&v30 + 1) = a2;
      v31 = a3;
      LOBYTE(v32) = 1;
      *(_QWORD *)&v27 = &v30;
      *((_QWORD *)&v27 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      if ( (unsigned __int8)std::io::error::Error::kind(v5) == 1 )
      {
        *(_QWORD *)v35 = &unk_EBA90;
        *(_QWORD *)&v35[8] = 2LL;
        v37 = 0LL;
        *(_QWORD *)&v35[16] = &v27;
        v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
        core::option::Option<T>::map_or_else(&v46, v35);
        LODWORD(v36) = 1;
        *(_OWORD *)v35 = v46;
        *(_QWORD *)&v35[16] = v47;
        v7 = alloc::boxed::Box<T>::new(v35);
      }
      else
      {
        v28 = v45;
        v29 = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)v35 = &unk_EBAB0;
        *(_QWORD *)&v35[8] = 2LL;
        v37 = 0LL;
        *(_QWORD *)&v35[16] = &v27;
        v36 = (__int64 (__fastcall *)())(&dword_0 + 2);
        core::option::Option<T>::map_or_else(&v48, v35);
        LODWORD(v36) = 1;
        *(_OWORD *)v35 = v48;
        *(_QWORD *)&v35[16] = v49;
        v7 = alloc::boxed::Box<T>::new(v35);
        v5 = v45[0];
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 34) == 1 )
      {
        *(_QWORD *)&v30 = 1LL;
        *((_QWORD *)&v30 + 1) = a2;
        v31 = a3;
        LOBYTE(v32) = 1;
        *(_QWORD *)&v27 = &v30;
        *((_QWORD *)&v27 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v35 = &off_EBA70;
        *(_QWORD *)&v35[8] = 2LL;
        v37 = 0LL;
        *(_QWORD *)&v35[16] = &v27;
        v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
        std::io::stdio::_print(v35);
      }
      v7 = 0LL;
    }
    core::ptr::drop_in_place<std::io::error::Error>(v5);
  }
  else
  {
    v8 = v55 & 0xFFF;
    if ( *(_DWORD *)(a1 + 24) == 1 )
    {
      if ( (uu_chmod::Chmoder::change_file(a1, v55 & 0xFFF, *(unsigned int *)(a1 + 28), a2, a3) & 1) != 0 )
        return uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
      else
        return 0LL;
    }
    else
    {
      v34 = a3;
      if ( __OFSUB__(0LL, *(_QWORD *)a1)
        || (<alloc::string::String as core::clone::Clone>::clone(v35, a1),
            v30 = *(_OWORD *)&v35[8],
            *(_QWORD *)v35 == 0x8000000000000000LL) )
      {
        core::option::unwrap_failed(&off_EBB00);
      }
      v41 = a1;
      v43 = *(_QWORD *)v35;
      v44 = v30;
      <char as core::str::pattern::Pattern>::into_searcher(&v35[16], v30, *((_QWORD *)&v30 + 1));
      *(_QWORD *)v35 = 0LL;
      *(_QWORD *)&v35[8] = *((_QWORD *)&v30 + 1);
      v39 = 1;
      v9 = v8;
      v40 = v8;
      while ( 1 )
      {
        v11 = core::str::iter::SplitInternal<P>::next(v35);
        if ( !v11 )
          break;
        v12 = v10;
        *(_QWORD *)&v30 = v11;
        *((_QWORD *)&v30 + 1) = v10 + v11;
        v13 = core::iter::traits::iterator::Iterator::try_fold(&v30);
        if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v13) )
        {
          is_dir = std::path::Path::is_dir(a2, v34);
          uucore::features::mode::parse_numeric(&v30, v8, v11, v12, is_dir);
          v15 = v30;
          v8 = DWORD2(v30);
          v9 = DWORD2(v30);
          if ( (_QWORD)v30 != 0x8000000000000000LL )
          {
            v42 = v31;
            v9 = HIDWORD(v30);
          }
        }
        else
        {
          umask = uucore::features::mode::get_umask();
          v17 = std::path::Path::is_dir(a2, v34);
          uucore::features::mode::parse_symbolic(&v27, v8, v11, v12, umask, v17);
          v15 = v27;
          v8 = DWORD2(v27);
          if ( (_QWORD)v27 == 0x8000000000000000LL )
          {
            v18 = std::path::Path::is_dir(a2, v34);
            uucore::features::mode::parse_symbolic(&v30, v9, v11, v12, 0LL, v18);
            v9 = core::result::Result<T,E>::unwrap(&v30);
          }
          else
          {
            v9 = HIDWORD(v27);
            v42 = v28;
          }
        }
        if ( v15 != 0x8000000000000000LL )
        {
          *(_QWORD *)&v27 = v15;
          *((_QWORD *)&v27 + 1) = __PAIR64__(v9, v8);
          v28 = v42;
          if ( *(_BYTE *)(v41 + 33) )
          {
            v7 = uucore::mods::error::ExitCode::new(1LL);
            core::ptr::drop_in_place<alloc::string::String>(&v27);
            goto LABEL_34;
          }
          v31 = v28;
          v30 = v27;
          LODWORD(v32) = 1;
          v25 = alloc::boxed::Box<T>::new(&v30);
LABEL_33:
          v7 = v25;
          goto LABEL_34;
        }
      }
      if ( (uu_chmod::Chmoder::change_file(v41, v40, v8, a2, v34) & 1) != 0 )
      {
        v7 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
LABEL_34:
        core::ptr::drop_in_place<alloc::string::String>(&v43);
        return v7;
      }
      if ( (~v9 & v8) != 0 )
      {
        LOBYTE(v29) = 0;
        uucore::features::fs::display_permissions_unix(v52, v8, 0LL, v19, v20, v21, 1LL, a2, v34, (_DWORD)v29);
        uucore::features::fs::display_permissions_unix(
          v45,
          v9,
          0LL,
          v22,
          v23,
          v24,
          v27,
          *((_QWORD *)&v27 + 1),
          v28,
          (_DWORD)v29);
        *(_QWORD *)v35 = &v27;
        *(_QWORD *)&v35[8] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v35[16] = v52;
        v36 = <alloc::string::String as core::fmt::Display>::fmt;
        v37 = v45;
        v38 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v30 = &unk_EBAD0;
        *((_QWORD *)&v30 + 1) = 3LL;
        v33 = 0LL;
        v31 = v35;
        v32 = 3LL;
        core::option::Option<T>::map_or_else(&v50, &v30);
        core::ptr::drop_in_place<alloc::string::String>(v45);
        core::ptr::drop_in_place<alloc::string::String>(v52);
        LODWORD(v36) = 1;
        *(_OWORD *)v35 = v50;
        *(_QWORD *)&v35[16] = v51;
        v25 = alloc::boxed::Box<T>::new(v35);
        goto LABEL_33;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v43);
      return 0LL;
    }
  }
  return v7;
}