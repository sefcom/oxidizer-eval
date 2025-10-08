__int64 __fastcall uu_od::parse_inputs::parse_inputs_traditional(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 result; // rax
  __int128 v7; // xmm0
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r15
  char **v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r12
  __int128 v16; // [rsp+0h] [rbp-A8h] BYREF
  __int128 *v17; // [rsp+10h] [rbp-98h]
  __int128 v18; // [rsp+18h] [rbp-90h] BYREF
  __int128 *v19; // [rsp+28h] [rbp-80h]
  __int64 v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+48h] [rbp-60h] BYREF
  __int64 v23; // [rsp+50h] [rbp-58h]
  _QWORD v24[2]; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v25[2]; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v26[6]; // [rsp+78h] [rbp-30h] BYREF

  v3 = a2;
  switch ( a3 )
  {
    case 0LL:
      v4 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
      if ( !v4 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v5 = v4;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, asc_1CFEE, 1LL);
      result = (__int64)v19;
      v17 = v19;
      v7 = v18;
      v16 = v18;
      *(_QWORD *)(v5 + 16) = v19;
      *(_OWORD *)v5 = v7;
      *a1 = 1LL;
      a1[1] = v5;
      a1[2] = 1LL;
      a1[4] = 2LL;
      break;
    case 1LL:
      uu_od::parse_inputs::parse_offset_operand(&v16, *a2, a2[1]);
      if ( (_QWORD)v16 )
      {
        core::iter::traits::iterator::Iterator::collect(&v18, a2, a2 + 2);
        result = 2LL;
      }
      else
      {
        v3 = (_QWORD *)*((_QWORD *)&v16 + 1);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, asc_1CFEE, 1LL);
        result = 0LL;
      }
      a1[2] = v19;
      *(_OWORD *)a1 = v18;
      a1[3] = v3;
      a1[4] = result;
      break;
    case 2LL:
      v8 = *a2;
      v9 = a2[1];
      uu_od::parse_inputs::parse_offset_operand(v24, *a2, v9);
      uu_od::parse_inputs::parse_offset_operand(&v22, a2[2], a2[3]);
      if ( v22 | v24[0] )
      {
        if ( v22 )
          goto LABEL_13;
        v13 = v23;
        result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, v8, v9);
        a1[3] = v13;
        a1[4] = 0LL;
      }
      else
      {
        v10 = v24[1];
        v11 = v23;
        result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, asc_1CFEE, 1LL);
        a1[3] = v10;
        a1[4] = 1LL;
        a1[5] = v11;
      }
      break;
    case 3LL:
      uu_od::parse_inputs::parse_offset_operand(v25, a2[2], a2[3]);
      uu_od::parse_inputs::parse_offset_operand(v26, a2[4], a2[5]);
      if ( v25[0] )
      {
LABEL_13:
        *(_QWORD *)&v16 = a2 + 2;
        *((_QWORD *)&v16 + 1) = <&T as core::fmt::Display>::fmt;
        v12 = &off_102708;
        goto LABEL_14;
      }
      if ( v26[0] )
      {
        *(_QWORD *)&v16 = a2 + 4;
        *((_QWORD *)&v16 + 1) = <&T as core::fmt::Display>::fmt;
        v12 = &off_102718;
        goto LABEL_14;
      }
      v14 = v25[1];
      v15 = v26[1];
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, *a2, a2[1]);
      a1[3] = v14;
      a1[4] = 1LL;
      a1[5] = v15;
      break;
    default:
      *(_QWORD *)&v16 = a2 + 6;
      *((_QWORD *)&v16 + 1) = <&T as core::fmt::Display>::fmt;
      v12 = &off_102728;
LABEL_14:
      *(_QWORD *)&v18 = v12;
      *((_QWORD *)&v18 + 1) = 1LL;
      v21 = 0LL;
      v19 = &v16;
      v20 = 1LL;
      result = core::option::Option<T>::map_or_else(a1, &v18);
      a1[4] = 3LL;
      break;
  }
  return result;
}