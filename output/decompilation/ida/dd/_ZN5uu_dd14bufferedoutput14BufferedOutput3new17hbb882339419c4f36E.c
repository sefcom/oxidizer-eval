__int64 __fastcall uu_dd::bufferedoutput::BufferedOutput::new(__int64 a1, char *a2)
{
  char v2; // r15
  int v3; // ebp
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = *a2;
  v3 = *((_DWORD *)a2 + 1);
  result = alloc::raw_vec::RawVecInner<A>::with_capacity_in(
             *(_QWORD *)(*((_QWORD *)a2 + 2) + 120LL),
             1LL,
             1LL,
             &off_13D758);
  *(_BYTE *)(a1 + 24) = v2;
  *(_WORD *)(a1 + 25) = *(_WORD *)(a2 + 1);
  *(_BYTE *)(a1 + 27) = a2[3];
  *(_DWORD *)(a1 + 28) = v3;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}