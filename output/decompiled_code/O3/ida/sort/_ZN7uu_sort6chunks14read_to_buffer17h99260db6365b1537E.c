        char a8)
{
  unsigned __int64 v8; // rbx
  bool v9; // cf
  unsigned __int64 v10; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // r14
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 result; // rax
  __int64 *v36; // rcx
  unsigned __int64 v37; // [rsp+0h] [rbp-A8h]
  __int64 v38; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+18h] [rbp-90h] BYREF
  __int128 v42; // [rsp+20h] [rbp-88h] BYREF
  __int64 v43; // [rsp+30h] [rbp-78h]
  int v44; // [rsp+38h] [rbp-70h] BYREF
  __int64 v45; // [rsp+40h] [rbp-68h]
  __int64 v46; // [rsp+48h] [rbp-60h]
  unsigned __int64 v47; // [rsp+50h] [rbp-58h]
  unsigned __int64 v48; // [rsp+58h] [rbp-50h]
  __int128 v49; // [rsp+60h] [rbp-48h] BYREF
  __int64 v50; // [rsp+70h] [rbp-38h]

  v46 = a5;
  v45 = a3;
  v8 = *(_QWORD *)(a4 + 16);
  v9 = v8 < a7;
  v10 = v8 - a7;
  if ( v9 )
    core::slice::index::slice_start_index_len_fail(a7, *(_QWORD *)(a4 + 16), &off_201AB0);
  v12 = *(_QWORD *)(a4 + 8) + a7;
  v48 = a6;
  v47 = a6 >> 1;
  while ( 2 )
  {
    v37 = v10;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(*a2, a2[1], v12, v10);
          v15 = v14;
          if ( !v13 )
            break;
LABEL_5:
          if ( (unsigned __int8)std::io::error::Error::kind(v15) != 35 )
          {
            v41 = v15;
            <T as alloc::string::ToString>::to_string(&v49, &v41);
            v44 = 2;
            v42 = v49;
            v43 = v50;
            a1[1] = alloc::boxed::Box<T>::new(&v42);
            a1[2] = &off_201A40;
            *a1 = 1LL;
            return core::ptr::drop_in_place<std::io::error::Error>(v41);
          }
          core::ptr::drop_in_place<std::io::error::Error>(v15);
        }
        v16 = *a2;
        v17 = a2[1];
        if ( v46 != 1 )
          break;
        while ( !v15 )
        {
          if ( v10 )
            goto LABEL_24;
          v18 = *(_QWORD *)(a4 + 16);
          if ( v18 >= v48 )
            goto LABEL_21;
          v19 = 2 * v18;
          if ( v18 >= v47 )
            v19 = v48;
          alloc::vec::Vec<T,A>::resize(a4, v19, 0LL);
          v20 = *(_QWORD *)(a4 + 16);
          v9 = v20 < v18;
          v10 = v20 - v18;
          if ( v9 )
            core::slice::index::slice_start_index_len_fail(v18, *(_QWORD *)(a4 + 16), &off_201960);
          v12 = *(_QWORD *)(a4 + 8) + v18;
          v21 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v16, v17, v12, v10);
          v15 = v22;
          if ( v21 )
            goto LABEL_5;
        }
LABEL_17:
        v23 = v10;
        v9 = v10 < v15;
        v10 -= v15;
        if ( v9 )
          core::slice::index::slice_start_index_len_fail(v15, v23, &off_2019F0);
        v12 += v15;
      }
      if ( v14 )
        goto LABEL_17;
      if ( v10 )
        break;
      v18 = *(_QWORD *)(a4 + 16);
LABEL_21:
      *(_QWORD *)&v42 = *(_QWORD *)(a4 + 8);
      *((_QWORD *)&v42 + 1) = v42;
      v43 = v42 + v18;
      LOBYTE(v44) = a8;
      v24 = memchr::arch::generic::memchr::Iter::next_back(&v42, &v44);
      v26 = v25;
      if ( memchr::arch::generic::memchr::Iter::next_back(&v42, &v44) == 1 )
      {
        if ( !v24 )
          core::option::unwrap_failed(&off_201978);
        result = (__int64)a1;
        a1[1] = v26 + 1;
        *((_BYTE *)a1 + 16) = 1;
        *a1 = 0LL;
        return result;
      }
      v27 = *(_QWORD *)(a4 + 16);
      alloc::vec::Vec<T,A>::resize(a4, v27 + 10240, 0LL);
      v28 = *(_QWORD *)(a4 + 16);
      v9 = v28 < v27;
      v10 = v28 - v27;
      if ( v9 )
        core::slice::index::slice_start_index_len_fail(v27, *(_QWORD *)(a4 + 16), &off_201990);
      v12 = *(_QWORD *)(a4 + 8) + v27;
    }
LABEL_24:
    v29 = v37;
    if ( v37 != v10 )
    {
      v30 = *(_QWORD *)(a4 + 16);
      v31 = v30 - v10;
      v32 = v30 - v10 - 1;
      if ( v32 >= v30 )
        core::panicking::panic_bounds_check(v32, v30, &off_2019A8);
      v33 = *(_QWORD *)(a4 + 8);
      if ( *(_BYTE *)(v33 + v32) != a8 )
      {
        if ( v30 < v10 )
          core::panicking::panic_bounds_check(*(_QWORD *)(a4 + 16) - v10, v30, &off_2019C0);
        *(_BYTE *)(v33 + v31) = a8;
        --v10;
        v30 = *(_QWORD *)(a4 + 16);
        v31 = v30 - v10;
      }
      v29 = v10;
      if ( v10 > v30 )
        core::slice::index::slice_start_index_len_fail(v31, v30, &off_2019D8);
      v12 = *(_QWORD *)(a4 + 8) + v31;
    }
    <&mut I as core::iter::traits::iterator::Iterator>::next(&v42, v45);
    if ( (_QWORD)v42 == 2LL )
    {
      v36 = a1;
      a1[1] = *(_QWORD *)(a4 + 16) - v29;
      *((_BYTE *)a1 + 16) = 0;
      result = 0LL;
    }
    else
    {
      v34 = *((_QWORD *)&v42 + 1);
      v38 = v43;
      if ( !(_QWORD)v42 )
      {
        core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>(v16, v17);
        *a2 = v34;
        a2[1] = v38;
        v10 = v29;
        continue;
      }
      v36 = a1;
      a1[1] = *((_QWORD *)&v42 + 1);
      a1[2] = v38;
      result = 1LL;
    }
    break;
  }
  *v36 = result;
  return result;
}
