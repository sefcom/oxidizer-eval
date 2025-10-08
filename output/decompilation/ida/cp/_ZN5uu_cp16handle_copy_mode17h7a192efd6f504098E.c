__int64 __fastcall uu_cp::handle_copy_mode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char ***a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        char a12,
        char a13)
{
  __int64 v15; // r15
  int v16; // ebx
  int v18; // ebx
  __int64 result; // rax
  unsigned int v20; // eax
  int v22; // r14d
  int v25; // ebx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  char ***v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbp
  const char *filename; // rax
  __int64 v32; // rdx
  const char *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r12
  unsigned __int8 is_symlink; // al
  char **v38; // rax
  __int64 v39; // rax
  unsigned int v40; // r12d
  char **v41; // r14
  __int64 v42; // r12
  bool v43; // cc
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  int v49; // [rsp+10h] [rbp-238h]
  int v52; // [rsp+18h] [rbp-230h]
  __int64 v54; // [rsp+20h] [rbp-228h]
  char **v55; // [rsp+28h] [rbp-220h] BYREF
  _BYTE src[168]; // [rsp+30h] [rbp-218h] BYREF
  __int64 *v57; // [rsp+D8h] [rbp-170h] BYREF
  __int64 (__fastcall *v58)(); // [rsp+E0h] [rbp-168h]
  __int64 v59; // [rsp+E8h] [rbp-160h]
  char v60; // [rsp+F0h] [rbp-158h]
  __int64 v61; // [rsp+F8h] [rbp-150h]
  __int128 v62; // [rsp+100h] [rbp-148h] BYREF
  __int64 v63; // [rsp+110h] [rbp-138h]
  __int64 v64; // [rsp+118h] [rbp-130h] BYREF
  __int128 v65; // [rsp+120h] [rbp-128h]
  _QWORD v66[4]; // [rsp+130h] [rbp-118h] BYREF
  __int64 v67; // [rsp+150h] [rbp-F8h] BYREF
  __int64 v68; // [rsp+158h] [rbp-F0h]
  _QWORD dest[20]; // [rsp+160h] [rbp-E8h] BYREF
  _BYTE v70[72]; // [rsp+200h] [rbp-48h] BYREF

  v15 = a1;
  v16 = *(_DWORD *)(a9 + 56) & 0xF000;
  switch ( *(_BYTE *)(a6 + 103) )
  {
    case 0:
      std::fs::metadata(&v55);
      v18 = (int)v55;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v55, a4);
      if ( v18 == 2 )
        goto LABEL_20;
      uucore::features::backup_control::get_backup_path(
        &v67,
        *(unsigned __int8 *)(a6 + 101),
        a4,
        a5,
        *(_QWORD *)(a6 + 8),
        *(_QWORD *)(a6 + 16));
      if ( v67 == 0x8000000000000000LL )
        goto LABEL_4;
      v36 = v68;
      v54 = dest[0];
      is_symlink = std::path::Path::is_symlink(a4, a5);
      uu_cp::backup_dest(&v55, a4, (__int64)a5, v36, v54, is_symlink);
      v38 = v55;
      v62 = *(_OWORD *)src;
      v63 = *(_QWORD *)&src[16];
      if ( v55 != (char **)0x800000000000000CLL )
      {
        *(_QWORD *)(a1 + 48) = *(_QWORD *)&src[40];
        *(_OWORD *)(a1 + 32) = *(_OWORD *)&src[24];
        *(_QWORD *)(a1 + 24) = v63;
        *(_OWORD *)(a1 + 8) = v62;
        *(_QWORD *)a1 = v38;
        return core::ptr::drop_in_place<std::path::PathBuf>(&v67);
      }
      core::ptr::drop_in_place<std::path::PathBuf>(&v62);
      v39 = std::fs::remove_file(a4, a5);
      if ( v39 )
      {
        *(_QWORD *)a1 = 0x8000000000000001LL;
        *(_QWORD *)(a1 + 8) = v39;
        return core::ptr::drop_in_place<std::path::PathBuf>(&v67);
      }
      core::ptr::drop_in_place<std::path::PathBuf>(&v67);
LABEL_4:
      if ( (unsigned __int8)<uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(
                              *(unsigned int *)(a6 + 84),
                              *(unsigned __int8 *)(a6 + 85)) )
      {
        result = std::fs::remove_file(a4, a5);
        if ( result )
        {
          *(_QWORD *)a1 = 0x8000000000000001LL;
          *(_QWORD *)(a1 + 8) = result;
          return result;
        }
      }
LABEL_20:
      if ( (*(_BYTE *)(a6 + 89) || a11 && *(_BYTE *)(a6 + 88) == 1)
        && (unsigned __int8)std::path::Path::is_symlink(a2, a3) )
      {
        uucore::features::fs::canonicalize(&v55, a2, a3, 2LL, 1LL);
        core::result::Result<T,E>::unwrap(v70, &v55);
        v28 = a5;
        v29 = std::fs::hard_link(v70, a4, a5);
      }
      else
      {
        v28 = a5;
        v29 = std::fs::hard_link(a2, a3, a4, a5);
      }
      v30 = v29;
      v61 = v29;
      filename = (const char *)uucore::features::fs::get_filename(a4, v28);
      if ( !filename )
        v32 = 17LL;
      v33 = aInvalidFileNam;
      if ( !filename )
        filename = aInvalidFileNam;
      v57 = 0LL;
      v58 = (__int64 (__fastcall *)())filename;
      v59 = v32;
      v60 = 1;
      v34 = uucore::features::fs::get_filename(a2, a3);
      if ( v34 )
        v33 = (const char *)v34;
      else
        v35 = 17LL;
      v67 = 0LL;
      v68 = (__int64)v33;
      dest[0] = v35;
      LOBYTE(dest[1]) = 1;
      v66[0] = &v57;
      v66[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v66[2] = &v67;
      v66[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      v55 = &off_15EC90;
      *(_QWORD *)src = 2LL;
      *(_QWORD *)&src[8] = v66;
      *(_OWORD *)&src[16] = 2uLL;
      core::option::Option<T>::map_or_else(&v64, &v55);
      if ( !v30 )
      {
        result = core::ptr::drop_in_place<<core::result::Result<(),std::io::error::Error> as quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(&v64);
        goto LABEL_39;
      }
      result = v64;
      if ( v64 == 0x8000000000000000LL )
        goto LABEL_39;
      *(_OWORD *)(a1 + 16) = v65;
      *(_QWORD *)a1 = 0x8000000000000002LL;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 32) = v30;
      return result;
    case 1:
      std::fs::metadata(&v55);
      v25 = (int)v55;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v55, a4);
      if ( v25 != 2 )
      {
        if ( (unsigned __int8)<uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(
                                *(unsigned int *)(a6 + 84),
                                *(unsigned __int8 *)(a6 + 85)) )
        {
          result = std::fs::remove_file(a4, a5);
          if ( result )
          {
            *(_QWORD *)a1 = 0x8000000000000001LL;
            *(_QWORD *)(a1 + 8) = result;
            return result;
          }
        }
      }
      uu_cp::symlink_file((__int64)&v55, a2, a3, a4, (__int64)a5, a10);
      result = (__int64)v55;
      if ( v55 != (char **)0x800000000000000CLL )
        goto LABEL_19;
      goto LABEL_39;
    case 2:
      uu_cp::copy_helper((unsigned int)&v55, a2, a3, a4, (_DWORD)a5, a6, a7, a8, v16 == 40960, a12, a10, a13);
LABEL_9:
      result = (__int64)v55;
      if ( v55 == (char **)0x800000000000000CLL )
        goto LABEL_39;
      goto LABEL_19;
    case 3:
      v49 = a2;
      v52 = a3;
      std::fs::metadata(&v55);
      v22 = (int)v55;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v55, a4);
      if ( v22 != 2 )
      {
        switch ( *(_BYTE *)(a6 + 102) )
        {
          case 0:
            uu_cp::copy_helper((unsigned int)&v55, v49, v52, a4, (_DWORD)a5, a6, a7, a8, v16 == 40960, a12, a10, a13);
            goto LABEL_9;
          case 1:
            result = (__int64)a5;
            if ( *(_BYTE *)(a6 + 95) )
            {
              v67 = 1LL;
              v68 = a4;
              dest[0] = a5;
              LOBYTE(dest[1]) = 1;
              v57 = &v67;
              v58 = <os_display::Quoted as core::fmt::Display>::fmt;
              v55 = &off_15EB08;
              *(_QWORD *)src = 2LL;
              *(_QWORD *)&src[8] = &v57;
              *(_OWORD *)&src[16] = 1uLL;
              result = std::io::stdio::_print(&v55);
            }
            *(_BYTE *)(a1 + 8) = 1;
            goto LABEL_40;
          case 2:
            std::fs::symlink_metadata(&v55);
            if ( v55 == (char **)((char *)&dword_0 + 2) )
              goto LABEL_45;
            memcpy(dest, &src[8], sizeof(dest));
            v67 = (__int64)v55;
            v68 = *(_QWORD *)src;
            std::fs::Metadata::modified(&v55, a9);
            v40 = *(_DWORD *)src;
            v41 = v55;
            if ( *(_DWORD *)src == 1000000000 )
            {
              result = a1;
              *(_QWORD *)a1 = 0x8000000000000001LL;
              *(_QWORD *)(a1 + 8) = v41;
              return result;
            }
            std::fs::Metadata::modified(&v55, &v67);
            result = *(unsigned int *)src;
            if ( *(_DWORD *)src == 1000000000 )
LABEL_45:
              JUMPOUT(0xA3A48LL);
            if ( v41 == v55 )
            {
              v43 = v40 <= *(_DWORD *)src;
              v42 = a1;
              if ( !v43 )
              {
LABEL_60:
                uu_cp::OverwriteMode::verify((__int64)&v55, *(_DWORD *)(a6 + 84), a4, a5, *(_BYTE *)(a6 + 95));
                result = (__int64)v55;
                if ( v55 == (char **)0x800000000000000CLL )
                {
                  uu_cp::copy_helper(
                    (unsigned int)&v55,
                    v49,
                    v52,
                    a4,
                    (_DWORD)a5,
                    a6,
                    a7,
                    a8,
                    v16 == 40960,
                    a12,
                    a10,
                    a13);
                  result = (__int64)v55;
                  if ( v55 == (char **)0x800000000000000CLL )
                  {
                    v15 = v42;
                    goto LABEL_39;
                  }
                }
                v44 = *(_OWORD *)src;
                v45 = *(_OWORD *)&src[16];
                *(_OWORD *)(v42 + 40) = *(_OWORD *)&src[32];
                *(_OWORD *)(v42 + 24) = v45;
                *(_OWORD *)(v42 + 8) = v44;
                *(_QWORD *)v42 = result;
                return result;
              }
            }
            else
            {
              v42 = a1;
              if ( (__int64)v41 > (__int64)v55 )
                goto LABEL_60;
            }
            *(_BYTE *)(v42 + 8) = 1;
            *(_QWORD *)v42 = 0x800000000000000CLL;
            return result;
          case 3:
            v67 = a4;
            v68 = (__int64)a5;
            v57 = &v67;
            v58 = <std::path::Display as core::fmt::Display>::fmt;
            v55 = &off_15ECB0;
            *(_QWORD *)src = 2LL;
            *(_QWORD *)&src[8] = &v57;
            *(_OWORD *)&src[16] = 1uLL;
            JUMPOUT(0xA3AC5LL);
        }
      }
      uu_cp::copy_helper((unsigned int)&v55, v49, v52, a4, (_DWORD)a5, a6, a7, a8, v16 == 40960, a12, a10, a13);
      result = (__int64)v55;
      if ( v55 == (char **)0x800000000000000CLL )
      {
LABEL_39:
        *(_BYTE *)(v15 + 8) = 0;
LABEL_40:
        *(_QWORD *)v15 = 0x800000000000000CLL;
      }
      else
      {
LABEL_19:
        v26 = *(_OWORD *)src;
        v27 = *(_OWORD *)&src[16];
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&src[32];
        *(_OWORD *)(a1 + 24) = v27;
        *(_OWORD *)(a1 + 8) = v26;
        *(_QWORD *)a1 = result;
      }
      return result;
    case 4:
      v55 = (char **)0x1B600000000LL;
      *(_DWORD *)src = 256;
      *(_WORD *)&src[4] = 1;
      std::fs::OpenOptions::open(&v67, &v55, a4, a5);
      v20 = core::result::Result<T,E>::unwrap(&v67);
      result = core::ptr::drop_in_place<std::fs::File>(v20);
      goto LABEL_39;
  }
}