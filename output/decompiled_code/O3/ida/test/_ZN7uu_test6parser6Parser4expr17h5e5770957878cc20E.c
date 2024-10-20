__int64 __fastcall uu_test::parser::Parser::expr(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  const void *v5; // r12
  signed __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  void *v9; // r13
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 result; // rax
  __int128 v14; // xmm0
  _OWORD v15[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 == 0x8000000000000001LL )
  {
    v4 = *(_QWORD *)(a2 + 56);
    v3 = 0x8000000000000000LL;
    if ( v4 != *(_QWORD *)(a2 + 72) )
    {
      *(_QWORD *)(a2 + 56) = v4 + 24;
      v3 = *(_QWORD *)v4;
      v15[0] = *(_OWORD *)(v4 + 8);
    }
    *(_QWORD *)(a2 + 24) = v3;
    *(_OWORD *)(a2 + 32) = v15[0];
  }
  if ( v3 != 0x8000000000000000LL )
  {
    v5 = *(const void **)(a2 + 32);
    v6 = *(_QWORD *)(a2 + 40);
    if ( v6 )
    {
      if ( v6 < 0 )
      {
        v7 = 0LL;
      }
      else
      {
        v7 = 1LL;
        v8 = _rust_alloc(*(_QWORD *)(a2 + 40), 1LL);
        if ( v8 )
        {
          v9 = (void *)v8;
LABEL_12:
          memcpy(v9, v5, v6);
          v16[0] = v6;
          v16[1] = (__int64)v9;
          v16[2] = v6;
          goto LABEL_13;
        }
      }
      alloc::raw_vec::handle_error(v7, v6);
    }
    v9 = &dword_0 + 1;
    goto LABEL_12;
  }
  v16[0] = 0x8000000000000000LL;
LABEL_13:
  uu_test::parser::Symbol::new((__int64 *)v15, v16);
  v10 = v15[0];
  if ( (unsigned __int64)(*(_QWORD *)&v15[0] - 2LL) <= 3 )
  {
    v11 = *(_QWORD *)&asc_102C0[8 * *(_QWORD *)&v15[0] - 16];
    v12 = *(_QWORD *)((char *)v15 + v11);
    if ( v12 )
      _rust_dealloc(*(_QWORD *)((char *)v15 + v11 + 8), v12, 1LL);
  }
  if ( (v10 == 2 || (result = uu_test::parser::Parser::term(v15, a2), LODWORD(v15[0]) == 7))
    && (result = uu_test::parser::Parser::maybe_boolop(v15, a2), LODWORD(v15[0]) == 7) )
  {
    *(_QWORD *)a1 = 7LL;
  }
  else
  {
    v14 = v15[0];
    *(_OWORD *)(a1 + 16) = v15[1];
    *(_OWORD *)a1 = v14;
  }
  return result;
}
