__int64 __fastcall uu_cat::write_fast(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rcx
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 v16; // [rsp-F000h] [rbp-10058h] BYREF
  _QWORD *v17; // [rsp-EFF8h] [rbp-10050h]
  _QWORD v18[2]; // [rsp-EFF0h] [rbp-10048h] BYREF
  __int64 v19; // [rsp-EFE0h] [rbp-10038h] BYREF
  __int64 v20; // [rsp-EFD8h] [rbp-10030h] BYREF
  char v21; // [rsp-EFD0h] [rbp-10028h]
  _BYTE v22[15]; // [rsp-EFCFh] [rbp-10027h]
  __int64 v23; // [rsp-DFD8h] [rbp-F030h] BYREF

  do
    v20 = 0LL;
  while ( &v20 != (__int64 *)((char *)&v23 - (char *)&unk_10000) );
  v17 = a1;
  v19 = std::io::stdio::stdout();
  v2 = std::io::stdio::Stdout::lock(&v19);
  v16 = v2;
  uu_cat::splice::write_fast_using_splice((__int64)&v20, a2, (__int64)&v16);
  v3 = v20;
  v4 = v21;
  if ( v20 == 0x8000000000000006LL )
  {
    if ( v21 )
    {
      memset(&v20, 0, (size_t)&unk_10000);
      while ( 1 )
      {
        v18[0] = <std::io::stdio::Stdin as std::io::Read>::read(a2, &v20, &unk_10000);
        v18[1] = v5;
        if ( v18[0] || !v5 )
          break;
        v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
               v5,
               &v20,
               &unk_10000,
               &off_1190F8);
        v8 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v16, v6, v7);
        if ( v8 )
        {
          v14 = v17;
          *v17 = 0x8000000000000000LL;
          v14[1] = v8;
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v18);
          goto LABEL_15;
        }
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v18);
      }
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v18);
      v12 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v16);
      if ( v12 )
      {
        v13 = v17;
        *v17 = 0x8000000000000000LL;
        v13[1] = v12;
      }
      else
      {
        *v17 = 0x8000000000000006LL;
      }
LABEL_15:
      v11 = v16;
    }
    else
    {
      *v17 = 0x8000000000000006LL;
      v11 = v2;
    }
  }
  else
  {
    v9 = *(_QWORD *)v22;
    v10 = v17;
    v17[2] = *(_QWORD *)&v22[7];
    *(_QWORD *)((char *)v10 + 9) = v9;
    *v10 = v3;
    *((_BYTE *)v10 + 8) = v4;
    v11 = v2;
  }
  return core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v11);
}
