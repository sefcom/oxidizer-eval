__int64 __fastcall turbo_trace::tracer::Tracer::get_imports_from_file(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 result; // rax

  result = a7;
  *(_QWORD *)(a1 + 80) = a2;
  *(_QWORD *)(a1 + 88) = a3;
  *(_QWORD *)(a1 + 96) = a4;
  *(_QWORD *)(a1 + 16) = a5;
  *(_QWORD *)(a1 + 24) = a6;
  *(_BYTE *)(a1 + 108) = a7;
  *(_BYTE *)(a1 + 107) = 0;
  return result;
}