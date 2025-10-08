__int64 __fastcall uu_chroot::parse_userspec(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  char v7; // bp
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  __int128 v11; // [rsp+8h] [rbp-80h] BYREF
  __int64 v12; // [rsp+18h] [rbp-70h]
  __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+28h] [rbp-60h]
  __int64 v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h]

  result = core::str::<impl str>::split_once(&v13);
  v5 = v13;
  if ( !v13 )
  {
    v10 = 0x8000000000000000LL;
    if ( a3 )
    {
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, a2, a3);
      v10 = 0x8000000000000001LL;
    }
    goto LABEL_7;
  }
  v6 = v14;
  v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v14, 1LL, 0LL);
  v8 = v15;
  v9 = v16;
  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, v16, 1LL, 0LL);
  if ( v7 )
  {
    v10 = 0x8000000000000000LL;
    if ( !(_BYTE)result )
    {
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, v8, v9);
      v10 = 0x8000000000000002LL;
    }
LABEL_7:
    *(_QWORD *)a1 = v10;
    return result;
  }
  if ( (_BYTE)result )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, v5, v6);
    result = 0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, v5, v6);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v17, v8, v9);
    *(_QWORD *)(a1 + 40) = v18;
    *(_OWORD *)(a1 + 24) = v17;
    result = v12;
    *(_QWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
  }
  return result;
}