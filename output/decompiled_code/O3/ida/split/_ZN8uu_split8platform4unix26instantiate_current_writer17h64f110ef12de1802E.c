        char a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 (__fastcall **v7)(); // rcx
  __int128 v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+18h] [rbp-60h] BYREF
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int128 v12; // [rsp+28h] [rbp-50h]
  _QWORD v13[2]; // [rsp+38h] [rbp-40h] BYREF
  int v14; // [rsp+4Ch] [rbp-2Ch] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]
  __int128 v16; // [rsp+58h] [rbp-20h]

  v13[0] = a3;
  v13[1] = a4;
  if ( *a2 != 0x8000000000000000LL )
  {
    uu_split::platform::unix::FilterWriter::new((__int64)&v10, a2[1], a2[2], a3, a4);
    if ( (_DWORD)v10 )
    {
      v5 = v11;
      goto LABEL_9;
    }
    v9 = v12;
    v14 = HIDWORD(v10);
    v15 = v11;
    v16 = v12;
    v6 = alloc::boxed::Box<T>::new(&v14);
    v7 = &off_148DD0;
LABEL_12:
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a1, 0x2000LL, v6, v7);
    return a1;
  }
  if ( !a5 )
  {
    v10 = 0x1B600000000LL;
    LODWORD(v11) = 0x10000;
    WORD2(v11) = 0;
    std::fs::OpenOptions::open(&v9, &v10, a3, a4);
    if ( (_DWORD)v9 )
    {
      v5 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(v13, *((_QWORD *)&v9 + 1));
      goto LABEL_9;
    }
    goto LABEL_11;
  }
  v10 = 0x1B600000000LL;
  LODWORD(v11) = 16777472;
  WORD2(v11) = 1;
  std::fs::OpenOptions::open(&v9, &v10, a3, a4);
  if ( !(_DWORD)v9 )
  {
LABEL_11:
    v6 = alloc::boxed::Box<T>::new(DWORD1(v9));
    v7 = &off_148D80;
    goto LABEL_12;
  }
  v5 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(v13, *((_QWORD *)&v9 + 1));
LABEL_9:
  a1[1] = v5;
  *a1 = 0x8000000000000000LL;
  return a1;
}
