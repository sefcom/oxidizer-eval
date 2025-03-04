_QWORD *__fastcall uu_sort::chunks::read_to_buffer(
        _QWORD *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  unsigned __int64 v8; // r12
  bool v9; // cf
  unsigned __int64 v10; // r12
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *result; // rax
  _QWORD *v35; // rcx
  unsigned __int64 v37; // [rsp+8h] [rbp-90h] BYREF
  __int128 v38; // [rsp+10h] [rbp-88h] BYREF
  __int64 v39; // [rsp+20h] [rbp-78h]
  _DWORD v40[4]; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-60h]
  __int64 v42; // [rsp+40h] [rbp-58h]
  unsigned __int64 v43; // [rsp+48h] [rbp-50h]
  __int128 v44; // [rsp+50h] [rbp-48h] BYREF
  __int64 v45; // [rsp+60h] [rbp-38h]

  v42 = a4;
  v8 = *(_QWORD *)(a3 + 16);
  v9 = v8 < a6;
  v10 = v8 - a6;
  if ( v9 )
    core::slice::index::slice_start_index_len_fail(a6, *(_QWORD *)(a3 + 16), &off_201AB0);
  v13 = *(_QWORD *)(a3 + 8) + a6;
  v43 = a5 >> 1;
  while ( 2 )
  {
    v41 = v10;
    v14 = v10;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = <std::process::ChildStdout as std::io::Read>::read(a2, v13, v14);
          v17 = v16;
          if ( !v15 )
            break;
LABEL_5:
          if ( (unsigned __int8)std::io::error::Error::kind(v17) != 35 )
          {
            v37 = v17;
            <T as alloc::string::ToString>::to_string(&v44, &v37);
            v40[0] = 2;
            v38 = v44;
            v39 = v45;
            a1[1] = alloc::boxed::Box<T>::new(&v38);
            a1[2] = &off_201A40;
            *a1 = 1LL;
            return (_QWORD *)core::ptr::drop_in_place<std::io::error::Error>(v37);
          }
          core::ptr::drop_in_place<std::io::error::Error>(v17);
        }
        if ( v42 != 1 )
          break;
        while ( !v17 )
        {
          if ( v14 )
            goto LABEL_24;
          v18 = *(_QWORD *)(a3 + 16);
          if ( v18 >= a5 )
            goto LABEL_21;
          v19 = 2 * v18;
          if ( v18 >= v43 )
            v19 = a5;
          alloc::vec::Vec<T,A>::resize(a3, v19, 0LL);
          v20 = *(_QWORD *)(a3 + 16);
          v9 = v20 < v18;
          v14 = v20 - v18;
          if ( v9 )
            core::slice::index::slice_start_index_len_fail(v18, *(_QWORD *)(a3 + 16), &off_201960);
          v13 = *(_QWORD *)(a3 + 8) + v18;
          v21 = <std::process::ChildStdout as std::io::Read>::read(a2, v13, v14);
          v17 = v22;
          if ( v21 )
            goto LABEL_5;
        }
LABEL_17:
        v23 = v14;
        v9 = v14 < v17;
        v14 -= v17;
        if ( v9 )
          core::slice::index::slice_start_index_len_fail(v17, v23, &off_2019F0);
        v13 += v17;
      }
      if ( v16 )
        goto LABEL_17;
      if ( v14 )
        break;
      v18 = *(_QWORD *)(a3 + 16);
LABEL_21:
      *(_QWORD *)&v38 = *(_QWORD *)(a3 + 8);
      *((_QWORD *)&v38 + 1) = v38;
      v39 = v38 + v18;
      LOBYTE(v40[0]) = a7;
      v24 = memchr::arch::generic::memchr::Iter::next_back(&v38, v40);
      v26 = v25;
      if ( memchr::arch::generic::memchr::Iter::next_back(&v38, v40) == 1 )
      {
        if ( !v24 )
          core::option::unwrap_failed(&off_201978);
        result = a1;
        a1[1] = v26 + 1;
        *((_BYTE *)a1 + 16) = 1;
        *a1 = 0LL;
        return result;
      }
      v27 = *(_QWORD *)(a3 + 16);
      alloc::vec::Vec<T,A>::resize(a3, v27 + 10240, 0LL);
      v28 = *(_QWORD *)(a3 + 16);
      v9 = v28 < v27;
      v14 = v28 - v27;
      if ( v9 )
        core::slice::index::slice_start_index_len_fail(v27, *(_QWORD *)(a3 + 16), &off_201990);
      v13 = *(_QWORD *)(a3 + 8) + v27;
    }
LABEL_24:
    v10 = v41;
    if ( v41 != v14 )
    {
      v29 = *(_QWORD *)(a3 + 16);
      v30 = v29 - v14;
      v31 = v29 - v14 - 1;
      if ( v31 >= v29 )
        core::panicking::panic_bounds_check(v31, v29, &off_2019A8);
      v32 = *(_QWORD *)(a3 + 8);
      if ( *(_BYTE *)(v32 + v31) != a7 )
      {
        if ( v29 < v14 )
          core::panicking::panic_bounds_check(*(_QWORD *)(a3 + 16) - v14, v29, &off_2019C0);
        *(_BYTE *)(v32 + v30) = a7;
        --v14;
        v29 = *(_QWORD *)(a3 + 16);
        v30 = v29 - v14;
      }
      v10 = v14;
      if ( v14 > v29 )
        core::slice::index::slice_start_index_len_fail(v30, v29, &off_2019D8);
      v13 = *(_QWORD *)(a3 + 8) + v30;
    }
    <core::iter::sources::empty::Empty<T> as core::iter::traits::iterator::Iterator>::next(&v38);
    if ( (_QWORD)v38 )
    {
      v33 = v39;
      if ( !*((_QWORD *)&v38 + 1) )
      {
        core::ptr::drop_in_place<std::process::ChildStdout>((unsigned int)*a2);
        *a2 = v33;
        continue;
      }
      v35 = a1;
      a1[1] = *((_QWORD *)&v38 + 1);
      a1[2] = v33;
      result = (_QWORD *)(&dword_0 + 1);
    }
    else
    {
      v35 = a1;
      a1[1] = *(_QWORD *)(a3 + 16) - v10;
      *((_BYTE *)a1 + 16) = 0;
      result = 0LL;
    }
    break;
  }
  *v35 = result;
  return result;
}
