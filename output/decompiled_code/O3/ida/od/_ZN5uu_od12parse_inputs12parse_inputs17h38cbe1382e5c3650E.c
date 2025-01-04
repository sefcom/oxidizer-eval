__int64 __fastcall uu_od::parse_inputs::parse_inputs(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 (__fastcall *v4)(__int64, char **, __int64); // r15
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  _BYTE v13[8]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD *v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  _QWORD v18[6]; // [rsp+38h] [rbp-30h] BYREF

  (*(void (__fastcall **)(_BYTE *))(a3 + 24))(v13);
  v4 = *(unsigned __int8 (__fastcall **)(__int64, char **, __int64))(a3 + 32);
  if ( v4(a2, &off_141E48, 1LL) )
  {
    uu_od::parse_inputs::parse_inputs_traditional(a1, v14, v15);
    goto LABEL_10;
  }
  v5 = v15;
  if ( (unsigned __int64)(v15 - 1) < 2 )
  {
    v6 = v4(a2, &off_141E58, 6LL);
    v5 = v15;
    if ( !v6 )
    {
      v7 = v15 - 1;
      if ( !v15 )
        core::panicking::panic_bounds_check(v7, 0LL, &off_141EB8);
      uu_od::parse_inputs::parse_offset_operand(v18, v14[2 * v7], v14[2 * v7 + 1]);
      v5 = v15;
      if ( !v18[0] )
      {
        v9 = v18[1];
        if ( v15 == 1 )
        {
          v10 = *v14;
          v11 = v14[1];
          LODWORD(v16) = 0;
          v12 = core::char::methods::encode_utf8_raw(43LL, &v16);
          if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, v12, 1LL) )
          {
            <T as alloc::slice::hack::ConvertVec>::to_vec(&v16, asc_187F0, 1LL);
            goto LABEL_17;
          }
          v5 = v15;
        }
        if ( v5 != 2 )
          goto LABEL_7;
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v16, *v14, v14[1]);
LABEL_17:
        *(_QWORD *)(a1 + 16) = v17;
        *(_OWORD *)a1 = v16;
        *(_QWORD *)(a1 + 24) = v9;
        *(_QWORD *)(a1 + 32) = 0LL;
        goto LABEL_10;
      }
    }
  }
LABEL_7:
  if ( !v5 )
  {
    alloc::vec::Vec<T,A>::push(v13);
    v5 = v15;
  }
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v16, v14, &v14[2 * v5]);
  *(_QWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v16;
  *(_QWORD *)(a1 + 32) = 2LL;
LABEL_10:
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v13);
  return a1;
}
