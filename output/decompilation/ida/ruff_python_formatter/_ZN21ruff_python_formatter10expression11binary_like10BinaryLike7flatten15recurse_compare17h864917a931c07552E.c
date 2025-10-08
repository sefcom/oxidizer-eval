__int64 __fastcall ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare(
        __int64 *a1,
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
  __int64 v14; // rsi
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  char v18; // al
  __int64 v19; // r9
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // r9
  char **v23; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+8h] [rbp-B0h]
  __int64 v25; // [rsp+10h] [rbp-A8h]
  __int128 v26; // [rsp+18h] [rbp-A0h]
  char *v27; // [rsp+38h] [rbp-80h]
  __int64 v28; // [rsp+40h] [rbp-78h]
  __int64 v29; // [rsp+48h] [rbp-70h]
  __int64 v30; // [rsp+50h] [rbp-68h]
  __int64 v31; // [rsp+58h] [rbp-60h] BYREF
  __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h] BYREF
  __int64 v34; // [rsp+70h] [rbp-48h]
  __int64 v35; // [rsp+78h] [rbp-40h]
  char v36; // [rsp+80h] [rbp-38h]
  char v37; // [rsp+81h] [rbp-37h]

  v30 = a5;
  v29 = a4;
  v11 = smallvec::SmallVec<A>::try_reserve(a9);
  smallvec::infallible(v11, v12);
  v24 = *a1;
  v25 = a2;
  *(_QWORD *)&v26 = a3;
  v23 = 0LL;
  ((void (__fastcall *)(char ***, __int64, __int64, __int64, void *))ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec)(
    &v23,
    a6,
    a7,
    a8,
    a9);
  result = a1[4];
  v31 = result;
  v32 = a1[2];
  if ( result != v32 )
  {
    v23 = &off_57D4A8;
    v24 = 1LL;
    v25 = 8LL;
    v26 = 0LL;
    ((void (__fastcall __noreturn *)(_QWORD, __int64 *, __int64 *, char ***, char **))core::panicking::assert_failed)(
      0LL,
      &v31,
      &v32,
      &v23,
      &off_57D4B8);
  }
  if ( result )
  {
    v14 = a1[1];
    v28 = a1[3] + 80 * (result - 1);
    v27 = (char *)(result + v14 - 1);
    core::iter::traits::iterator::Iterator::zip(&v23);
    v15 = (char *)<core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v23);
    if ( v15 )
    {
      v17 = v16;
      do
      {
        v18 = *v15;
        v34 = 4LL;
        v35 = 0LL;
        v36 = 1;
        v37 = v18;
        v33 = 3LL;
        smallvec::SmallVec<A>::push(a9, &v33);
        v34 = v17;
        v33 = 1LL;
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(
          &v33,
          a6,
          a7,
          a8,
          a9,
          v19,
          v23,
          v24,
          v25,
          v26);
        v15 = (char *)<core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v23);
        v17 = v20;
      }
      while ( v15 );
    }
    v21 = *v27;
    v24 = 4LL;
    v25 = 0LL;
    LOBYTE(v26) = 1;
    BYTE1(v26) = v21;
    v23 = (char **)(&dword_0 + 3);
    smallvec::SmallVec<A>::push(a9, &v23);
    v24 = v28;
    v25 = v29;
    *(_QWORD *)&v26 = v30;
    v23 = (char **)(&dword_0 + 2);
    return ((__int64 (__fastcall *)(char ***, __int64, __int64, __int64, void *, __int64))ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec)(
             &v23,
             a6,
             a7,
             a8,
             a9,
             v22);
  }
  return result;
}