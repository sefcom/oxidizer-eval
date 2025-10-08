__int64 __fastcall bat::line_range::LineRanges::all(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = alloc::alloc::Global::alloc_impl(8LL, 32LL, 0LL);
  if ( !v1 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *(_OWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_QWORD *)(v1 + 24) = -1LL;
  v5[0] = 1LL;
  v5[1] = v1;
  v5[2] = 1LL;
  bat::line_range::LineRanges::from(a1, v5, v2, v3);
  return a1;
}