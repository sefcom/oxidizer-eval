__int64 __fastcall uu_chcon::fts::FTS::new(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r14
  FTS *v10; // rax
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  unsigned __int64 v13; // rax
  _BYTE v14[28]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v15; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+30h] [rbp-68h]
  unsigned int v17; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v18[28]; // [rsp+3Ch] [rbp-5Ch]
  __int128 v19; // [rsp+58h] [rbp-40h]
  __int128 v20; // [rsp+68h] [rbp-30h]
  __int64 v21; // [rsp+78h] [rbp-20h]

  v5 = core::iter::traits::iterator::Iterator::map(a2, a3);
  v7 = core::iter::traits::iterator::Iterator::map(v5, v6);
  core::iter::traits::iterator::Iterator::collect(&v17, v7);
  result = v17;
  if ( v17 == 18 )
  {
    v15 = *(_OWORD *)&v18[4];
    v16 = *(_QWORD *)&v18[20];
    if ( *(_QWORD *)&v18[20] )
    {
      core::iter::traits::iterator::Iterator::chain(
        &v17,
        *((_QWORD *)&v15 + 1),
        *((_QWORD *)&v15 + 1) + 16LL * *(_QWORD *)&v18[20]);
      core::iter::traits::iterator::Iterator::collect(v14, &v17);
      v9 = *(_QWORD *)&v14[8];
      v10 = fts_open(*(char *const **)&v14[8], a4, 0LL);
      if ( v10 )
      {
        *(_QWORD *)(a1 + 8) = v10;
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_DWORD *)a1 = 18;
      }
      else
      {
        v13 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
        *(_DWORD *)a1 = 16;
        *(_QWORD *)(a1 + 8) = aFtsOpen_0;
        *(_QWORD *)(a1 + 16) = 10LL;
        *(_QWORD *)(a1 + 24) = v13;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<*const i8>>(*(_QWORD *)v14, v9);
    }
    else
    {
      *(_DWORD *)a1 = 16;
      *(_QWORD *)(a1 + 8) = aFtsNew;
      *(_QWORD *)(a1 + 16) = 10LL;
      *(_QWORD *)(a1 + 24) = 0x1400000003LL;
    }
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::ffi::c_str::CString>>(&v15);
  }
  else
  {
    v11 = v19;
    v12 = v20;
    *(_OWORD *)&v14[12] = *(_OWORD *)&v18[12];
    *(_OWORD *)v14 = *(_OWORD *)v18;
    *(_QWORD *)(a1 + 64) = v21;
    *(_OWORD *)(a1 + 48) = v12;
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v14[12];
    *(_OWORD *)(a1 + 4) = *(_OWORD *)v14;
    *(_DWORD *)a1 = result;
  }
  return result;
}