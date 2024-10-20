        unsigned __int8 a6)
{
  __int64 v9; // rax
  char v10; // cl
  size_t v11; // r15
  __int64 v12; // rax
  char v13; // cl
  _DWORD *v14; // rax
  _DWORD *v15; // r13
  const void *v16; // r15
  size_t v17; // r12
  size_t v18; // r13
  const char *v19; // rdx
  _DWORD *v20; // rax
  __int64 v21; // r14
  __int64 result; // rax
  const void *v23; // r13
  size_t v24; // r15
  __int64 v25; // rdi
  size_t v26; // rax
  _DWORD *v27; // rax
  _DWORD *v28; // r12
  __int64 v29; // [rsp+8h] [rbp-110h] BYREF
  __int64 v30; // [rsp+10h] [rbp-108h]
  size_t v31; // [rsp+18h] [rbp-100h]
  __int128 v32; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-E8h]
  _BYTE src[24]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+58h] [rbp-C0h]
  __int128 *v36; // [rsp+60h] [rbp-B8h]
  __int64 (__fastcall *v37)(); // [rsp+68h] [rbp-B0h]
  _QWORD *v38; // [rsp+70h] [rbp-A8h]
  __int64 (__fastcall *v39)(); // [rsp+78h] [rbp-A0h]
  _BYTE v40[24]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v41; // [rsp+98h] [rbp-80h]
  __int64 v42; // [rsp+A0h] [rbp-78h]
  _QWORD v43[2]; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v44[2]; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v45; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-38h]

  v43[0] = a4;
  v43[1] = a5;
  v29 = 0LL;
  v30 = 1LL;
  v31 = 0LL;
  if ( *((_BYTE *)a2 + 8) == 2
    && (v9 = lscolors::LsColors::style_for_indicator(*a2, 0LL)) != 0
    && (v10 = *(_BYTE *)v9, LODWORD(v33) = *(_DWORD *)(v9 + 17), v32 = *(_OWORD *)(v9 + 1), v10 != 2) )
  {
    v40[0] = v10;
    *(_OWORD *)&v40[1] = v32;
    *(_DWORD *)&v40[17] = v33;
    uu_ls::colors::StyleManager::get_style_code(src, a2, v40);
    v23 = *(const void **)&src[8];
    v24 = *(_QWORD *)&src[16];
    if ( *(_QWORD *)&src[16] )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v29, 0LL, *(_QWORD *)&src[16]);
      v25 = v30;
      v26 = v31;
    }
    else
    {
      v25 = 1LL;
      v26 = 0LL;
    }
    memcpy((void *)(v26 + v25), v23, v24);
    v11 = v31 + v24;
    v31 = v11;
    if ( *(_QWORD *)src )
      _rust_dealloc(v23, *(_QWORD *)src, 1LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( a3 )
  {
    if ( !(unsigned __int8)uu_ls::colors::StyleManager::is_current_style(a2, a3) )
    {
      if ( *((_BYTE *)a2 + 29) && *((_BYTE *)a2 + 8) == 2 )
      {
        v31 = v11;
      }
      else
      {
        *((_BYTE *)a2 + 29) = 1;
        *((_BYTE *)a2 + 8) = 2;
        v14 = (_DWORD *)_rust_alloc(4LL, 1LL);
        if ( !v14 )
          goto LABEL_45;
        v15 = v14;
        *v14 = 1831885595;
        if ( v29 - v11 <= 3 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v29, v11, 4LL);
          v11 = v31;
        }
        *(_DWORD *)(v30 + v11) = *v15;
        v31 = v11 + 4;
        _rust_dealloc(v15, 4LL, 1LL);
      }
      uu_ls::colors::StyleManager::get_style_code(src, a2, a3);
      v16 = *(const void **)&src[8];
      v17 = *(_QWORD *)&src[16];
      v18 = v31;
      if ( v29 - v31 < *(_QWORD *)&src[16] )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v29, v31, *(_QWORD *)&src[16]);
        v18 = v31;
      }
      memcpy((void *)(v18 + v30), v16, v17);
      v31 = v17 + v18;
      if ( *(_QWORD *)src )
        _rust_dealloc(v16, *(_QWORD *)src, 1LL);
    }
    goto LABEL_23;
  }
  v12 = lscolors::LsColors::style_for_indicator(*a2, 0LL);
  if ( !v12
    || (*(_OWORD *)src = *(_OWORD *)v12, *(_QWORD *)&src[13] = *(_QWORD *)(v12 + 13), src[0] == 2)
    || !(unsigned __int8)uu_ls::colors::StyleManager::is_current_style(a2, src) )
  {
LABEL_23:
    v13 = 0;
    goto LABEL_24;
  }
  if ( *((_BYTE *)a2 + 8) == 2 )
  {
    v31 = v11;
    v13 = 1;
  }
  else
  {
    *((_BYTE *)a2 + 29) = 1;
    *((_BYTE *)a2 + 8) = 2;
    v27 = (_DWORD *)_rust_alloc(4LL, 1LL);
    if ( !v27 )
      goto LABEL_45;
    v28 = v27;
    *v27 = 1831885595;
    if ( v29 - v11 <= 3 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v29, v11, 4LL);
      v11 = v31;
    }
    *(_DWORD *)(v30 + v11) = *v28;
    v31 = v11 + 4;
    _rust_dealloc(v28, 4LL, 1LL);
    v13 = 1;
  }
LABEL_24:
  v19 = "\x1B[K";
  v20 = &dword_0 + 1;
  if ( !a6 )
    v19 = (_BYTE *)(&dword_0 + 1);
  v44[0] = v19;
  v44[1] = 3LL * a6;
  if ( !v13 && *((_BYTE *)a2 + 8) == 2 )
  {
    v21 = 0LL;
    goto LABEL_31;
  }
  *((_BYTE *)a2 + 29) = 1;
  *((_BYTE *)a2 + 8) = 2;
  v21 = 4LL;
  v20 = (_DWORD *)_rust_alloc(4LL, 1LL);
  if ( !v20 )
LABEL_45:
    alloc::raw_vec::handle_error(1LL, 4LL);
  *v20 = 1831885595;
LABEL_31:
  *(_QWORD *)&v32 = v21;
  *((_QWORD *)&v32 + 1) = v20;
  v33 = v21;
  *(_QWORD *)src = &v29;
  *(_QWORD *)&src[8] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&src[16] = v43;
  v35 = <&T as core::fmt::Display>::fmt;
  v36 = &v32;
  v37 = <alloc::string::String as core::fmt::Display>::fmt;
  v38 = v44;
  v39 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)v40 = &unk_2FBF0;
  *(_QWORD *)&v40[8] = 4LL;
  v42 = 0LL;
  *(_QWORD *)&v40[16] = src;
  v41 = 4LL;
  alloc::fmt::format::format_inner(&v45, v40);
  if ( (_QWORD)v32 )
    _rust_dealloc(*((_QWORD *)&v32 + 1), v32, 1LL);
  result = v46;
  *(_QWORD *)(a1 + 16) = v46;
  *(_OWORD *)a1 = v45;
  if ( v29 )
    return _rust_dealloc(v30, v29, 1LL);
  return result;
}
