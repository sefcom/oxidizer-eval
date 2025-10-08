__int64 __fastcall uu_expand::expand(_QWORD *a1)
{
  __int64 v2; // rax
  unsigned __int64 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int128 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 (__fastcall *v19)(); // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __m256i v23; // [rsp+0h] [rbp-128h] BYREF
  __int128 v24; // [rsp+20h] [rbp-108h]
  __int64 v25; // [rsp+30h] [rbp-F8h]
  __m256i *v26; // [rsp+38h] [rbp-F0h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+40h] [rbp-E8h]
  __int64 v28; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-D8h]
  __int64 v30; // [rsp+58h] [rbp-D0h]
  __int128 v31; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+80h] [rbp-A8h]
  __m256i v34; // [rsp+88h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-80h]
  __int64 v36; // [rsp+B8h] [rbp-70h]
  _QWORD v37[2]; // [rsp+C0h] [rbp-68h] BYREF
  _QWORD v38[11]; // [rsp+D0h] [rbp-58h] BYREF

  v2 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v38, v2);
  v3 = (unsigned __int64 *)a1[4];
  v4 = a1[5];
  v28 = 0LL;
  v29 = 1LL;
  v30 = 0LL;
  v5 = a1[2];
  if ( !v5 )
  {
    v22 = 1LL;
    v21 = 0LL;
    goto LABEL_19;
  }
  v6 = a1[1];
  v7 = v6 + 24 * v5;
  v8 = v6 + 24;
  v33 = v7;
  do
  {
    v32 = v6;
    v9 = *(_QWORD *)(v6 + 8);
    v10 = *(_QWORD *)(v6 + 16);
    v6 = v8;
    if ( (unsigned __int8)std::path::Path::is_dir(v9, v10) )
    {
      *(_QWORD *)&v11 = uucore::util_name();
      *(_OWORD *)v34.m256i_i8 = v11;
      v26 = &v34;
      v27 = <&T as core::fmt::Display>::fmt;
      v23.m256i_i64[0] = (__int64)&unk_E8AD0;
      v23.m256i_i64[1] = 2LL;
      *(_QWORD *)&v24 = 0LL;
      v23.m256i_i64[2] = (__int64)&v26;
      v23.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v23);
      v34.m256i_i64[0] = (__int64)&v32;
      v34.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v23.m256i_i64[0] = (__int64)&unk_E8AF0;
      v23.m256i_i64[1] = 2LL;
      *(_QWORD *)&v24 = 0LL;
      v23.m256i_i64[2] = (__int64)&v34;
      v23.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v23);
      uucore::mods::error::set_exit_code(1LL);
      goto LABEL_3;
    }
    uu_expand::open(&v34, *(_QWORD *)(v32 + 8), *(_QWORD *)(v32 + 16));
    if ( !v34.m256i_i64[0] )
    {
      v31 = *(_OWORD *)&v34.m256i_u64[1];
      v26 = (__m256i *)uucore::util_name();
      v27 = v19;
      v37[0] = &v26;
      v37[1] = <&T as core::fmt::Display>::fmt;
      v23.m256i_i64[0] = (__int64)&unk_E8AD0;
      v23.m256i_i64[1] = 2LL;
      *(_QWORD *)&v24 = 0LL;
      v23.m256i_i64[2] = (__int64)v37;
      v23.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v23);
      v26 = (__m256i *)&v31;
      v27 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v23.m256i_i64[0] = (__int64)&unk_E8B10;
      v23.m256i_i64[1] = 2LL;
      *(_QWORD *)&v24 = 0LL;
      v23.m256i_i64[2] = (__int64)&v26;
      v23.m256i_i64[3] = 1LL;
      std::io::stdio::_eprint(&v23);
      uucore::mods::error::set_exit_code(1LL);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
        v31,
        *((_QWORD *)&v31 + 1));
      goto LABEL_3;
    }
    v25 = v36;
    v24 = v35;
    v23 = v34;
    while ( 1 )
    {
      v12 = ((__int64 (__fastcall *)(__m256i *, __int64 *))std::io::read_until)(&v23, &v28);
      if ( (v12 & 1) == 0 )
        break;
      if ( v30 )
        goto LABEL_17;
LABEL_13:
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(
        v12,
        v13,
        v13,
        v14,
        v15,
        v16,
        v23.m256i_i64[0],
        v23.m256i_i64[1],
        v23.m256i_i64[2],
        v23.m256i_i64[3],
        v24,
        *((_QWORD *)&v24 + 1),
        v25);
      v17 = uu_expand::expand_line((__int64)&v28, v38, v3, v4, (__int64)a1);
      v18 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v17);
      if ( v18 )
      {
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v23);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v28, v29);
        goto LABEL_20;
      }
    }
    if ( v13 )
      goto LABEL_13;
    v13 = 0LL;
LABEL_17:
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(
      v12,
      v13,
      v13,
      v14,
      v15,
      v16,
      v23.m256i_i64[0],
      v23.m256i_i64[1],
      v23.m256i_i64[2],
      v23.m256i_i64[3],
      v24,
      *((_QWORD *)&v24 + 1),
      v25);
    v7 = v33;
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v23);
LABEL_3:
    v8 = v6 + 24;
  }
  while ( v6 != v7 );
  v21 = v28;
  v22 = v29;
LABEL_19:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v21, v22);
  v18 = 0LL;
LABEL_20:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v38);
  return v18;
}