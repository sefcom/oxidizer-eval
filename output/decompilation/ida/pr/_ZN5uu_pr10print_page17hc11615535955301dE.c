__int64 __fastcall uu_pr::print_page(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rbx
  _QWORD v13[2]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+18h] [rbp-D0h]
  __int64 v15; // [rsp+20h] [rbp-C8h]
  _QWORD v16[3]; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-88h]
  __int64 v19; // [rsp+68h] [rbp-80h]
  __int64 v20; // [rsp+70h] [rbp-78h]
  __int64 v21; // [rsp+78h] [rbp-70h]
  __int64 v22; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v23[8]; // [rsp+88h] [rbp-60h] BYREF
  __int64 v24; // [rsp+90h] [rbp-58h]
  __int64 v25; // [rsp+98h] [rbp-50h]
  _BYTE v26[72]; // [rsp+A0h] [rbp-48h] BYREF

  v21 = a1;
  v15 = *(_QWORD *)(a3 + 80);
  v14 = *(_QWORD *)(a3 + 88);
  v5 = *(_QWORD *)(a3 + 152);
  v6 = *(_QWORD *)(a3 + 160);
  uu_pr::header_content(v26, a3, a4);
  uu_pr::trailer_content(v23, *(unsigned __int8 *)(a3 + 321), *(unsigned __int8 *)(a3 + 322));
  v20 = a2;
  v18 = v6;
  v19 = v5;
  v13[1] = v23;
  v22 = std::io::stdio::stdout();
  v13[0] = std::io::stdio::Stdout::lock(&v22);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v17, v26);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v16, v17);
  if ( __OFSUB__(0LL, v16[0]) )
  {
LABEL_5:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v17);
    if ( (uu_pr::write_columns(v21, v20, a3, v13) & 1) == 0 )
    {
      v7 = v25;
      v17[0] = v24;
      v17[1] = v24 + 24 * v25;
      v17[2] = 0LL;
      v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v17);
      if ( v9 )
      {
        v10 = v8;
        while ( !<std::io::stdio::StdoutLock as std::io::Write>::write_all(
                   v13,
                   *(_QWORD *)(v9 + 8),
                   *(_QWORD *)(v9 + 16))
             && (v10 + 1 == v7 || !<std::io::stdio::StdoutLock as std::io::Write>::write_all(v13, v15, v14)) )
        {
          v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v17);
          if ( !v9 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        if ( !<std::io::stdio::StdoutLock as std::io::Write>::write_all(v13, v19, v18)
          && !<std::io::stdio::StdoutLock as std::io::Write>::flush(v13) )
        {
          core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v13[0]);
          v11 = 0LL;
          goto LABEL_17;
        }
      }
    }
  }
  else
  {
    while ( !<std::io::stdio::StdoutLock as std::io::Write>::write_all(v13, v16[1], v16[2])
         && !<std::io::stdio::StdoutLock as std::io::Write>::write_all(v13, v15, v14) )
    {
      core::ptr::drop_in_place<alloc::string::String>(v16);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v16, v17);
      if ( v16[0] == 0x8000000000000000LL )
        goto LABEL_5;
    }
    core::ptr::drop_in_place<alloc::string::String>(v16);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v17);
  }
  v11 = 1LL;
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v13[0]);
LABEL_17:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v23);
  return v11;
}