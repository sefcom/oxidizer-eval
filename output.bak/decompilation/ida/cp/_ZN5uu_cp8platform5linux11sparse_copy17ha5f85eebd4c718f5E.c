unsigned __int64 __fastcall uu_cp::platform::linux::sparse_copy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned int v18; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v19; // [rsp+4h] [rbp-F4h] BYREF
  _QWORD v20[2]; // [rsp+8h] [rbp-F0h] BYREF
  int v21; // [rsp+18h] [rbp-E0h] BYREF
  int fd; // [rsp+1Ch] [rbp-DCh]
  unsigned __int64 v23; // [rsp+20h] [rbp-D8h]
  __int64 v24; // [rsp+28h] [rbp-D0h]
  __off_t length; // [rsp+68h] [rbp-90h]
  __int64 v26; // [rsp+70h] [rbp-88h]

  std::fs::File::open(&v21);
  if ( !v21 )
  {
    v7 = fd;
    v18 = fd;
    std::fs::File::create(&v21, a3, a4);
    if ( v21 )
    {
      v6 = v23;
LABEL_19:
      core::ptr::drop_in_place<std::fs::File>(v7);
      return v6;
    }
    v8 = fd;
    v19 = fd;
    std::fs::File::metadata(&v21, &v18);
    if ( v21 != 2 )
    {
      v9 = length;
      core::result::Result<T,E>::unwrap((unsigned __int64)length >> 63, &off_1B6500);
      if ( ftruncate(v8, v9) < 0 )
      {
        v6 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
        goto LABEL_18;
      }
      std::fs::File::metadata(&v21, &v19);
      if ( v21 != 2 )
      {
        <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v21, v26);
        if ( !v9 )
        {
LABEL_21:
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v21);
          core::ptr::drop_in_place<std::fs::File>(v19);
          core::ptr::drop_in_place<std::fs::File>(v18);
          return 0LL;
        }
        v10 = 0LL;
        while ( 1 )
        {
          v11 = <std::fs::File as std::io::Read>::read(&v18, v23, v24);
          v6 = v12;
          if ( v11 )
            break;
          v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v12, v23, v24);
          v15 = v14;
          v20[0] = v13;
          v20[1] = v14 + v13;
          if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v20) )
          {
            v16 = std::os::unix::fs::FileExt::write_all_at(&v19, v13, v15, v10);
            if ( v16 )
            {
              v6 = v16;
              break;
            }
          }
          v10 += v6;
          if ( v10 >= v9 )
            goto LABEL_21;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v21);
        v8 = v19;
        goto LABEL_18;
      }
    }
    v6 = v23;
LABEL_18:
    core::ptr::drop_in_place<std::fs::File>(v8);
    v7 = v18;
    goto LABEL_19;
  }
  return v23;
}
