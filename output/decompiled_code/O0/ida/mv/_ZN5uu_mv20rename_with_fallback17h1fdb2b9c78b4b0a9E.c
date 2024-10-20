__int64 __fastcall uu_mv::rename_with_fallback(void *src, size_t n, char *a3, size_t a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // r13
  __int128 *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v20; // rax
  char *v21; // [rsp+8h] [rbp-470h] BYREF
  __int128 v22; // [rsp+10h] [rbp-468h]
  __int128 v23; // [rsp+20h] [rbp-458h] BYREF
  __int64 v24; // [rsp+30h] [rbp-448h]
  __int64 v25; // [rsp+40h] [rbp-438h] BYREF
  int v26; // [rsp+48h] [rbp-430h] BYREF
  char v27; // [rsp+4Ch] [rbp-42Ch]
  void *srca; // [rsp+50h] [rbp-428h] BYREF
  size_t na; // [rsp+58h] [rbp-420h]
  char *dest; // [rsp+60h] [rbp-418h] BYREF
  _BYTE v31[37]; // [rsp+68h] [rbp-410h] BYREF
  __int128 v32; // [rsp+8Dh] [rbp-3EBh]
  __int128 v33; // [rsp+9Dh] [rbp-3DBh]
  __int128 v34; // [rsp+ADh] [rbp-3CBh]
  __int128 v35; // [rsp+BDh] [rbp-3BBh]
  _OWORD v36[4]; // [rsp+CDh] [rbp-3ABh]
  __int128 v37; // [rsp+110h] [rbp-368h] BYREF
  __int64 v38; // [rsp+120h] [rbp-358h]
  char *v39; // [rsp+128h] [rbp-350h] BYREF
  int v40; // [rsp+130h] [rbp-348h]
  char v41; // [rsp+134h] [rbp-344h]
  _BYTE v42[11]; // [rsp+135h] [rbp-343h]
  __int128 v43; // [rsp+140h] [rbp-338h]
  __int128 v44; // [rsp+150h] [rbp-328h]
  __int128 v45; // [rsp+160h] [rbp-318h]
  __int128 v46; // [rsp+170h] [rbp-308h] BYREF
  _OWORD v47[2]; // [rsp+180h] [rbp-2F8h] BYREF
  _QWORD v48[2]; // [rsp+1A8h] [rbp-2D0h] BYREF
  int v49; // [rsp+1B8h] [rbp-2C0h]
  _QWORD v50[2]; // [rsp+1C0h] [rbp-2B8h] BYREF
  _QWORD v51[2]; // [rsp+1D0h] [rbp-2A8h] BYREF
  __int128 v52; // [rsp+1E0h] [rbp-298h] BYREF
  __int128 v53; // [rsp+1F0h] [rbp-288h]
  __int128 v54; // [rsp+200h] [rbp-278h]
  _QWORD v55[2]; // [rsp+210h] [rbp-268h] BYREF
  char v56[8]; // [rsp+220h] [rbp-258h] BYREF
  char v57[24]; // [rsp+228h] [rbp-250h] BYREF
  __int128 v58; // [rsp+240h] [rbp-238h]
  __int128 v59; // [rsp+250h] [rbp-228h]
  __int128 v60; // [rsp+260h] [rbp-218h]
  __int128 v61; // [rsp+270h] [rbp-208h]
  __int128 v62; // [rsp+280h] [rbp-1F8h]
  __int128 v63; // [rsp+290h] [rbp-1E8h]
  _OWORD v64[2]; // [rsp+2A0h] [rbp-1D8h]
  __int128 v65; // [rsp+2C0h] [rbp-1B8h] BYREF
  __int64 v66; // [rsp+2D0h] [rbp-1A8h]
  __int128 v67; // [rsp+2E0h] [rbp-198h] BYREF
  __int64 v68; // [rsp+2F0h] [rbp-188h]
  __int128 v69; // [rsp+2F8h] [rbp-180h] BYREF
  __int64 v70; // [rsp+308h] [rbp-170h]
  _OWORD v71[3]; // [rsp+310h] [rbp-168h] BYREF
  __int128 v72; // [rsp+340h] [rbp-138h] BYREF
  __int64 v73; // [rsp+350h] [rbp-128h]
  _QWORD v74[6]; // [rsp+358h] [rbp-120h] BYREF
  char *v75; // [rsp+388h] [rbp-F0h] BYREF
  int v76; // [rsp+390h] [rbp-E8h]
  char v77; // [rsp+394h] [rbp-E4h]
  __int128 v78; // [rsp+395h] [rbp-E3h]
  __int128 v79; // [rsp+3A5h] [rbp-D3h]
  __int128 v80; // [rsp+3B5h] [rbp-C3h]
  __int128 v81; // [rsp+3C5h] [rbp-B3h]
  __int128 v82; // [rsp+3D5h] [rbp-A3h]
  __int128 v83; // [rsp+3E5h] [rbp-93h]
  _BYTE v84[27]; // [rsp+3F5h] [rbp-83h]
  _OWORD v85[6]; // [rsp+410h] [rbp-68h] BYREF

  srca = src;
  na = n;
  v50[0] = a3;
  v50[1] = a4;
  v8 = std::sys::pal::unix::fs::rename(src, n, a3, a4);
  if ( !v8 )
    return 0LL;
  std::io::error::repr_bitpacked::decode_repr(&dest, v8);
  if ( (unsigned __int8)dest >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v31);
  std::sys::pal::unix::fs::lstat(&dest);
  if ( dest == (_BYTE *)&dword_0 + 2 )
    return *(_QWORD *)v31;
  if ( (*(_WORD *)((_BYTE *)&v32 + 11) & 0xF000) == 0x4000 )
  {
    std::sys::pal::unix::fs::stat(&dest);
    if ( dest == (_BYTE *)&dword_0 + 2 )
    {
      std::io::error::repr_bitpacked::decode_repr(&dest, *(_QWORD *)v31);
      if ( (unsigned __int8)dest >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v31);
    }
    else
    {
      v9 = std::sys::pal::unix::fs::remove_dir_impl::remove_dir_all(a3, a4);
      if ( v9 )
        return v9;
    }
    v49 = (int)&stru_10000;
    v48[0] = 64000LL;
    v48[1] = 0LL;
    fs_extra::dir::get_size(v55, src, n);
    if ( v55[0] == 0x8000000000000000LL )
    {
      if ( a5 )
      {
        indicatif::progress_bar::ProgressBar::new(&v37, v55[1]);
        indicatif::style::Template::from_str_with_tab_width(&v39, aMsgElapsedPrec, 64LL, 8LL);
        v12 = v40;
        v13 = v41;
        if ( v39 == (char *)0x8000000000000000LL )
          goto LABEL_57;
        HIDWORD(v22) = *(_DWORD *)&v42[7];
        *(_QWORD *)((char *)&v22 + 5) = *(_QWORD *)v42;
        v21 = v39;
        LODWORD(v22) = v40;
        BYTE4(v22) = v41;
        indicatif::style::ProgressStyle::new(&dest, &v21);
        v12 = *(_DWORD *)v31;
        v13 = v31[4];
        v58 = *(_OWORD *)&v31[5];
        v59 = *(_OWORD *)&v31[21];
        v60 = v32;
        v61 = v33;
        v62 = v34;
        v63 = v35;
        v64[0] = v36[0];
        *(_OWORD *)((char *)v64 + 11) = *(_OWORD *)((char *)v36 + 11);
        if ( dest == (char *)0x8000000000000000LL )
        {
LABEL_57:
          v26 = v12;
          v27 = v13;
          core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v26, &unk_15B368, &off_15B718);
        }
        v75 = dest;
        v76 = *(_DWORD *)v31;
        v77 = v31[4];
        v78 = v58;
        v79 = v59;
        v80 = v60;
        v81 = v61;
        v82 = v62;
        v83 = v63;
        *(_OWORD *)v84 = v64[0];
        *(_OWORD *)&v84[11] = *(_OWORD *)((char *)v64 + 11);
        indicatif::progress_bar::ProgressBar::set_style(&v37, &v75);
        v66 = v38;
        v65 = v37;
        indicatif::multi::MultiProgress::internalize(&v69, a5, 0LL, v14, &v65);
        v24 = v70;
        v23 = v69;
        goto LABEL_31;
      }
    }
    else
    {
      core::ptr::drop_in_place<fs_extra::error::ErrorKind>(v57);
      alloc::raw_vec::RawVec<T,A>::current_memory(&dest, v55);
      if ( *(_QWORD *)v31 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v56, dest, *(_QWORD *)v31, *(_QWORD *)&v31[8]);
    }
    *(_QWORD *)&v23 = 0LL;
LABEL_31:
    uucore::features::fsxattr::retrieve_xattrs(v71, src, n);
    if ( *(_QWORD *)&v71[0] )
    {
      v45 = v71[2];
      v44 = v71[1];
      v43 = v71[0];
    }
    else
    {
      v15 = *((_QWORD *)&v71[0] + 1);
      v21 = (char *)*((_QWORD *)&v71[0] + 1);
      v16 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
      if ( !v16 )
        core::result::unwrap_failed(
          anon_e7d63773c8ae8cffa7d6cf299f644269_0_llvm_2867345112236685835,
          70LL,
          &dest,
          &anon_30ecf5788dc16ea493c1f299142c4ef1_21_llvm_10347183305587337279,
          &anon_e7d63773c8ae8cffa7d6cf299f644269_2_llvm_2867345112236685835);
      v17 = *v16;
      ++*(_QWORD *)v16;
      v44 = xmmword_15ADF8;
      v43 = *(_OWORD *)&anon_d8f87fb53416144ac5b7b233781f4016_7_llvm_10091829534130422480;
      v45 = v17;
      std::io::error::repr_bitpacked::decode_repr(&dest, v15);
      if ( (unsigned __int8)dest >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v31);
    }
    if ( (_QWORD)v23 )
      fs_extra::dir::move_dir_with_progress(
        (unsigned int)&v52,
        (_DWORD)src,
        n,
        (_DWORD)a3,
        a4,
        (unsigned int)v48,
        (__int64)&v23);
    else
      fs_extra::dir::move_dir(&v52, src, n, a3, a4, v48);
    v85[2] = v45;
    v85[1] = v44;
    v85[0] = v43;
    v18 = uucore::features::fsxattr::apply_xattrs(a3, a4, v85);
    if ( v18 )
    {
      v25 = v18;
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v25, &off_15B348, &off_15B730);
    }
    if ( (_QWORD)v52 != 0x8000000000000000LL )
    {
      v47[0] = v53;
      v47[1] = v54;
      v46 = v52;
      if ( *((_QWORD *)&v53 + 1) == 0x8000000000000001LL )
      {
        v20 = std::io::error::Error::new(1LL, aPermissionDeni, 17LL);
      }
      else
      {
        v51[0] = &v46;
        v51[1] = <fs_extra::error::Error as core::fmt::Debug>::fmt;
        v74[0] = &anon_80a71568819187eb068e7dc772b8a818_67_llvm_5221707602514596811;
        v74[1] = 1LL;
        v74[4] = 0LL;
        v74[2] = v51;
        v74[3] = 1LL;
        alloc::fmt::format(&v72, v74);
        v68 = v73;
        v67 = v72;
        v20 = std::io::error::Error::new(39LL, &v67);
      }
      v9 = v20;
      core::ptr::drop_in_place<fs_extra::error::ErrorKind>((char *)v47 + 8);
      alloc::raw_vec::RawVec<T,A>::current_memory(&dest, &v46);
      if ( *(_QWORD *)v31 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v47, dest, *(_QWORD *)v31, *(_QWORD *)&v31[8]);
      if ( (_QWORD)v23 )
        core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v23);
      return v9;
    }
    if ( (_QWORD)v23 )
      core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v23);
    return 0LL;
  }
  if ( (*(_WORD *)((_BYTE *)&v32 + 11) & 0xF000) == 0xA000 )
  {
    std::sys::pal::unix::fs::readlink(&v21, src, n);
    v9 = v22;
    if ( v21 != (char *)0x8000000000000000LL )
    {
      dest = v21;
      *(_OWORD *)v31 = v22;
      if ( !(_QWORD)v22 || v22 < 0 )
        core::panicking::panic_nounwind(anon_e274cffadf33dbf508504243ff687348_19_llvm_17332325210196355997, 162LL);
      v9 = std::sys::pal::unix::fs::symlink((void *)v22, *((size_t *)&v22 + 1), a3, a4);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&dest);
      if ( !v9 )
        return std::sys::pal::unix::fs::unlink(src, n);
    }
  }
  else if ( !(unsigned __int8)std::path::Path::is_symlink(a3, a4)
         || (v10 = std::sys::pal::unix::fs::unlink(a3, a4)) == 0
         || (dest = a3,
             *(_QWORD *)v31 = a4,
             *(_QWORD *)&v31[8] = src,
             *(_QWORD *)&v31[16] = n,
             (v9 = uu_mv::rename_with_fallback::{{closure}}(&dest, v10)) == 0) )
  {
    if ( std::sys::pal::unix::fs::copy(src, n, a3, a4) )
    {
      v9 = v11;
      if ( v11 )
        return v9;
    }
    else
    {
      v9 = uucore::features::fsxattr::copy_xattrs(&srca, v50);
      if ( v9 )
        return v9;
    }
    src = srca;
    n = na;
    return std::sys::pal::unix::fs::unlink(src, n);
  }
  return v9;
}
