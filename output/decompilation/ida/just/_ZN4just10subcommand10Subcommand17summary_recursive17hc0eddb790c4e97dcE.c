__int64 __fastcall just::subcommand::Subcommand::summary_recursive(
        unsigned __int8 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 (__fastcall *v12)(); // rdx
  __int64 (__fastcall *v13)(); // rdx
  _BYTE **v14; // rax
  __int64 v15; // rcx
  _BYTE **v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rax
  _BYTE **v22; // [rsp+10h] [rbp-E8h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+18h] [rbp-E0h]
  unsigned __int64 v24; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-D0h]
  _BYTE **v26; // [rsp+30h] [rbp-C8h]
  __int128 v27; // [rsp+38h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B0h]
  _BYTE **v29; // [rsp+50h] [rbp-A8h]
  __int64 v30; // [rsp+58h] [rbp-A0h]
  _BYTE **v31; // [rsp+60h] [rbp-98h]
  _QWORD *v32; // [rsp+68h] [rbp-90h]
  _BYTE *v33; // [rsp+70h] [rbp-88h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+78h] [rbp-80h]
  _QWORD *v35; // [rsp+80h] [rbp-78h]
  __int64 (__fastcall *v36)(); // [rsp+88h] [rbp-70h]
  _BYTE v37[16]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-58h]
  _BYTE v39[80]; // [rsp+A8h] [rbp-50h] BYREF

  alloc::str::join_generic_copy(v37, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), asc_6E4EE, 2LL);
  v32 = a4;
  just::justfile::Justfile::public_recipes((__int64)&v24, a4, a1);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v39, &v24);
  v7 = *a3;
  v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v39);
  if ( v8 )
  {
    v9 = v8;
    v10 = v7 + 1;
    do
    {
      if ( v10 != 1 )
      {
        v24 = (unsigned __int64)&off_42F150;
        v25 = 1LL;
        v26 = (_BYTE **)&byte_8;
        v27 = 0LL;
        std::io::stdio::_print(&v24);
      }
      v11 = v9 + 144;
      if ( v38 )
      {
        v22 = (_BYTE **)just::token::Token::lexeme(v11);
        v23 = v12;
        v33 = v37;
        v34 = <alloc::string::String as core::fmt::Display>::fmt;
        v35 = &v22;
        v36 = <&T as core::fmt::Display>::fmt;
        v24 = (unsigned __int64)&unk_4314A0;
        v25 = 2LL;
        v26 = &v33;
        v27 = 2uLL;
      }
      else
      {
        v33 = (_BYTE *)just::token::Token::lexeme(v11);
        v34 = v13;
        v22 = &v33;
        v23 = <&T as core::fmt::Display>::fmt;
        v24 = (unsigned __int64)asc_65DB0;
        v25 = 1LL;
        v26 = (_BYTE **)&v22;
        v27 = 1uLL;
      }
      std::io::stdio::_print(&v24);
      *a3 = v10;
      v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v39);
      ++v10;
    }
    while ( v9 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(v39);
  v14 = (_BYTE **)v32[84];
  v15 = v32[85];
  v16 = v14;
  if ( v14 )
    v16 = (_BYTE **)v32[86];
  v24 = v14 != 0LL;
  v25 = 0LL;
  v26 = v14;
  *(_QWORD *)&v27 = v15;
  *((_QWORD *)&v27 + 1) = v24;
  v28 = 0LL;
  v29 = v14;
  v30 = v15;
  v31 = v16;
  while ( 1 )
  {
    v17 = (_QWORD *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v24);
    if ( !v17 )
      break;
    v19 = v18;
    alloc::vec::Vec<T,A>::push(a2, *v17, v17[1], &off_4314C0);
    just::subcommand::Subcommand::summary_recursive(a1, a2, a3, v19);
    v20 = *(_QWORD *)(a2 + 16);
    if ( v20 )
      *(_QWORD *)(a2 + 16) = v20 - 1;
  }
  return core::ptr::drop_in_place<alloc::string::String>(v37);
}