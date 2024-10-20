_QWORD *__fastcall uu_uname::UNameOutput::new(void *a1, _BYTE *a2)
{
  _DWORD *v2; // r15
  unsigned __int64 v3; // r14
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rsi
  _QWORD *v10; // r12
  char v11; // al
  char v12; // cl
  void *v13; // rbx
  size_t v14; // r12
  unsigned __int64 v15; // r13
  void *v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // r12
  void *v19; // rbx
  size_t v20; // r12
  unsigned __int64 v21; // r13
  void *v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // r12
  void *v25; // rbx
  size_t v26; // r12
  unsigned __int64 v27; // r13
  void *v28; // rbp
  __int64 v29; // rbx
  __int64 v30; // r12
  void *v31; // rbx
  size_t v32; // r12
  unsigned __int64 v33; // r13
  void *v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // r12
  void *v37; // rbx
  size_t v38; // r12
  unsigned __int64 v39; // r13
  void *v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // r12
  void *v43; // rbx
  size_t v44; // r12
  unsigned __int64 v45; // r13
  void *v46; // rbp
  unsigned __int64 v47; // rbx
  _DWORD *v48; // r12
  __int64 v50; // [rsp+0h] [rbp-5E8h] BYREF
  unsigned __int64 v51; // [rsp+8h] [rbp-5E0h]
  void *v52; // [rsp+10h] [rbp-5D8h]
  __int64 v53; // [rsp+18h] [rbp-5D0h] BYREF
  void *v54; // [rsp+20h] [rbp-5C8h]
  size_t n; // [rsp+28h] [rbp-5C0h] BYREF
  void *v56; // [rsp+30h] [rbp-5B8h]
  __int128 v57; // [rsp+38h] [rbp-5B0h]
  size_t v58; // [rsp+48h] [rbp-5A0h]
  __int128 v59; // [rsp+50h] [rbp-598h]
  size_t v60; // [rsp+60h] [rbp-588h]
  __int128 v61; // [rsp+68h] [rbp-580h]
  size_t v62; // [rsp+78h] [rbp-570h]
  __int128 v63; // [rsp+80h] [rbp-568h]
  size_t v64; // [rsp+90h] [rbp-558h]
  __int128 v65; // [rsp+98h] [rbp-550h]
  size_t v66; // [rsp+A8h] [rbp-540h]
  __int128 v67; // [rsp+B0h] [rbp-538h]
  size_t v68; // [rsp+C0h] [rbp-528h]
  __int128 v69; // [rsp+C8h] [rbp-520h]
  __int64 v70; // [rsp+D8h] [rbp-510h]
  _BYTE v71[168]; // [rsp+E0h] [rbp-508h] BYREF
  _QWORD v72[3]; // [rsp+188h] [rbp-460h] BYREF
  _QWORD dest[64]; // [rsp+1A0h] [rbp-448h] BYREF
  __int64 v74; // [rsp+3A0h] [rbp-248h] BYREF
  __int64 v75; // [rsp+3A8h] [rbp-240h]
  unsigned __int64 v76; // [rsp+3B0h] [rbp-238h]
  _BYTE src[512]; // [rsp+3B8h] [rbp-230h] BYREF

  v2 = a2;
  v56 = a1;
  v3 = 0x8000000000000000LL;
  <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new(&v74);
  v4 = v75;
  v5 = v76;
  if ( v74 != 0x8000000000000000LL )
  {
    memcpy(dest, src, sizeof(dest));
    v72[0] = v74;
    v72[1] = v75;
    v72[2] = v76;
    v11 = *a2 | a2[1];
    v12 = 1;
    if ( (v11 & 1) == 0
      && (a2[2] & 1) == 0
      && (a2[4] & 1) == 0
      && (a2[3] & 1) == 0
      && (a2[5] & 1) == 0
      && (a2[8] & 1) == 0
      && (a2[6] & 1) == 0 )
    {
      v12 = a2[7] & 1;
    }
    if ( (v11 & 1) != 0 || !v12 )
    {
      core::slice::raw::from_raw_parts::precondition_check(v75, 1LL, 1LL, v76);
      std::sys::os_str::bytes::Slice::to_string_lossy(&v53, v4, v5);
      v13 = v54;
      v14 = n;
      if ( v53 != 0x8000000000000000LL && (!v54 || (n & 0x8000000000000000LL) != 0LL) )
        goto LABEL_90;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v50, n, 0LL);
      v15 = v51;
      if ( v50 )
        alloc::raw_vec::handle_error(v51, v52);
      v16 = v52;
      core::intrinsics::copy_nonoverlapping::precondition_check(v13, v52, 1LL, 1LL, v14);
      memcpy(v16, v13, v14);
      if ( v53 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v50, &v53);
        if ( v51 )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v50, v51, v52);
      }
      *(_QWORD *)&v57 = v15;
      *((_QWORD *)&v57 + 1) = v16;
      v58 = v14;
      if ( (a2[2] & 1) != 0 )
        goto LABEL_30;
    }
    else
    {
      *(_QWORD *)&v57 = 0x8000000000000000LL;
      if ( (a2[2] & 1) != 0 )
        goto LABEL_30;
    }
    if ( (*a2 & 1) == 0 )
    {
      *(_QWORD *)&v59 = 0x8000000000000000LL;
      if ( (a2[4] & 1) != 0 )
        goto LABEL_41;
LABEL_38:
      if ( (*a2 & 1) == 0 )
      {
        *(_QWORD *)&v61 = 0x8000000000000000LL;
        if ( (a2[3] & 1) != 0 )
          goto LABEL_52;
LABEL_49:
        if ( (*a2 & 1) == 0 )
        {
          *(_QWORD *)&v63 = 0x8000000000000000LL;
          if ( (a2[5] & 1) != 0 )
            goto LABEL_63;
LABEL_60:
          if ( (*a2 & 1) == 0 )
          {
            *(_QWORD *)&v65 = 0x8000000000000000LL;
            if ( (a2[8] & 1) != 0 )
            {
LABEL_73:
              v41 = dest[13];
              v42 = dest[14];
              core::slice::raw::from_raw_parts::precondition_check(dest[13], 1LL, 1LL, dest[14]);
              std::sys::os_str::bytes::Slice::to_string_lossy(&v53, v41, v42);
              v43 = v54;
              v44 = n;
              if ( v53 == 0x8000000000000000LL || v54 && (n & 0x8000000000000000LL) == 0LL )
              {
                alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v50, n, 0LL);
                v45 = v51;
                if ( v50 )
                  alloc::raw_vec::handle_error(v51, v52);
                v46 = v52;
                core::intrinsics::copy_nonoverlapping::precondition_check(v43, v52, 1LL, 1LL, v44);
                memcpy(v46, v43, v44);
                if ( v53 != 0x8000000000000000LL )
                {
                  alloc::raw_vec::RawVec<T,A>::current_memory(&v50, &v53);
                  if ( v51 )
                    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v50, v51, v52);
                }
                *(_QWORD *)&v67 = v45;
                *((_QWORD *)&v67 + 1) = v46;
                v68 = v44;
LABEL_81:
                v10 = v56;
                if ( (a2[6] & 1) != 0 )
                {
                  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v50, 7LL, 0LL);
                  v47 = v51;
                  if ( v50 )
                    alloc::raw_vec::handle_error(v51, v52);
                  v48 = v52;
                  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1DAA1, v52, 1LL, 1LL, 7LL);
                  *(_DWORD *)((char *)v48 + 3) = 1853321070;
                  *v48 = 1852534389;
                  *(_QWORD *)&v69 = v47;
                  *((_QWORD *)&v69 + 1) = v48;
                  v70 = 7LL;
                  v10 = v56;
                  if ( (a2[7] & 1) == 0 )
                    goto LABEL_88;
                }
                else
                {
                  *(_QWORD *)&v69 = 0x8000000000000000LL;
                  if ( (a2[7] & 1) == 0 )
                  {
LABEL_88:
                    *(_QWORD *)&v71[16] = v58;
                    *(_OWORD *)v71 = v57;
                    *(_OWORD *)&v71[24] = v59;
                    *(_QWORD *)&v71[40] = v60;
                    *(_OWORD *)&v71[48] = v61;
                    *(_QWORD *)&v71[64] = v62;
                    *(_OWORD *)&v71[72] = v63;
                    *(_QWORD *)&v71[88] = v64;
                    *(_QWORD *)&v71[112] = v66;
                    *(_OWORD *)&v71[96] = v65;
                    *(_QWORD *)&v71[136] = v68;
                    *(_OWORD *)&v71[120] = v67;
                    *(_QWORD *)&v71[160] = v70;
                    *(_OWORD *)&v71[144] = v69;
                    memcpy(v10, v71, 0xA8uLL);
                    v10[21] = v3;
                    v10[22] = v2;
                    v10[23] = 7LL;
                    core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(v72);
                    return v10;
                  }
                }
                alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v50, 7LL, 0LL);
                v3 = v51;
                if ( v50 )
                  alloc::raw_vec::handle_error(v51, v52);
                v2 = v52;
                core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1DAA1, v52, 1LL, 1LL, 7LL);
                *(_DWORD *)((char *)v2 + 3) = 1853321070;
                *v2 = 1852534389;
                goto LABEL_88;
              }
