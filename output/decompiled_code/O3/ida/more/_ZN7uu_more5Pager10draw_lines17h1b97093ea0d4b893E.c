__int64 __fastcall uu_more::Pager::draw_lines(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  char v6; // r15
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 i; // rax
  __int64 v11; // rax
  _QWORD v13[2]; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-D8h]
  _QWORD v15[2]; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-C0h]
  __int64 v17; // [rsp+30h] [rbp-B8h]
  __int64 v18; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+58h] [rbp-90h]
  __int64 v22; // [rsp+60h] [rbp-88h]
  _QWORD v23[2]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v24[32]; // [rsp+80h] [rbp-68h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-48h] BYREF
  _QWORD *v26; // [rsp+B0h] [rbp-38h]

  v17 = a2;
  v2 = crossterm::command::write_command_ansi(a2, 4LL);
  if ( !v2 )
    v2 = <std::io::stdio::Stdout as std::io::Write>::flush(v17);
  core::result::Result<T,E>::unwrap(v2, &off_163988);
  *(_QWORD *)(a1 + 56) = 0LL;
  v13[0] = 0LL;
  v13[1] = 8LL;
  v14 = 0LL;
  v3 = *(_QWORD *)(a1 + 8) + 24LL * *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  v15[0] = *(_QWORD *)(a1 + 8);
  v15[1] = v3;
  v16 = v4;
  v5 = *(unsigned __int16 *)(a1 + 64);
  if ( *(_WORD *)(a1 + 64) )
  {
    if ( !*(_BYTE *)(a1 + 67) )
    {
      while ( 1 )
      {
        if ( v16 )
        {
          v16 = 0LL;
          v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(v15);
          if ( !v9 )
            goto LABEL_24;
        }
        else
        {
          v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v15);
          if ( !v9 )
          {
LABEL_24:
            *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 48);
            goto LABEL_25;
          }
        }
        alloc::vec::Vec<T,A>::push(v13, v9);
        if ( v14 >= v5 )
          goto LABEL_25;
      }
    }
    v6 = 0;
    v7 = 0LL;
    do
    {
      if ( v16 )
      {
        v16 = 0LL;
        v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(v15);
        if ( !v8 )
          goto LABEL_24;
      }
      else
      {
        v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v15);
        if ( !v8 )
          goto LABEL_24;
      }
      if ( *(_QWORD *)(v8 + 16) )
      {
        if ( (v6 & 1) != 0 )
          v6 = 0;
        alloc::vec::Vec<T,A>::push(v13, v8);
      }
      else if ( (v6 & 1) != 0 )
      {
        *(_QWORD *)(a1 + 56) = ++v7;
        *(_QWORD *)(a1 + 24) = ++v4;
      }
      else
      {
        v6 = 1;
        alloc::vec::Vec<T,A>::push(v13, v8);
      }
    }
    while ( v14 < v5 );
  }
LABEL_25:
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v24, v13);
  for ( i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v24);
        i;
        i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v24) )
  {
    v18 = i;
    v23[0] = &v18;
    v23[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = &off_1639A0;
    *((_QWORD *)&v19 + 1) = 2LL;
    v22 = 0LL;
    v20 = v23;
    v21 = 1LL;
    core::option::Option<T>::map_or_else(&v25, &v19);
    v19 = v25;
    v20 = v26;
    v11 = <std::io::stdio::Stdout as std::io::Write>::write_all(v17, *((_QWORD *)&v25 + 1), v26);
    core::result::Result<T,E>::unwrap(v11, &off_1639C0);
    core::ptr::drop_in_place<alloc::string::String>(&v19);
  }
  return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(v24);
}
