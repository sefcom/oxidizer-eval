__int64 __fastcall uu_expand::expand(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 *v2; // r14
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 i; // rax
  __int128 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _BOOL8 v14; // rcx
  bool v15; // si
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 (__fastcall *v19)(); // rdx
  __m256i v21; // [rsp+0h] [rbp-138h] BYREF
  __int128 v22; // [rsp+20h] [rbp-118h]
  __int64 v23; // [rsp+30h] [rbp-108h]
  __m256i *v24; // [rsp+40h] [rbp-F8h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+48h] [rbp-F0h]
  __int128 v26; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-D0h] BYREF
  _QWORD v28[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+80h] [rbp-B8h]
  _QWORD v30[2]; // [rsp+88h] [rbp-B0h] BYREF
  __m256i v31; // [rsp+98h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-80h]
  __int64 v33; // [rsp+C8h] [rbp-70h]
  _QWORD v34[2]; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v35[11]; // [rsp+E0h] [rbp-58h] BYREF

  v1 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v35, 0x2000LL, v1);
  v2 = (unsigned __int64 *)a1[4];
  v3 = a1[5];
  v28[0] = 0LL;
  v28[1] = 1LL;
  v29 = 0LL;
  v4 = a1[1] + 24LL * a1[2];
  v30[0] = a1[1];
  v30[1] = v4;
  for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v30);
        i;
        i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v30) )
  {
    v27 = i;
    if ( (unsigned __int8)std::path::Path::is_dir(*(_QWORD *)(i + 8), *(_QWORD *)(i + 16)) )
    {
      *(_QWORD *)&v6 = uucore::util_name();
      *(_OWORD *)v31.m256i_i8 = v6;
      v24 = &v31;
      v25 = <&T as core::fmt::Display>::fmt;
      v21.m256i_i64[0] = (__int64)&unk_11CFA8;
      v21.m256i_i64[1] = 2LL;
      *(_QWORD *)&v22 = 0LL;
      v21.m256i_i64[2] = (__int64)&v24;
      v21.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v21);
      v31.m256i_i64[0] = (__int64)&v27;
      v31.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v21.m256i_i64[0] = (__int64)&unk_11CFC8;
      v21.m256i_i64[1] = 2LL;
      *(_QWORD *)&v22 = 0LL;
      v21.m256i_i64[2] = (__int64)&v31;
      v21.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v21);
      uucore::mods::error::set_exit_code(1LL);
    }
    else
    {
      uu_expand::open(&v31, *(_QWORD *)(v27 + 8), *(_QWORD *)(v27 + 16));
      if ( v31.m256i_i64[0] )
      {
        v23 = v33;
        v22 = v32;
        v21 = v31;
        while ( 1 )
        {
          v10 = ((__int64 (__fastcall *)(__m256i *, __int64, _QWORD *, __int64, __int64, __int64))std::io::read_until)(
                  &v21,
                  10LL,
                  v28,
                  v7,
                  v8,
                  v9);
          v14 = v29 == 0;
          v15 = v11 != 0;
          if ( v10 )
            v15 = v29 == 0;
          if ( !v15 )
            break;
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(
            v10,
            v11,
            v11,
            v14,
            v12,
            v13,
            v21.m256i_i64[0],
            v21.m256i_i64[1],
            v21.m256i_i64[2],
            v21.m256i_i64[3],
            v22,
            *((_QWORD *)&v22 + 1),
            v23);
          v17 = uu_expand::expand_line((__int64)v28, v35, v2, v3, (__int64)a1, v16);
          v18 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v17);
          if ( v18 )
          {
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v21);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v28);
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v35);
            return v18;
          }
        }
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(
          v10,
          v11,
          v11,
          v14,
          v12,
          v13,
          v21.m256i_i64[0],
          v21.m256i_i64[1],
          v21.m256i_i64[2],
          v21.m256i_i64[3],
          v22,
          *((_QWORD *)&v22 + 1),
          v23);
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v21);
      }
      else
      {
        v26 = *(_OWORD *)&v31.m256i_u64[1];
        v24 = (__m256i *)uucore::util_name();
        v25 = v19;
        v34[0] = &v24;
        v34[1] = <&T as core::fmt::Display>::fmt;
        v21.m256i_i64[0] = (__int64)&unk_11CFA8;
        v21.m256i_i64[1] = 2LL;
        *(_QWORD *)&v22 = 0LL;
        v21.m256i_i64[2] = (__int64)v34;
        v21.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v21);
        v24 = (__m256i *)&v26;
        v25 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v21.m256i_i64[0] = (__int64)&unk_11CFE8;
        v21.m256i_i64[1] = 2LL;
        *(_QWORD *)&v22 = 0LL;
        v21.m256i_i64[2] = (__int64)&v24;
        v21.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v21);
        uucore::mods::error::set_exit_code(1LL);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v26, *((_QWORD *)&v26 + 1));
      }
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v28);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v35);
  return 0LL;
}
