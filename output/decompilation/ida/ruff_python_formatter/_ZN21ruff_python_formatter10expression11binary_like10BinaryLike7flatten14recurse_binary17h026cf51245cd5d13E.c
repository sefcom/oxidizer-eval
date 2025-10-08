__int64 __fastcall ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+18h] [rbp-40h]
  __int64 v19; // [rsp+20h] [rbp-38h]

  v17 = *(_QWORD *)a1;
  v18 = a2;
  v19 = a3;
  v16 = 0LL;
  ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v16, a6, a7, a8, a9, a6);
  v12 = *(_BYTE *)(a1 + 28);
  v17 = ruff_python_formatter::comments::Comments::dangling(*a6, a1);
  v18 = v13;
  LOBYTE(v19) = 0;
  BYTE1(v19) = v12;
  v16 = 3LL;
  smallvec::SmallVec<A>::push(a9, &v16);
  v17 = *(_QWORD *)(a1 + 8);
  v18 = a4;
  v19 = a5;
  v16 = 2LL;
  return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v16, a6, a7, a8, a9, v14);
}