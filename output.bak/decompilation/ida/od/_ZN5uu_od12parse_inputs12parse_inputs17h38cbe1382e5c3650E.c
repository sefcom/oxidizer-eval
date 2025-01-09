__int64 __fastcall uu_od::parse_inputs::parse_inputs(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned __int8 (__fastcall *v5)(__int64, char **, __int64); // r15
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  const char *v10; // r12
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  _BYTE v14[8]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD *v15; // [rsp+10h] [rbp-58h]
  __int64 v16; // [rsp+18h] [rbp-50h]
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  const char *v19[6]; // [rsp+38h] [rbp-30h] BYREF

  (*(void (__fastcall **)(_BYTE *))(a3 + 24))(v14);
  v5 = *(unsigned __int8 (__fastcall **)(__int64, char **, __int64))(a3 + 32);
  if ( v5(a2, &off_141E48, 1LL) )
  {
    uu_od::parse_inputs::parse_inputs_traditional(a1, v15, v16, a4);
    goto LABEL_10;
  }
  v6 = v16;
  if ( (unsigned __int64)(v16 - 1) < 2 )
  {
    v7 = v5(a2, &off_141E58, 6LL);
    v6 = v16;
    if ( !v7 )
    {
      v8 = v16 - 1;
      if ( !v16 )
        core::panicking::panic_bounds_check(v8, 0LL, &off_141EB8);
      uu_od::parse_inputs::parse_offset_operand(v19, v15[2 * v8], v15[2 * v8 + 1]);
      v6 = v16;
      if ( !v19[0] )
      {
        v10 = v19[1];
        if ( v16 == 1 )
        {
          v11 = *v15;
          v12 = v15[1];
          LODWORD(v17) = 0;
          v13 = core::char::methods::encode_utf8_raw(43LL, &v17);
          if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v11, v12, v13, 1LL) )
          {
            <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, asc_187F0, 1LL);
            goto LABEL_17;
          }
          v6 = v16;
        }
        if ( v6 != 2 )
          goto LABEL_7;
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, *v15, v15[1]);
LABEL_17:
        *(_QWORD *)(a1 + 16) = v18;
        *(_OWORD *)a1 = v17;
        *(_QWORD *)(a1 + 24) = v10;
        *(_QWORD *)(a1 + 32) = 0LL;
        goto LABEL_10;
      }
    }
  }
LABEL_7:
  if ( !v6 )
  {
    alloc::vec::Vec<T,A>::push(v14);
    v6 = v16;
  }
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v17, v15, &v15[2 * v6]);
  *(_QWORD *)(a1 + 16) = v18;
  *(_OWORD *)a1 = v17;
  *(_QWORD *)(a1 + 32) = 2LL;
LABEL_10:
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v14);
  return a1;
}
