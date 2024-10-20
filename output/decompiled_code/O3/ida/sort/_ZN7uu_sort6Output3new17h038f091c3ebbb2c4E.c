__int64 __fastcall uu_sort::Output::new(__int64 a1, const void *a2, signed __int64 a3)
{
  int v3; // ebp
  void *v4; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  void *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  _OWORD *v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v17; // [rsp+8h] [rbp-90h]
  __int64 v18; // [rsp+10h] [rbp-88h] BYREF
  int v19; // [rsp+18h] [rbp-80h]
  __int16 v20; // [rsp+1Ch] [rbp-7Ch]
  __int64 v21; // [rsp+20h] [rbp-78h]
  __int128 v22; // [rsp+28h] [rbp-70h] BYREF
  __int128 v23; // [rsp+38h] [rbp-60h]
  __int128 v24; // [rsp+48h] [rbp-50h]
  __int128 v25; // [rsp+58h] [rbp-40h]

  v6 = 0x8000000000000000LL;
  if ( !a2 )
    goto LABEL_17;
  v18 = 0x1B600000000LL;
  v19 = 256;
  v20 = 1;
  std::fs::OpenOptions::_open(&v22, &v18, a2, a3);
  if ( !(_DWORD)v22 )
  {
    v3 = DWORD1(v22);
    if ( a3 )
    {
      if ( a3 < 0 )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = 1LL;
        v11 = _rust_alloc(a3, 1LL);
        if ( v11 )
        {
          v4 = (void *)v11;
LABEL_16:
          memcpy(v4, a2, a3);
          v6 = a3;
LABEL_17:
          *(_QWORD *)a1 = v6;
          *(_QWORD *)(a1 + 8) = v4;
          *(_QWORD *)(a1 + 16) = a3;
          *(_DWORD *)(a1 + 24) = v3;
          return a1;
        }
      }
      alloc::raw_vec::handle_error(v10, a3);
    }
    v4 = &dword_0 + 1;
    goto LABEL_16;
  }
  v7 = *((_QWORD *)&v22 + 1);
  v21 = *((_QWORD *)&v22 + 1);
  if ( !a3 )
  {
    v9 = &dword_0 + 1;
    goto LABEL_13;
  }
  if ( a3 < 0 )
  {
    v17 = 0LL;
LABEL_21:
    alloc::raw_vec::handle_error(v17, a3);
  }
  v17 = 1LL;
  v8 = _rust_alloc(a3, 1LL);
  if ( !v8 )
    goto LABEL_21;
  v9 = (void *)v8;
LABEL_13:
  memcpy(v9, a2, a3);
  LOBYTE(v22) = 1;
  *((_QWORD *)&v22 + 1) = v7;
  *(_QWORD *)&v23 = a3;
  *((_QWORD *)&v23 + 1) = v9;
  *(_QWORD *)&v24 = a3;
  v12 = (_OWORD *)_rust_alloc(64LL, 8LL);
  if ( !v12 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v13 = v22;
  v14 = v23;
  v15 = v24;
  v12[3] = v25;
  v12[2] = v15;
  v12[1] = v14;
  *v12 = v13;
  *(_QWORD *)(a1 + 8) = v12;
  *(_QWORD *)(a1 + 16) = &anon_d7f70ae2e91d4deb3ee5c65537f9ec21_36_llvm_14646808445695166917;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  return a1;
}
