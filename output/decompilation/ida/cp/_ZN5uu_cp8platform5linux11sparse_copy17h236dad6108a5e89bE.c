unsigned __int64 __fastcall uu_cp::platform::linux::sparse_copy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  char v12; // al
  unsigned __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v19; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v20; // [rsp+Ch] [rbp-FCh] BYREF
  __off_t length; // [rsp+10h] [rbp-F8h]
  _QWORD v22[2]; // [rsp+18h] [rbp-F0h] BYREF
  int fd[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-D8h]
  __int64 v25; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v26; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]

  std::fs::File::open(fd);
  if ( fd[0] != 1 )
  {
    v7 = fd[1];
    v19 = fd[1];
    std::fs::File::create(fd, a3, a4);
    if ( (fd[0] & 1) != 0 )
    {
      v6 = v24;
LABEL_19:
      core::ptr::drop_in_place<std::fs::File>(v7);
      return v6;
    }
    v8 = fd[1];
    v20 = fd[1];
    std::fs::File::metadata(fd, &v19);
    if ( fd[0] != 2 )
    {
      length = v26;
      core::result::Result<T,E>::unwrap(v26 >> 63, &off_15E810);
      if ( ftruncate(v8, length) < 0 )
      {
        v6 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
        goto LABEL_18;
      }
      std::fs::File::metadata(fd, &v20);
      if ( fd[0] != 2 )
      {
        <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(fd, v27, &off_15E828);
        v9 = v24;
        if ( !length )
        {
LABEL_21:
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*(_QWORD *)fd, v9);
          core::ptr::drop_in_place<std::fs::File>(v20);
          core::ptr::drop_in_place<std::fs::File>(v19);
          return 0LL;
        }
        v10 = v25;
        v11 = 0LL;
        while ( 1 )
        {
          v12 = <std::fs::File as std::io::Read>::read(&v19, v9, v10);
          v6 = v13;
          if ( (v12 & 1) != 0 )
            break;
          v14 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                  0LL,
                  v13,
                  v9,
                  v10,
                  &off_15E840);
          v16 = v15;
          v22[0] = v14;
          v22[1] = v15 + v14;
          if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v22) )
          {
            v17 = std::os::unix::fs::FileExt::write_all_at(&v20, v14, v16, v11);
            if ( v17 )
            {
              v6 = v17;
              break;
            }
          }
          v11 += v6;
          if ( v11 >= length )
            goto LABEL_21;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*(_QWORD *)fd, v9);
        v8 = v20;
        goto LABEL_18;
      }
    }
    v6 = v24;
LABEL_18:
    core::ptr::drop_in_place<std::fs::File>(v8);
    v7 = v19;
    goto LABEL_19;
  }
  return v24;
}