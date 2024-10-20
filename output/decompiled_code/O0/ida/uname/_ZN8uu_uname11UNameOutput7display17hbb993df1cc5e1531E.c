__int64 __fastcall uu_uname::UNameOutput::display(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // r9
  _QWORD *v7; // r10
  _QWORD *v8; // r11
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r15
  __int64 v14; // rax
  const void *v15; // r13
  signed __int64 v16; // r12
  void *v17; // r14
  __int64 v18; // r12
  __int128 v20; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+18h] [rbp-B0h]
  _QWORD v22[21]; // [rsp+20h] [rbp-A8h]

  *(_QWORD *)&v20 = 0LL;
  *((_QWORD *)&v20 + 1) = 1LL;
  v21 = 0LL;
  v2 = 0LL;
  v3 = a2;
  if ( *a2 == 0x8000000000000000LL )
    v3 = 0LL;
  v4 = a2 + 3;
  if ( a2[3] == 0x8000000000000000LL )
    v4 = 0LL;
  v5 = a2 + 6;
  if ( a2[6] == 0x8000000000000000LL )
    v5 = 0LL;
  v6 = a2 + 9;
  if ( a2[9] == 0x8000000000000000LL )
    v6 = 0LL;
  v7 = a2 + 12;
  if ( a2[12] == 0x8000000000000000LL )
    v7 = 0LL;
  v8 = a2 + 15;
  if ( a2[15] == 0x8000000000000000LL )
    v8 = 0LL;
  v10 = a2 + 18;
  if ( a2[18] == 0x8000000000000000LL )
    v10 = 0LL;
  v11 = a2 + 21;
  if ( a2[21] == 0x8000000000000000LL )
    v11 = 0LL;
  v22[0] = 1LL;
  v22[1] = v3;
  v22[2] = v4;
  v22[3] = v5;
  v22[4] = v6;
  v22[5] = v7;
  v22[6] = v8;
  v22[7] = v10;
  v22[8] = v11;
  v22[10] = 8LL;
  v22[11] = 0LL;
  v22[13] = 0LL;
  v12 = 0LL;
LABEL_18:
  v13 = v12 + 1;
  while ( v13 != 9 )
  {
    v22[9] = v13;
    v14 = v22[v13++];
    if ( v14 )
    {
      v15 = *(const void **)(v14 + 8);
      if ( !v15 || (v16 = *(_QWORD *)(v14 + 16), v16 < 0) )
        core::panicking::panic_nounwind(aUnsafePrecondi_5, 162LL);
      if ( (__int64)v20 - v2 < (unsigned __int64)v16 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v20, v2, v16);
        v2 = v21;
      }
      v17 = (void *)(*((_QWORD *)&v20 + 1) + v2);
      core::intrinsics::copy_nonoverlapping::precondition_check(v15, v17, 1LL, 1LL, v16);
      memcpy(v17, v15, v16);
      v18 = v21 + v16;
      v21 = v18;
      if ( v18 == (_QWORD)v20 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v20);
      v12 = v13 - 1;
      *(_BYTE *)(*((_QWORD *)&v20 + 1) + v18) = 32;
      v21 = v18 + 1;
      v2 = v18 + 1;
      goto LABEL_18;
    }
  }
  *(_QWORD *)(a1 + 16) = v21;
  *(_OWORD *)a1 = v20;
  return a1;
}
