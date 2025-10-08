char __fastcall uu_comm::OrderChecker::verify_order(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rsi
  const char *v8; // rcx
  __int128 v9; // [rsp+8h] [rbp-70h] BYREF
  _QWORD *v10; // [rsp+18h] [rbp-60h]
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  _QWORD v13[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v14[6]; // [rsp+48h] [rbp-30h] BYREF

  if ( !a1[2] )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9);
    v5 = *a1;
    v6 = a1[1];
    goto LABEL_5;
  }
  v4 = a1[1];
  if ( (unsigned __int8)<A as core::slice::cmp::SliceChain>::chaining_ge(a2, a3, v4) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9);
    v5 = *a1;
    v6 = v4;
LABEL_5:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v5, v6);
    a1[2] = (__int64)v10;
    *(_OWORD *)a1 = v9;
    return 1;
  }
  if ( *((_BYTE *)a1 + 26) != 1 )
  {
    v8 = ::a1;
    if ( *((_BYTE *)a1 + 24) )
      v8 = ::a2;
    v14[0] = v8;
    v14[1] = 1LL;
    v13[0] = v14;
    v13[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v9 = &off_E0C58;
    *((_QWORD *)&v9 + 1) = 2LL;
    v12 = 0LL;
    v10 = v13;
    v11 = 1LL;
    std::io::stdio::_eprint(&v9);
    *((_BYTE *)a1 + 26) = 1;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*a1, v4);
  a1[2] = (__int64)v10;
  *(_OWORD *)a1 = v9;
  return *((_BYTE *)a1 + 25) ^ 1;
}