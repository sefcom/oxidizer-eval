// positive sp value has been detected, the output may be wrong!
__int64 __fastcall uu_cat::write_fast(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rcx
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 v14; // [rsp-F000h] [rbp-10058h] BYREF
  _QWORD *v15; // [rsp-EFF8h] [rbp-10050h]
  _QWORD v16[2]; // [rsp-EFF0h] [rbp-10048h] BYREF
  __int64 v17; // [rsp-EFE0h] [rbp-10038h] BYREF
  __int64 v18; // [rsp-EFD8h] [rbp-10030h] BYREF
  char v19; // [rsp-EFD0h] [rbp-10028h]
  _BYTE v20[15]; // [rsp-EFCFh] [rbp-10027h]
  __int64 v21; // [rsp-DFD8h] [rbp-F030h] BYREF

  do
    v18 = 0LL;
  while ( &v18 != (__int64 *)((char *)&v21 - (char *)&unk_10000) );
  v15 = a1;
  v17 = std::io::stdio::stdout();
  v2 = ((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v17);
  v14 = v2;
  uu_cat::splice::write_fast_using_splice((__int64)&v18, a2);
  v3 = v18;
  v4 = v19;
  if ( v18 == 0x8000000000000006LL )
  {
    if ( (v19 & 1) != 0 )
    {
      memset(&v18, 0, (size_t)&unk_10000);
      while ( 1 )
      {
        v16[0] = ((__int64 (__fastcall *)(__int64, __int64 *, void *))<std::fs::File as std::io::Read>::read)(
                   a2,
                   &v18,
                   &unk_10000);
        v16[1] = v5;
        if ( (v16[0] & 1) != 0 || !v5 )
          break;
        v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
               0LL,
               v5,
               &v18,
               &unk_10000,
               &off_EAC18);
        v7 = ((__int64 (__fastcall *)(__int64 *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
               &v14,
               v6);
        if ( v7 )
        {
          v12 = v15;
          *v15 = 0x8000000000000000LL;
          v12[1] = v7;
          ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>)(v16);
          goto LABEL_15;
        }
        ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>)(v16);
      }
      ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>)(v16);
      v10 = ((__int64 (__fastcall *)(__int64 *))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v14);
      if ( v10 )
      {
        v11 = v15;
        *v15 = 0x8000000000000000LL;
        v11[1] = v10;
      }
      else
      {
        *v15 = 0x8000000000000006LL;
      }
LABEL_15:
      v2 = v14;
    }
    else
    {
      *v15 = 0x8000000000000006LL;
    }
  }
  else
  {
    v8 = *(_QWORD *)v20;
    v9 = v15;
    v15[2] = *(_QWORD *)&v20[7];
    *(_QWORD *)((char *)v9 + 9) = v8;
    *v9 = v3;
    *((_BYTE *)v9 + 8) = v4;
  }
  return ((__int64 (__fastcall *)(__int64))core::ptr::drop_in_place<std::io::stdio::StdoutLock>)(v2);
}