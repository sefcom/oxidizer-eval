void __fastcall ruff_python_formatter::comments::placement::handle_trailing_module_comment(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rax

  if ( *((_DWORD *)a3 + 4) == 94 && *((_QWORD *)a3 + 4) == 94LL )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 )
    {
      v4 = *((_BYTE *)a3 + 72);
      *(_QWORD *)(a1 + 8) = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(*(_QWORD *)(a2 + 8) + (v3 << 7) - 128);
      *(_QWORD *)(a1 + 16) = v6;
      *(_QWORD *)(a1 + 24) = *((_QWORD *)a3 + 8);
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v4;
      *(_QWORD *)a1 = 95LL;
    }
    else
    {
      v10 = *((unsigned __int8 *)a3 + 72);
      *(_OWORD *)(a1 + 8) = *a3;
      *(_QWORD *)(a1 + 24) = *((_QWORD *)a3 + 8);
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v10;
      *(_QWORD *)a1 = 94LL;
    }
  }
  else
  {
    *(_OWORD *)(a1 + 64) = a3[4];
    v7 = *a3;
    v8 = a3[1];
    v9 = a3[2];
    *(_OWORD *)(a1 + 48) = a3[3];
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
  }
}