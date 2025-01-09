__int64 __fastcall uu_cp::handle_copy_mode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  __int64 v12; // r15
  int v13; // ebx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // r12
  unsigned __int8 is_symlink; // al
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 result; // rax
  int v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rdx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  int v34; // ebx
  __int128 v35; // xmm0
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rbx
  char v39; // al
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rbp
  void *filename; // rax
  __int64 v44; // rdx
  void *v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  __int128 v53; // [rsp+30h] [rbp-248h] BYREF
  __int128 *v54; // [rsp+40h] [rbp-238h]
  _BYTE v55[24]; // [rsp+50h] [rbp-228h] BYREF
  _BYTE v56[40]; // [rsp+68h] [rbp-210h]
  __int64 v57; // [rsp+108h] [rbp-170h]
  __int128 v58; // [rsp+110h] [rbp-168h] BYREF
  __int64 v59; // [rsp+120h] [rbp-158h]
  char v60; // [rsp+128h] [rbp-150h]
  __int128 v61; // [rsp+130h] [rbp-148h] BYREF
  __int128 *v62; // [rsp+140h] [rbp-138h]
  __int64 (__fastcall *v63)(); // [rsp+148h] [rbp-130h]
  __int64 v64; // [rsp+150h] [rbp-128h]
  __int64 v65; // [rsp+158h] [rbp-120h]
  __int128 v66; // [rsp+160h] [rbp-118h] BYREF
  __int64 v67; // [rsp+170h] [rbp-108h]
  char v68; // [rsp+178h] [rbp-100h]
  __int128 v69; // [rsp+218h] [rbp-60h] BYREF
  __int64 v70; // [rsp+228h] [rbp-50h]
  _BYTE v71[72]; // [rsp+230h] [rbp-48h] BYREF

  v12 = a4;
  v13 = *(_DWORD *)(a9 + 56) & 0xF000;
  switch ( *(_BYTE *)(a6 + 78) )
  {
    case 0:
      std::fs::metadata(v55);
      v15 = *(_DWORD *)v55;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v55);
      v16 = a3;
      if ( v15 == 2 )
        goto LABEL_42;
      v17 = a6;
      uucore::features::backup_control::get_backup_path(
        &v53,
        *(unsigned int *)(a6 + 76),
        v12,
        a5,
        *(_QWORD *)(a6 + 8),
        *(_QWORD *)(a6 + 16));
      v18 = v53;
      if ( (_QWORD)v53 == 0x8000000000000000LL )
        goto LABEL_33;
      v19 = (__int64)v54;
      v62 = v54;
      v61 = v53;
      v64 = *((_QWORD *)&v53 + 1);
      v57 = v12;
      is_symlink = std::path::Path::is_symlink(v12, a5);
      uu_cp::backup_dest(v55, v57, a5, v64, v19, is_symlink);
      v21 = *(_QWORD *)v55;
      v66 = *(_OWORD *)&v55[8];
      v67 = *(_QWORD *)v56;
      if ( *(_QWORD *)v55 != 13LL )
      {
        v35 = *(_OWORD *)&v56[8];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v56[24];
        *(_OWORD *)(a1 + 32) = v35;
        *(_QWORD *)(a1 + 24) = v67;
        *(_OWORD *)(a1 + 8) = v66;
        *(_QWORD *)a1 = v21;
        return core::ptr::drop_in_place<std::path::PathBuf>(&v61);
      }
      v58 = v66;
      v59 = v67;
      core::ptr::drop_in_place<std::path::PathBuf>(&v58);
      v22 = std::fs::remove_file(v57, a5);
      if ( v22 )
      {
        *(_QWORD *)a1 = 2LL;
        *(_QWORD *)(a1 + 8) = v22;
        return core::ptr::drop_in_place<std::path::PathBuf>(&v61);
      }
      core::ptr::drop_in_place<std::path::PathBuf>(&v61);
      v12 = v57;
      v17 = a6;
