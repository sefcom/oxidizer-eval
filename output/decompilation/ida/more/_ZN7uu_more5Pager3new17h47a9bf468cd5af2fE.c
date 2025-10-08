__int64 __fastcall uu_more::Pager::new(__int64 *a1, __int64 a2, int a3, __int128 *a4)
{
  __int64 v6; // r13
  _QWORD *v7; // rax
  bool v8; // of
  __int64 v9; // rbx
  __int64 v10; // r12
  _QWORD *i; // rbp
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  unsigned __int16 v21; // cx
  __int64 v22; // r14
  __int128 *v23; // r12
  __int64 v24; // rax
  __int64 *v25; // rsi
  __int16 v26; // cx
  __int64 v27; // rdx
  __int64 v28; // [rsp+8h] [rbp-B0h]
  __int64 v29; // [rsp+8h] [rbp-B0h]
  __int128 v30; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+2Ch] [rbp-8Ch]
  __int64 *v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+38h] [rbp-80h] BYREF
  __int64 v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  __int128 *v37; // [rsp+80h] [rbp-38h]

  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v34);
  v6 = alloc::boxed::Box<T>::new(&v34);
  v7 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
  if ( !v7 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  *v7 = 0LL;
  *(_QWORD *)&v30 = 1LL;
  *((_QWORD *)&v30 + 1) = v7;
  v31 = 1LL;
  v34 = 0LL;
  v35 = 1LL;
  v8 = __OFSUB__(0LL, *(_QWORD *)a4);
  v33 = a1;
  v37 = a4;
  v32 = a3;
  if ( v8 )
  {
    v9 = 0LL;
    a4 = &v30;
    v10 = 0LL;
    for ( i = 0LL; ; i = (_QWORD *)((char *)i + 1) )
    {
      v36 = 0LL;
      if ( (std::io::append_to_string(&v34, v6) & 1) != 0 )
        break;
      if ( !v12 )
        goto LABEL_27;
      v10 += v12;
      alloc::vec::Vec<T,A>::push(&v30, v10);
    }
  }
  else
  {
    v28 = v6;
    v13 = *((_QWORD *)a4 + 2);
    if ( v13 )
    {
      v14 = *((_QWORD *)a4 + 1);
      v9 = 0LL;
      v15 = 0LL;
      for ( i = 0LL; ; i = (_QWORD *)((char *)i + 1) )
      {
        v36 = 0LL;
        if ( (std::io::append_to_string(&v34, v28) & 1) != 0 )
        {
          v6 = v28;
          goto LABEL_28;
        }
        if ( !v12 )
        {
          v6 = v28;
          goto LABEL_27;
        }
        v15 += v12;
        alloc::vec::Vec<T,A>::push(&v30, v15);
        if ( v9 )
          break;
        if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(v14, v13, v35, v36) )
        {
          a4 = (__int128 *)i;
          v9 = 1LL;
        }
      }
      i = (_QWORD *)((char *)i + 1);
      v6 = v28;
      while ( 1 )
      {
        v36 = 0LL;
        if ( (std::io::append_to_string(&v34, v28) & 1) != 0 )
          break;
        if ( !v12 )
        {
          v9 = 1LL;
          goto LABEL_27;
        }
        v15 += v12;
        alloc::vec::Vec<T,A>::push(&v30, v15);
        i = (_QWORD *)((char *)i + 1);
      }
    }
    else
    {
      v9 = 0LL;
      a4 = &v30;
      v16 = 0LL;
      i = 0LL;
      v6 = v28;
      while ( 1 )
      {
        v36 = 0LL;
        if ( (std::io::append_to_string(&v34, v28) & 1) != 0 )
          break;
        if ( !v12 )
        {
LABEL_27:
          v12 = std::io::Seek::rewind(v6);
          if ( v12 )
            break;
          v21 = v32 - 1;
          if ( !(_WORD)v32 )
            v21 = 0;
          v22 = v21;
          v23 = v37;
          v29 = *((_QWORD *)v37 + 3);
          v24 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v21, 8LL, 24LL, &off_124198);
          v25 = v33;
          v33[7] = v31;
          *(_OWORD *)(v25 + 5) = v30;
          v26 = *((_WORD *)v23 + 19);
          *v25 = v9;
          v25[1] = (__int64)a4;
          v25[2] = v24;
          v25[3] = v27;
          v25[4] = 0LL;
          v25[8] = v6;
          v25[9] = (__int64)&off_1240E0;
          v25[10] = v29;
          v25[11] = v22;
          v25[12] = 0LL;
          v25[14] = (__int64)i;
          v25[15] = 0LL;
          *((_WORD *)v25 + 64) = v26;
          return core::ptr::drop_in_place<alloc::string::String>(v34, v35);
        }
        v16 += v12;
        alloc::vec::Vec<T,A>::push(&v30, v16);
        i = (_QWORD *)((char *)i + 1);
      }
    }
  }
LABEL_28:
  v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
  v18 = v33;
  v33[1] = v17;
  v18[2] = v19;
  *v18 = 2LL;
  core::ptr::drop_in_place<alloc::string::String>(v34, v35);
  core::ptr::drop_in_place<alloc::vec::Vec<u64>>(v30, *((_QWORD *)&v30 + 1));
  return core::ptr::drop_in_place<alloc::boxed::Box<std::io::buffered::bufreader::BufReader<std::io::cursor::Cursor<alloc::string::String>>>>(v6);
}