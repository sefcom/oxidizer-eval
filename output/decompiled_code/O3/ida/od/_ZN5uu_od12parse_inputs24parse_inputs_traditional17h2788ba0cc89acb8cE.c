__int64 __fastcall uu_od::parse_inputs::parse_inputs_traditional(__int64 a1, _QWORD *a2, __int64 a3, double a4)
{
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // r14
  __int128 v7; // xmm0
  __int64 result; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r15
  char **v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r12
  __int128 v17; // [rsp+0h] [rbp-A8h] BYREF
  __int128 *v18; // [rsp+10h] [rbp-98h]
  __int128 v19; // [rsp+18h] [rbp-90h] BYREF
  __int128 *v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  __int64 v22; // [rsp+38h] [rbp-70h]
  __int64 v23; // [rsp+48h] [rbp-60h] BYREF
  __int64 v24; // [rsp+50h] [rbp-58h]
  _QWORD v25[2]; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v26[2]; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v27[6]; // [rsp+78h] [rbp-30h] BYREF

  v4 = a2;
  switch ( a3 )
  {
    case 0LL:
      v5 = alloc::alloc::Global::alloc_impl();
      if ( !v5 )
        alloc::alloc::handle_alloc_error(8LL, 24LL, a4);
      v6 = v5;
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v19, asc_187F0, 1LL);
      v18 = v20;
      v7 = v19;
      v17 = v19;
      *(_QWORD *)(v6 + 16) = v20;
      *(_OWORD *)v6 = v7;
      result = alloc::slice::hack::into_vec(a1, v6, 1LL);
      *(_QWORD *)(a1 + 32) = 2LL;
      break;
    case 1LL:
      uu_od::parse_inputs::parse_offset_operand(&v17, *a2, a2[1]);
      if ( (_QWORD)v17 )
      {
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v19, a2, a2 + 2);
        result = 2LL;
      }
      else
      {
        v4 = (_QWORD *)*((_QWORD *)&v17 + 1);
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v19, asc_187F0, 1LL);
        result = 0LL;
      }
      *(_QWORD *)(a1 + 16) = v20;
      *(_OWORD *)a1 = v19;
      *(_QWORD *)(a1 + 24) = v4;
      *(_QWORD *)(a1 + 32) = result;
      break;
    case 2LL:
      v9 = *a2;
      v10 = a2[1];
      uu_od::parse_inputs::parse_offset_operand(v25, *a2, v10);
      uu_od::parse_inputs::parse_offset_operand(&v23, a2[2], a2[3]);
      if ( v23 | v25[0] )
      {
        if ( v23 )
          goto LABEL_13;
        v14 = v24;
        result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, v9, v10);
        *(_QWORD *)(a1 + 24) = v14;
        *(_QWORD *)(a1 + 32) = 0LL;
      }
      else
      {
        v11 = v25[1];
        v12 = v24;
        result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, asc_187F0, 1LL);
        *(_QWORD *)(a1 + 24) = v11;
        *(_QWORD *)(a1 + 32) = 1LL;
        *(_QWORD *)(a1 + 40) = v12;
      }
      break;
    case 3LL:
      uu_od::parse_inputs::parse_offset_operand(v26, a2[2], a2[3]);
      uu_od::parse_inputs::parse_offset_operand(v27, a2[4], a2[5]);
      if ( v26[0] )
      {
LABEL_13:
        *(_QWORD *)&v17 = a2 + 2;
        *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
        v13 = &off_141ED0;
        goto LABEL_14;
      }
      if ( v27[0] )
      {
        *(_QWORD *)&v17 = a2 + 4;
        *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
        v13 = &off_141EE0;
        goto LABEL_14;
      }
      v15 = v26[1];
      v16 = v27[1];
      result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, *a2, a2[1]);
      *(_QWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 32) = 1LL;
      *(_QWORD *)(a1 + 40) = v16;
      break;
    default:
      *(_QWORD *)&v17 = a2 + 6;
      *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
      v13 = &off_141EF0;
LABEL_14:
      *(_QWORD *)&v19 = v13;
      *((_QWORD *)&v19 + 1) = 1LL;
      v22 = 0LL;
      v20 = &v17;
      v21 = 1LL;
      result = core::option::Option<T>::map_or_else(a1, &v19);
      *(_QWORD *)(a1 + 32) = 3LL;
      break;
  }
  return result;
}
