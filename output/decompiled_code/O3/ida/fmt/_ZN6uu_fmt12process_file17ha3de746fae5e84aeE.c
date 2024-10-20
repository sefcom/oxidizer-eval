__int64 __fastcall uu_fmt::process_file(_BYTE *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // r15
  __int64 *v6; // rax
  __int64 *v7; // r14
  __int64 (__fastcall **v8)(); // r15
  __int64 v9; // r12
  int v10; // ebp
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int128 v14; // kr00_16
  size_t v15; // r12
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 *v23; // rax
  __int64 *v24; // r14
  __int64 (__fastcall **v25)(); // r15
  __int64 (__fastcall *v26)(); // rsi
  __int64 *v28; // r14
  __int64 (__fastcall **v29)(); // r15
  __int64 (__fastcall *v30)(); // rsi
  unsigned __int64 *v31; // [rsp+8h] [rbp-1B0h]
  __int64 v33; // [rsp+18h] [rbp-1A0h] BYREF
  __int64 v34; // [rsp+20h] [rbp-198h]
  __int128 v35; // [rsp+28h] [rbp-190h]
  __int64 v36; // [rsp+38h] [rbp-180h]
  __int64 *v37; // [rsp+40h] [rbp-178h]
  __int64 (__fastcall **v38)(); // [rsp+48h] [rbp-170h]
  unsigned __int64 v39; // [rsp+50h] [rbp-168h] BYREF
  _QWORD v40[9]; // [rsp+58h] [rbp-160h] BYREF
  char v41; // [rsp+A0h] [rbp-118h]
  __int64 v42; // [rsp+A8h] [rbp-110h] BYREF
  __int128 v43; // [rsp+B0h] [rbp-108h]
  size_t v44; // [rsp+C0h] [rbp-F8h]
  __int128 v45; // [rsp+C8h] [rbp-F0h]
  __int128 v46; // [rsp+D8h] [rbp-E0h]
  __int128 v47; // [rsp+E8h] [rbp-D0h]
  __int128 v48; // [rsp+F8h] [rbp-C0h]
  __int128 v49; // [rsp+108h] [rbp-B0h]
  __int64 v50; // [rsp+118h] [rbp-A0h] BYREF
  __int128 v51; // [rsp+120h] [rbp-98h]
  size_t n; // [rsp+130h] [rbp-88h]
  __int128 v53; // [rsp+138h] [rbp-80h]
  __int128 v54; // [rsp+148h] [rbp-70h]
  __int128 v55; // [rsp+158h] [rbp-60h]
  __int128 v56; // [rsp+168h] [rbp-50h]
  __int128 v57; // [rsp+178h] [rbp-40h]

  if ( a2 == 1 && *a1 == 45 )
  {
    v5 = std::io::stdio::stdin();
    v6 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v6 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v7 = v6;
    *v6 = v5;
    v8 = (__int64 (__fastcall **)())&unk_EC2A8;
  }
  else
  {
    v42 = 0x1B600000000LL;
    LODWORD(v43) = 1;
    WORD2(v43) = 0;
    std::fs::OpenOptions::_open(&v50, &v42, a1, a2);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v39,
      &v50,
      a1,
      a2);
    v9 = v39;
    if ( v39 )
      return v9;
    v10 = v40[0];
    v11 = (__int64 *)_rust_alloc(4LL, 4LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v7 = v11;
    *(_DWORD *)v11 = v10;
    v8 = &off_EC250;
  }
  v12 = _rust_alloc(0x2000LL, 1LL);
  if ( !v12 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v33 = v12;
  v34 = 0x2000LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = v7;
  v38 = v8;
  v39 = 0x8000000000000002LL;
  v40[6] = a3;
  v40[7] = &v33;
  v40[8] = a3;
  v41 = 1;
  v31 = &v39;
  while ( 1 )
  {
    while ( 1 )
    {
      <uu_fmt::parasplit::ParagraphStream as core::iter::traits::iterator::Iterator>::next(&v50, &v39);
      if ( v50 != 0x8000000000000000LL )
        break;
      v14 = v51;
      v15 = n;
      v16 = a4[2];
      if ( n >= *a4 - v16 )
      {
        v17 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, *((_QWORD *)&v51 + 1), n);
      }
      else
      {
        memcpy((void *)(v16 + a4[1]), *((const void **)&v51 + 1), n);
        a4[2] = v15 + v16;
        v17 = 0LL;
      }
      v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v17);
      if ( v9
        || ((v18 = a4[2], (unsigned __int64)(*a4 - v18) <= 1)
          ? (v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, asc_19671, 1LL))
          : (*(_BYTE *)(a4[1] + v18) = 10, a4[2] = v18 + 1, v19 = 0LL),
            (v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v19)) != 0) )
      {
        if ( (_QWORD)v14 )
          _rust_dealloc(*((_QWORD *)&v14 + 1), v14, 1LL);
LABEL_36:
        v22 = v39;
        if ( v39 + 0x7FFFFFFFFFFFFFFFLL >= 2 )
        {
          if ( v39 == 0x8000000000000000LL )
          {
            v23 = v40;
            v22 = v40[0];
            if ( !v40[0] )
              goto LABEL_42;
LABEL_41:
            _rust_dealloc(v23[1], v22, 1LL);
          }
          else
          {
            v23 = &v39;
            if ( v39 )
              goto LABEL_41;
          }
        }
LABEL_42:
        if ( v34 )
          _rust_dealloc(v33, v34, 1LL);
        v24 = v37;
        v25 = v38;
        if ( *v38 )
          ((void (__fastcall *)(__int64 *))*v38)(v37);
        v26 = v25[1];
        if ( v26 )
          _rust_dealloc(v24, v26, v25[2]);
        return v9;
      }
      if ( (_QWORD)v14 )
        _rust_dealloc(*((_QWORD *)&v14 + 1), v14, 1LL);
    }
    if ( v50 == 0x8000000000000001LL )
      break;
    v42 = v50;
    v44 = n;
    v43 = v51;
    v49 = v57;
    v48 = v56;
    v47 = v55;
    v46 = v54;
    v45 = v53;
    v13 = uu_fmt::linebreak::break_lines(&v42, a3, a4);
    v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v13);
    if ( v9 )
    {
      core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(&v42);
      goto LABEL_36;
    }
    core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(&v42);
  }
  v20 = v39;
  if ( v39 + 0x7FFFFFFFFFFFFFFFLL >= 2 )
  {
    if ( v39 == 0x8000000000000000LL )
    {
      v31 = v40;
      v20 = v40[0];
    }
    if ( v20 )
      _rust_dealloc(v31[1], v20, 1LL);
  }
  v21 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a4);
  if ( !v21 )
    v21 = <std::io::stdio::Stdout as std::io::Write>::flush(a4 + 4);
  v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v21);
  if ( v9 )
    goto LABEL_42;
  if ( v34 )
    _rust_dealloc(v33, v34, 1LL);
  v28 = v37;
  v29 = v38;
  if ( *v38 )
    ((void (__fastcall *)(__int64 *))*v38)(v37);
  v30 = v29[1];
  if ( v30 )
    _rust_dealloc(v28, v30, v29[2]);
  return 0LL;
}
