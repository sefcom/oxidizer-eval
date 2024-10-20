        __int64 a6)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  char **v12; // rdx
  char **v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v16[6]; // [rsp+18h] [rbp-30h] BYREF

  v14 = a3;
  switch ( a3 )
  {
    case 1LL:
      v6 = *(_QWORD *)a1;
      v7 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( v7 <= a2 )
        core::panicking::panic_bounds_check(a2, v7, &off_103460, v6, a5, a6);
      return *(unsigned __int8 *)(*(_QWORD *)(v6 + 8) + a2);
    case 2LL:
      v9 = a2 + 2;
      if ( a2 > 0xFFFFFFFFFFFFFFFDLL )
      {
        v12 = &off_103478;
LABEL_27:
        core::slice::index::slice_index_order_fail(a2, v9, v12);
      }
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( v9 > v10 )
      {
        v13 = &off_103478;
        goto LABEL_31;
      }
      result = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      if ( a1[24] && a1[24] == 1 )
        LOWORD(result) = __ROL2__(*(_WORD *)(result + a2), 8);
      else
        LOWORD(result) = *(_WORD *)(result + a2);
      return (unsigned __int16)result;
    case 4LL:
      v9 = a2 + 4;
      if ( a2 > 0xFFFFFFFFFFFFFFFBLL )
      {
        v12 = &off_103490;
        goto LABEL_27;
      }
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( v9 <= v10 )
      {
        result = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
        if ( a1[24] == 1 )
          LODWORD(result) = _byteswap_ulong(*(_DWORD *)(result + a2));
        else
          LODWORD(result) = *(_DWORD *)(result + a2);
        return (unsigned int)result;
      }
      v13 = &off_103490;
      goto LABEL_31;
    case 8LL:
      v9 = a2 + 8;
      if ( a2 <= 0xFFFFFFFFFFFFFFF7LL )
      {
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        if ( v9 <= v10 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
          if ( a1[24] == 1 )
            return _byteswap_uint64(*(_QWORD *)(v11 + a2));
          else
            return *(_QWORD *)(v11 + a2);
        }
        v13 = &off_1034A8;
LABEL_31:
        core::slice::index::slice_end_index_len_fail(v9, v10, v13);
      }
      v12 = &off_1034A8;
      goto LABEL_27;
    default:
      v15[0] = &v14;
      v15[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v16[0] = &off_1034C0;
      v16[1] = 1LL;
      v16[4] = 0LL;
      v16[2] = v15;
      v16[3] = 1LL;
      core::panicking::panic_fmt(v16, &off_1034D0);
  }
}