LABEL_90:
              core::panicking::panic_nounwind(aUnsafePrecondi_5, 162LL);
            }
LABEL_71:
            if ( (*a2 & 1) == 0 )
            {
              *(_QWORD *)&v67 = 0x8000000000000000LL;
              goto LABEL_81;
            }
            goto LABEL_73;
          }
LABEL_63:
          v35 = dest[10];
          v36 = dest[11];
          core::slice::raw::from_raw_parts::precondition_check(dest[10], 1LL, 1LL, dest[11]);
          std::sys::os_str::bytes::Slice::to_string_lossy(&v53, v35, v36);
          v37 = v54;
          v38 = n;
          if ( v53 != 0x8000000000000000LL && (!v54 || (n & 0x8000000000000000LL) != 0LL) )
            goto LABEL_90;
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v50, n, 0LL);
          v39 = v51;
          if ( v50 )
            alloc::raw_vec::handle_error(v51, v52);
          v40 = v52;
          core::intrinsics::copy_nonoverlapping::precondition_check(v37, v52, 1LL, 1LL, v38);
          memcpy(v40, v37, v38);
          if ( v53 != 0x8000000000000000LL )
          {
            alloc::raw_vec::RawVec<T,A>::current_memory(&v50, &v53);
            if ( v51 )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v50, v51, v52);
          }
          *(_QWORD *)&v65 = v39;
          *((_QWORD *)&v65 + 1) = v40;
          v66 = v38;
          if ( (a2[8] & 1) != 0 )
            goto LABEL_73;
          goto LABEL_71;
        }
