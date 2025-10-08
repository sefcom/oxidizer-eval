__int64 __fastcall bat::line_range::LineRanges::none(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v5[0] = 0LL;
  v5[1] = 8LL;
  v5[2] = 0LL;
  bat::line_range::LineRanges::from(a1, v5, a3, a4);
  return a1;
}