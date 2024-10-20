_QWORD *__fastcall uu_csplit::InputSplitter<I>::shrink_buffer_to_size::{{closure}}(_QWORD *a1, int a2, _QWORD *a3)
{
  _QWORD *result; // rax
  __int64 v4; // [rsp+18h] [rbp-30h]
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF

  v4 = a3[1];
  v5 = a3[2];
  v6 = a3[3];
  if ( v4 == 0x8000000000000000LL )
  {
    v7 = a3[2];
    core::result::unwrap_failed(aCalledResultUn, 43LL, &v7, &off_2A1F00, &off_2A21B0);
  }
  result = a1;
  *a1 = v4;
  a1[1] = v5;
  a1[2] = v6;
  return result;
}