LABEL_52:
        v29 = dest[7];
        v30 = dest[8];
        core::slice::raw::from_raw_parts::precondition_check(dest[7], 1LL, 1LL, dest[8]);
        std::sys::os_str::bytes::Slice::to_string_lossy(&v53, v29, v30);
        v31 = v54;
        v32 = n;
        if ( v53 != 0x8000000000000000LL && (!v54 || (n & 0x8000000000000000LL) != 0LL) )
          goto LABEL_90;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v50, n, 0LL);
        v33 = v51;
        if ( v50 )
          alloc::raw_vec::handle_error(v51, v52);
        v34 = v52;
        core::intrinsics::copy_nonoverlapping::precondition_check(v31, v52, 1LL, 1LL, v32);
        memcpy(v34, v31, v32);
        if ( v53 != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(&v50, &v53);
          if ( v51 )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v50, v51, v52);
        }
        *(_QWORD *)&v63 = v33;
        *((_QWORD *)&v63 + 1) = v34;
        v64 = v32;
        if ( (a2[5] & 1) != 0 )
          goto LABEL_63;
        goto LABEL_60;
      }
LABEL_41:
      v23 = dest[4];
      v24 = dest[5];
      core::slice::raw::from_raw_parts::precondition_check(dest[4], 1LL, 1LL, dest[5]);
      std::sys::os_str::bytes::Slice::to_string_lossy(&v53, v23, v24);
      v25 = v54;
      v26 = n;
      if ( v53 != 0x8000000000000000LL && (!v54 || (n & 0x8000000000000000LL) != 0LL) )
        goto LABEL_90;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v50, n, 0LL);
      v27 = v51;
      if ( v50 )
        alloc::raw_vec::handle_error(v51, v52);
      v28 = v52;
      core::intrinsics::copy_nonoverlapping::precondition_check(v25, v52, 1LL, 1LL, v26);
      memcpy(v28, v25, v26);
      if ( v53 != 0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v50, &v53);
        if ( v51 )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v50, v51, v52);
      }
      *(_QWORD *)&v61 = v27;
      *((_QWORD *)&v61 + 1) = v28;
      v62 = v26;
      if ( (a2[3] & 1) != 0 )
        goto LABEL_52;
      goto LABEL_49;
    }
LABEL_30:
    v17 = dest[1];
    v18 = dest[2];
    core::slice::raw::from_raw_parts::precondition_check(dest[1], 1LL, 1LL, dest[2]);
    std::sys::os_str::bytes::Slice::to_string_lossy(&v53, v17, v18);
    v19 = v54;
    v20 = n;
    if ( v53 != 0x8000000000000000LL && (!v54 || (n & 0x8000000000000000LL) != 0LL) )
      goto LABEL_90;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v50, n, 0LL);
    v21 = v51;
    if ( v50 )
      alloc::raw_vec::handle_error(v51, v52);
    v22 = v52;
    core::intrinsics::copy_nonoverlapping::precondition_check(v19, v52, 1LL, 1LL, v20);
    memcpy(v22, v19, v20);
    if ( v53 != 0x8000000000000000LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v50, &v53);
      if ( v51 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v50, v51, v52);
    }
    *(_QWORD *)&v59 = v21;
    *((_QWORD *)&v59 + 1) = v22;
    v60 = v20;
    if ( (a2[4] & 1) != 0 )
      goto LABEL_41;
    goto LABEL_38;
  }
  v50 = v75;
  v51 = v76;
  v6 = uucore::mods::error::USimpleError::new(1LL, aCannotGetSyste, 22LL);
  v8 = v7;
  if ( *(_QWORD *)v5 )
    (*(void (__fastcall **)(__int64))v5)(v4);
  v9 = *(_QWORD *)(v5 + 8);
  if ( v9 )
    _rust_dealloc(v4, v9, *(_QWORD *)(v5 + 16));
  v10 = v56;
  *((_QWORD *)v56 + 1) = v6;
  v10[2] = v8;
  *v10 = 0x8000000000000001LL;
  return v10;
}
