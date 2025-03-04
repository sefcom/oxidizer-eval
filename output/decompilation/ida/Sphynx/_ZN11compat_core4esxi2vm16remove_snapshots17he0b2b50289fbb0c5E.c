__int64 *__fastcall compat_core::esxi::vm::remove_snapshots(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 *v6; // rdi
  _DWORD *v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 *v9; // r13
  __int64 (__fastcall *v10)(); // rsi
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rbp
  unsigned int v17; // eax
  _QWORD *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v22; // [rsp+8h] [rbp-1D0h]
  __int64 v23; // [rsp+8h] [rbp-1D0h]
  __int64 v24; // [rsp+8h] [rbp-1D0h]
  __int64 v25; // [rsp+10h] [rbp-1C8h]
  __int64 v26; // [rsp+10h] [rbp-1C8h]
  __int64 v27; // [rsp+18h] [rbp-1C0h] BYREF
  __int128 v28; // [rsp+20h] [rbp-1B8h]
  __int64 v29; // [rsp+30h] [rbp-1A8h]
  __int64 v30; // [rsp+38h] [rbp-1A0h]
  __int64 *v31; // [rsp+40h] [rbp-198h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+48h] [rbp-190h]
  __int64 v33; // [rsp+50h] [rbp-188h]
  __int64 v34; // [rsp+58h] [rbp-180h]
  __int64 v35; // [rsp+60h] [rbp-178h]
  __int64 *v36; // [rsp+68h] [rbp-170h]
  __int128 v37; // [rsp+70h] [rbp-168h] BYREF
  __int128 v38; // [rsp+80h] [rbp-158h]
  __int128 v39; // [rsp+90h] [rbp-148h]
  __int128 v40; // [rsp+A0h] [rbp-138h]
  __int128 v41; // [rsp+B0h] [rbp-128h]
  __int128 v42; // [rsp+C0h] [rbp-118h]
  __int64 v43; // [rsp+D0h] [rbp-108h]
  _QWORD v44[2]; // [rsp+D8h] [rbp-100h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-F0h]
  char **v46; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+F8h] [rbp-E0h]
  __int128 v48; // [rsp+100h] [rbp-D8h]
  __int128 v49; // [rsp+110h] [rbp-C8h]
  __int128 v50; // [rsp+120h] [rbp-B8h]
  __int128 v51; // [rsp+130h] [rbp-A8h]
  __int128 v52; // [rsp+140h] [rbp-98h]
  __int128 v53; // [rsp+150h] [rbp-88h]
  __int64 v54; // [rsp+160h] [rbp-78h]
  __int16 v55; // [rsp+168h] [rbp-70h]

  v1 = a1;
  compat_core::esxi::utils::esxi_run_command_with_output(&v46, aVimCmdVmsvcGet, 23LL);
  v2 = v48;
  if ( v46 == (char **)((char *)&dword_0 + 1) )
  {
    *a1 = v47;
    a1[1] = v2;
    return v1;
  }
  v29 = v48;
  v36 = a1;
  v3 = *((_QWORD *)&v48 + 1);
  v34 = v47;
  core::str::pattern::StrSearcher::new(&v37, v47, *((_QWORD *)&v48 + 1), asc_19B300, 1LL);
  v46 = 0LL;
  v47 = v3;
  v48 = v37;
  v49 = v38;
  v50 = v39;
  v51 = v40;
  v52 = v41;
  v53 = v42;
  v54 = v43;
  v55 = 1;
  <alloc::vec::Vec<T> as alloc::vec::SpecExtend<T,I>>::from_iter(v44, &v46);
  v27 = 8LL;
  v28 = 0LL;
  v25 = v44[0];
  v22 = v44[1];
  if ( v45 )
  {
    v4 = v44[0];
    v5 = v44[0] + 16 * v45;
    do
    {
      v7 = *(_DWORD **)v4;
      if ( !*(_QWORD *)v4 )
        break;
      v8 = *(_QWORD *)(v4 + 8);
      if ( v8 < 4 || v7 != (_DWORD *)&unk_19B301 && *v7 != 1684630870 )
      {
        core::str::pattern::StrSearcher::new(&v37, v7, *(_QWORD *)(v4 + 8), asc_19B305, 1LL);
        v46 = 0LL;
        v47 = v8;
        v54 = v43;
        v53 = v42;
        v52 = v41;
        v51 = v40;
        v50 = v39;
        v49 = v38;
        v48 = v37;
        v55 = 1;
        <alloc::vec::Vec<T> as alloc::vec::SpecExtend<T,I>>::from_iter(&v31, &v46);
        if ( v33 )
        {
          v9 = v31;
          core::num::<impl core::str::FromStr for u64>::from_str(&v46, *v31, v31[1]);
          if ( (_BYTE)v46 )
          {
            v10 = v32;
            if ( !v32 )
              goto LABEL_7;
          }
          else
          {
            v12 = v47;
            v13 = *((_QWORD *)&v28 + 1);
            if ( *((_QWORD *)&v28 + 1) == (_QWORD)v28 )
            {
              alloc::raw_vec::RawVec<T,A>::reserve(&v27, *((_QWORD *)&v28 + 1), 1LL);
              v13 = *((_QWORD *)&v28 + 1);
            }
            *(_QWORD *)(v27 + 8 * v13) = v12;
            ++*((_QWORD *)&v28 + 1);
            v10 = v32;
            if ( !v32 )
              goto LABEL_7;
          }
          v11 = 16LL * (_QWORD)v10;
          if ( !v11 )
            goto LABEL_7;
          v6 = v9;
        }
        else
        {
          if ( !v32 )
            goto LABEL_7;
          v11 = 16LL * (_QWORD)v32;
          if ( !(16LL * (_QWORD)v32) )
            goto LABEL_7;
          v6 = v31;
        }
        _rust_dealloc(v6, v11, 8LL);
      }
LABEL_7:
      v4 += 16LL;
    }
    while ( v4 != v5 );
  }
  if ( v22 && 16 * v22 )
    _rust_dealloc(v25, 16 * v22, 8LL);
  v30 = v27;
  v23 = *((_QWORD *)&v28 + 1);
  v35 = v28;
  if ( v29 )
    _rust_dealloc(v34, v29, 1LL);
  if ( v23 )
  {
    v24 = 8 * v23;
    v14 = 0LL;
    do
    {
      v27 = *(_QWORD *)(v30 + v14);
      v31 = &v27;
      v32 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v46 = &off_3E6360;
      v47 = 1LL;
      *(_QWORD *)&v48 = 0LL;
      *(_QWORD *)&v49 = &v31;
      *((_QWORD *)&v49 + 1) = 1LL;
      alloc::fmt::format(&v37, &v46);
      v29 = *((_QWORD *)&v37 + 1);
      v15 = v37;
      v16 = v38;
      std::sys::unix::process::process_common::Command::new(
        &v46,
        anon_72dc3a396521a012288a77322dff36ea_0_llvm_3663384724368157838,
        7LL);
      v17 = std::process::Stdio::null();
      std::sys::unix::process::process_common::Command::stdout(&v46, v17);
      std::sys::unix::process::process_common::Command::arg(
        &v46,
        anon_72dc3a396521a012288a77322dff36ea_1_llvm_3663384724368157838,
        2LL);
      v26 = v15;
      std::sys::unix::process::process_common::Command::arg(&v46, v15, v16);
      std::process::Command::status(&v37, &v46);
      core::ptr::drop_in_place(&v46);
      if ( (_DWORD)v37 && BYTE8(v37) >= 2u )
      {
        v18 = (_QWORD *)v38;
        (**(void (__fastcall ***)(_QWORD))(v38 + 8))(*(_QWORD *)v38);
        v19 = v18[1];
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 )
          _rust_dealloc(*v18, v20, *(_QWORD *)(v19 + 16));
        _rust_dealloc(v18, 24LL, 8LL);
      }
      if ( v29 )
        _rust_dealloc(v26, v29, 1LL);
      v14 += 8LL;
    }
    while ( v24 != v14 );
  }
  if ( v35 && 8 * v35 )
    _rust_dealloc(v30, 8 * v35, 8LL);
  v1 = v36;
  *(_BYTE *)v36 = 3;
  return v1;
}
