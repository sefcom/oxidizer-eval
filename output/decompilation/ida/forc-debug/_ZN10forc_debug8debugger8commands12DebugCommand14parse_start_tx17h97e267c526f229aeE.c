__int64 __fastcall forc_debug::debugger::commands::DebugCommand::parse_start_tx(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int128 v13; // xmm0
  _BYTE v14[40]; // [rsp+10h] [rbp-198h] BYREF
  __int128 v15; // [rsp+38h] [rbp-170h]
  __int64 v16; // [rsp+48h] [rbp-160h] BYREF
  __int64 v17; // [rsp+50h] [rbp-158h]
  __int64 v18; // [rsp+58h] [rbp-150h]
  __int128 v19; // [rsp+60h] [rbp-148h] BYREF
  __int64 v20; // [rsp+70h] [rbp-138h]
  unsigned __int64 v21; // [rsp+88h] [rbp-120h]
  __int64 v22; // [rsp+90h] [rbp-118h] BYREF
  __int128 v23; // [rsp+98h] [rbp-110h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-100h]
  _QWORD v25[2]; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD v26[3]; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+E0h] [rbp-C8h]
  __int128 v28; // [rsp+F0h] [rbp-B8h]
  __int128 v29; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+118h] [rbp-90h]
  __int128 v31; // [rsp+120h] [rbp-88h] BYREF
  __int64 v32; // [rsp+130h] [rbp-78h]
  __int128 v33; // [rsp+138h] [rbp-70h] BYREF
  __int64 v34; // [rsp+148h] [rbp-60h]
  __int128 v35; // [rsp+157h] [rbp-51h]
  __int64 v36; // [rsp+167h] [rbp-41h]

  if ( !a3 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 1, aTransactionFil);
    result = 0x8000000000000007LL;
    *a1 = 0x8000000000000007LL;
    return result;
  }
  <alloc::string::String as core::clone::Clone>::clone(&v23, a2);
  v16 = 0LL;
  v17 = 8LL;
  v18 = 0LL;
  if ( a3 == 1 )
  {
LABEL_3:
    *(_QWORD *)&v14[16] = v24;
    *(_OWORD *)v14 = v23;
    *(_QWORD *)&v15 = v18;
    *(_QWORD *)&v14[24] = v16;
    *(_QWORD *)&v14[32] = v17;
    *(_OWORD *)a1 = v23;
    a1[4] = *(_QWORD *)&v14[32];
    a1[5] = v15;
    a1[2] = *(_QWORD *)&v14[16];
    result = *(_QWORD *)&v14[24];
    a1[3] = *(_QWORD *)&v14[24];
    return result;
  }
  v5 = 1LL;
  v21 = 0x8000000000000000LL;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a2 + 24 * v5 + 8);
    v7 = *(_QWORD *)(a2 + 24 * v5 + 16);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aAbi) )
      break;
    if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(v6, v7, aJson, 5LL) )
    {
      *(_QWORD *)&v19 = a2 + 24 * v5;
      *((_QWORD *)&v19 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v14 = &off_1F8CD28;
      *(_QWORD *)&v14[8] = 1LL;
      *(_QWORD *)&v14[32] = 0LL;
      *(_QWORD *)&v14[16] = &v19;
      *(_QWORD *)&v14[24] = 1LL;
      core::option::Option<T>::map_or_else(&v31, 0LL, v11, v14);
      v12 = a1;
      a1[3] = v32;
      v13 = v31;
      goto LABEL_18;
    }
    <alloc::string::String as core::clone::Clone>::clone(&v19, a2 + 24 * v5);
    *(_QWORD *)&v14[24] = v20;
    *(_OWORD *)&v14[8] = v19;
    *(_QWORD *)v14 = v21;
    alloc::vec::Vec<T,A>::push(&v16, v14, &off_1F8CD38);
    v10 = 1LL;
LABEL_6:
    v5 += v10;
    if ( v5 >= a3 )
      goto LABEL_3;
  }
  if ( v5 + 1 >= a3 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v14, aMissingArgumen);
    v12 = a1;
    a1[3] = *(_QWORD *)&v14[16];
    v13 = *(_OWORD *)v14;
    goto LABEL_18;
  }
  v22 = a2 + 24 * (v5 + 1);
  core::str::<impl str>::split_once(v26, *(_QWORD *)(v22 + 8), *(_QWORD *)(v22 + 16));
  if ( !v26[0] )
  {
    *(_QWORD *)&v19 = &v22;
    *((_QWORD *)&v19 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v14 = &off_1F8CD18;
    *(_QWORD *)&v14[8] = 1LL;
    *(_QWORD *)&v14[32] = 0LL;
    *(_QWORD *)&v14[16] = &v19;
    *(_QWORD *)&v14[24] = 1LL;
    core::option::Option<T>::map_or_else(&v29, 0LL, v8, v14);
    v12 = a1;
    a1[3] = v30;
    v13 = v29;
    goto LABEL_18;
  }
  v25[0] = v26[0];
  v9 = v26[2];
  v25[1] = v26[1];
  <fuel_types::array_types::ContractId as core::str::traits::FromStr>::from_str(v14);
  if ( v14[0] != 1 )
  {
    v27 = *(_OWORD *)&v14[1];
    v28 = *(_OWORD *)&v14[17];
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v19, v9);
    *(_QWORD *)&v14[16] = v20;
    *(_OWORD *)v14 = v19;
    v15 = v28;
    *(_OWORD *)&v14[24] = v27;
    alloc::vec::Vec<T,A>::push(&v16, v14, &off_1F8CD50);
    v10 = 2LL;
    goto LABEL_6;
  }
  forc_debug::debugger::commands::DebugCommand::parse_start_tx::{{closure}}(&v33, v25);
  v13 = v33;
  v35 = v33;
  v36 = v34;
  v12 = a1;
  a1[3] = v34;
LABEL_18:
  *(_OWORD *)(v12 + 1) = v13;
  *v12 = 0x8000000000000007LL;
  core::ptr::drop_in_place<alloc::vec::Vec<forc_debug::debugger::commands::AbiMapping>>(&v16);
  return core::ptr::drop_in_place<alloc::string::String>(&v23);
}