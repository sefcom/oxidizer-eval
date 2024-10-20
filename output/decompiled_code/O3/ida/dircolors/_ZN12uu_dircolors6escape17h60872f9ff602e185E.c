_QWORD *__fastcall uu_dircolors::escape(_QWORD *a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // r15
  unsigned __int8 *v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // edx
  unsigned __int8 v11; // bl
  __int64 v12; // rcx
  size_t v13; // r13
  _QWORD *result; // rax
  int src; // [rsp+4h] [rbp-54h] BYREF
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+18h] [rbp-40h]
  _QWORD *v19; // [rsp+20h] [rbp-38h]

  v19 = a1;
  v16 = 0LL;
  v17 = 1LL;
  v18 = 0LL;
  if ( a3 )
  {
    v3 = a2;
    v4 = &a2[a3];
    v5 = 32;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = v5;
      v5 = *v3;
      if ( (v5 & 0x80u) != 0 )
      {
        v8 = v5 & 0x1F;
        v9 = v3[1] & 0x3F;
        if ( (unsigned __int8)v5 <= 0xDFu )
        {
          v3 += 2;
          v5 = v9 | (v8 << 6);
          if ( v5 == 39 )
            goto LABEL_26;
        }
        else
        {
          v10 = (v9 << 6) | v3[2] & 0x3F;
          if ( (unsigned __int8)v5 < 0xF0u )
          {
            v3 += 3;
            v5 = (v8 << 12) | v10;
            if ( v5 == 39 )
            {
LABEL_26:
              if ( (unsigned __int64)(v16 - v6) <= 3 )
              {
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v16, v6, 4LL);
                v6 = v18;
              }
              *(_DWORD *)(v17 + v6) = 656890919;
              v6 = v18 + 4;
              goto LABEL_4;
            }
          }
          else
          {
            v11 = v3[3];
            v3 += 4;
            v5 = ((v8 & 7) << 18) | (v10 << 6) | v11 & 0x3F;
            if ( v5 == 39 )
              goto LABEL_26;
          }
        }
      }
      else
      {
        ++v3;
        if ( v5 == 39 )
          goto LABEL_26;
      }
      if ( v5 == 58 )
      {
        v12 = v16;
        if ( v7 == 92 )
          goto LABEL_20;
        if ( (unsigned __int64)(v16 - v6) <= 1 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v16, v6, 2LL);
          v6 = v18;
        }
        *(_WORD *)(v17 + v6) = 14940;
        v6 = v18 + 2;
LABEL_4:
        v18 = v6;
        if ( v3 == v4 )
          break;
      }
      else
      {
        if ( v5 <= 0x7F )
        {
          v12 = v16;
LABEL_20:
          if ( v6 == v12 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v16);
          *(_BYTE *)(v17 + v6++) = v5;
          goto LABEL_4;
        }
        src = 0;
        if ( v5 >= 0x800 )
        {
          if ( v5 >= (unsigned int)&unk_10000 )
          {
            LOBYTE(src) = (v5 >> 18) | 0xF0;
            BYTE1(src) = (v5 >> 12) & 0x3F | 0x80;
            BYTE2(src) = (v5 >> 6) & 0x3F | 0x80;
            HIBYTE(src) = v5 & 0x3F | 0x80;
            v13 = 4LL;
          }
          else
          {
            LOBYTE(src) = (v5 >> 12) | 0xE0;
            BYTE1(src) = (v5 >> 6) & 0x3F | 0x80;
            BYTE2(src) = v5 & 0x3F | 0x80;
            v13 = 3LL;
          }
        }
        else
        {
          LOBYTE(src) = (v5 >> 6) | 0xC0;
          BYTE1(src) = v5 & 0x3F | 0x80;
          v13 = 2LL;
        }
        if ( v16 - v6 < v13 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v16, v6, v13);
          v6 = v18;
        }
        memcpy((void *)(v17 + v6), &src, v13);
        v18 += v13;
        v6 = v18;
        if ( v3 == v4 )
          break;
      }
    }
  }
  result = v19;
  v19[2] = v18;
  *result = v16;
  result[1] = v17;
  return result;
}
