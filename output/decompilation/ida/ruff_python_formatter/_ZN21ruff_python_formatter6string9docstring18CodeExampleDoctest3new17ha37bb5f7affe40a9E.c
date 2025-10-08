__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleDoctest::new(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v2; // r15
  __int64 started; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  __int128 v12; // xmm0
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-40h]
  __int64 v16; // [rsp+10h] [rbp-38h]

  v2 = a2[1];
  v16 = *a2;
  started = core::str::<impl str>::trim_start_matches(*a2, v2);
  v5 = v4;
  v6 = <&str as core::str::pattern::Pattern>::strip_prefix_of(">>> VS78VS20VS21Repr:", 4LL, started, v4);
  if ( v6 )
  {
    v8 = v2 - v5;
    if ( v2 < v5 )
      core::option::expect_failed(aSuffixIsOrigin, 21LL, &off_57F258);
    v9 = v6;
    v15 = v7;
    v10 = alloc::alloc::Global::alloc_impl(8LL, 56LL);
    if ( !v10 )
      alloc::alloc::handle_alloc_error(8LL, 56LL);
    v11 = v10;
    *(_QWORD *)(v10 + 32) = a2[4];
    v12 = *(_OWORD *)a2;
    *(_OWORD *)(v10 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)v10 = v12;
    *(_QWORD *)(v10 + 40) = v9;
    *(_QWORD *)(v10 + 48) = v15;
    result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
               v8,
               v16,
               v2);
    if ( !result )
      core::str::slice_error_fail(v16, v2, 0LL, v8, &off_57F240);
    *a1 = 1LL;
    a1[1] = v11;
    a1[2] = 1LL;
    a1[3] = result;
    a1[4] = v14;
  }
  else
  {
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  return result;
}