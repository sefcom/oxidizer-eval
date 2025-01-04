__int64 __fastcall uu_tail::chunks::LinesChunk::count_lines(__int64 a1)
{
  char v1; // bl
  __int64 buffer; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE v8[16]; // [rsp+18h] [rbp-10h] BYREF

  v1 = *(_BYTE *)(a1 + 8208);
  buffer = uu_tail::chunks::LinesChunk::get_buffer();
  v8[0] = v1;
  return ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int64, __int64, __int64, __int64, __int64))memchr::arch::generic::memchr::Iter::count)(
           buffer,
           v3 + buffer,
           v8,
           v4,
           v5,
           v6,
           buffer,
           buffer,
           v3 + buffer);
}
