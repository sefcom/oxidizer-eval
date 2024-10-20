__int64 __fastcall uu_od::prn_char::format_ascii_dump(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 i; // r12
  int v6; // eax
  __int64 v7; // rax
  signed __int64 v8; // rbp
  const void *v9; // r13
  void *v10; // r12
  __int64 v11; // rbx
  __int128 v13; // [rsp+8h] [rbp-50h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h]

  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = 1LL;
  v14 = 0LL;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v13);
  v15 = a1;
  **((_BYTE **)&v13 + 1) = 62;
  v14 = 1LL;
  for ( i = 1LL; a3; --a3 )
  {
    if ( !a2 )
      break;
    v6 = *a2;
    if ( (unsigned __int8)(v6 - 32) >= 0x5Fu )
    {
      if ( i == (_QWORD)v13 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v13);
      *(_BYTE *)(*((_QWORD *)&v13 + 1) + i++) = 46;
    }
    else
    {
      v7 = (unsigned int)(16 * v6);
      v8 = *(signed __int64 *)((char *)&uu_od::prn_char::C_CHARS + v7 + 8);
      if ( v8 < 0 )
        core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_11_llvm_6296603921265638786, 71LL);
      v9 = *(char **)((char *)&uu_od::prn_char::C_CHARS + v7);
      if ( !v9 )
        core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_15_llvm_6296603921265638786, 162LL);
      if ( (__int64)v13 - i < (unsigned __int64)v8 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v13, i, v8);
        i = v14;
      }
      v10 = (void *)(*((_QWORD *)&v13 + 1) + i);
      core::intrinsics::copy_nonoverlapping::precondition_check(v9, v10, 1LL, 1LL, v8);
      memcpy(v10, v9, v8);
      i = v14 + v8;
    }
    ++a2;
    v14 = i;
  }
  v11 = v15;
  if ( i == (_QWORD)v13 )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v13);
  *(_BYTE *)(*((_QWORD *)&v13 + 1) + i) = 60;
  v14 = i + 1;
  *(_QWORD *)(v11 + 16) = i + 1;
  *(_OWORD *)v11 = v13;
  return v11;
}
