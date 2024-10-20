__int64 __fastcall uu_mkdir::create_dir(void *a1, size_t a2, char a3, unsigned __int8 a4, int a5, unsigned int a6)
{
  __int64 v8; // rbx
  _OWORD *v9; // r15
  size_t v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 dir; // rax
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rax
  void (__fastcall **v18)(__int64); // rdx
  __int64 v19; // r15
  void (__fastcall **v20)(__int64); // r12
  void (__fastcall *v21)(__int64); // rsi
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned __int128 *v24; // rax
  unsigned __int128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // r12
  _QWORD *v29; // rax
  void *v30; // rsi
  __int128 *v31; // rax
  __int128 v32; // xmm0
  unsigned __int64 v33; // rbp
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r12
  __int64 v38; // r13
  __int64 v39; // rbx
  unsigned __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rbx
  char *v48; // rbp
  __int64 v49; // r12
  char *v50; // r13
  __int64 v51; // r15
  char v52; // bl
  __int64 v53; // rdi
  __int64 v54; // rax
  char v55; // r12
  __int64 v56; // r13
  __int64 v57; // rbp
  __int64 v58; // r12
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // r15
  int v61; // ebx
  __mode_t v62; // eax
  __int64 v63; // rax
  __int64 v64; // r15
  unsigned __int128 *v65; // rax
  unsigned __int128 v66; // xmm0
  void *src; // [rsp+8h] [rbp-320h]
  __int64 v70; // [rsp+18h] [rbp-310h]
  unsigned __int128 v71; // [rsp+20h] [rbp-308h] BYREF
  _QWORD v72[2]; // [rsp+30h] [rbp-2F8h] BYREF
  __int128 v73; // [rsp+40h] [rbp-2E8h] BYREF
  __int64 v74; // [rsp+50h] [rbp-2D8h]
  unsigned __int128 v75; // [rsp+60h] [rbp-2C8h] BYREF
  __int128 v76; // [rsp+70h] [rbp-2B8h]
  __int128 v77; // [rsp+80h] [rbp-2A8h] BYREF
  unsigned __int128 dest; // [rsp+A0h] [rbp-288h] BYREF
  _BYTE v79[160]; // [rsp+B0h] [rbp-278h] BYREF
  __int64 v80; // [rsp+150h] [rbp-1D8h]
  int v81; // [rsp+15Ch] [rbp-1CCh]
  unsigned __int128 v82; // [rsp+160h] [rbp-1C8h] BYREF
  __int128 v83; // [rsp+170h] [rbp-1B8h]
  __int128 v84; // [rsp+180h] [rbp-1A8h]
  unsigned __int128 v85; // [rsp+190h] [rbp-198h] BYREF
  __int64 v86; // [rsp+1A0h] [rbp-188h] BYREF
  __int64 v87; // [rsp+1A8h] [rbp-180h] BYREF
  unsigned __int64 v88; // [rsp+1B0h] [rbp-178h]
  __int64 v89; // [rsp+1B8h] [rbp-170h]
  size_t n; // [rsp+1C0h] [rbp-168h]
  unsigned __int128 v91; // [rsp+1C8h] [rbp-160h] BYREF
  __int64 v92; // [rsp+1D8h] [rbp-150h]
  __int128 v93; // [rsp+1E0h] [rbp-148h] BYREF
  __int64 v94; // [rsp+1F0h] [rbp-138h] BYREF
  unsigned __int64 v95; // [rsp+200h] [rbp-128h]
  unsigned __int128 *v96; // [rsp+208h] [rbp-120h] BYREF
  _QWORD v97[2]; // [rsp+210h] [rbp-118h] BYREF
  _QWORD v98[2]; // [rsp+220h] [rbp-108h] BYREF
  _QWORD v99[2]; // [rsp+230h] [rbp-F8h] BYREF
  _QWORD v100[3]; // [rsp+240h] [rbp-E8h] BYREF
  __int64 v101; // [rsp+258h] [rbp-D0h] BYREF
  unsigned __int64 v102; // [rsp+260h] [rbp-C8h]
  __int64 v103; // [rsp+268h] [rbp-C0h]
  unsigned __int128 v104; // [rsp+270h] [rbp-B8h] BYREF
  __int64 v105; // [rsp+280h] [rbp-A8h]
  _QWORD v106[4]; // [rsp+288h] [rbp-A0h] BYREF
  _QWORD v107[3]; // [rsp+2A8h] [rbp-80h] BYREF
  char v108; // [rsp+2C0h] [rbp-68h]
  _QWORD v109[12]; // [rsp+2C8h] [rbp-60h] BYREF

  v81 = a5;
  std::sys::pal::unix::fs::stat(&dest);
  v8 = dest;
  if ( (_QWORD)dest == 2LL )
  {
    std::io::error::repr_bitpacked::decode_repr(&dest, *((_QWORD *)&dest + 1));
    if ( (unsigned __int8)dest >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&dest + 8);
  }
  else if ( !a3 )
  {
    v98[0] = a1;
    v98[1] = a2;
    v97[0] = v98;
    v97[1] = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_10D9B8;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)v79 = v97;
    *(_QWORD *)&v79[8] = 1LL;
    *(_QWORD *)&v79[16] = 0LL;
    alloc::fmt::format::format_inner(v100, &dest);
    v14 = v100[0];
    v15 = v100[1];
    v16 = v100[2];
    v17 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    v9 = (_OWORD *)v17;
    if ( !v17 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)v17 = v14;
    *(_QWORD *)(v17 + 8) = v15;
    *(_QWORD *)(v17 + 16) = v16;
    *(_DWORD *)(v17 + 24) = 1;
    return (__int64)v9;
  }
  src = a1;
  n = a2;
  std::path::Path::components(&v75, a1);
  v9 = 0LL;
  std::path::Path::components(&dest, 1LL);
  if ( (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v75, &dest) )
    return (__int64)v9;
  v10 = n;
  if ( a3 )
  {
    v11 = std::path::Path::parent(a1, n);
    if ( v11 )
    {
      dir = uu_mkdir::create_dir(v11, v12, 1LL, a4, 1LL, a6);
      if ( dir )
        return dir;
    }
    else
    {
      v19 = uucore::mods::error::USimpleError::new(1LL, aFailedToCreate_0, 27LL);
      v20 = v18;
      if ( *v18 )
        (*v18)(v19);
      v21 = v20[1];
      if ( v21 )
        _rust_dealloc(v19, v21, v20[2]);
    }
  }
  LODWORD(dest) = 511;
  BYTE4(dest) = 0;
  v22 = std::fs::DirBuilder::_create(&dest, a1, v10);
  v80 = v22;
  if ( v22 )
  {
    v23 = v22;
    if ( !(unsigned __int8)std::path::Path::is_dir(a1, v10) )
    {
      *(_QWORD *)&dest = 0x8000000000000000LL;
      *(_QWORD *)&v79[8] = v23;
      v24 = (unsigned __int128 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v9 = v24;
      if ( !v24 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v25 = dest;
      v24[1] = *(_OWORD *)v79;
      *v24 = v25;
      return (__int64)v9;
    }
    goto LABEL_107;
  }
  if ( a4 )
  {
    v26 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v27 = *(_QWORD *)(v26 + 8);
    v28 = *(_QWORD *)(v26 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v27, 1LL, 1LL, v28);
    v99[0] = v27;
    v99[1] = v28;
    v107[0] = 1LL;
    v107[1] = a1;
    v107[2] = v10;
    v108 = 1;
    v106[0] = v99;
    v106[1] = <&T as core::fmt::Display>::fmt;
    v106[2] = v107;
    v106[3] = <os_display::Quoted as core::fmt::Display>::fmt;
    v109[0] = &unk_10D9D8;
    v109[1] = 3LL;
    v109[4] = 0LL;
    v109[2] = v106;
    v109[3] = 2LL;
    std::io::stdio::_print(v109);
  }
  if ( v8 == 2 )
  {
    v29 = (_QWORD *)(__readfsqword(0) - 48);
    if ( *v29 )
    {
      v30 = a1;
      if ( *v29 == 1LL )
      {
        v31 = (__int128 *)(v29 + 1);
LABEL_28:
        v32 = *v31;
        ++*(_QWORD *)v31;
        *(_OWORD *)v79 = xmmword_10D8C0;
        dest = *(_OWORD *)&off_10D8B0;
        *(_OWORD *)&v79[16] = v32;
        xattr::sys::linux_macos::list_path(&v101, v30, v10, 0LL);
        if ( v101 )
        {
          v87 = v101;
          v88 = v102;
          v89 = v103;
          v95 = 0x8000000000000001LL;
          while ( 1 )
          {
            <xattr::sys::linux_macos::XAttrs as core::iter::traits::iterator::Iterator>::next(&v104, &v87);
            if ( (_QWORD)v104 == 0x8000000000000000LL )
            {
              if ( v88 )
                _rust_dealloc(v87, v88, 1LL);
              v84 = *(_OWORD *)&v79[16];
              v83 = *(_OWORD *)v79;
              v82 = dest;
              goto LABEL_60;
            }
            v86 = v105;
            v85 = v104;
            if ( !*((_QWORD *)&v104 + 1) || v105 < 0 )
              core::panicking::panic_nounwind(aUnsafePrecondi, 162LL);
            xattr::sys::linux_macos::get_path(&v75, a1, v10, *((_QWORD *)&v104 + 1), v105, 0LL);
            v37 = *((_QWORD *)&v75 + 1);
            v38 = v75;
            if ( (__int64)v75 >= (__int64)0x8000000000000002LL )
              break;
            xattr::util::extract_noattr::{{closure}}(&v91, *((_QWORD *)&v75 + 1));
            v37 = *((_QWORD *)&v91 + 1);
            v38 = v91;
            if ( (_QWORD)v91 == v95 )
            {
              *((_QWORD *)&v82 + 1) = *((_QWORD *)&v91 + 1);
              *(_QWORD *)&v82 = 0LL;
              alloc::raw_vec::RawVec<T,A>::current_memory(&v75, &v85);
              if ( *((_QWORD *)&v75 + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v86, v75, *((_QWORD *)&v75 + 1), v76);
              if ( v88 )
                _rust_dealloc(v87, v88, 1LL);
              goto LABEL_57;
            }
            if ( (_QWORD)v91 == 0x8000000000000000LL )
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(&v75, &v85);
              if ( *((_QWORD *)&v75 + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v86, v75, *((_QWORD *)&v75 + 1), v76);
            }
            else
            {
              v39 = v92;
LABEL_41:
              v72[0] = v86;
              v71 = v85;
              v40 = core::hash::BuildHasher::hash_one(&v79[16], &v71);
              v96 = &v71;
              if ( !*(_QWORD *)v79 )
                hashbrown::raw::RawTable<T,A>::reserve_rehash(&dest, 1LL, &v79[16], 1LL);
              *(_QWORD *)&v75 = &v96;
              *((_QWORD *)&v75 + 1) = &dest;
              if ( hashbrown::raw::RawTableInner::find_or_find_insert_slot_inner(
                     &dest,
                     v40,
                     &v75,
                     &anon_e625c3cfa844ac828848d457731d7910_5_llvm_4339624403207178909) )
              {
                v82 = v71;
                *(_QWORD *)&v83 = v72[0];
                *(_QWORD *)v79 -= *(_BYTE *)(dest + v41) & 1;
                v33 = v40 >> 57;
                v34 = *((_QWORD *)&dest + 1) & (v41 - 16);
                *(_BYTE *)(dest + v41) = v33;
                *(_BYTE *)(dest + v34 + 16) = v33;
                ++*(_QWORD *)&v79[8];
                v35 = dest;
                v36 = -48 * v41;
                *(_QWORD *)(dest + v36 - 32) = v83;
                *(_OWORD *)(v35 + v36 - 48) = v82;
                *(_QWORD *)(v35 + v36 - 24) = v38;
                *(_QWORD *)(v35 + v36 - 16) = v37;
                *(_QWORD *)(v35 + v36 - 8) = v39;
                *(_QWORD *)&v93 = 0x8000000000000000LL;
              }
              else
              {
                v42 = dest;
                v43 = -48 * v41;
                v74 = *(_QWORD *)(dest - 48 * v41 - 8);
                v73 = *(_OWORD *)(dest - 48 * v41 - 24);
                *(_QWORD *)(dest + v43 - 24) = v38;
                *(_QWORD *)(v42 + v43 - 16) = v37;
                *(_QWORD *)(v42 + v43 - 8) = v39;
                v94 = v74;
                v93 = v73;
                alloc::raw_vec::RawVec<T,A>::current_memory(&v75, &v71);
                if ( *((_QWORD *)&v75 + 1) )
                  <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v72, v75, *((_QWORD *)&v75 + 1), v76);
                if ( (_QWORD)v93 != 0x8000000000000000LL )
                {
                  alloc::raw_vec::RawVec<T,A>::current_memory(&v75, &v93);
                  if ( *((_QWORD *)&v75 + 1) )
                    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v94, v75, *((_QWORD *)&v75 + 1), v76);
                }
              }
            }
          }
          v39 = v76;
          v91 = v75;
          v92 = v76;
          goto LABEL_41;
        }
        v82 = __PAIR128__(v102, 0LL);
LABEL_57:
        if ( *((_QWORD *)&dest + 1) )
        {
          hashbrown::raw::RawTableInner::drop_elements(&dest);
          hashbrown::raw::TableLayout::calculate_layout_for(&v75, 48LL, 16LL, *((_QWORD *)&dest + 1) + 1LL);
          if ( *((_QWORD *)&v75 + 1) )
            _rust_dealloc(dest - v76, *((_QWORD *)&v75 + 1), v75);
        }
LABEL_60:
        if ( !(_QWORD)v82 )
          goto LABEL_100;
        v77 = v84;
        v76 = v83;
        v75 = v82;
        std::sys::os_str::bytes::Slice::to_owned(&dest);
        v72[0] = *(_QWORD *)v79;
        v71 = dest;
        if ( !*((_QWORD *)&v76 + 1) )
          goto LABEL_78;
        v44 = core::hash::BuildHasher::hash_one(&v77, &v71);
        v45 = hashbrown::raw::RawTable<T,A>::find(&v75, v44, &v71);
        if ( v45 )
        {
          v46 = *(_QWORD *)(v45 - 16);
          if ( !v46 )
            goto LABEL_117;
          v47 = *(_QWORD *)(v45 - 8);
          if ( v47 < 0 )
            goto LABEL_117;
          if ( (unsigned __int64)v47 <= 2 )
          {
            *(_QWORD *)&dest = &anon_2e379de88427cfdda108dad8baf8b250_39_llvm_16806681140142669859;
            *((_QWORD *)&dest + 1) = 1LL;
            *(_QWORD *)v79 = 8LL;
            *(_OWORD *)&v79[8] = 0LL;
            core::panicking::panic_fmt(&dest, &off_10D938);
          }
          core::slice::raw::from_raw_parts::precondition_check(*(_QWORD *)(v45 - 16), 1LL, 1LL, 3LL);
          v48 = (char *)(v46 + 3);
          v49 = v47 - 3;
          core::slice::raw::from_raw_parts::precondition_check(v46 + 3, 1LL, 1LL, v47 - 3);
          v50 = (char *)(v47 + v46);
          v51 = 0LL;
          do
          {
            if ( !v49 )
            {
              v56 = 0LL;
              v57 = 1LL;
              goto LABEL_87;
            }
            v52 = *v48++;
            --v49;
          }
          while ( v52 == -1 );
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&dest, 8LL, 0LL);
          v53 = *((_QWORD *)&dest + 1);
          if ( (_QWORD)dest )
            alloc::raw_vec::handle_error(*((_QWORD *)&dest + 1), *(_QWORD *)v79);
          v54 = *(_QWORD *)v79;
          **(_BYTE **)v79 = v52;
          *(_QWORD *)&v73 = v53;
          *((_QWORD *)&v73 + 1) = v54;
          v51 = 1LL;
LABEL_71:
          v74 = v51;
          while ( v48 != v50 )
          {
            v55 = *v48++;
            if ( v55 != -1 )
            {
              if ( v51 == (_QWORD)v73 )
              {
                if ( v48 > v50 )
                  core::panicking::panic_nounwind(
                    anon_daf3dad06ad2a5bce104ade690aa1cbc_10_llvm_12751135904576547449,
                    71LL);
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v73, v51, 1LL);
              }
              *(_BYTE *)(*((_QWORD *)&v73 + 1) + v51++) = v55;
              goto LABEL_71;
            }
          }
          v57 = *((_QWORD *)&v73 + 1);
          v56 = v73;
LABEL_87:
          if ( !v57 || v51 < 0 )
LABEL_117:
            core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
          v58 = v51 & 3;
          v59 = v51 & 0xFFFFFFFFFFFFFFFCLL;
          core::slice::raw::from_raw_parts::precondition_check(v57, 1LL, 1LL, v59);
          core::slice::raw::from_raw_parts::precondition_check(v59 + v57, 1LL, 1LL, v58);
          v70 = v57;
          if ( v59 )
          {
            v60 = v59 - 4;
            v61 = 0;
            do
            {
              core::slice::raw::from_raw_parts::precondition_check(v57, 1LL, 1LL, 4LL);
              core::slice::raw::from_raw_parts::precondition_check(v57 + 4, 1LL, 1LL, v60);
              v61 = (8 * v61) | *(unsigned __int8 *)(v57 + 2) | *(unsigned __int8 *)(v57 + 3);
              v60 -= 4LL;
              v57 += 4LL;
            }
            while ( v60 != -4LL );
          }
          if ( v56 )
            _rust_dealloc(v70, v56, 1LL);
          alloc::raw_vec::RawVec<T,A>::current_memory(&dest, &v71);
          if ( *((_QWORD *)&dest + 1) )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              v72,
              dest,
              *((_QWORD *)&dest + 1),
              *(_QWORD *)v79);
          if ( *((_QWORD *)&v75 + 1) )
          {
            hashbrown::raw::RawTableInner::drop_elements(&v75);
            hashbrown::raw::TableLayout::calculate_layout_for(&dest, 48LL, 16LL, *((_QWORD *)&v75 + 1) + 1LL);
            if ( *((_QWORD *)&dest + 1) )
              _rust_dealloc(v75 - *(_QWORD *)v79, *((_QWORD *)&dest + 1), dest);
          }
        }
        else
        {
LABEL_78:
          alloc::raw_vec::RawVec<T,A>::current_memory(&dest, &v71);
          if ( *((_QWORD *)&dest + 1) )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
              v72,
              dest,
              *((_QWORD *)&dest + 1),
              *(_QWORD *)v79);
          if ( *((_QWORD *)&v75 + 1) )
          {
            hashbrown::raw::RawTableInner::drop_elements(&v75);
            hashbrown::raw::TableLayout::calculate_layout_for(&dest, 48LL, 16LL, *((_QWORD *)&v75 + 1) + 1LL);
            if ( *((_QWORD *)&dest + 1) )
              _rust_dealloc(v75 - *(_QWORD *)v79, *((_QWORD *)&dest + 1), dest);
          }
        }
        if ( !(_QWORD)v82 )
