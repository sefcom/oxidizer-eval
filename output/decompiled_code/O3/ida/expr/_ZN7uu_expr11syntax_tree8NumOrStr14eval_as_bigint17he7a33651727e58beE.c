void __fastcall uu_expr::syntax_tree::NumOrStr::eval_as_bigint(__int64 a1, __int128 *a2)
{
  _BYTE *v3; // rbx
  __int64 v4; // rdx
  char v5; // r13
  _BYTE *v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // cl
  __int64 v12; // rdx
  char v13; // di
  __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  char v15; // [rsp+10h] [rbp-38h]
  _BYTE v16[7]; // [rsp+11h] [rbp-37h]
  __int64 v17; // [rsp+18h] [rbp-30h]

  if ( *(_QWORD *)a2 != 0x8000000000000000LL )
  {
    v7 = *a2;
    *(_OWORD *)(a1 + 24) = a2[1];
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 0LL;
    return;
  }
  v3 = (_BYTE *)*((_QWORD *)a2 + 2);
  v4 = *((_QWORD *)a2 + 3);
  v5 = 2;
  if ( v4 )
  {
    if ( *v3 == 45 )
    {
      v6 = v3 + 1;
      if ( v4 == 1 )
      {
        v5 = 0;
        v4 = 0LL;
      }
      else
      {
        if ( v3[1] == 43 )
          v6 = (_BYTE *)*((_QWORD *)a2 + 2);
        else
          --v4;
        v5 = 0;
      }
      goto LABEL_12;
    }
  }
  else
  {
    v4 = 0LL;
  }
  v6 = (_BYTE *)*((_QWORD *)a2 + 2);
LABEL_12:
  v8 = *((_QWORD *)a2 + 1);
  num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(
    &v14,
    v6,
    v4,
    10LL);
  v9 = v14;
  if ( v14 == 0x8000000000000000LL )
  {
    v10 = 1LL;
    v9 = 2LL;
  }
  else
  {
    v11 = v15;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)&v16[3];
    *(_DWORD *)(a1 + 17) = *(_DWORD *)v16;
    v12 = v17;
    v13 = 1;
    if ( v17 )
      v13 = v5;
    *(_BYTE *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 24) = v12;
    *(_BYTE *)(a1 + 32) = v13;
    v10 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)a1 = v10;
  if ( v8 )
    _rust_dealloc(v3, v8, 1LL);
}
