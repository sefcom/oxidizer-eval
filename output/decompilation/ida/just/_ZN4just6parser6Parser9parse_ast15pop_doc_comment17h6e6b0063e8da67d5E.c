__int64 __fastcall just::parser::Parser::parse_ast::pop_doc_comment(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 started; // r15
  __int64 v10; // r12
  _BYTE v12[296]; // [rsp+0h] [rbp-128h] BYREF

  if ( a2 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + (v2 << 8) - 256) != 0x8000000000000002LL )
    return 0LL;
  v4 = v3 + (v2 << 8);
  v5 = *(_QWORD *)(v4 - 248);
  v6 = *(_QWORD *)(v4 - 240);
  v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
         1LL,
         v5,
         v6);
  if ( !v7 )
    core::str::slice_error_fail(v5, v6, 1LL, v6, &off_4308A0);
  started = core::str::<impl str>::trim_start_matches(v7, v8);
  v10 = v2 - 1;
  *(_QWORD *)(a1 + 16) = v10;
  memcpy(v12, (const void *)((v10 << 8) + v3), 0x100uLL);
  core::ptr::drop_in_place<core::option::Option<just::item::Item>>(v12);
  return started;
}