// positive sp value has been detected, the output may be wrong!
__int64 __fastcall uu_tail::forwards_thru_file(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r15
  _QWORD *v4; // r14
  __int64 v5; // rbp
  _QWORD *v6; // r13
  char i; // al
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v12; // [rsp-7000h] [rbp-8078h]
  char v13; // [rsp-6FF4h] [rbp-806Ch]
  __int64 v14; // [rsp-6FE8h] [rbp-8060h]
  _QWORD v15[3]; // [rsp-6FD8h] [rbp-8050h] BYREF
  char v16; // [rsp-6FC0h] [rbp-8038h] BYREF
  _QWORD v17[4102]; // [rsp-6FB8h] [rbp-8030h] BYREF

  do
    v17[0] = 0LL;
  while ( v17 != &v17[-3584] );
  v13 = a3;
  v3 = a1;
  v4 = v17;
  memset(v17, 0, 0x8000uLL);
  v5 = 0LL;
  v12 = 0LL;
  while ( 1 )
  {
    v6 = v4;
    for ( i = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))<std::fs::File as std::io::Read>::read)(
                v3,
                v4,
                0x8000LL);
          ;
          i = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))<std::fs::File as std::io::Read>::read)(
                a1,
                v6,
                0x8000LL) )
    {
      v9 = v8;
      v14 = v8;
      if ( (i & 1) == 0 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v8) != 35 )
        return 1LL;
      v15[0] = v14;
      core::ptr::drop_in_place<std::io::error::Error>(v15);
    }
    if ( !v8 )
      break;
    v15[0] = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
               0LL,
               v8,
               v6,
               0x8000LL,
               &off_173B58);
    v15[1] = v15[0];
    v15[2] = v15[0] + v10;
    v16 = v13;
    while ( (((__int64 (__fastcall *)(_QWORD *, char *))memchr::arch::generic::memchr::Iter::next)(v15, &v16) & 1) != 0 )
    {
      if ( a2 == ++v5 )
        return 0LL;
    }
    v12 += v9;
    v4 = v6;
    v3 = a1;
  }
  return 0LL;
}