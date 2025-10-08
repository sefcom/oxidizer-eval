__int64 __fastcall uu_cp::platform::linux::check_for_data(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebp
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  __off_t v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  char v10; // al
  unsigned int v11; // [rsp+4h] [rbp-E4h] BYREF
  _QWORD v12[2]; // [rsp+8h] [rbp-E0h] BYREF
  int fd[2]; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+20h] [rbp-C8h]
  __int64 v15; // [rsp+28h] [rbp-C0h]
  __int64 v16; // [rsp+68h] [rbp-80h]
  __int64 v17; // [rsp+70h] [rbp-78h]
  __int64 v18; // [rsp+78h] [rbp-70h]

  std::fs::File::open(fd);
  if ( fd[0] == 1 )
  {
    result = v14;
    *(_QWORD *)a1 = v14;
    *(_BYTE *)(a1 + 8) = 2;
    return result;
  }
  v2 = fd[1];
  v11 = fd[1];
  std::fs::File::metadata(fd, &v11);
  if ( fd[0] != 2 )
  {
    v4 = v16;
    if ( !v16 )
    {
      <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(fd, v17, &off_15E780);
      v7 = v14;
      v8 = v15;
      if ( (<std::fs::File as std::io::Read>::read(&v11, v14, v15) & 1) != 0 )
      {
        v10 = 2;
      }
      else
      {
        v12[0] = v7;
        v12[1] = v7 + v8;
        v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v12);
        *(_QWORD *)(a1 + 16) = 0LL;
        v9 = 0LL;
      }
      *(_QWORD *)a1 = v9;
      *(_BYTE *)(a1 + 8) = v10;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*(_QWORD *)fd, v7);
      goto LABEL_16;
    }
    v5 = v18;
    v6 = lseek(v2, 0LL, 3);
    if ( v6 == -1 )
    {
      *(_QWORD *)a1 = v4;
      *(_BYTE *)(a1 + 8) = 0;
    }
    else
    {
      if ( v6 < 0 )
      {
        *(_QWORD *)a1 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
        *(_BYTE *)(a1 + 8) = 2;
        goto LABEL_16;
      }
      *(_QWORD *)a1 = v4;
      *(_BYTE *)(a1 + 8) = 1;
    }
    *(_QWORD *)(a1 + 16) = v5;
LABEL_16:
    v3 = v11;
    return core::ptr::drop_in_place<std::fs::File>(v3);
  }
  *(_QWORD *)a1 = v14;
  *(_BYTE *)(a1 + 8) = 2;
  v3 = v2;
  return core::ptr::drop_in_place<std::fs::File>(v3);
}