LABEL_33:
      v36 = <uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(
              *(unsigned int *)(v17 + 60),
              *(unsigned __int8 *)(v17 + 61));
      v37 = v18;
      if ( v36 && (result = std::fs::remove_file(v12, a5), v37 = v53, result) )
      {
        *(_QWORD *)a1 = 2LL;
        *(_QWORD *)(a1 + 8) = result;
        if ( v18 == 0x8000000000000000LL && v37 != 0x8000000000000000LL )
          return core::ptr::drop_in_place<std::path::PathBuf>(&v53);
      }
      else
      {
        if ( v18 == 0x8000000000000000LL && v37 != 0x8000000000000000LL )
          core::ptr::drop_in_place<std::path::PathBuf>(&v53);
        v16 = a3;
LABEL_42:
        if ( (*(_BYTE *)(a6 + 65) || a11 && *(_BYTE *)(a6 + 64))
          && (v38 = v16, v39 = std::path::Path::is_symlink(a2, v16), v16 = v38, v39) )
        {
          v40 = v38;
          uucore::features::fs::canonicalize(v55, a2, v38, 2LL, 1LL);
          core::result::Result<T,E>::unwrap(v71, v55);
          v41 = std::fs::hard_link(v71, v12, a5);
        }
        else
        {
          v40 = v16;
          v41 = std::fs::hard_link(a2, v16, v12, a5);
        }
        v42 = v41;
        v65 = v41;
        filename = (void *)uucore::features::fs::get_filename(v12, a5);
        if ( !filename )
          v44 = 17LL;
        v45 = &unk_2D170;
        if ( !filename )
          filename = &unk_2D170;
        *(_QWORD *)&v58 = 0LL;
        *((_QWORD *)&v58 + 1) = filename;
        v59 = v44;
        v60 = 1;
        v46 = uucore::features::fs::get_filename(a2, v40);
        if ( v46 )
          v45 = (void *)v46;
        else
          v47 = 17LL;
        *(_QWORD *)&v66 = 0LL;
        *((_QWORD *)&v66 + 1) = v45;
        v67 = v47;
        v68 = 1;
        *(_QWORD *)&v61 = &v58;
        *((_QWORD *)&v61 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v62 = &v66;
        v63 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v55 = &off_1B5F78;
        *(_QWORD *)&v55[8] = 2LL;
        *(_QWORD *)&v55[16] = &v61;
        *(_OWORD *)v56 = 2uLL;
        core::option::Option<T>::map_or_else(&v69, v55);
        *(_QWORD *)&v55[16] = v70;
        *(_OWORD *)v55 = v69;
        if ( v42 )
        {
          v53 = *(_OWORD *)&v55[8];
          result = *(_QWORD *)v55;
          v30 = (_QWORD *)a1;
          if ( *(_QWORD *)v55 == 0x8000000000000000LL )
            goto LABEL_57;
          *(_OWORD *)(a1 + 16) = v53;
          *(_QWORD *)a1 = 3LL;
          *(_QWORD *)(a1 + 8) = result;
          *(_QWORD *)(a1 + 32) = v42;
        }
        else
        {
          result = core::ptr::drop_in_place<<core::result::Result<(),std::io::error::Error> as quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(v55);
          *(_QWORD *)a1 = 13LL;
        }
      }
      return result;
    case 1:
      std::fs::metadata(v55);
      v34 = *(_DWORD *)v55;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v55);
      if ( v34 == 2
        || !(unsigned __int8)<uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(
                               *(unsigned int *)(a6 + 60),
                               *(unsigned __int8 *)(a6 + 61))
        || (result = std::fs::remove_file(v12, a5)) == 0 )
      {
        uu_cp::symlink_file(v55, a2, a3, v12, a5, a10);
        goto LABEL_17;
      }
      *(_QWORD *)a1 = 2LL;
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 2:
      uu_cp::copy_helper((__int64)v55, a2, a3, a4, a5, a6, a7, a8, v13 == 40960, v13 == 4096, a10);
LABEL_17:
      result = *(_QWORD *)v55;
      if ( *(_QWORD *)v55 != 13LL )
        goto LABEL_11;
      *(_QWORD *)a1 = 13LL;
      return result;
    case 3:
      std::fs::metadata(v55);
      v26 = *(_DWORD *)v55;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v55);
      if ( v26 == 2 )
      {
        uu_cp::copy_helper((__int64)v55, a2, a3, v12, a5, a6, a7, a8, v13 == 40960, v13 == 4096, a10);
        result = *(_QWORD *)v55;
        v30 = (_QWORD *)a1;
        if ( *(_QWORD *)v55 == 13LL )
        {
LABEL_57:
          *v30 = 13LL;
        }
        else
        {
LABEL_11:
          *(_QWORD *)(a1 + 56) = *(_QWORD *)&v56[32];
          v31 = *(_OWORD *)&v55[8];
          v32 = *(_OWORD *)v56;
          *(_OWORD *)(a1 + 40) = *(_OWORD *)&v56[16];
          *(_OWORD *)(a1 + 24) = v32;
          *(_OWORD *)(a1 + 8) = v31;
          *(_QWORD *)a1 = result;
        }
      }
      else
      {
        result = *(unsigned __int8 *)(a6 + 77);
        switch ( *(_BYTE *)(a6 + 77) )
        {
          case 0:
            uu_cp::copy_helper((__int64)v55, a2, a3, v12, a5, a6, a7, a8, v13 == 40960, v13 == 4096, a10);
            result = *(_QWORD *)v55;
            if ( *(_QWORD *)v55 != 13LL )
            {
              *(_QWORD *)(a1 + 56) = *(_QWORD *)&v56[32];
              JUMPOUT(0x106B52LL);
            }
            goto LABEL_60;
          case 1:
            if ( *(_BYTE *)(a6 + 71) )
            {
              *(_QWORD *)&v66 = 1LL;
              *((_QWORD *)&v66 + 1) = v12;
              v67 = a5;
              v68 = 1;
              *(_QWORD *)&v58 = &v66;
              *((_QWORD *)&v58 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)v55 = &off_1B5DD8;
              *(_QWORD *)&v55[8] = 2LL;
              *(_QWORD *)&v55[16] = &v58;
              *(_OWORD *)v56 = 1uLL;
              result = std::io::stdio::_print(v55, a4, v27, v28, v29, a6);
              *(_QWORD *)a1 = 13LL;
            }
            else
            {
LABEL_60:
              *(_QWORD *)a1 = 13LL;
            }
            break;
          case 2:
            std::fs::symlink_metadata(v55, v12, a5);
            JUMPOUT(0x106B85LL);
          case 3:
            *(_QWORD *)&v66 = v12;
            *((_QWORD *)&v66 + 1) = a5;
            *(_QWORD *)&v58 = &v66;
            *((_QWORD *)&v58 + 1) = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)v55 = &off_1B5F98;
            *(_QWORD *)&v55[8] = 2LL;
            *(_QWORD *)&v55[16] = &v58;
            *(_OWORD *)v56 = 1uLL;
            JUMPOUT(0x106C03LL);
        }
      }
      return result;
    case 4:
      *(_QWORD *)v55 = 0x1B600000000LL;
      *(_DWORD *)&v55[8] = 256;
      *(_WORD *)&v55[12] = 1;
      std::fs::OpenOptions::open(&v66, v55, a4, a5);
      v23 = core::result::Result<T,E>::unwrap(&v66);
      result = core::ptr::drop_in_place<std::fs::File>(v23);
      *(_QWORD *)a1 = 13LL;
      return result;
  }
}
