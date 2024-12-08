__int64 __fastcall uu_sort::check::reader(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v7; // r13d
  int v8; // r8d
  __int64 v9; // r12
  char v11; // [rsp+Fh] [rbp-E9h] BYREF
  __int64 v12; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v13; // [rsp+18h] [rbp-E0h]
  _QWORD v14[3]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B0h]
  _QWORD v18[21]; // [rsp+50h] [rbp-A8h] BYREF

  v12 = a1;
  v13 = a2;
  v14[0] = 0LL;
  v14[1] = 1LL;
  v14[2] = 0LL;
  v15 = a3;
  v7 = *(unsigned __int8 *)(a5 + 153);
  while ( 1 )
  {
    <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(v18, &v15);
    if ( v18[0] == 0x8000000000000000LL )
    {
LABEL_5:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14);
      v9 = 0LL;
      goto LABEL_7;
    }
    uu_sort::chunks::read(
      (unsigned int)&v16,
      a4,
      (unsigned int)v18,
      0,
      v8,
      (unsigned int)v14,
      (__int64)&v12,
      (unsigned int)&v11,
      v7,
      a5);
    v9 = v16;
    if ( v16 )
      break;
    if ( !(_BYTE)v17 )
      goto LABEL_5;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14);
LABEL_7:
  core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>(v12, v13);
  return v9;
}
