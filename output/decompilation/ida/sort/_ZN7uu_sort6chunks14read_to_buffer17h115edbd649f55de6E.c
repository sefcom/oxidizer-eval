__int64 __fastcall uu_sort::chunks::read_to_buffer(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v6; // r14
  bool v7; // cf
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r15
  __int64 result; // rax
  char **v26; // rdx
  __int128 v29; // [rsp+10h] [rbp-88h] BYREF
  __int64 v30; // [rsp+20h] [rbp-78h]
  int v31; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-68h] BYREF
  char **v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  unsigned __int64 v35; // [rsp+48h] [rbp-50h]
  __int128 v36; // [rsp+50h] [rbp-48h] BYREF
  __int64 v37; // [rsp+60h] [rbp-38h]

  v6 = *(_QWORD *)(a3 + 16);
  v7 = v6 < a4;
  v8 = v6 - a4;
  if ( v7 )
    core::slice::index::slice_start_index_len_fail(a4, *(_QWORD *)(a3 + 16), &off_18C6E8);
  v10 = *(_QWORD *)(a3 + 8) + a4;
  v33 = &off_18C600;
LABEL_3:
  v11 = v8;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*a2, a2[1], v10, v11);
        v35 = v12;
        if ( (v34 & 1) == 0 )
          break;
        if ( (unsigned __int8)std::io::error::Error::kind(v12) != 35 )
        {
          v32 = v35;
          <T as alloc::string::SpecToString>::spec_to_string(&v36, &v32);
          v31 = 2;
          v29 = v36;
          v30 = v37;
          a1[1] = alloc::boxed::Box<T>::new(&v29);
          a1[2] = &off_18C680;
          *a1 = 1LL;
          return core::ptr::drop_in_place<std::io::error::Error>(&v32);
        }
        *(_QWORD *)&v29 = v35;
        core::ptr::drop_in_place<std::io::error::Error>(&v29);
      }
      if ( !v12 )
        break;
      if ( v11 < v12 )
      {
        v18 = v12;
        v26 = &off_18C648;
        goto LABEL_30;
      }
      v10 += v12;
      v11 -= v12;
    }
    if ( v11 )
    {
      if ( v8 != v11 )
      {
        v20 = *(_QWORD *)(a3 + 16);
        v18 = v20 - v11;
        v21 = v20 - v11 - 1;
        if ( v21 >= v20 )
          goto LABEL_36;
        v22 = *(_QWORD *)(a3 + 8);
        if ( *(_BYTE *)(v22 + v21) != a5 )
        {
          if ( v20 < v11 )
          {
            v21 = *(_QWORD *)(a3 + 16) - v11;
            v33 = &off_18C618;
LABEL_36:
            core::panicking::panic_bounds_check(v21, v20, v33);
          }
          *(_BYTE *)(v22 + v18) = a5;
          --v11;
          v20 = *(_QWORD *)(a3 + 16);
          v18 = v20 - v11;
        }
        v8 = v11;
        if ( v11 > v20 )
        {
          v11 = v20;
          v26 = &off_18C630;
LABEL_30:
          core::slice::index::slice_start_index_len_fail(v18, v11, v26);
        }
        v10 = *(_QWORD *)(a3 + 8) + v18;
      }
      <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next(&v29);
      if ( (_QWORD)v29 == 2LL )
      {
        core::ptr::drop_in_place<core::option::Option<core::result::Result<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v29);
        result = *(_QWORD *)(a3 + 16) - v8;
        a1[1] = result;
        *((_BYTE *)a1 + 16) = 0;
        *a1 = 0LL;
        return result;
      }
      v23 = *((_QWORD *)&v29 + 1);
      v24 = v30;
      if ( (v29 & 1) != 0 )
      {
        result = (__int64)a1;
        a1[1] = *((_QWORD *)&v29 + 1);
        a1[2] = v24;
        *a1 = 1LL;
        return result;
      }
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(*a2, a2[1]);
      *a2 = v23;
      a2[1] = v24;
      goto LABEL_3;
    }
    v13 = *(_QWORD *)(a3 + 8);
    v14 = v13 + *(_QWORD *)(a3 + 16);
    *(_QWORD *)&v29 = v13;
    *((_QWORD *)&v29 + 1) = v13;
    v30 = v14;
    LOBYTE(v31) = a5;
    v15 = (unsigned __int8)memchr::arch::generic::memchr::Iter::next_back(&v29, &v31);
    v17 = v16;
    if ( memchr::arch::generic::memchr::Iter::next_back(&v29, &v31) == 1 )
      break;
    v18 = *(_QWORD *)(a3 + 16);
    alloc::vec::Vec<T,A>::resize(a3, v18 + 10240);
    v19 = *(_QWORD *)(a3 + 16);
    v7 = v19 < v18;
    v11 = v19 - v18;
    if ( v7 )
    {
      v11 = *(_QWORD *)(a3 + 16);
      v26 = &off_18C5E8;
      goto LABEL_30;
    }
    v10 = *(_QWORD *)(a3 + 8) + v18;
  }
  if ( (v15 & 1) == 0 )
    core::option::unwrap_failed(&off_18C5D0);
  result = (__int64)a1;
  a1[1] = v17 + 1;
  *((_BYTE *)a1 + 16) = 1;
  *a1 = 0LL;
  return result;
}