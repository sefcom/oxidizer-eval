char __fastcall uu_test::integers(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // rbp
  __int64 v15; // r12
  unsigned __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // r15
  bool v19; // sf
  bool v20; // of
  bool v21; // sf
  bool v22; // of
  __int64 v24; // [rsp+0h] [rbp-78h] BYREF
  __int64 v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+10h] [rbp-68h]
  unsigned __int64 v27; // [rsp+18h] [rbp-60h]
  __int128 v28; // [rsp+20h] [rbp-58h]
  __int128 v29; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-38h]

  core::str::converts::from_utf8(&v24, a2, a3);
  if ( (_DWORD)v24 != 1 )
  {
    core::num::<impl i128>::from_ascii_radix(&v24, v25, v26);
    if ( (_BYTE)v24 != 1 )
    {
      v13 = v26;
      v14 = v27;
      core::str::converts::from_utf8(&v24, a4, a5);
      if ( (_DWORD)v24 == 1 || (core::num::<impl i128>::from_ascii_radix(&v24, v25, v26), (_BYTE)v24 == 1) )
      {
        v24 = 1LL;
        v25 = a4;
        v26 = a5;
        goto LABEL_4;
      }
      v15 = v26;
      v16 = v27;
      core::str::converts::from_utf8(&v24, a6, a7);
      if ( (_DWORD)v24 == 1 )
      {
LABEL_9:
        v24 = 1LL;
        v25 = a6;
        v26 = a7;
        LOBYTE(v27) = 1;
        LOBYTE(v12) = <T as alloc::string::SpecToString>::spec_to_string(a1 + 8, &v24);
        *(_QWORD *)a1 = 4LL;
        return v12;
      }
      *(_QWORD *)&v28 = v15;
      *((_QWORD *)&v28 + 1) = v16;
      v17 = v25;
      v18 = v26;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v25, v26, aEq, 3LL) )
      {
        LOBYTE(v12) = ((unsigned __int64)v28 ^ v13 | *((_QWORD *)&v28 + 1) ^ v14) == 0;
LABEL_20:
        *(_BYTE *)(a1 + 8) = v12;
        *(_QWORD *)a1 = 7LL;
        return v12;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v18, aNe, 3LL) )
      {
        LOBYTE(v12) = ((unsigned __int64)v28 ^ v13 | *((_QWORD *)&v28 + 1) ^ v14) != 0;
        goto LABEL_20;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v18, aGt, 3LL) )
      {
        v20 = __OFSUB__(v28, __PAIR128__(v14, v13));
        v19 = (((v28 - __PAIR128__(v14, v13)) >> 64) & 0x8000000000000000LL) != 0LL;
        *((_QWORD *)&v28 + 1) = (v28 - __PAIR128__(v14, v13)) >> 64;
LABEL_16:
        LOBYTE(v12) = v19 ^ v20;
        goto LABEL_20;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v18, aGe, 3LL) )
      {
        v22 = __OFSUB__(__PAIR128__(v14, v13), v28);
        v21 = (((__PAIR128__(v14, v13) - v28) >> 64) & 0x8000000000000000LL) != 0LL;
      }
      else
      {
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v18, aLt, 3LL) )
        {
          v20 = __OFSUB__(__PAIR128__(v14, v13), v28);
          v19 = (((__PAIR128__(v14, v13) - v28) >> 64) & 0x8000000000000000LL) != 0LL;
          goto LABEL_16;
        }
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v18, aLe, 3LL) )
          goto LABEL_9;
        v22 = __OFSUB__(v28, __PAIR128__(v14, v13));
        v21 = (((v28 - __PAIR128__(v14, v13)) >> 64) & 0x8000000000000000LL) != 0LL;
        *((_QWORD *)&v28 + 1) = (v28 - __PAIR128__(v14, v13)) >> 64;
      }
      LOBYTE(v12) = v21 == v22;
      goto LABEL_20;
    }
  }
  v24 = 1LL;
  v25 = a2;
  v26 = a3;
LABEL_4:
  LOBYTE(v27) = 1;
  <T as alloc::string::SpecToString>::spec_to_string(&v29, &v24);
  v11 = v29;
  v12 = v30;
  *(_QWORD *)a1 = 5LL;
  *(_OWORD *)(a1 + 8) = v11;
  *(_QWORD *)(a1 + 24) = v12;
  return v12;
}