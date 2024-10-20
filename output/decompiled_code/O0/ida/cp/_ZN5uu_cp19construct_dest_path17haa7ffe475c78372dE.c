        __int64 a7)
{
  void *v10; // r12
  __int64 v11; // r13
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  void *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  char **v21; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-E0h]
  _QWORD *v23; // [rsp+20h] [rbp-D8h]
  __int64 v24; // [rsp+28h] [rbp-D0h]
  __int64 v25; // [rsp+30h] [rbp-C8h]
  unsigned __int8 v26; // [rsp+4Ah] [rbp-AEh]
  __int128 v27; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-98h]
  __int128 v29; // [rsp+68h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-80h]
  _QWORD v31[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v32[3]; // [rsp+90h] [rbp-68h] BYREF
  char v33; // [rsp+A8h] [rbp-50h]
  __int128 v34; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-38h]

  if ( (*(_BYTE *)(a7 + 66) & 1) != 0 && (unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    v32[0] = 1LL;
    v32[1] = a4;
    v32[2] = a5;
    v33 = 1;
    v31[0] = v32;
    v31[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v21 = &off_182188;
    v22 = 2LL;
    v23 = v31;
    v24 = 1LL;
    v25 = 0LL;
    alloc::fmt::format::format_inner(&v34, &v21);
    *(_QWORD *)a1 = 4LL;
    *(_OWORD *)(a1 + 8) = v34;
    *(_QWORD *)(a1 + 24) = v35;
  }
  else if ( (*(_BYTE *)(a7 + 68) & 1) != 0 && !(unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v21, 51LL, 0LL);
    v15 = v22;
    if ( v21 )
      alloc::raw_vec::handle_error(v22, v23);
    v16 = v23;
    core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_2EB55, v23, 1LL, 1LL, 51LL);
    qmemcpy(v16, "with --parents, the destination must be a directory", 51);
    *(_QWORD *)a1 = 4LL;
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)(a1 + 24) = 51LL;
  }
  else
  {
    if ( a6 )
    {
      std::path::Path::to_path_buf(&v27, a4);
    }
    else
    {
      if ( (*(_BYTE *)(a7 + 68) & 1) != 0 )
      {
        v10 = a2;
        v11 = a3;
        std::path::Path::components(&v21);
        v12 = &dword_0 + 1;
        if ( v26 & 1 | ((unsigned __int8)((_BYTE)v23 - 7) < 0xFEu) )
          v12 = &unk_2EB88;
        v14 = v26 & 1u | ((unsigned __int8)((_BYTE)v23 - 7) < 0xFEu);
      }
      else
      {
        v10 = a2;
        v11 = a3;
        v12 = (void *)std::path::Path::parent(a2, a3);
        v14 = v13;
        if ( !v12 )
        {
          v12 = a2;
          v14 = a3;
        }
      }
      v17 = std::path::Path::_strip_prefix(v10, v11, v12, v14);
      if ( !v17 )
      {
        *(_QWORD *)a1 = 7LL;
        *(_OWORD *)(a1 + 8) = v29;
        *(_QWORD *)(a1 + 24) = v30;
        return a1;
      }
      std::path::Path::_join(&v29, a4, a5, v17, v18);
      v28 = v30;
      v27 = v29;
    }
    *(_QWORD *)(a1 + 24) = v28;
    *(_OWORD *)(a1 + 8) = v27;
    *(_QWORD *)a1 = 13LL;
  }
  return a1;
}
