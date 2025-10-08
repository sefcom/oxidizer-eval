__int64 __fastcall uu_comm::are_files_identical(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbp
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rbp
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // al
  _BYTE v24[48]; // [rsp+8h] [rbp-4090h] BYREF
  _BYTE v25[48]; // [rsp+38h] [rbp-4060h] BYREF
  _QWORD dest[1024]; // [rsp+68h] [rbp-4030h] BYREF
  _QWORD s[1030]; // [rsp+2068h] [rbp-2030h] BYREF

  s[512] = 0LL;
  s[0] = 0LL;
  dest[512] = 0LL;
  dest[0] = 0LL;
  std::fs::metadata(dest);
  if ( LODWORD(dest[0]) == 2 )
    goto LABEL_3;
  v8 = dest[10];
  std::fs::metadata(dest);
  if ( LODWORD(dest[0]) == 2 )
    goto LABEL_3;
  if ( v8 != dest[10] )
  {
    *(_WORD *)a1 = 0;
    return a1;
  }
  std::fs::File::open(dest, a2, a3);
  if ( (dest[0] & 1) != 0 )
  {
LABEL_3:
    *(_QWORD *)(a1 + 8) = dest[1];
    *(_BYTE *)a1 = 1;
  }
  else
  {
    v10 = HIDWORD(dest[0]);
    std::fs::File::open(dest, a4, a5);
    if ( LODWORD(dest[0]) == 1 )
    {
      *(_QWORD *)(a1 + 8) = dest[1];
      *(_BYTE *)a1 = 1;
      core::ptr::drop_in_place<std::fs::File>(v10);
    }
    else
    {
      v11 = HIDWORD(dest[0]);
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v24, v10);
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v25, v11);
      memset(s, 0, 0x2000uLL);
      memset(dest, 0, sizeof(dest));
      while ( 1 )
      {
        v12 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(v24, s);
        v14 = v13;
        if ( (v12 & 1) != 0 )
        {
          *(_QWORD *)(a1 + 8) = v13;
          v23 = 1;
          goto LABEL_21;
        }
        v15 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(v25, dest);
        v17 = v16;
        if ( (v15 & 1) != 0 )
        {
          *(_QWORD *)(a1 + 8) = v16;
          v23 = 1;
          goto LABEL_21;
        }
        if ( v14 != v16 )
        {
LABEL_16:
          *(_BYTE *)(a1 + 1) = 0;
          goto LABEL_20;
        }
        if ( !v14 )
          break;
        v18 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                0LL,
                v14,
                s,
                0x2000LL,
                &off_E0C78);
        v20 = v19;
        v21 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                0LL,
                v17,
                dest,
                0x2000LL,
                &off_E0C90);
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v20, v21, v22) )
          goto LABEL_16;
      }
      *(_BYTE *)(a1 + 1) = 1;
LABEL_20:
      v23 = 0;
LABEL_21:
      *(_BYTE *)a1 = v23;
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v25);
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v24);
    }
  }
  return a1;
}