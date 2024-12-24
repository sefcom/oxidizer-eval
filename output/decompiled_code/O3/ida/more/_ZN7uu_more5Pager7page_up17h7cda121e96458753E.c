unsigned __int64 __fastcall uu_more::Pager::page_up(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax
  bool v3; // cf
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-40h] BYREF
  __int64 v14; // [rsp+8h] [rbp-38h]
  unsigned __int64 v15; // [rsp+10h] [rbp-30h]

  v1 = *(unsigned __int16 *)(a1 + 64);
  result = *(_QWORD *)(a1 + 24);
  v3 = __CFADD__(*(_QWORD *)(a1 + 56), v1);
  v4 = *(_QWORD *)(a1 + 56) + v1;
  v5 = -1LL;
  if ( !v3 )
    v5 = v4;
  v6 = 0LL;
  if ( result >= v5 )
    v6 = result - v5;
  *(_QWORD *)(a1 + 24) = v6;
  if ( *(_BYTE *)(a1 + 67) )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = v8 + 24LL * *(_QWORD *)(a1 + 16);
    v13 = v8;
    v14 = v9;
    if ( result > v5 )
    {
      v10 = v6;
      do
      {
        v15 = v6 - 1;
        v11 = (v14 - v13) / 0x18uLL;
        v3 = v11 < v6;
        v12 = v11 - v6;
        if ( v3 )
          v12 = 0LL;
        result = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::nth_back(
                   &v13,
                   v12);
        if ( !result || *(_QWORD *)(result + 16) )
          break;
        v3 = v10-- == 0;
        result = 0LL;
        if ( v3 )
          v10 = 0LL;
        *(_QWORD *)(a1 + 24) = v10;
        v6 = v15;
      }
      while ( v15 );
    }
  }
  return result;
}
