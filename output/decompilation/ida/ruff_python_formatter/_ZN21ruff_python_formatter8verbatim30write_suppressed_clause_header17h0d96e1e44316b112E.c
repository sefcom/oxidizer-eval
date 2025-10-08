__int64 __fastcall ruff_python_formatter::verbatim::write_suppressed_clause_header(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 result; // rax
  int v9; // edi
  int v10; // ebp
  int v11; // edx
  __int64 v12; // rax
  int v13; // [rsp+8h] [rbp-80h] BYREF
  int v14; // [rsp+Ch] [rbp-7Ch] BYREF
  _DWORD v15[2]; // [rsp+10h] [rbp-78h] BYREF
  int *v16; // [rsp+18h] [rbp-70h] BYREF
  __int128 v17; // [rsp+20h] [rbp-68h]
  void *v18; // [rsp+30h] [rbp-58h]
  int *v19; // [rsp+38h] [rbp-50h]
  void *v20; // [rsp+40h] [rbp-48h]
  __int128 v21; // [rsp+48h] [rbp-40h] BYREF
  __int64 v22; // [rsp+58h] [rbp-30h]

  v5 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(a3[1] + 48LL))(*a3);
  v6 = *a2;
  v7 = a2[1];
  ruff_python_formatter::statement::clause::ClauseHeader::range((__int64)&v16, *a2, v7, *v5, v5[1]);
  result = (unsigned int)v16;
  v9 = HIDWORD(v16);
  v10 = v17;
  if ( (_DWORD)v16 == 4 )
  {
    v13 = HIDWORD(v16);
    v15[0] = ruff_python_formatter::verbatim::verbatim_text(HIDWORD(v16), (unsigned int)v17);
    v15[1] = v11;
    v14 = v10;
    v16 = &v13;
    *(_QWORD *)&v17 = &unk_57FAC8;
    *((_QWORD *)&v17 + 1) = v15;
    v18 = &unk_57E210;
    v19 = &v14;
    v20 = &unk_57FAC8;
    <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v21, a3, &v16, 3LL);
    if ( (_DWORD)v21 == 4 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(a3[1] + 48LL))(*a3);
      result = ruff_python_formatter::statement::clause::ClauseHeader::visit(v6, v7, v12 + 16);
      *(_DWORD *)a1 = 4;
    }
    else
    {
      result = v22;
      *(_QWORD *)(a1 + 16) = v22;
      *(_OWORD *)a1 = v21;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 20) = HIDWORD(v17);
    *(_QWORD *)(a1 + 12) = *(_QWORD *)((char *)&v17 + 4);
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = v10;
  }
  return result;
}