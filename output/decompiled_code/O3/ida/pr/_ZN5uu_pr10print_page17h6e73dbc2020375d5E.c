__int64 __fastcall uu_pr::print_page(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  _QWORD v11[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-E8h]
  _QWORD v13[4]; // [rsp+18h] [rbp-E0h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-B8h]
  __int64 v16; // [rsp+48h] [rbp-B0h]
  __int128 v17; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-88h]
  __int64 v20; // [rsp+78h] [rbp-80h]
  __int64 v21; // [rsp+80h] [rbp-78h]
  __int64 v22; // [rsp+88h] [rbp-70h]
  __int64 v23; // [rsp+90h] [rbp-68h] BYREF
  __int128 v24; // [rsp+98h] [rbp-60h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-50h]
  _BYTE v26[72]; // [rsp+B0h] [rbp-48h] BYREF

  v12 = *(_QWORD *)(a3 + 80);
  v11[1] = *(_QWORD *)(a3 + 88);
  v5 = *(_QWORD *)(a3 + 152);
  v6 = *(_QWORD *)(a3 + 160);
  uu_pr::header_content(v26, a3, a4);
  uu_pr::trailer_content(v14, *(unsigned __int8 *)(a3 + 321), *(unsigned __int8 *)(a3 + 322));
  v21 = a1;
  v22 = a2;
  v19 = v6;
  v20 = v5;
  v23 = std::io::stdio::stdout();
  v11[0] = std::io::stdio::Stdout::lock(&v23);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v13, v26);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v24, v13);
  if ( (_QWORD)v24 != 0x8000000000000000LL )
  {
    while ( 1 )
    {
      v17 = v24;
      v18 = v25;
      if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(v11, *((_QWORD *)&v24 + 1))
        || <std::io::stdio::StdoutLock as std::io::Write>::write_all(v11, v12) )
      {
        break;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v17);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v24, v13);
      if ( (_QWORD)v24 == 0x8000000000000000LL )
        goto LABEL_5;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v17);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v13);
    goto LABEL_17;
  }
LABEL_5:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v13);
  if ( uu_pr::write_columns(v21, v22, a3, v11) )
    goto LABEL_17;
  v13[0] = v15;
  v13[1] = v15 + 24 * v16;
  v13[2] = 0LL;
  v7 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v13);
  if ( v8 )
  {
    v9 = v7;
    while ( !<std::io::stdio::StdoutLock as std::io::Write>::write_all(v11, *(_QWORD *)(v8 + 8))
         && (v9 + 1 == v16 || !<std::io::stdio::StdoutLock as std::io::Write>::write_all(v11, v12)) )
    {
      v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v13);
      if ( !v8 )
        goto LABEL_15;
    }
    goto LABEL_17;
  }
LABEL_15:
  if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(v11, v20)
    || <std::io::stdio::StdoutLock as std::io::Write>::flush(v11) )
  {
LABEL_17:
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v11[0]);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v14);
    return 1LL;
  }
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v11[0]);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v14);
  return 0LL;
}
