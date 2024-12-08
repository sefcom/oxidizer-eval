__int64 __fastcall uu_cp::platform::linux::check_for_data(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // r15
  __off_t v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rdi
  unsigned int v11; // [rsp+4h] [rbp-E4h] BYREF
  _QWORD v12[2]; // [rsp+8h] [rbp-E0h] BYREF
  int v13; // [rsp+18h] [rbp-D0h] BYREF
  int fd; // [rsp+1Ch] [rbp-CCh]
  __int64 v15; // [rsp+20h] [rbp-C8h]
  __int64 v16; // [rsp+28h] [rbp-C0h]
  __int64 v17; // [rsp+68h] [rbp-80h]
  __int64 v18; // [rsp+70h] [rbp-78h]
  __int64 v19; // [rsp+78h] [rbp-70h]

  std::fs::File::open(&v13);
  if ( v13 )
  {
    result = v15;
    *(_QWORD *)a1 = v15;
    *(_BYTE *)(a1 + 8) = 2;
    return result;
  }
  v2 = fd;
  v11 = fd;
  std::fs::File::metadata(&v13, &v11);
  if ( v13 == 2 )
  {
    *(_QWORD *)a1 = v15;
    *(_BYTE *)(a1 + 8) = 2;
LABEL_17:
    v10 = v2;
    return core::ptr::drop_in_place<std::fs::File>(v10);
  }
  v3 = v17;
  if ( !v17 )
  {
    <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v13, v18);
    v6 = v15;
    v7 = v16;
    if ( <std::fs::File as std::io::Read>::read(&v11, v15, v16) )
    {
      v9 = 2;
    }
    else
    {
      v12[0] = v6;
      v12[1] = v6 + v7;
      v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v12);
      *(_QWORD *)(a1 + 16) = 0LL;
      v8 = 0LL;
    }
    *(_QWORD *)a1 = v8;
    *(_BYTE *)(a1 + 8) = v9;
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v13);
    v2 = v11;
    goto LABEL_17;
  }
  v4 = v19;
  v5 = lseek(v2, 0LL, 3);
  if ( v5 == -1 )
  {
    *(_QWORD *)a1 = v3;
    *(_BYTE *)(a1 + 8) = 0;
  }
  else
  {
    if ( v5 < 0 )
    {
      *(_QWORD *)a1 = (std::sys::pal::unix::os::errno() << 32) | 2;
      *(_BYTE *)(a1 + 8) = 2;
      goto LABEL_14;
    }
    *(_QWORD *)a1 = v3;
    *(_BYTE *)(a1 + 8) = 1;
  }
  *(_QWORD *)(a1 + 16) = v4;
LABEL_14:
  v10 = v11;
  return core::ptr::drop_in_place<std::fs::File>(v10);
}
