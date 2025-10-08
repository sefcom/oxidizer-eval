__int64 __fastcall uu_head::take::TakeAllLinesBuffer::fill_buffer(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+10h] [rbp-38h]
  char v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = uu_head::take::TakeAllBuffer::fill_buffer((_QWORD *)a2, a3);
  v7 = v6;
  if ( (v5 & 1) != 0 )
  {
    a1[1] = v6;
    result = 1LL;
  }
  else
  {
    v14[0] = a4;
    v13 = uu_head::take::TakeAllBuffer::remaining_buffer((_QWORD *)a2);
    *(_QWORD *)(a2 + 32) = memchr::arch::generic::memchr::Iter::count(v13, v9 + v13, v14);
    v10 = uu_head::take::TakeAllBuffer::remaining_buffer((_QWORD *)a2);
    if ( v11 && *(_BYTE *)(v10 + v11 - 1) != a4 )
      *(_BYTE *)(a2 + 40) = 1;
    v12 = *(_QWORD *)(a2 + 32);
    a1[1] = v7;
    a1[2] = v12;
    result = 0LL;
  }
  *a1 = result;
  return result;
}