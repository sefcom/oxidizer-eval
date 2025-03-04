_QWORD *__fastcall compat_core::esxi::vm::EsxiVM::get_running(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 *v5; // r13
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rsi
  _BYTE v21[24]; // [rsp+0h] [rbp-198h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-180h]
  __int64 *v23; // [rsp+20h] [rbp-178h]
  __int64 v24; // [rsp+28h] [rbp-170h]
  __int64 v25; // [rsp+30h] [rbp-168h]
  __int64 v26; // [rsp+38h] [rbp-160h]
  _QWORD *v27; // [rsp+40h] [rbp-158h]
  __int64 v28; // [rsp+48h] [rbp-150h]
  __int128 v29; // [rsp+50h] [rbp-148h] BYREF
  __int128 v30; // [rsp+60h] [rbp-138h]
  __int128 v31; // [rsp+70h] [rbp-128h]
  __int128 v32; // [rsp+80h] [rbp-118h]
  __int128 v33; // [rsp+90h] [rbp-108h]
  __int128 v34; // [rsp+A0h] [rbp-F8h]
  __int128 v35; // [rsp+B0h] [rbp-E8h]
  __int64 v36; // [rsp+C0h] [rbp-D8h]
  __int16 v37; // [rsp+C8h] [rbp-D0h]
  __int128 v38; // [rsp+D0h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+E0h] [rbp-B8h]
  __int128 v40; // [rsp+F0h] [rbp-A8h]
  __int128 v41; // [rsp+100h] [rbp-98h]
  __int128 v42; // [rsp+110h] [rbp-88h]
  __int128 v43; // [rsp+120h] [rbp-78h]
  __int64 v44; // [rsp+130h] [rbp-68h]
  _QWORD v45[2]; // [rsp+138h] [rbp-60h] BYREF
  __int64 v46; // [rsp+148h] [rbp-50h]
  _QWORD *v47; // [rsp+150h] [rbp-48h] BYREF
  __int64 v48; // [rsp+158h] [rbp-40h]
  unsigned __int64 v49; // [rsp+160h] [rbp-38h]

  v1 = a1;
  compat_core::esxi::utils::esxi_run_command_with_output(&v29, aEsxcliFormatte, 83LL);
  v2 = v30;
  if ( (_QWORD)v29 == 1LL )
  {
    a1[1] = *((_QWORD *)&v29 + 1);
    a1[2] = v2;
    *a1 = 1LL;
    return v1;
  }
  v26 = v30;
  v27 = a1;
  v3 = *((_QWORD *)&v30 + 1);
  v24 = *((_QWORD *)&v29 + 1);
  core::str::pattern::StrSearcher::new(&v38, *((_QWORD *)&v29 + 1), *((_QWORD *)&v30 + 1), asc_19B300, 1LL);
  *(_QWORD *)&v29 = 0LL;
  *((_QWORD *)&v29 + 1) = v3;
  v30 = v38;
  v31 = v39;
  v32 = v40;
  v33 = v41;
  v34 = v42;
  v35 = v43;
  v36 = v44;
  v37 = 1;
  <alloc::vec::Vec<T> as alloc::vec::SpecExtend<T,I>>::from_iter(v45, &v29);
  *(_QWORD *)v21 = 8LL;
  *(_OWORD *)&v21[8] = 0LL;
  v22 = (__int64 *)v45[0];
  v25 = v45[1];
  if ( v46 )
  {
    v4 = v22;
    v5 = &v22[2 * v46];
    v23 = v5;
    do
    {
      v6 = *v4;
      if ( !*v4 )
        break;
      v7 = v4[1];
      if ( v7 < 7 || (_UNKNOWN *)v6 != &unk_19B37C && *(_DWORD *)v6 ^ 0x6C726F57 | *(_DWORD *)(v6 + 3) ^ 0x6449646C )
      {
        core::str::pattern::StrSearcher::new(&v38, v6, v4[1], &unk_19B383, 1LL);
        *(_QWORD *)&v29 = 0LL;
        *((_QWORD *)&v29 + 1) = v7;
        v36 = v44;
        v35 = v43;
        v34 = v42;
        v33 = v41;
        v32 = v40;
        v31 = v39;
        v30 = v38;
        v37 = 1;
        <alloc::vec::Vec<T> as alloc::vec::SpecExtend<T,I>>::from_iter(&v47, &v29);
        v8 = v49;
        if ( !v49 )
          core::panicking::panic_bounds_check(0LL, 0LL, &off_3E6370);
        v9 = v47;
        core::num::<impl core::str::FromStr for u64>::from_str(&v38, *v47, v47[1]);
        if ( !(_BYTE)v38 )
        {
          if ( v8 <= 1 )
            core::panicking::panic_bounds_check(1LL, v8, &off_3E6388);
          v11 = v9[2];
          v12 = v9[3];
          v28 = *((_QWORD *)&v38 + 1);
          if ( v12 )
          {
            v13 = _rust_alloc(v12, 1LL);
            if ( !v13 )
              alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(v12, 1LL);
            v14 = v12;
          }
          else
          {
            v13 = 1LL;
            v14 = 0LL;
          }
          *(_QWORD *)&v29 = v13;
          *((_QWORD *)&v29 + 1) = v14;
          *(_QWORD *)&v30 = 0LL;
          alloc::raw_vec::RawVec<T,A>::reserve(&v29, 0LL, v12);
          v15 = v30;
          core::slice::<impl [T]>::copy_from_slice(v30 + v29, v12, v11, v12);
          *(_QWORD *)&v30 = v12 + v15;
          v16 = *(_QWORD *)&v21[16];
          if ( *(_QWORD *)&v21[16] == *(_QWORD *)&v21[8] )
          {
            alloc::raw_vec::RawVec<T,A>::reserve(v21, *(_QWORD *)&v21[16], 1LL);
            v16 = *(_QWORD *)&v21[16];
          }
          v5 = v23;
          v17 = *(_QWORD *)v21;
          v18 = 32 * v16;
          *(_QWORD *)(*(_QWORD *)v21 + v18) = v28;
          *(_OWORD *)(v17 + v18 + 8) = v29;
          *(_QWORD *)(v17 + v18 + 24) = v30;
          ++*(_QWORD *)&v21[16];
          v10 = v48;
          if ( !v48 )
            goto LABEL_5;
LABEL_22:
          v19 = 16 * v10;
          if ( v19 )
            _rust_dealloc(v9, v19, 8LL);
          goto LABEL_5;
        }
        v10 = v48;
        if ( v48 )
          goto LABEL_22;
      }
LABEL_5:
      v4 += 2;
    }
    while ( v4 != v5 );
  }
  if ( v25 && 16 * v25 )
    _rust_dealloc(v22, 16 * v25, 8LL);
  v1 = v27;
  v27[3] = *(_QWORD *)&v21[16];
  *(_OWORD *)(v1 + 1) = *(_OWORD *)v21;
  *v1 = 0LL;
  if ( v26 )
    _rust_dealloc(v24, v26, 1LL);
  return v1;
}
