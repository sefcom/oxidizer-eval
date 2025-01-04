__int64 __fastcall uu_fmt::parasplit::WordSplit::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx

  result = core::str::<impl str>::trim_start_matches(a3, a4);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  return result;
}
