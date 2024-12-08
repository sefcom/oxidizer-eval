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
  __int64 v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v15; // [rsp-F000h] [rbp-10058h] BYREF
  _QWORD *v16; // [rsp-EFF8h] [rbp-10050h]
  _QWORD v17[2]; // [rsp-EFF0h] [rbp-10048h] BYREF
  __int64 v18; // [rsp-EFE0h] [rbp-10038h] BYREF
  __int64 v19; // [rsp-EFD8h] [rbp-10030h] BYREF
  char v20; // [rsp-EFD0h] [rbp-10028h]
  _BYTE v21[15]; // [rsp-EFCFh] [rbp-10027h]
  __int64 v22; // [rsp-DFD8h] [rbp-F030h] BYREF

  do
    v19 = 0LL;
  while ( &v19 != (__int64 *)((char *)&v22 - (char *)&unk_10000) );
  v16 = a1;
  v18 = std::io::stdio::stdout();
  v2 = ((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdout::lock)(&v18);
  v15 = v2;
  uu_cat::splice::write_fast_using_splice((__int64)&v19, a2, (__int64)&v15);
  v3 = v19;
  v4 = v20;
  if ( v19 == 0x8000000000000006LL )
  {
    if ( v20 )
    {
      memset(&v19, 0, (size_t)&unk_10000);
      while ( 1 )
      {
        v17[0] = ((__int64 (__fastcall *)(__int64, __int64 *, void *))<std::io::stdio::Stdin as std::io::Read>::read)(
                   a2,
                   &v19,
                   &unk_10000);
        v17[1] = v5;
        if ( v17[0] || !v5 )
          break;
        v6 = ((__int64 (__fastcall *)(__int64, __int64 *, void *, char **))<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index)(
               v5,
               &v19,
               &unk_10000,
               &off_1190F8);
        v7 = ((__int64 (__fastcall *)(__int64 *, __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
               &v15,
               v6);
        if ( v7 )
        {
          v13 = v16;
          *v16 = 0x8000000000000000LL;
          v13[1] = v7;
          ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>)(v17);
          goto LABEL_15;
        }
        ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>)(v17);
      }
      ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>)(v17);
      v11 = ((__int64 (__fastcall *)(__int64 *))<std::io::stdio::StdoutLock as std::io::Write>::flush)(&v15);
      if ( v11 )
      {
        v12 = v16;
        *v16 = 0x8000000000000000LL;
        v12[1] = v11;
      }
      else
      {
        *v16 = 0x8000000000000006LL;
      }
LABEL_15:
      v10 = v15;
    }
    else
    {
      *v16 = 0x8000000000000006LL;
      v10 = v2;
    }
  }
  else
  {
    v8 = *(_QWORD *)v21;
    v9 = v16;
    v16[2] = *(_QWORD *)&v21[7];
    *(_QWORD *)((char *)v9 + 9) = v8;
    *v9 = v3;
    *((_BYTE *)v9 + 8) = v4;
    v10 = v2;
  }
  return ((__int64 (__fastcall *)(__int64))core::ptr::drop_in_place<std::io::stdio::StdoutLock>)(v10);
}
