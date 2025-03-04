__int64 __fastcall uu_pr::print_page(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  _QWORD v13[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-E8h]
  _QWORD v15[4]; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-B8h]
  __int64 v18; // [rsp+48h] [rbp-B0h]
  __int128 v19; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-88h]
  __int64 v22; // [rsp+78h] [rbp-80h]
  __int64 v23; // [rsp+80h] [rbp-78h]
  unsigned __int64 v24; // [rsp+88h] [rbp-70h]
  __int64 v25; // [rsp+90h] [rbp-68h] BYREF
  __int128 v26; // [rsp+98h] [rbp-60h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-50h]
  _QWORD v28[9]; // [rsp+B0h] [rbp-48h] BYREF

  v14 = *(_QWORD *)(a3 + 80);
  v13[1] = *(_QWORD *)(a3 + 88);
  v7 = *(_QWORD *)(a3 + 152);
  v8 = *(_QWORD *)(a3 + 160);
  uu_pr::header_content(v28, a3, a4, a4, a5, a6);
  uu_pr::trailer_content(&v16, *(_BYTE *)(a3 + 321), *(_BYTE *)(a3 + 322));
  v23 = a1;
  v24 = a2;
  v21 = v8;
  v22 = v7;
  v25 = std::io::stdio::stdout();
  v13[0] = std::io::stdio::Stdout::lock(&v25);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v15, v28);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26, v15);
  if ( (_QWORD)v26 != 0x8000000000000000LL )
  {
    while ( 1 )
    {
      v19 = v26;
      v20 = v27;
      if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(v13, *((_QWORD *)&v26 + 1))
        || <std::io::stdio::StdoutLock as std::io::Write>::write_all(v13, v14) )
      {
        break;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v19);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26, v15);
      if ( (_QWORD)v26 == 0x8000000000000000LL )
        goto LABEL_5;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v19);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v15);
    goto LABEL_17;
  }
LABEL_5:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v15);
  if ( uu_pr::write_columns(v23, v24, a3, (__int64)v13) )
    goto LABEL_17;
  v15[0] = v17;
  v15[1] = v17 + 24 * v18;
  v15[2] = 0LL;
  v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v15);
  if ( v10 )
  {
    v11 = v9;
    while ( !<std::io::stdio::StdoutLock as std::io::Write>::write_all(v13, *(_QWORD *)(v10 + 8))
         && (v11 + 1 == v18 || !<std::io::stdio::StdoutLock as std::io::Write>::write_all(v13, v14)) )
    {
      v11 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v15);
      if ( !v10 )
        goto LABEL_15;
    }
    goto LABEL_17;
  }
LABEL_15:
  if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(v13, v22)
    || <std::io::stdio::StdoutLock as std::io::Write>::flush(v13) )
  {
LABEL_17:
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v13[0]);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v16);
    return 1LL;
  }
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v13[0]);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v16);
  return 0LL;
}
