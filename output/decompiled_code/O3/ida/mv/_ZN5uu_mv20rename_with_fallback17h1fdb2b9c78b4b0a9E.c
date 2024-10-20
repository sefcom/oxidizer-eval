__int64 __fastcall uu_mv::rename_with_fallback(void *src, size_t n, void *a3, size_t a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r12
  _OWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbp
  unsigned __int8 v16; // bl
  __int64 v17; // rdx
  __int64 v18; // r14
  int v19; // ecx
  char v20; // al
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // r14
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // [rsp+8h] [rbp-290h] BYREF
  __int64 v33; // [rsp+10h] [rbp-288h]
  int v34; // [rsp+18h] [rbp-280h]
  _QWORD v35[3]; // [rsp+20h] [rbp-278h] BYREF
  _QWORD v36[2]; // [rsp+38h] [rbp-260h] BYREF
  __int64 v37; // [rsp+48h] [rbp-250h]
  __int128 v38; // [rsp+50h] [rbp-248h] BYREF
  __int128 v39; // [rsp+60h] [rbp-238h]
  __int128 v40; // [rsp+70h] [rbp-228h]
  _OWORD srca[11]; // [rsp+80h] [rbp-218h] BYREF
  __int128 v42; // [rsp+130h] [rbp-168h] BYREF
  __int128 v43; // [rsp+140h] [rbp-158h]
  __int128 v44; // [rsp+150h] [rbp-148h]
  _QWORD v45[2]; // [rsp+160h] [rbp-138h] BYREF
  _QWORD v46[2]; // [rsp+170h] [rbp-128h] BYREF
  _OWORD dest[11]; // [rsp+180h] [rbp-118h] BYREF
  __int128 v48; // [rsp+230h] [rbp-68h] BYREF
  __int64 v49; // [rsp+240h] [rbp-58h]
  _BYTE v50[72]; // [rsp+250h] [rbp-48h] BYREF

  v45[0] = src;
  v45[1] = n;
  v46[0] = a3;
  v46[1] = a4;
  *(_QWORD *)&srca[0] = std::sys::pal::unix::fs::rename(src, n, a3, a4);
  if ( !*(_QWORD *)&srca[0] )
    return 0LL;
  core::ptr::drop_in_place<std::io::error::Error>(srca, n);
  std::sys::pal::unix::fs::lstat(srca);
  if ( LODWORD(srca[0]) == 2 )
    return *((_QWORD *)&srca[0] + 1);
  if ( (WORD4(srca[3]) & 0xF000) != 0x4000 )
  {
    if ( (WORD4(srca[3]) & 0xF000) == 0xA000 )
    {
      std::sys::pal::unix::fs::readlink(srca, src, n);
      result = *((_QWORD *)&srca[0] + 1);
      v10 = *(_QWORD *)&srca[0];
      if ( *(_QWORD *)&srca[0] != 0x8000000000000000LL )
      {
        v11 = *((_QWORD *)&srca[0] + 1);
        v12 = std::sys::pal::unix::fs::symlink(*((void **)&srca[0] + 1), *(size_t *)&srca[1], a3, a4);
        if ( v10 )
          _rust_dealloc(v11, v10, 1LL);
        result = v12;
        if ( !v12 )
          return std::sys::pal::unix::fs::unlink(src, n);
      }
    }
    else if ( (unsigned __int8)std::path::Path::is_symlink(a3, a4)
           && (v14 = std::sys::pal::unix::fs::unlink(a3, a4)) != 0 )
    {
      v15 = v14;
      v36[0] = v14;
      std::sys::os_str::bytes::Slice::to_string_lossy(&v32, a3, a4);
      std::sys::os_str::bytes::Slice::to_string_lossy(v35, src, n);
      switch ( v15 & 3 )
      {
        case 0LL:
          v16 = *(_BYTE *)(v15 + 16);
          break;
        case 1LL:
          v16 = *(_BYTE *)(v15 + 15);
          break;
        case 2LL:
          switch ( HIDWORD(v15) )
          {
            case 1:
            case 0xD:
              goto LABEL_64;
            case 2:
              goto LABEL_55;
            case 4:
              goto LABEL_77;
            case 7:
              goto LABEL_81;
            case 0xB:
              goto LABEL_82;
            case 0xC:
              goto LABEL_76;
            case 0x10:
              goto LABEL_85;
            case 0x11:
              goto LABEL_90;
            case 0x12:
              goto LABEL_75;
            case 0x14:
              goto LABEL_89;
            case 0x15:
              goto LABEL_84;
            case 0x16:
              goto LABEL_88;
            case 0x1A:
              goto LABEL_86;
            case 0x1B:
              goto LABEL_69;
            case 0x1C:
              goto LABEL_95;
            case 0x1D:
              goto LABEL_68;
            case 0x1E:
              goto LABEL_98;
            case 0x1F:
              goto LABEL_78;
            case 0x20:
              goto LABEL_97;
            case 0x23:
              goto LABEL_72;
            case 0x24:
              goto LABEL_79;
            case 0x26:
              goto LABEL_94;
            case 0x27:
              goto LABEL_92;
            case 0x28:
              goto LABEL_87;
            case 0x62:
              goto LABEL_74;
            case 0x63:
              goto LABEL_80;
            case 0x64:
              goto LABEL_67;
            case 0x65:
              goto LABEL_91;
            case 0x67:
              goto LABEL_96;
            case 0x68:
              goto LABEL_93;
            case 0x6B:
              goto LABEL_83;
            case 0x6E:
              goto LABEL_70;
            case 0x6F:
              goto LABEL_71;
            case 0x71:
              goto LABEL_73;
            case 0x74:
              goto LABEL_65;
            case 0x7A:
              goto LABEL_66;
            default:
              goto LABEL_99;
          }
        case 3LL:
          switch ( HIDWORD(v15) )
          {
            case 0:
LABEL_55:
              v16 = 0;
              break;
            case 1:
LABEL_64:
              v16 = 1;
              break;
            case 2:
LABEL_71:
              v16 = 2;
              break;
            case 3:
LABEL_93:
              v16 = 3;
              break;
            case 4:
LABEL_73:
              v16 = 4;
              break;
            case 5:
LABEL_91:
              v16 = 5;
              break;
            case 6:
LABEL_96:
              v16 = 6;
              break;
            case 7:
LABEL_83:
              v16 = 7;
              break;
            case 8:
LABEL_74:
              v16 = 8;
              break;
            case 9:
LABEL_80:
              v16 = 9;
              break;
            case 0xA:
LABEL_67:
              v16 = 10;
              break;
            case 0xB:
LABEL_97:
              v16 = 11;
              break;
            case 0xC:
LABEL_90:
              v16 = 12;
              break;
            case 0xD:
LABEL_82:
              v16 = 13;
              break;
            case 0xE:
LABEL_89:
              v16 = 14;
              break;
            case 0xF:
LABEL_84:
              v16 = 15;
              break;
            case 0x10:
LABEL_92:
              v16 = 16;
              break;
            case 0x11:
LABEL_98:
              v16 = 17;
              break;
            case 0x12:
LABEL_87:
              v16 = 18;
              break;
            case 0x13:
LABEL_65:
              v16 = 19;
              break;
            case 0x14:
LABEL_88:
              v16 = 20;
              break;
            case 0x15:
              v16 = 21;
              break;
            case 0x16:
LABEL_70:
              v16 = 22;
              break;
            case 0x17:
              v16 = 23;
              break;
            case 0x18:
LABEL_95:
              v16 = 24;
              break;
            case 0x19:
LABEL_68:
              v16 = 25;
              break;
            case 0x1A:
LABEL_66:
              v16 = 26;
              break;
            case 0x1B:
LABEL_69:
              v16 = 27;
              break;
            case 0x1C:
LABEL_85:
              v16 = 28;
              break;
            case 0x1D:
LABEL_86:
              v16 = 29;
              break;
            case 0x1E:
LABEL_72:
              v16 = 30;
              break;
            case 0x1F:
LABEL_75:
              v16 = 31;
              break;
            case 0x20:
LABEL_78:
              v16 = 32;
              break;
            case 0x21:
LABEL_79:
              v16 = 33;
              break;
            case 0x22:
LABEL_81:
              v16 = 34;
              break;
            case 0x23:
LABEL_77:
              v16 = 35;
              break;
            case 0x24:
LABEL_94:
              v16 = 36;
              break;
            case 0x25:
              v16 = 37;
              break;
            case 0x26:
LABEL_76:
              v16 = 38;
              break;
            case 0x27:
              v16 = 39;
              break;
            case 0x28:
LABEL_99:
              v16 = 40;
              break;
            default:
              v16 = 41;
              break;
          }
          break;
      }
      *(_QWORD *)&srca[0] = v35;
      *((_QWORD *)&srca[0] + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      *(_QWORD *)&srca[1] = &v32;
      *((_QWORD *)&srca[1] + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      *(_QWORD *)&srca[2] = v36;
      *((_QWORD *)&srca[2] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &off_130D08;
      *((_QWORD *)&dest[0] + 1) = 3LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = srca;
      *((_QWORD *)&dest[1] + 1) = 3LL;
      alloc::fmt::format::format_inner(&v38, dest);
      v30 = std::io::error::Error::new(v16, &v38);
      if ( v35[0] != 0x8000000000000000LL && v35[0] )
        _rust_dealloc(v35[1], v35[0], 1LL);
      v31 = v32;
      if ( v32 != 0x8000000000000000LL && v32 )
        _rust_dealloc(v33, v32, 1LL);
      core::ptr::drop_in_place<std::io::error::Error>(v36, v31);
      return v30;
    }
    else if ( std::sys::pal::unix::fs::copy(src, n, a3, a4) )
    {
      return v17;
    }
    else
    {
      result = uucore::features::fsxattr::copy_xattrs(v45, v46);
      if ( !result )
        return std::sys::pal::unix::fs::unlink(src, n);
    }
    return result;
  }
  v13 = a3;
  std::sys::pal::unix::fs::stat(srca);
  if ( LODWORD(srca[0]) == 2 )
  {
    *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&srca[0] + 1);
    *(_QWORD *)&dest[0] = 2LL;
LABEL_20:
    core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8, v13);
    goto LABEL_21;
  }
  v13 = srca;
  memcpy(dest, srca, sizeof(dest));
  if ( *(_QWORD *)&dest[0] == 2LL )
    goto LABEL_20;
  result = std::sys::pal::unix::fs::remove_dir_impl::remove_dir_all(a3, a4);
  if ( result )
    return result;
LABEL_21:
  v34 = (int)&unk_10000;
  v32 = 64000LL;
  v33 = 0LL;
  fs_extra::dir::get_size(srca, src, n);
  if ( *(_QWORD *)&srca[0] == 0x8000000000000000LL )
  {
    if ( a5 )
    {
      v18 = *((_QWORD *)&srca[0] + 1);
      indicatif::draw_target::ProgressDrawTarget::stderr(srca);
      indicatif::progress_bar::ProgressBar::with_draw_target(&v38, 1LL, v18, srca);
      indicatif::style::Template::from_str(srca, aMsgElapsedPrec, 64LL);
      v19 = DWORD2(srca[0]);
      v20 = BYTE12(srca[0]);
      if ( *(_QWORD *)&srca[0] != 0x8000000000000000LL )
      {
        DWORD1(dest[1]) = DWORD1(srca[1]);
        *(_QWORD *)((char *)dest + 13) = *(_QWORD *)((char *)srca + 13);
        *(_QWORD *)&dest[0] = *(_QWORD *)&srca[0];
        DWORD2(dest[0]) = DWORD2(srca[0]);
        BYTE12(dest[0]) = BYTE12(srca[0]);
        indicatif::style::ProgressStyle::new(srca, dest);
        if ( *(_QWORD *)&srca[0] != 0x8000000000000000LL )
        {
          memcpy(dest, srca, 0x88uLL);
          indicatif::progress_bar::ProgressBar::set_style(&v38, dest);
          v49 = v39;
          v48 = v38;
          indicatif::multi::MultiProgress::internalize(v35, *a5, 0LL, v21, &v48);
          goto LABEL_28;
        }
        v19 = DWORD2(srca[0]);
        v20 = BYTE12(srca[0]);
      }
      LODWORD(dest[0]) = v19;
      BYTE4(dest[0]) = v20;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, dest, &unk_1306A8, &off_130CB8);
    }
  }
  else
  {
    core::ptr::drop_in_place<fs_extra::error::Error>(srca);
  }
  v35[0] = 0LL;
LABEL_28:
  uucore::features::fsxattr::retrieve_xattrs(srca, src, n);
  if ( *(_QWORD *)&srca[0] )
  {
    v44 = srca[2];
    v43 = srca[1];
    v42 = srca[0];
  }
  else
  {
    *(_QWORD *)&dest[0] = *((_QWORD *)&srca[0] + 1);
    if ( *(_QWORD *)(__readfsqword(0) - 48) )
    {
      v22 = __readfsqword(0) - 48;
      v23 = *(_QWORD *)(v22 + 8);
      v37 = *(_QWORD *)(v22 + 16);
    }
    else
    {
      v23 = std::sys::pal::unix::rand::hashmap_random_keys();
      v24 = (_QWORD *)(__readfsqword(0) - 48);
      *v24 = 1LL;
      v24[1] = v23;
      v37 = v25;
      v24[2] = v25;
    }
    *(_QWORD *)(__readfsqword(0) - 48 + 8) = v23 + 1;
    v42 = *(_OWORD *)&off_130CE8;
    v43 = xmmword_130CF8;
    *(_QWORD *)&v44 = v23;
    *((_QWORD *)&v44 + 1) = v37;
    core::ptr::drop_in_place<std::io::error::Error>(dest, src);
  }
  if ( v35[0] )
    fs_extra::dir::move_dir_with_progress(
      (unsigned int)&v38,
      (_DWORD)src,
      n,
      (_DWORD)a3,
      a4,
      (unsigned int)&v32,
      (__int64)v35);
  else
    fs_extra::dir::move_dir(&v38, src, n, a3, a4, &v32);
  v26 = uucore::features::fsxattr::apply_xattrs(a3, a4, &v42);
  if ( v26 )
  {
    *(_QWORD *)&srca[0] = v26;
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, srca, &off_130688, &off_130CD0);
  }
  if ( (_QWORD)v38 == 0x8000000000000000LL )
  {
    if ( v35[0] )
      core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(v35);
    return 0LL;
  }
  dest[1] = v39;
  dest[2] = v40;
  dest[0] = v38;
  if ( *((_QWORD *)&v39 + 1) == 0x8000000000000001LL )
  {
    v28 = std::io::error::Error::new(1LL, aPermissionDeni, 17LL, v27);
  }
  else
  {
    v36[0] = dest;
    v36[1] = <fs_extra::error::Error as core::fmt::Debug>::fmt;
    *(_QWORD *)&srca[0] = anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    *((_QWORD *)&srca[0] + 1) = 1LL;
    *(_QWORD *)&srca[2] = 0LL;
    *(_QWORD *)&srca[1] = v36;
    *((_QWORD *)&srca[1] + 1) = 1LL;
    alloc::fmt::format::format_inner(v50, srca);
    v28 = std::io::error::Error::new(39LL, v50);
  }
  v29 = v28;
  core::ptr::drop_in_place<fs_extra::error::Error>(dest);
  if ( v35[0] )
    core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(v35);
  return v29;
}
