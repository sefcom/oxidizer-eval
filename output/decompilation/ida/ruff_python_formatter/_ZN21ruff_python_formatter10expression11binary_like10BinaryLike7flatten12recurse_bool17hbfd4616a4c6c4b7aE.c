__int64 __fastcall ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void *a9)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // r12
  char v19; // al
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rdx
  void *v25; // r8
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rcx
  void *v32; // r12
  char v33; // al
  __int64 v34; // [rsp+8h] [rbp-70h] BYREF
  __int64 v35; // [rsp+10h] [rbp-68h]
  __int64 v36; // [rsp+18h] [rbp-60h]
  __int64 v37; // [rsp+20h] [rbp-58h]
  __int64 v38; // [rsp+28h] [rbp-50h]
  __int64 v39; // [rsp+30h] [rbp-48h]
  __int64 v40; // [rsp+38h] [rbp-40h]
  __int64 v41; // [rsp+40h] [rbp-38h]

  v40 = a5;
  v39 = a4;
  v11 = smallvec::SmallVec<A>::try_reserve(a9);
  result = smallvec::infallible(v11, v12);
  v15 = *(_QWORD *)(a1 + 16);
  if ( v15 )
  {
    v16 = a3;
    v17 = *(_QWORD *)(a1 + 8);
    v35 = v17;
    v36 = a2;
    v18 = a8;
    v37 = v16;
    v34 = 0LL;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v34, a6, a7, a8, a9, v14);
    v19 = *(_BYTE *)(a1 + 36);
    v35 = 4LL;
    v36 = 0LL;
    LOBYTE(v37) = 2;
    BYTE1(v37) = v19;
    v34 = 3LL;
    result = smallvec::SmallVec<A>::push(a9, &v34);
    if ( v15 != 1 )
    {
      v21 = 80 * v15;
      v22 = v21 + v17 - 80;
      v23 = v17 + 80;
      v38 = v22;
      v24 = a7;
      v41 = a1;
      v25 = a9;
      if ( v23 != v22 )
      {
        v26 = v21 - 160;
        do
        {
          v35 = v23;
          v23 += 80LL;
          v34 = 1LL;
          v27 = a6;
          v28 = v24;
          v29 = a6;
          v30 = v18;
          v31 = v18;
          v32 = v25;
          ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v34, v27, v24, v31, v25, v20);
          v33 = *(_BYTE *)(v41 + 36);
          v35 = 4LL;
          v36 = 0LL;
          LOBYTE(v37) = 2;
          BYTE1(v37) = v33;
          v34 = 3LL;
          smallvec::SmallVec<A>::push(v32, &v34);
          v24 = v28;
          v25 = v32;
          v18 = v30;
          a6 = v29;
          v26 -= 80LL;
        }
        while ( v26 );
      }
      v35 = v38;
      v36 = v39;
      v37 = v40;
      v34 = 2LL;
      return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v34, a6, v24, v18, v25, v20);
    }
  }
  return result;
}