// positive sp value has been detected, the output may be wrong!
__int64 __fastcall uu_head::read_but_last_n_bytes(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  char **v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v15; // [rsp-F000h] [rbp-10070h] BYREF
  __int64 v16; // [rsp-EFF8h] [rbp-10068h] BYREF
  __int64 v17; // [rsp-EFF0h] [rbp-10060h]
  __int64 v18; // [rsp-EFE8h] [rbp-10058h]
  unsigned __int64 v19; // [rsp-EFE0h] [rbp-10050h]
  unsigned __int64 v20; // [rsp-EFD8h] [rbp-10048h]
  __int64 v21; // [rsp-EFD0h] [rbp-10040h] BYREF
  __int64 v22; // [rsp-EFC8h] [rbp-10038h] BYREF
  _QWORD v23[512]; // [rsp-EFC0h] [rbp-10030h] BYREF
  __int64 v24; // [rsp-DFC0h] [rbp-F030h] BYREF

  do
    v23[0] = 0LL;
  while ( v23 != (_QWORD *)((char *)&v24 - (char *)&unk_10000) );
  if ( !a2 )
    return uu_head::read_n_bytes();
  v19 = a2;
  v22 = std::io::stdio::stdout();
  v15 = std::io::stdio::Stdout::lock(&v22);
  v16 = 0LL;
  v17 = 1LL;
  v18 = 0LL;
  v20 = 0LL;
  memset(v23, 0, (size_t)&unk_10000);
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = ((__int64 (__fastcall *)(__int64, _QWORD *, void *))<std::io::stdio::StdinLock as std::io::Read>::read)(
             a1,
             v23,
             &unk_10000);
      v4 = v3;
      if ( !v2 )
        break;
      v21 = v3;
      if ( (unsigned __int8)((__int64 (__fastcall *)(__int64))std::io::error::Error::kind)(v3) != 35 )
      {
        v13 = v21;
LABEL_15:
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v16);
        core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v15);
        return v13;
      }
      ((void (__fastcall *)(__int64 *))core::ptr::drop_in_place<std::io::error::Error>)(&v21);
    }
    if ( !v3 )
      break;
    v5 = v3 + v20;
    v20 += v3;
    if ( v20 <= v19 )
    {
      v4 = v19 + v3 - v5;
      v7 = 0LL;
      v9 = &off_12CEC0;
    }
    else
    {
      v6 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v15, v17);
      if ( v6
        || (v7 = v4 - v19,
            v8 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, _QWORD *, char **))<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index)(
                   0LL,
                   v4 - v19 + v18,
                   v23,
                   &off_12CE90),
            (v6 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v15, v8)) != 0) )
      {
        v13 = v6;
        goto LABEL_15;
      }
      v18 = 0LL;
      v9 = &off_12CEA8;
    }
    v10 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, char **))<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index)(
            v7,
            v4,
            v23,
            v9);
    v12 = ((__int64 (__fastcall *)(__int64, __int64))core::slice::iter::Iter<T>::make_slice)(v10, v10 + v11);
    ((void (__fastcall *)(__int64 *, __int64))alloc::vec::Vec<T,A>::append_elements)(&v16, v12);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v16);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v15);
  return 0LL;
}
