void __fastcall ruff_python_formatter::comments::placement::handle_own_line_comment_between_statements(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r8
  char v8; // r15
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ecx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v23; // [rsp+28h] [rbp-40h] BYREF

  v4 = *((_QWORD *)a2 + 2);
  if ( v4 == 94
    || (v5 = *((_QWORD *)a2 + 4), v5 == 94)
    || (v6 = *((_QWORD *)a2 + 3),
        v7 = *((_QWORD *)a2 + 5),
        *(_QWORD *)&v23 = *((_QWORD *)a2 + 4),
        *((_QWORD *)&v23 + 1) = v7,
        (unsigned __int64)(v5 - 2) >= 0x19 || (unsigned __int64)(v4 - 2) >= 0x19)
    || (v8 = *((_BYTE *)a2 + 72)) == 0 )
  {
    *(_OWORD *)(a1 + 64) = a2[4];
    v18 = *a2;
    v19 = a2[1];
    v20 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v20;
    *(_OWORD *)(a1 + 16) = v19;
    *(_OWORD *)a1 = v18;
  }
  else
  {
    v9 = *((_DWORD *)a2 + 17);
    v10 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v23);
    if ( v9 > v10 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D138);
    v11 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
            v9,
            v10);
    v13 = v12;
    v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            v11,
            v12,
            a3,
            a4);
    if ( !v14 )
      core::str::slice_error_fail(a3, a4, v11, v13, &off_57D150);
    v16 = ruff_python_formatter::comments::placement::max_empty_lines(v14, v15);
    v17 = *((_DWORD *)a2 + 16);
    if ( v16 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      *(_QWORD *)(a1 + 16) = v6;
      *(_DWORD *)(a1 + 24) = v17;
      *(_DWORD *)(a1 + 28) = v9;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v8;
      *(_QWORD *)a1 = 95LL;
    }
    else
    {
      *(_OWORD *)(a1 + 8) = v23;
      *(_DWORD *)(a1 + 24) = v17;
      *(_DWORD *)(a1 + 28) = v9;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v8;
      *(_QWORD *)a1 = 94LL;
    }
  }
}