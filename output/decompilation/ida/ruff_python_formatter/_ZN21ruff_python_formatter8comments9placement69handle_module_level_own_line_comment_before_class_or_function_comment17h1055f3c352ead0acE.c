void __fastcall ruff_python_formatter::comments::placement::handle_module_level_own_line_comment_before_class_or_function_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bp
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int64 v23; // [rsp+18h] [rbp-50h]
  __int128 v24; // [rsp+28h] [rbp-40h] BYREF

  v4 = *((_BYTE *)a2 + 72);
  if ( v4
    && (v5 = *((_QWORD *)a2 + 2), v6 = *((_QWORD *)a2 + 4), v5 != 94 && v6 != 94)
    && (v7 = *((_QWORD *)a2 + 3),
        v8 = *((_QWORD *)a2 + 5),
        *(_QWORD *)&v24 = *((_QWORD *)a2 + 4),
        *((_QWORD *)&v24 + 1) = v8,
        (v6 & 0xFFFFFFFE) == 2) )
  {
    v23 = v7;
    v10 = *((_DWORD *)a2 + 17);
    v11 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v24);
    if ( v10 > v11 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D228);
    v12 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
            v10,
            v11);
    v14 = v13;
    v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            v12,
            v13,
            a3,
            a4);
    if ( !v15 )
      core::str::slice_error_fail(a3, a4, v12, v14, &off_57D240);
    v17 = ruff_python_formatter::comments::placement::max_empty_lines(v15, v16);
    v18 = *((_DWORD *)a2 + 16);
    if ( v17 )
    {
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)(a1 + 16) = v23;
      *(_DWORD *)(a1 + 24) = v18;
      *(_DWORD *)(a1 + 28) = v10;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v4;
      *(_QWORD *)a1 = 95LL;
    }
    else
    {
      *(_OWORD *)(a1 + 8) = v24;
      *(_DWORD *)(a1 + 24) = v18;
      *(_DWORD *)(a1 + 28) = v10;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v4;
      *(_QWORD *)a1 = 94LL;
    }
  }
  else
  {
    *(_OWORD *)(a1 + 64) = a2[4];
    v19 = *a2;
    v20 = a2[1];
    v21 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v21;
    *(_OWORD *)(a1 + 16) = v20;
    *(_OWORD *)a1 = v19;
  }
}