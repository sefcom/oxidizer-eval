__int64 __fastcall uu_split::platform::unix::instantiate_current_writer(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 (__fastcall **v9)(); // rdx
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // [rsp+0h] [rbp-88h] BYREF
  __int64 v13; // [rsp+8h] [rbp-80h]
  __int128 v14; // [rsp+10h] [rbp-78h]
  _QWORD v15[2]; // [rsp+20h] [rbp-68h] BYREF
  char v16[4]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-54h]
  __int64 v18; // [rsp+38h] [rbp-50h]
  char v19[4]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-44h]
  __int64 v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+54h] [rbp-34h] BYREF
  __int64 v23; // [rsp+58h] [rbp-30h]
  __int128 v24; // [rsp+60h] [rbp-28h]
  __int128 v25; // [rsp+70h] [rbp-18h]

  v15[0] = a4;
  v15[1] = a5;
  if ( a2 )
  {
    uu_split::platform::unix::FilterWriter::new((__int64)&v12, a2, a3, a4, a5);
    if ( (v12 & 1) != 0 )
    {
      v7 = v13;
LABEL_10:
      a1[1] = v7;
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
      return result;
    }
    v25 = v14;
    v22 = HIDWORD(v12);
    v23 = v13;
    v24 = v14;
    v8 = alloc::boxed::Box<T>::new(&v22);
    v9 = &off_10ACF8;
  }
  else
  {
    if ( a6 )
    {
      v12 = 0x1B600000000LL;
      LODWORD(v13) = 16777472;
      WORD2(v13) = 1;
      std::fs::OpenOptions::open(v16, &v12, a4, a5);
      if ( (v16[0] & 1) != 0 )
      {
        v7 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(v15, v18);
        goto LABEL_10;
      }
      v11 = v17;
    }
    else
    {
      v12 = 0x1B600000000LL;
      LODWORD(v13) = 0x10000;
      WORD2(v13) = 0;
      std::fs::OpenOptions::open(v19, &v12, a4, a5);
      if ( (v19[0] & 1) != 0 )
      {
        v7 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(v15, v21);
        goto LABEL_10;
      }
      v11 = v20;
    }
    v8 = alloc::boxed::Box<T>::new(v11);
    v9 = &off_10ACA8;
  }
  return std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a1, v8, v9);
}