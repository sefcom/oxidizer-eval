__int64 __fastcall uu_sort::exec(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r13
  void *v12; // rax
  void *v13; // r14
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int64 v16; // rsi
  __int64 v17; // r15
  _QWORD v18[2]; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v19; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v20[10]; // [rsp+30h] [rbp-D8h]
  __int128 v21; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+90h] [rbp-78h]
  __int128 v23; // [rsp+98h] [rbp-70h]
  __int128 v24; // [rsp+A8h] [rbp-60h]
  __int128 v25; // [rsp+B8h] [rbp-50h]
  __int128 v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D8h] [rbp-30h]

  if ( *(_BYTE *)(a3 + 129) )
  {
    v7 = *a4;
    v8 = a4[1];
    LODWORD(v9) = 0;
    if ( *a4 != 0x8000000000000000LL )
      v9 = a4[1];
    uu_sort::merge::merge((unsigned int)&v19, a1, a2, a3, v9, a4[2], a5);
    result = *((_QWORD *)&v19 + 1);
    if ( (_QWORD)v19 == 3LL )
    {
      if ( v7 != 0x8000000000000000LL )
      {
        v11 = *((_QWORD *)&v19 + 1);
        if ( v7 )
          _rust_dealloc(v8, v7, 1LL);
        close(*((_DWORD *)a4 + 6));
        return v11;
      }
    }
    else
    {
      v27 = v20[9];
      v26 = *(_OWORD *)&v20[7];
      v25 = *(_OWORD *)&v20[5];
      v24 = *(_OWORD *)&v20[3];
      v23 = *(_OWORD *)&v20[1];
      v21 = v19;
      v22 = v20[0];
      v14 = *(_OWORD *)a4;
      *(_OWORD *)v20 = *((_OWORD *)a4 + 1);
      v19 = v14;
      return uu_sort::merge::FileMerger::write_all(&v21, a3, &v19);
    }
  }
  else if ( *(_BYTE *)(a3 + 133) )
  {
    if ( a2 <= 1 )
    {
      if ( a2 != 1 )
        core::option::unwrap_failed(&off_192D50);
      result = uu_sort::check::check(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a3);
    }
    else
    {
      v12 = (void *)_rust_alloc(29LL, 1LL);
      if ( !v12 )
        alloc::raw_vec::handle_error(1LL, 29LL);
      v13 = v12;
      qmemcpy(v12, "only one file allowed with -c", 29);
      result = _rust_alloc(32LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *(_QWORD *)result = 29LL;
      *(_QWORD *)(result + 8) = v13;
      *(_QWORD *)(result + 16) = 29LL;
      *(_DWORD *)(result + 24) = 2;
    }
    v16 = *a4;
    if ( *a4 != 0x8000000000000000LL )
    {
      v17 = result;
      if ( v16 )
        _rust_dealloc(a4[1], v16, 1LL);
      close(*((_DWORD *)a4 + 6));
      return v17;
    }
  }
  else
  {
    v18[0] = a1;
    v18[1] = a1 + 24 * a2;
    v15 = *(_OWORD *)a4;
    *(_OWORD *)v20 = *((_OWORD *)a4 + 1);
    v19 = v15;
    return uu_sort::ext_sort::ext_sort(v18, a3, &v19, a5);
  }
  return result;
}
