unsigned __int64 __fastcall uu_pinky::platform::unix::Pinky::short_pinky(__int64 a1)
{
  char v1; // dl
  __int64 v2; // rax
  __int64 v3; // r14
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // [rsp+0h] [rbp-368h] BYREF
  char v8; // [rsp+8h] [rbp-360h]
  _BYTE *v9; // [rsp+10h] [rbp-358h]
  __int64 v10; // [rsp+18h] [rbp-350h]
  _QWORD v11[2]; // [rsp+20h] [rbp-348h] BYREF
  int v12; // [rsp+34h] [rbp-334h] BYREF
  _BYTE src[384]; // [rsp+38h] [rbp-330h] BYREF
  _BYTE dest[432]; // [rsp+1B8h] [rbp-1B0h] BYREF

  if ( *(_BYTE *)(a1 + 25) )
    uu_pinky::platform::unix::Pinky::print_heading((_BYTE *)a1);
  v7 = uucore::features::utmpx::Utmpx::iter_all_records();
  v8 = v1 & 1;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v9 = (_BYTE *)a1;
    v3 = *(_QWORD *)(a1 + 8);
    v10 = v3 + 24 * v2;
    while ( 1 )
    {
      <uucore::features::utmpx::UtmpxIter as core::iter::traits::iterator::Iterator>::next(&v12, &v7);
      if ( v12 != 1 )
        break;
      memcpy(dest, src, 0x180uLL);
      if ( (unsigned __int8)uucore::features::utmpx::Utmpx::is_user_process(dest) )
      {
        v11[0] = v3;
        v11[1] = v10;
        if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v11, dest) )
        {
          v4 = uu_pinky::platform::unix::Pinky::print_entry(v9, (__int64)dest);
          if ( v4 )
            goto LABEL_13;
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      <uucore::features::utmpx::UtmpxIter as core::iter::traits::iterator::Iterator>::next(&v12, &v7);
      if ( v12 != 1 )
        break;
      memcpy(dest, src, 0x180uLL);
      if ( (unsigned __int8)uucore::features::utmpx::Utmpx::is_user_process(dest) )
      {
        v4 = uu_pinky::platform::unix::Pinky::print_entry((_BYTE *)a1, (__int64)dest);
        if ( v4 )
        {
LABEL_13:
          v5 = v4;
          goto LABEL_15;
        }
      }
    }
  }
  v5 = 0LL;
LABEL_15:
  core::ptr::drop_in_place<uucore::features::utmpx::UtmpxIter>(&v7);
  return v5;
}