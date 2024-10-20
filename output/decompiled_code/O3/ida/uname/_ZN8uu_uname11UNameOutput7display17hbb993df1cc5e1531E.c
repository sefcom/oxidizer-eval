__int64 __fastcall uu_uname::UNameOutput::display(__int64 a1, _QWORD *a2)
{
  size_t v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  _QWORD *v6; // r8
  _QWORD *v7; // r9
  _QWORD *v8; // r10
  _QWORD *v9; // r11
  _QWORD *v10; // r14
  _QWORD *v11; // r15
  __int64 i; // rbp
  __int64 v13; // rcx
  const void *v14; // r12
  size_t v15; // r15
  size_t v16; // r15
  __int128 v18; // [rsp+8h] [rbp-C0h] BYREF
  size_t v19; // [rsp+18h] [rbp-B0h]
  _QWORD v20[20]; // [rsp+28h] [rbp-A0h]

  v3 = 0LL;
  v4 = a2;
  if ( *a2 == 0x8000000000000000LL )
    v4 = 0LL;
  v5 = a2 + 3;
  if ( a2[3] == 0x8000000000000000LL )
    v5 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  v6 = a2 + 6;
  if ( a2[6] == 0x8000000000000000LL )
    v6 = 0LL;
  v7 = a2 + 9;
  if ( a2[9] == 0x8000000000000000LL )
    v7 = 0LL;
  v8 = a2 + 12;
  if ( a2[12] == 0x8000000000000000LL )
    v8 = 0LL;
  *((_QWORD *)&v18 + 1) = 1LL;
  v9 = a2 + 15;
  if ( a2[15] == 0x8000000000000000LL )
    v9 = 0LL;
  v10 = a2 + 18;
  if ( a2[18] == 0x8000000000000000LL )
    v10 = 0LL;
  v11 = a2 + 21;
  if ( a2[21] == 0x8000000000000000LL )
    v11 = 0LL;
  v19 = 0LL;
  v20[0] = v4;
  v20[1] = v5;
  v20[2] = v6;
  v20[3] = v7;
  v20[4] = v8;
  v20[5] = v9;
  v20[6] = v10;
  v20[7] = v11;
  for ( i = 0LL; i != 8; ++i )
  {
    v13 = v20[i];
    if ( v13 )
    {
      v14 = *(const void **)(v13 + 8);
      v15 = *(_QWORD *)(v13 + 16);
      if ( (unsigned __int64)v18 - v3 < v15 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v18, v3, v15);
        v3 = v19;
      }
      memcpy((void *)(*((_QWORD *)&v18 + 1) + v3), v14, v15);
      v16 = v19 + v15;
      v19 = v16;
      if ( v16 == (_QWORD)v18 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v18);
      *(_BYTE *)(*((_QWORD *)&v18 + 1) + v16) = 32;
      v19 = v16 + 1;
      v3 = v16 + 1;
    }
  }
  *(_QWORD *)(a1 + 16) = v19;
  *(_OWORD *)a1 = v18;
  return a1;
}
