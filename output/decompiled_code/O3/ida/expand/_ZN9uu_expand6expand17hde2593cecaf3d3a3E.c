__int64 __fastcall uu_expand::expand(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 *v2; // r14
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 i; // rax
  __int128 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _BOOL8 v11; // rcx
  bool v12; // si
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 (__fastcall *v15)(); // rdx
  __m256i v17; // [rsp+0h] [rbp-138h] BYREF
  __int128 v18; // [rsp+20h] [rbp-118h]
  __int64 v19; // [rsp+30h] [rbp-108h]
  __m256i *v20; // [rsp+40h] [rbp-F8h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+48h] [rbp-F0h]
  __int128 v22; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-D0h] BYREF
  _QWORD v24[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+80h] [rbp-B8h]
  _QWORD v26[2]; // [rsp+88h] [rbp-B0h] BYREF
  __m256i v27; // [rsp+98h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-80h]
  __int64 v29; // [rsp+C8h] [rbp-70h]
  _QWORD v30[2]; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v31[11]; // [rsp+E0h] [rbp-58h] BYREF

  v1 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v31, 0x2000LL, v1);
  v2 = (unsigned __int64 *)a1[4];
  v3 = a1[5];
  v24[0] = 0LL;
  v24[1] = 1LL;
  v25 = 0LL;
  v4 = a1[1] + 24LL * a1[2];
  v26[0] = a1[1];
  v26[1] = v4;
  for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v26);
        i;
        i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v26) )
  {
    v23 = i;
    if ( (unsigned __int8)std::path::Path::is_dir(*(_QWORD *)(i + 8), *(_QWORD *)(i + 16)) )
    {
      *(_QWORD *)&v6 = uucore::util_name();
      *(_OWORD *)v27.m256i_i8 = v6;
      v20 = &v27;
      v21 = <&T as core::fmt::Display>::fmt;
      v17.m256i_i64[0] = (__int64)&unk_11EE88;
      v17.m256i_i64[1] = 2LL;
      *(_QWORD *)&v18 = 0LL;
      v17.m256i_i64[2] = (__int64)&v20;
      v17.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v17);
      v27.m256i_i64[0] = (__int64)&v23;
      v27.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v17.m256i_i64[0] = (__int64)&unk_11EEC8;
      v17.m256i_i64[1] = 2LL;
      *(_QWORD *)&v18 = 0LL;
      v17.m256i_i64[2] = (__int64)&v27;
      v17.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v17);
      uucore::mods::error::set_exit_code(1LL);
    }
    else
    {
      uu_expand::open(&v27, *(_QWORD *)(v23 + 8), *(_QWORD *)(v23 + 16));
      if ( v27.m256i_i64[0] )
      {
        v19 = v29;
        v18 = v28;
        v17 = v27;
        while ( 1 )
        {
          v7 = ((__int64 (__fastcall *)(__m256i *, __int64, _QWORD *))std::io::read_until)(&v17, 10LL, v24);
          v11 = v25 == 0;
          v12 = v8 != 0;
          if ( v7 )
            v12 = v25 == 0;
          if ( !v12 )
            break;
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(
            v7,
            v8,
            v8,
            v11,
            v9,
            v10,
            v17.m256i_i64[0],
            v17.m256i_i64[1],
            v17.m256i_i64[2],
            v17.m256i_i64[3],
            v18,
            *((_QWORD *)&v18 + 1),
            v19);
          v13 = uu_expand::expand_line((__int64)v24, v31, v2, v3, (__int64)a1);
          v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v13);
          if ( v14 )
          {
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v17);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v24);
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v31);
            return v14;
          }
        }
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(
          v7,
          v8,
          v8,
          v11,
          v9,
          v10,
          v17.m256i_i64[0],
          v17.m256i_i64[1],
          v17.m256i_i64[2],
          v17.m256i_i64[3],
          v18,
          *((_QWORD *)&v18 + 1),
          v19);
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v17);
      }
      else
      {
        v22 = *(_OWORD *)&v27.m256i_u64[1];
        v20 = (__m256i *)uucore::util_name();
        v21 = v15;
        v30[0] = &v20;
        v30[1] = <&T as core::fmt::Display>::fmt;
        v17.m256i_i64[0] = (__int64)&unk_11EE88;
        v17.m256i_i64[1] = 2LL;
        *(_QWORD *)&v18 = 0LL;
        v17.m256i_i64[2] = (__int64)v30;
        v17.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v17);
        v20 = (__m256i *)&v22;
        v21 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v17.m256i_i64[0] = (__int64)&unk_11EEA8;
        v17.m256i_i64[1] = 2LL;
        *(_QWORD *)&v18 = 0LL;
        v17.m256i_i64[2] = (__int64)&v20;
        v17.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v17);
        uucore::mods::error::set_exit_code(1LL);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v22, *((_QWORD *)&v22 + 1));
      }
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v24);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v31);
  return 0LL;
}
