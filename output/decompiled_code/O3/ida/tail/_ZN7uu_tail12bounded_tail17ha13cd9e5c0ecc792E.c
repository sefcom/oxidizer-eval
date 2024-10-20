__int64 __fastcall uu_tail::bounded_tail(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // r12
  unsigned __int8 v5; // r13
  __int64 *v6; // r14
  __int64 v7; // rbp
  __int64 *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  unsigned __int8 v15; // bp
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v31; // [rsp+8h] [rbp-80h] BYREF
  __int64 v32; // [rsp+10h] [rbp-78h]
  __int64 v33; // [rsp+18h] [rbp-70h]
  __int64 v34; // [rsp+20h] [rbp-68h] BYREF
  __int64 v35; // [rsp+28h] [rbp-60h]
  __int128 v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+40h] [rbp-48h]
  __int64 *v38; // [rsp+48h] [rbp-40h]
  __int64 v39[7]; // [rsp+50h] [rbp-38h] BYREF

  v2 = a1;
  result = *a2;
  switch ( *a2 )
  {
    case 0LL:
      v4 = a2[1];
      v5 = *((_BYTE *)a2 + 16);
      uu_tail::chunks::ReverseChunks::new(&v34, (__int64)a1);
      v37 = 0LL;
      a1 = &v31;
      a2 = &v34;
      <uu_tail::chunks::ReverseChunks as core::iter::traits::iterator::Iterator>::next(&v31, &v34);
      v6 = (__int64 *)v31;
      if ( v31 == 0x8000000000000000LL )
        goto LABEL_45;
      v7 = 0LL;
      do
      {
        v8 = (__int64 *)v32;
        v9 = v37++;
        v10 = v32 + v33;
        if ( v33 && !v9 )
          v10 -= *(_BYTE *)(v33 + v32 - 1) == v5;
        if ( v32 != v10 )
        {
          v11 = v10 - v32;
          do
          {
            if ( *(_BYTE *)(v10 - 1) == v5 && ++v7 >= v4 )
            {
              a2 = (_QWORD *)(&dword_0 + 2);
              a1 = v2;
              if ( <std::fs::File as std::io::Seek>::seek(v2, 2LL, v11) )
              {
                v31 = v22;
                core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v31, &off_15C4F8, &off_15C838);
              }
              if ( v6 )
              {
                a1 = v8;
                a2 = v6;
                _rust_dealloc(v8, v6, 1LL);
              }
              goto LABEL_45;
            }
            --v10;
            --v11;
          }
          while ( v10 != v32 );
        }
        if ( v6 )
          _rust_dealloc(v32, v6, 1LL);
        a1 = &v31;
        a2 = &v34;
        <uu_tail::chunks::ReverseChunks as core::iter::traits::iterator::Iterator>::next(&v31, &v34);
        v6 = (__int64 *)v31;
      }
      while ( v31 != 0x8000000000000000LL );
      goto LABEL_45;
    case 1LL:
      v14 = a2[1];
      if ( v14 < 2 )
        goto LABEL_45;
      v15 = *((_BYTE *)a2 + 16);
      v16 = _rust_alloc(0x2000LL, 1LL);
      if ( !v16 )
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      v34 = v16;
      v35 = 0x2000LL;
      v36 = 0LL;
      v37 = 0LL;
      v38 = a1;
      v31 = 0LL;
      v32 = 1LL;
      v33 = 0LL;
      v17 = v14 - 1;
      v18 = 0LL;
      break;
    case 2LL:
      goto LABEL_45;
    case 3LL:
      return result;
    case 4LL:
      result = a2[1];
      switch ( result )
      {
        case 0LL:
          if ( <std::fs::File as std::io::Seek>::seek(a1, 1LL, 0LL) )
          {
            v34 = v12;
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v34, &off_15C4F8, &off_15C850);
          }
          if ( a2[2] < v12 )
            v12 = a2[2];
          a2 = (_QWORD *)(&dword_0 + 1);
          if ( <std::fs::File as std::io::Seek>::seek(a1, 1LL, -(__int64)v12) )
          {
            v34 = v13;
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v34, &off_15C4F8, &off_15C868);
          }
          goto LABEL_45;
        case 1LL:
          v23 = a2[2];
          if ( v23 > 1 )
          {
            a2 = 0LL;
            if ( <std::fs::File as std::io::Seek>::seek(a1, 0LL, v23 - 1) )
            {
              v34 = v24;
              core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v34, &off_15C4F8, &off_15C880);
            }
          }
          goto LABEL_45;
        case 2LL:
          goto LABEL_45;
        case 3LL:
          return result;
      }
      return result;
  }
  while ( 1 )
  {
    v19 = std::io::read_until(&v34, v15, &v31);
    if ( v19 )
      break;
    if ( !v20 )
      goto LABEL_39;
    v18 += v20;
    v33 = 0LL;
    if ( !--v17 )
    {
      if ( v31 )
        _rust_dealloc(v32, v31, 1LL);
      if ( v35 )
        _rust_dealloc(v34, v35, 1LL);
      goto LABEL_44;
    }
  }
  v18 = v20;
LABEL_39:
  if ( v31 )
  {
    v25 = v19;
    _rust_dealloc(v32, v31, 1LL);
    v19 = v25;
  }
  if ( v35 )
  {
    v26 = v19;
    _rust_dealloc(v34, v35, 1LL);
    v19 = v26;
  }
  if ( v19 )
  {
    v34 = v18;
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v34, &off_15C4F8, &off_15C898);
  }
LABEL_44:
  a2 = 0LL;
  if ( <std::fs::File as std::io::Seek>::seek(a1, 0LL, v18) )
  {
    v34 = v27;
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v34, &off_15C4F8, &off_15C8B0);
  }
LABEL_45:
  v39[0] = std::io::stdio::stdout(a1, a2);
  v31 = std::io::stdio::Stdout::lock(v39);
  result = <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(v2, &v31);
  if ( result )
  {
    v34 = v28;
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v34, &off_15C4F8, &off_15C8C8);
  }
  v29 = v31;
  if ( (*(_DWORD *)(v31 + 12))-- == 1 )
  {
    *(_QWORD *)v29 = 0LL;
    result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v29 + 8), 0);
    if ( (_DWORD)result == 2 )
      return std::sys::sync::mutex::futex::Mutex::wake(v29 + 8);
  }
  return result;
}
