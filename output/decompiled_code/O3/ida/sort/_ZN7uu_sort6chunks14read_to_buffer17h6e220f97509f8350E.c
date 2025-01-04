        char a7)
{
  unsigned __int64 v7; // rbx
  bool v8; // cf
  unsigned __int64 v9; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // r14
  unsigned __int64 v17; // rbp
  __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 result; // rax
  __int64 *v35; // rcx
  unsigned __int64 v36; // [rsp+0h] [rbp-A8h]
  __int64 v37; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+18h] [rbp-90h] BYREF
  __int128 v41; // [rsp+20h] [rbp-88h] BYREF
  __int64 v42; // [rsp+30h] [rbp-78h]
  _DWORD v43[4]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v44; // [rsp+48h] [rbp-60h]
  unsigned __int64 v45; // [rsp+50h] [rbp-58h]
  unsigned __int64 v46; // [rsp+58h] [rbp-50h]
  __int128 v47; // [rsp+60h] [rbp-48h] BYREF
  __int64 v48; // [rsp+70h] [rbp-38h]

  v44 = a4;
  v7 = *(_QWORD *)(a3 + 16);
  v8 = v7 < a6;
  v9 = v7 - a6;
  if ( v8 )
    core::slice::index::slice_start_index_len_fail(a6, *(_QWORD *)(a3 + 16), &off_201AB0);
  v11 = *(_QWORD *)(a3 + 8) + a6;
  v46 = a5;
  v45 = a5 >> 1;
  while ( 2 )
  {
    v36 = v9;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*a2, a2[1], v11, v9);
          v14 = v13;
          if ( !v12 )
            break;
LABEL_5:
          if ( (unsigned __int8)std::io::error::Error::kind(v14) != 35 )
          {
            v40 = v14;
            <T as alloc::string::ToString>::to_string(&v47, &v40);
            v43[0] = 2;
            v41 = v47;
            v42 = v48;
            a1[1] = alloc::boxed::Box<T>::new(&v41);
            a1[2] = &off_201A40;
            *a1 = 1LL;
            return core::ptr::drop_in_place<std::io::error::Error>(v40);
          }
          core::ptr::drop_in_place<std::io::error::Error>(v14);
        }
        v15 = *a2;
        v16 = a2[1];
        if ( v44 != 1 )
          break;
        while ( !v14 )
        {
          if ( v9 )
            goto LABEL_24;
          v17 = *(_QWORD *)(a3 + 16);
          if ( v17 >= v46 )
            goto LABEL_21;
          v18 = 2 * v17;
          if ( v17 >= v45 )
            v18 = v46;
          alloc::vec::Vec<T,A>::resize(a3, v18, 0LL);
          v19 = *(_QWORD *)(a3 + 16);
          v8 = v19 < v17;
          v9 = v19 - v17;
          if ( v8 )
            core::slice::index::slice_start_index_len_fail(v17, *(_QWORD *)(a3 + 16), &off_201960);
          v11 = *(_QWORD *)(a3 + 8) + v17;
          v20 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v15, v16, v11, v9);
          v14 = v21;
          if ( v20 )
            goto LABEL_5;
        }
LABEL_17:
        v22 = v9;
        v8 = v9 < v14;
        v9 -= v14;
        if ( v8 )
          core::slice::index::slice_start_index_len_fail(v14, v22, &off_2019F0);
        v11 += v14;
      }
      if ( v13 )
        goto LABEL_17;
      if ( v9 )
        break;
      v17 = *(_QWORD *)(a3 + 16);
LABEL_21:
      *(_QWORD *)&v41 = *(_QWORD *)(a3 + 8);
      *((_QWORD *)&v41 + 1) = v41;
      v42 = v41 + v17;
      LOBYTE(v43[0]) = a7;
      v23 = memchr::arch::generic::memchr::Iter::next_back(&v41, v43);
      v25 = v24;
      if ( memchr::arch::generic::memchr::Iter::next_back(&v41, v43) == 1 )
      {
        if ( !v23 )
          core::option::unwrap_failed(&off_201978);
        result = (__int64)a1;
        a1[1] = v25 + 1;
        *((_BYTE *)a1 + 16) = 1;
        *a1 = 0LL;
        return result;
      }
      v26 = *(_QWORD *)(a3 + 16);
      alloc::vec::Vec<T,A>::resize(a3, v26 + 10240, 0LL);
      v27 = *(_QWORD *)(a3 + 16);
      v8 = v27 < v26;
      v9 = v27 - v26;
      if ( v8 )
        core::slice::index::slice_start_index_len_fail(v26, *(_QWORD *)(a3 + 16), &off_201990);
      v11 = *(_QWORD *)(a3 + 8) + v26;
    }
LABEL_24:
    v28 = v36;
    if ( v36 != v9 )
    {
      v29 = *(_QWORD *)(a3 + 16);
      v30 = v29 - v9;
      v31 = v29 - v9 - 1;
      if ( v31 >= v29 )
        core::panicking::panic_bounds_check(v31, v29, &off_2019A8);
      v32 = *(_QWORD *)(a3 + 8);
      if ( *(_BYTE *)(v32 + v31) != a7 )
      {
        if ( v29 < v9 )
          core::panicking::panic_bounds_check(*(_QWORD *)(a3 + 16) - v9, v29, &off_2019C0);
        *(_BYTE *)(v32 + v30) = a7;
        --v9;
        v29 = *(_QWORD *)(a3 + 16);
        v30 = v29 - v9;
      }
      v28 = v9;
      if ( v9 > v29 )
        core::slice::index::slice_start_index_len_fail(v30, v29, &off_2019D8);
      v11 = *(_QWORD *)(a3 + 8) + v30;
    }
    <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next(&v41);
    if ( (_QWORD)v41 == 2LL )
    {
      v35 = a1;
      a1[1] = *(_QWORD *)(a3 + 16) - v28;
      *((_BYTE *)a1 + 16) = 0;
      result = 0LL;
    }
    else
    {
      v33 = *((_QWORD *)&v41 + 1);
      v37 = v42;
      if ( !(_QWORD)v41 )
      {
        core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>(v15, v16);
        *a2 = v33;
        a2[1] = v37;
        v9 = v28;
        continue;
      }
      v35 = a1;
      a1[1] = *((_QWORD *)&v41 + 1);
      a1[2] = v37;
      result = 1LL;
    }
    break;
  }
  *v35 = result;
  return result;
}
