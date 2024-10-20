        __int64 a6)
{
  size_t v11; // r14
  char v12; // al
  size_t v13; // rsi
  size_t v14; // rcx
  int v15; // eax
  __int64 v16; // r12
  int v17; // ecx
  __int64 result; // rax
  __int64 v19; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+8h] [rbp-B0h]
  __int64 v21; // [rsp+10h] [rbp-A8h]
  __int64 v22; // [rsp+18h] [rbp-A0h]
  _QWORD v23[3]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v24; // [rsp+38h] [rbp-80h]
  __int64 v25; // [rsp+48h] [rbp-70h]
  __int64 v26; // [rsp+50h] [rbp-68h]
  __int64 v27; // [rsp+58h] [rbp-60h]
  __int64 v28; // [rsp+60h] [rbp-58h]
  __int64 v29; // [rsp+68h] [rbp-50h]
  int v30; // [rsp+70h] [rbp-48h]
  int v31; // [rsp+74h] [rbp-44h]
  char v32; // [rsp+78h] [rbp-40h]
  __int16 v33; // [rsp+80h] [rbp-38h]

  LODWORD(v19) = 0;
  v11 = 1LL;
  v12 = a5;
  if ( (a5 & 0x80u) != 0 )
  {
    v12 = (a5 >> 6) | 0xC0;
    BYTE1(v19) = a5 & 0xBF;
    v11 = 2LL;
  }
  LOBYTE(v19) = v12;
  v13 = a2 - v11;
  if ( a2 >= v11 )
  {
    v22 = a1;
    v15 = bcmp(&v19, (const void *)(a1 + v13), v11);
    a1 = v22;
    v14 = 0LL;
    if ( !v15 )
      v14 = v11;
  }
  else
  {
    v14 = 0LL;
  }
  if ( *(_QWORD *)(a3 + 16) )
    core::panicking::panic(aAssertionFaile_20, 34LL, &off_194DF0);
  if ( a4[2] )
    core::panicking::panic(aAssertionFaile_19, 49LL, &off_194DD8);
  if ( a4[5] )
    core::panicking::panic(aAssertionFaile_18, 48LL, &off_194DC0);
  if ( a4[8] )
    core::panicking::panic(aAssertionFaile_17, 52LL, &off_194DA8);
  v16 = a2 - v14;
  v19 = 0LL;
  v20 = 8LL;
  v21 = 0LL;
  v17 = (a5 >> 6) + ((a5 & 0x3F) << 8) + 32960;
  if ( (a5 & 0x80u) == 0 )
    v17 = a5;
  v24 = 0LL;
  v25 = v16;
  v26 = a1;
  v27 = v16;
  v28 = 0LL;
  v29 = v16;
  v30 = v17;
  v31 = a5;
  v32 = 2 - ((a5 & 0x80u) == 0);
  v33 = 1;
  v23[0] = a4;
  v23[1] = &v19;
  v23[2] = a6;
  result = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a3, v23);
  if ( v19 )
    return _rust_dealloc(v20, 16 * v19, 8LL);
  return result;
}
