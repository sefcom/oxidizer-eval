_OWORD *__fastcall uu_dircolors::escape(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  void *v4; // r12
  unsigned int v5; // edx
  unsigned int v6; // r13d
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r12
  size_t v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r12
  _OWORD *result; // rax
  int src; // [rsp+4h] [rbp-64h] BYREF
  __int128 v17; // [rsp+8h] [rbp-60h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  _QWORD v20[8]; // [rsp+28h] [rbp-40h] BYREF

  v19 = a1;
  *(_QWORD *)&v17 = 0LL;
  *((_QWORD *)&v17 + 1) = 1LL;
  v18 = 0LL;
  v20[0] = a2;
  v20[1] = a2 + a3;
  v3 = 32;
  while ( (unsigned int)core::str::validations::next_code_point(v20) )
  {
    v6 = v5;
    if ( (v5 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F7FA + 6 )
      core::panicking::panic_nounwind(aUnsafePrecondi_9, 57LL);
    switch ( v5 )
    {
      case 0x27u:
        v8 = v18;
        if ( (unsigned __int64)(v17 - v18) <= 3 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v17, v18, 4LL);
          v8 = v18;
        }
        v9 = *((_QWORD *)&v17 + 1);
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_199B0, *((_QWORD *)&v17 + 1) + v8, 1LL, 1LL, 4LL);
        *(_DWORD *)(v9 + v8) = 656890919;
        v18 += 4LL;
        v3 = 39;
        break;
      case 0x3Au:
        if ( v3 == 92 )
          goto LABEL_12;
        v10 = v18;
        if ( (unsigned __int64)(v17 - v18) <= 1 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v17, v18, 2LL);
          v10 = v18;
        }
        v11 = *((_QWORD *)&v17 + 1);
        core::intrinsics::copy_nonoverlapping::precondition_check(
          &unk_28D22,
          *((_QWORD *)&v17 + 1) + v10,
          1LL,
          1LL,
          2LL);
        *(_WORD *)(v11 + v10) = 14940;
        v18 += 2LL;
        v3 = 58;
        break;
      case 0x110000u:
        goto LABEL_29;
      default:
        if ( v5 >= 0x80 )
        {
          src = 0;
          v12 = 4LL - (v5 < (unsigned int)&unk_10000);
          if ( v5 < 0x800 )
            v12 = 2LL;
          if ( v12 == 2 )
          {
            LOBYTE(src) = (v5 >> 6) & 0x1F | 0xC0;
            v13 = 1LL;
          }
          else if ( v12 == 3 )
          {
            LOBYTE(src) = (v5 >> 12) & 0xF | 0xE0;
            BYTE1(src) = (v5 >> 6) & 0x3F | 0x80;
            v13 = 2LL;
          }
          else
          {
            LOBYTE(src) = (v5 >> 18) & 7 | 0xF0;
            BYTE1(src) = (v5 >> 12) & 0x3F | 0x80;
            BYTE2(src) = (v5 >> 6) & 0x3F | 0x80;
            v13 = 3LL;
          }
          *((_BYTE *)&src + v13) = v5 & 0x3F | 0x80;
          v14 = v18;
          if ( (__int64)v17 - v18 < v12 )
          {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v17, v18, v12);
            v14 = v18;
          }
          v4 = (void *)(*((_QWORD *)&v17 + 1) + v14);
          core::intrinsics::copy_nonoverlapping::precondition_check(&src, v4, 1LL, 1LL, v12);
          memcpy(v4, &src, v12);
          v18 += v12;
          v3 = v6;
        }
        else
        {
LABEL_12:
          v7 = v18;
          if ( v18 == (_QWORD)v17 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v17);
          *(_BYTE *)(*((_QWORD *)&v17 + 1) + v7) = v6;
          v18 = v7 + 1;
          v3 = v6;
        }
        break;
    }
  }
LABEL_29:
  result = (_OWORD *)v19;
  *(_QWORD *)(v19 + 16) = v18;
  *result = v17;
  return result;
}
