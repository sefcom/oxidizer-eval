void *__fastcall uu_expr::syntax_tree::NumOrStr::to_bigint(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  char v6; // r15
  char v7; // bp
  const void *v8; // r15
  unsigned __int64 v9; // r13
  size_t v10; // r14
  __int64 v11; // rax
  void *v12; // r12
  void *result; // rax
  char v14; // cl
  int v15; // edx
  char v16; // di
  __int64 v17; // [rsp+8h] [rbp-50h]
  void *v18; // [rsp+10h] [rbp-48h] BYREF
  char v19; // [rsp+18h] [rbp-40h]
  _BYTE v20[7]; // [rsp+19h] [rbp-3Fh]
  __int64 v21; // [rsp+20h] [rbp-38h]

  if ( *(_QWORD *)a2 != 0x8000000000000000LL )
  {
    v7 = *(_BYTE *)(a2 + 24);
    v8 = *(const void **)(a2 + 8);
    v9 = *(_QWORD *)(a2 + 16);
    if ( v9 )
    {
      v10 = 8 * v9;
      if ( v9 >> 60 )
      {
        v17 = 0LL;
      }
      else
      {
        v17 = 8LL;
        v11 = _rust_alloc(8 * v9, 8LL);
        if ( v11 )
        {
          v12 = (void *)v11;
LABEL_14:
          result = memcpy(v12, v8, v10);
          *(_QWORD *)a1 = v9;
          *(_QWORD *)(a1 + 8) = v12;
          *(_QWORD *)(a1 + 16) = v9;
          *(_BYTE *)(a1 + 24) = v7;
          return result;
        }
      }
      alloc::raw_vec::handle_error(v17, 8 * v9);
    }
    v12 = &byte_8;
    v10 = 0LL;
    goto LABEL_14;
  }
  v4 = *(_BYTE **)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 24);
  v6 = 2;
  if ( v5 )
  {
    if ( *v4 == 45 )
    {
      if ( v5 == 1 )
      {
        v6 = 0;
        v5 = 0LL;
        ++v4;
      }
      else
      {
        if ( v4[1] != 43 )
        {
          --v5;
          ++v4;
        }
        v6 = 0;
      }
    }
  }
  else
  {
    v5 = 0LL;
  }
  num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(
    &v18,
    v4,
    v5,
    10LL);
  result = v18;
  v14 = v19;
  if ( v18 != (void *)0x8000000000000000LL )
  {
    v15 = *(_DWORD *)v20;
    *(_DWORD *)(a1 + 12) = *(_DWORD *)&v20[3];
    *(_DWORD *)(a1 + 9) = v15;
    v16 = 1;
    if ( v21 )
      v16 = v6;
    *(_QWORD *)(a1 + 16) = v21;
    *(_BYTE *)(a1 + 24) = v16;
  }
  *(_BYTE *)(a1 + 8) = v14;
  *(_QWORD *)a1 = result;
  return result;
}
