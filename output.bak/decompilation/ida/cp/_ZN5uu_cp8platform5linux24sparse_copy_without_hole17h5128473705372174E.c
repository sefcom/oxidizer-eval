unsigned __int64 __fastcall uu_cp::platform::linux::sparse_copy_without_hole(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // r13
  unsigned int v7; // ebx
  __off_t v8; // r14
  int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rbp
  int v22; // [rsp+Ch] [rbp-13Ch] BYREF
  unsigned int v23; // [rsp+10h] [rbp-138h] BYREF
  int i; // [rsp+14h] [rbp-134h]
  __off_t offset; // [rsp+18h] [rbp-130h]
  __int64 v26; // [rsp+20h] [rbp-128h]
  _BYTE v27[8]; // [rsp+28h] [rbp-120h] BYREF
  __int64 v28; // [rsp+30h] [rbp-118h]
  __int64 v29; // [rsp+38h] [rbp-110h]
  _OWORD v30[2]; // [rsp+40h] [rbp-108h] BYREF
  int fd[4]; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v32; // [rsp+70h] [rbp-D8h]
  __off_t length; // [rsp+B0h] [rbp-98h]

  std::fs::File::open(fd);
  if ( fd[0] )
    return *(_QWORD *)&fd[2];
  v22 = fd[1];
  std::fs::File::create(fd, a3, a4);
  if ( fd[0] )
  {
    v6 = *(_QWORD *)&fd[2];
  }
  else
  {
    v7 = fd[1];
    v23 = fd[1];
    std::fs::File::metadata(fd, &v22);
    if ( fd[0] == 2 )
    {
      v6 = *(_QWORD *)&fd[2];
    }
    else
    {
      v8 = length;
      core::result::Result<T,E>::unwrap((unsigned __int64)length >> 63, &off_1B64A0);
      if ( ftruncate(v7, v8) < 0 )
      {
        v6 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
      }
      else
      {
        v9 = v22;
        v26 = core::cmp::min_by(v8);
        <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v27, v26);
        offset = 0LL;
        for ( i = v9; ; v9 = i )
        {
          core::result::Result<T,E>::unwrap(0LL, &off_1B64B8);
          v10 = lseek(v9, offset, 3);
          core::result::Result<T,E>::unwrap(0LL, &off_1B64D0);
          v11 = lseek(v9, v10, 4);
          if ( v10 == -1 || v11 == -1 )
          {
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v27);
            core::ptr::drop_in_place<std::fs::File>(v23);
            core::ptr::drop_in_place<std::fs::File>((unsigned int)v22);
            return 0LL;
          }
          if ( v10 < -1 || v11 < -1 )
            break;
          offset = v11;
          v12 = v11 - v10;
          core::iter::adapters::step_by::StepBy<I>::new(v30, v11 - v10, v26);
          v32 = v30[1];
          *(_OWORD *)fd = v30[0];
          while ( 1 )
          {
            v13 = BYTE8(v32) ? 0LL : v32;
            BYTE8(v32) = 0;
            if ( !<core::ops::range::Range<T> as core::iter::range::RangeIteratorImpl>::spec_nth(fd, v13) )
              break;
            v15 = v14;
            v16 = core::cmp::min_by(v12 - v14, v26);
            v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v16, v28, v29);
            v19 = v18;
            v20 = v10 + v15;
            v6 = std::os::unix::fs::FileExt::read_exact_at(&v22, v17, v18, v20);
            if ( !v6 )
            {
              v6 = std::os::unix::fs::FileExt::write_all_at(&v23, v17, v19, v20);
              if ( !v6 )
                continue;
            }
            goto LABEL_25;
          }
        }
        v6 = ((unsigned __int64)(unsigned int)std::sys::pal::unix::os::errno() << 32) | 2;
LABEL_25:
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v27);
        v7 = v23;
      }
    }
    core::ptr::drop_in_place<std::fs::File>(v7);
  }
  core::ptr::drop_in_place<std::fs::File>((unsigned int)v22);
  return v6;
}
