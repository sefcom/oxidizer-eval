_OWORD *__fastcall just::scope::Scope::root(_OWORD *a1)
{
  __int64 v1; // rax
  __int64 *i; // rax
  _QWORD *v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int128 v6; // xmm0
  _OWORD *result; // rax
  __int128 v8; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v9; // [rsp+20h] [rbp-E8h]
  __int128 v10; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h]
  const char *v12; // [rsp+48h] [rbp-C0h]
  __int64 v13; // [rsp+50h] [rbp-B8h]
  __int64 v14; // [rsp+58h] [rbp-B0h]
  __int64 v15; // [rsp+60h] [rbp-A8h]
  __int64 v16; // [rsp+68h] [rbp-A0h]
  __int64 v17; // [rsp+70h] [rbp-98h]
  __int128 v18; // [rsp+78h] [rbp-90h]
  char v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h]
  __int16 v21; // [rsp+94h] [rbp-74h]
  char v22; // [rsp+96h] [rbp-72h]
  __int128 v23; // [rsp+98h] [rbp-70h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-60h]
  _BYTE v25[88]; // [rsp+B0h] [rbp-58h] BYREF

  *(_QWORD *)&v8 = 0LL;
  v9 = 0LL;
  v1 = just::constants::constants();
  hashbrown::map::HashMap<K,V,S,A>::iter(v25, v1);
  for ( i = (__int64 *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v25);
        i;
        i = (__int64 *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v25) )
  {
    v4 = *i;
    v5 = i[1];
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v23, *v3);
    v11 = v24;
    v10 = v23;
    v21 = 1;
    v20 = 0;
    v12 = aPrelude;
    v13 = 7LL;
    v14 = v4;
    v15 = v5;
    v16 = 0LL;
    v17 = v5;
    v18 = 0LL;
    v19 = 24;
    v22 = 0;
    just::scope::Scope::bind(&v8, &v10);
  }
  v6 = v8;
  result = a1;
  a1[1] = v9;
  *a1 = v6;
  return result;
}