LABEL_100:
          core::ptr::drop_in_place<core::result::Result<std::collections::hash::map::HashMap<std::ffi::os_str::OsString,alloc::vec::Vec<u8>>,std::io::error::Error>>(&v82);
        if ( (_BYTE)v81 )
        {
          v62 = umask(0);
          umask(v62);
          v10 = n;
        }
        a1 = src;
        goto LABEL_104;
      }
    }
    else
    {
      v31 = (__int128 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 48, 0LL);
      v30 = a1;
      if ( v31 )
        goto LABEL_28;
    }
    core::result::unwrap_failed(
      anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
      70LL,
      &dest,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
  }
LABEL_104:
  v63 = std::sys::pal::unix::fs::set_perm(a1, v10);
  v64 = v63;
  if ( !v63 )
  {
LABEL_107:
    if ( v80 )
    {
      std::io::error::repr_bitpacked::decode_repr(&dest);
      if ( (unsigned __int8)dest >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&dest + 8);
    }
    return 0LL;
  }
  *(_QWORD *)&v71 = v63;
  *(_QWORD *)&v75 = 1LL;
  *((_QWORD *)&v75 + 1) = src;
  *(_QWORD *)&v76 = v10;
  BYTE8(v76) = 1;
  *(_QWORD *)&v73 = &v75;
  *((_QWORD *)&v73 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&dest = &off_10D9A8;
  *((_QWORD *)&dest + 1) = 1LL;
  *(_QWORD *)v79 = &v73;
  *(_QWORD *)&v79[8] = 1LL;
  *(_QWORD *)&v79[16] = 0LL;
  alloc::fmt::format::format_inner(&v82, &dest);
  dest = v82;
  *(_QWORD *)v79 = v83;
  *(_QWORD *)&v79[8] = v64;
  v65 = (unsigned __int128 *)_rust_alloc(32LL, 8LL);
  if ( !v65 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v9 = v65;
  v66 = dest;
  v65[1] = *(_OWORD *)v79;
  *v65 = v66;
  return (__int64)v9;
}
