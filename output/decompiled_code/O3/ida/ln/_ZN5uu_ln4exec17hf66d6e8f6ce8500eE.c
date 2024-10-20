_OWORD *__fastcall uu_ln::exec(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  const void *v4; // r15
  signed __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  void *v8; // r14
  __int64 v9; // r15
  _OWORD *result; // rax
  _OWORD *v11; // rbx
  const void *v12; // r15
  __int64 v13; // rax
  void *v14; // r14
  __int64 v15; // r13
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // [rsp+8h] [rbp-60h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  __int128 v20; // [rsp+28h] [rbp-40h]

  if ( *(_QWORD *)(a3 + 24) == 0x8000000000000000LL )
  {
    if ( *(_BYTE *)(a3 + 51) )
    {
      if ( a2 == 1 )
      {
        v4 = (const void *)a1[1];
        v5 = a1[2];
        if ( !v5 )
        {
          v8 = &dword_0 + 1;
LABEL_25:
          memcpy(v8, v4, v5);
          *(_QWORD *)&v18 = v5;
          *((_QWORD *)&v18 + 1) = v8;
          *(_QWORD *)&v19 = v5;
          *((_QWORD *)&v19 + 1) = 0x8000000000000003LL;
          result = (_OWORD *)_rust_alloc(48LL, 8LL);
          if ( !result )
            alloc::alloc::handle_alloc_error(8LL, 48LL);
LABEL_29:
          v16 = v18;
          v17 = v19;
          result[2] = v20;
          result[1] = v17;
          *result = v16;
          return result;
        }
        if ( v5 >= 0 )
        {
          v6 = 1LL;
          v7 = _rust_alloc(a1[2], 1LL);
          if ( v7 )
          {
            v8 = (void *)v7;
            goto LABEL_25;
          }
LABEL_34:
          alloc::raw_vec::handle_error(v6, v5);
        }
LABEL_33:
        v6 = 0LL;
        goto LABEL_34;
      }
      if ( a2 > 2 )
      {
        v12 = (const void *)a1[7];
        v5 = a1[8];
        if ( v5 )
        {
          if ( v5 < 0 )
            goto LABEL_33;
          v6 = 1LL;
          v13 = _rust_alloc(a1[8], 1LL);
          if ( !v13 )
            goto LABEL_34;
          v14 = (void *)v13;
        }
        else
        {
          v14 = &dword_0 + 1;
        }
        memcpy(v14, v12, v5);
        *(_QWORD *)&v18 = v5;
        *((_QWORD *)&v18 + 1) = v14;
        *(_QWORD *)&v19 = v5;
        *((_QWORD *)&v19 + 1) = 0x8000000000000004LL;
        result = (_OWORD *)_rust_alloc(48LL, 8LL);
        if ( !result )
          alloc::alloc::handle_alloc_error(8LL, 48LL);
        goto LABEL_29;
      }
      if ( !a2 )
        core::panicking::panic(aAssertionFaile_3, 35LL, &off_EF9D0);
      return (_OWORD *)uu_ln::link(a1[1], a1[2], a1[4], a1[5], a3);
    }
    if ( a2 == 1 )
    {
      std::sys::os_str::bytes::Slice::to_owned(&v18, asc_1A708, 1LL);
      v9 = *((_QWORD *)&v18 + 1);
      result = (_OWORD *)uu_ln::link_files_in_dir(a1, 1LL, *((_QWORD *)&v18 + 1), v19, a3);
    }
    else
    {
      if ( !a2 )
        core::option::unwrap_failed(&off_EF910);
      std::sys::os_str::bytes::Slice::to_owned(&v18, a1[3 * a2 - 2], a1[3 * a2 - 1]);
      v9 = *((_QWORD *)&v18 + 1);
      v15 = v19;
      if ( a2 <= 2 && !(unsigned __int8)std::path::Path::is_dir(*((_QWORD *)&v18 + 1), v19) )
      {
        if ( (_QWORD)v18 )
          _rust_dealloc(v9, v18, 1LL);
        return (_OWORD *)uu_ln::link(a1[1], a1[2], a1[4], a1[5], a3);
      }
      result = (_OWORD *)uu_ln::link_files_in_dir(a1, a2 - 1, v9, v15, a3);
    }
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_owned(&v18, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
    v9 = *((_QWORD *)&v18 + 1);
    result = (_OWORD *)uu_ln::link_files_in_dir(a1, a2, *((_QWORD *)&v18 + 1), v19, a3);
  }
  if ( (_QWORD)v18 )
  {
    v11 = result;
    _rust_dealloc(v9, v18, 1LL);
    return v11;
  }
  return result;
}
