__int64 __fastcall uu_pr::open::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // r14
  size_t v5; // r12
  void *v6; // r15
  unsigned __int64 v7; // rax
  const void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int128 v12; // xmm0
  _DWORD *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-80h]
  __int128 v15; // [rsp+10h] [rbp-78h] BYREF
  void *dest[2]; // [rsp+20h] [rbp-68h]
  _DWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  _QWORD v19[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = *(const void **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v15, v5, 0LL);
  v14 = *((_QWORD *)&v15 + 1);
  if ( (_QWORD)v15 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v15 + 1), dest[0]);
  v6 = dest[0];
  core::intrinsics::copy_nonoverlapping::precondition_check(v4, dest[0], 1LL, 1LL, v5);
  memcpy(v6, v4, v5);
  switch ( ((*(_DWORD *)(a3 + 56) & 0xF000u) - 4096) >> 12 )
  {
    case 3u:
      v7 = 0x8000000000000002LL;
      goto LABEL_4;
    case 7u:
    case 9u:
      v9 = *(const void **)a2;
      v10 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)&v15 = 0x1B600000000LL;
      DWORD2(v15) = 1;
      WORD6(v15) = 0;
      std::fs::OpenOptions::_open(v17, &v15, v9, v10);
      if ( v17[0] )
      {
        v11 = *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)a2 )
        {
          v19[0] = *(_QWORD *)a2;
          v19[1] = v11;
          v19[2] = v18;
          <uu_pr::PrError as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(&v15, v19);
          v12 = v15;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)dest;
          *(_OWORD *)a1 = v12;
          goto LABEL_13;
        }
      }
      else
      {
        LODWORD(v11) = v17[1];
      }
      v13 = (_DWORD *)alloc::alloc::exchange_malloc(4LL, 4LL);
      *v13 = v11;
      *(_QWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 16) = &off_2C7F88;
      *(_QWORD *)a1 = 0x8000000000000005LL;
LABEL_13:
      if ( v14 )
        _rust_dealloc(v6, v14, 1LL);
      return a1;
    case 0xBu:
      v7 = 0x8000000000000003LL;
      goto LABEL_4;
    default:
      v7 = 0x8000000000000000LL;
LABEL_4:
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = v6;
      *(_QWORD *)(a1 + 24) = v5;
      return a1;
  }
}
