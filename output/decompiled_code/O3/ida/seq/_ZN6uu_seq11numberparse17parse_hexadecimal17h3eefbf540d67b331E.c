__int64 __fastcall uu_seq::numberparse::parse_hexadecimal(__int64 a1, char *a2, unsigned __int64 a3)
{
  char v4; // bp
  __int64 v5; // rax
  __int64 v6; // rdx
  char *v7; // rsi
  unsigned __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r12
  char v11; // al
  char **v12; // r8
  __int64 v13; // rdx
  __int128 v14; // xmm0
  int v15; // esi
  __int128 v17; // [rsp+8h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+18h] [rbp-A0h]
  __int64 v19; // [rsp+28h] [rbp-90h]
  __int128 v20; // [rsp+30h] [rbp-88h] BYREF
  __int128 v21; // [rsp+40h] [rbp-78h]
  __int64 v22; // [rsp+50h] [rbp-68h]
  _QWORD v23[2]; // [rsp+60h] [rbp-58h] BYREF
  char v24; // [rsp+70h] [rbp-48h]
  _QWORD v25[2]; // [rsp+78h] [rbp-40h] BYREF
  char v26; // [rsp+88h] [rbp-30h]

  if ( !a3 )
    goto LABEL_22;
  v4 = *a2;
  if ( *a2 != 45 )
  {
    if ( a3 < 3 )
    {
      if ( a3 == 2 )
        goto LABEL_8;
    }
    else if ( a2[2] > -65 )
    {
LABEL_8:
      v5 = 2LL;
      v6 = -2LL;
      goto LABEL_9;
    }
LABEL_22:
    v12 = &off_107640;
    v13 = 2LL;
LABEL_23:
    core::str::slice_error_fail(a2, a3, v13, a3, v12);
  }
  if ( a3 < 4 )
  {
    if ( a3 == 3 )
      goto LABEL_5;
    goto LABEL_20;
  }
  if ( a2[3] <= -65 )
  {
LABEL_20:
    v12 = &off_107658;
    v13 = 3LL;
    goto LABEL_23;
  }
LABEL_5:
  v5 = 3LL;
  v6 = -3LL;
LABEL_9:
  v7 = &a2[v5];
  v8 = a3 + v6;
  if ( v8 && ((v9 = (unsigned __int8)*v7, v9 == 43) || v9 == 45) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0x8000000000000004LL;
  }
  else
  {
    num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(
      &v20,
      v7,
      v8,
      16LL);
    if ( (_QWORD)v20 == 0x8000000000000000LL )
    {
      *(_BYTE *)(a1 + 8) = 2;
      *(_QWORD *)a1 = 0x8000000000000004LL;
    }
    else
    {
      HIDWORD(v17) = HIDWORD(v20);
      *(_DWORD *)((char *)&v17 + 9) = *(_DWORD *)((char *)&v20 + 9);
      v10 = v21;
      *(_QWORD *)&v17 = v20;
      BYTE8(v17) = BYTE8(v20);
      *(_QWORD *)&v18 = v21;
      BYTE8(v18) = 2 - ((_QWORD)v21 == 0LL);
      v19 = 0LL;
      v21 = xmmword_170D0;
      v20 = anon_9bfcc4441dc8fd90e2398af1e0d4f74b_0_llvm_8484012111238486492;
      v22 = 0LL;
      v24 = BYTE8(v18);
      v23[0] = &v17;
      v23[1] = 0LL;
      v26 = 1;
      v25[0] = &v20;
      v25[1] = 0LL;
      v11 = bigdecimal::impl_cmp::check_equality_bigdecimal_ref(v23, v25);
      if ( v4 == 45 )
      {
        if ( v11 )
        {
          *(_QWORD *)a1 = 0x8000000000000002LL;
          *(_QWORD *)(a1 + 40) = 2LL;
          *(_QWORD *)(a1 + 48) = 0LL;
          if ( (_QWORD)v17 )
            _rust_dealloc(*((_QWORD *)&v17 + 1), 8 * v17, 8LL);
        }
        else
        {
          *(_QWORD *)(a1 + 16) = v18;
          *(_OWORD *)a1 = v17;
          if ( v10 )
            *(_BYTE *)(a1 + 24) = 0;
          else
            *(_BYTE *)(a1 + 24) = 1;
          v15 = *(_DWORD *)((char *)&v18 + 9);
          *(_DWORD *)(a1 + 28) = HIDWORD(v18);
          *(_DWORD *)(a1 + 25) = v15;
          *(_OWORD *)(a1 + 32) = 0LL;
          *(_QWORD *)(a1 + 48) = 0LL;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v19;
        v14 = v17;
        *(_OWORD *)(a1 + 16) = v18;
        *(_OWORD *)a1 = v14;
        *(_OWORD *)(a1 + 40) = 0LL;
      }
      if ( (_QWORD)v20 )
        _rust_dealloc(*((_QWORD *)&v20 + 1), 8 * v20, 8LL);
    }
  }
  return a1;
}
