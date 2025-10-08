__int64 __fastcall turbo_trace::tracer::Tracer::trace_file(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  *(_OWORD *)a1 = *(_OWORD *)a4;
  result = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 48) = a5;
  *(_QWORD *)(a1 + 40) = a6;
  *(_BYTE *)(a1 + 768) = 0;
  return result;
}