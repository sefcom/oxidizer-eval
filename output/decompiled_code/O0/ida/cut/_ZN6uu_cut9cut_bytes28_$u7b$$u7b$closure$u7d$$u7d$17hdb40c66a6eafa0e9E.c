char *__fastcall uu_cut::cut_bytes::{{closure}}(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *v4; // rbx
  __int64 v5; // r12
  char v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // r13
  _QWORD *v12; // rax
  char *v13; // rcx
  char v14; // al
  char v16; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]
  __int64 v19; // [rsp+20h] [rbp-38h]

  v18 = a4;
  v19 = a3;
  v17 = a1;
  v4 = **(unsigned __int64 ***)a2;
  v5 = 16LL * *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v6 = 0;
  while ( v5 )
  {
    if ( !v4 )
      break;
    v7 = *v4;
    if ( *v4 > v18 )
      break;
    v8 = v4[1];
    if ( (v6 & 1) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 56LL))(
             **(_QWORD **)(a2 + 8),
             *(_QWORD *)(a2 + 16),
             *(_QWORD *)(a2 + 24));
      if ( v9 )
        goto LABEL_17;
    }
    else if ( **(_QWORD **)(a2 + 32) )
    {
      v6 = 1;
    }
    v10 = v7 == 0;
    v11 = v7 - 1;
    if ( v10 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_11ABC0);
    if ( v8 >= v18 )
      v8 = v18;
    if ( v8 < v11 )
      core::slice::index::slice_index_order_fail(v11, v8, &off_11ABD8);
    v4 += 2;
    v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL)
                                                                               + 56LL))(
           **(_QWORD **)(a2 + 8),
           v19 + v11,
           v8 - v11);
    v5 -= 16LL;
    if ( v9 )
      goto LABEL_17;
  }
  v12 = *(_QWORD **)(a2 + 8);
  v16 = **(_BYTE **)(a2 + 40);
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(v12[1] + 56LL))(*v12, &v16, 1LL);
  if ( v9 )
  {
LABEL_17:
    v13 = (char *)v17;
    *(_QWORD *)(v17 + 8) = v9;
    v14 = 1;
    goto LABEL_19;
  }
  v13 = (char *)v17;
  *(_BYTE *)(v17 + 1) = 1;
  v14 = 0;
LABEL_19:
  *v13 = v14;
  return v13;
}
