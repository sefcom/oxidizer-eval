__int64 __fastcall ruff_python_formatter::verbatim::write_suppressed_statements_starting_with_leading_comment(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 (__fastcall *v6)(__int64); // rbx
  __int64 v7; // r13
  __int64 *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int128 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v15; // [rsp+8h] [rbp-110h] BYREF
  __int128 v16; // [rsp+10h] [rbp-108h] BYREF
  __int128 v17; // [rsp+20h] [rbp-F8h]
  __int128 v18; // [rsp+30h] [rbp-E8h]
  __int64 v19; // [rsp+40h] [rbp-D8h]
  __int64 v20; // [rsp+48h] [rbp-D0h]
  __int64 v21; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-B8h]
  __int64 v24; // [rsp+68h] [rbp-B0h]
  __int64 v25; // [rsp+70h] [rbp-A8h]
  char v26; // [rsp+78h] [rbp-A0h]
  __int128 v27; // [rsp+80h] [rbp-98h] BYREF
  __int64 v28; // [rsp+90h] [rbp-88h]
  __int64 v29; // [rsp+98h] [rbp-80h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-78h]
  _OWORD v31[3]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-38h]

  v20 = a3;
  v5 = *a4;
  v6 = *(__int64 (__fastcall **)(__int64))(a4[1] + 48);
  v7 = v6(*a4);
  alloc::rc::RcInnerPtr::inc_strong(*(_QWORD *)(v7 + 16));
  v15 = *(_QWORD *)(v7 + 16);
  v8 = (__int64 *)v6(v5);
  v9 = *v8;
  v10 = v8[1];
  *(_QWORD *)&v11 = ruff_python_formatter::statement::suite::<impl core::convert::From<ruff_python_formatter::statement::suite::SuiteChildStatement> for ruff_python_ast::generated::AnyNodeRef>::from(a2);
  v16 = v11;
  v22 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading((_QWORD *)(v15 + 16));
  v23 = v12;
  v24 = v9;
  v25 = v10;
  v26 = 0;
  <ruff_python_formatter::verbatim::CommentRangeIter as core::iter::traits::iterator::Iterator>::next(&v16, &v22);
  if ( (_DWORD)v16 == 4 )
    core::option::expect_failed(aSuppressedNode, 40LL, &off_57F870);
  v32 = v19;
  v31[2] = v18;
  v31[1] = v17;
  v31[0] = v16;
  ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts(&v16, v31);
  v13 = v17;
  v30 = v16;
  v29 = 1LL;
  v21 = v17;
  *(_QWORD *)&v16 = &v29;
  *((_QWORD *)&v16 + 1) = &unk_57CB70;
  *(_QWORD *)&v17 = &v21;
  *((_QWORD *)&v17 + 1) = &unk_57CB30;
  <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v27, a4, &v16, 2LL);
  if ( (_DWORD)v27 == 4 )
  {
    *(_BYTE *)(v13 + 8) = 1;
    ruff_python_formatter::verbatim::write_suppressed_statements(a1, v13, (_DWORD)a2, v22, v23, v20, (__int64)a4);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v28;
    *(_OWORD *)a1 = v27;
  }
  return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v15);
}