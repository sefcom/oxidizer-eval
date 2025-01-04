__int64 __fastcall uu_fmt::process_file(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 (__fastcall **v7)(); // rcx
  __int64 v8; // rax
  __int64 v9; // rbp
  size_t v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  const char *v15; // rsi
  __int64 v16; // rax
  _QWORD v19[10]; // [rsp+8h] [rbp-220h] BYREF
  char v20; // [rsp+58h] [rbp-1D0h]
  _BYTE src[24]; // [rsp+60h] [rbp-1C8h] BYREF
  size_t v22; // [rsp+78h] [rbp-1B0h]
  __int128 v23; // [rsp+80h] [rbp-1A8h]
  __int128 v24; // [rsp+90h] [rbp-198h]
  __int128 v25; // [rsp+A0h] [rbp-188h]
  __int128 v26; // [rsp+B0h] [rbp-178h]
  __int128 v27; // [rsp+C0h] [rbp-168h]
  _BYTE dest[24]; // [rsp+110h] [rbp-118h] BYREF
  size_t v29; // [rsp+128h] [rbp-100h]
  __int128 v30; // [rsp+130h] [rbp-F8h]
  __int128 v31; // [rsp+140h] [rbp-E8h]
  __int128 v32; // [rsp+150h] [rbp-D8h]
  __int128 v33; // [rsp+160h] [rbp-C8h]
  __int128 v34; // [rsp+170h] [rbp-B8h]
  _BYTE v35[104]; // [rsp+1C0h] [rbp-68h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, asc_1D899, 1LL) )
  {
    v5 = std::io::stdio::stdin();
    v6 = alloc::boxed::Box<T>::new(v5);
    v7 = (__int64 (__fastcall **)())&unk_1264C8;
    goto LABEL_3;
  }
  std::fs::File::open(src, a1, a2);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    dest,
    src,
    a1,
    a2);
  v9 = *(_QWORD *)dest;
  if ( *(_QWORD *)dest )
    return v9;
  LODWORD(v19[0]) = *(_DWORD *)&dest[8];
  std::fs::File::metadata(src, v19);
  v15 = src;
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(dest);
  if ( *(_DWORD *)dest == 2 )
  {
    v9 = *(_QWORD *)&dest[8];
LABEL_29:
    core::ptr::drop_in_place<std::fs::File>(v19, v15);
    return v9;
  }
  if ( (WORD4(v31) & 0xF000) == 0x4000 )
  {
    v15 = aReadError;
    <T as alloc::slice::hack::ConvertVec>::to_vec(dest, aReadError, 10LL);
    *(_QWORD *)&src[16] = *(_QWORD *)&dest[16];
    *(_OWORD *)src = *(_OWORD *)dest;
    LODWORD(v22) = 1;
    v9 = alloc::boxed::Box<T>::new(src);
    goto LABEL_29;
  }
  v6 = alloc::boxed::Box<T>::new(LODWORD(v19[0]), src);
  v7 = &off_126470;
LABEL_3:
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v35, 0x2000LL, v6, v7);
  v19[0] = 0x8000000000000002LL;
  v19[7] = a3;
  v19[8] = v35;
  v19[9] = a3;
  v20 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      <uu_fmt::parasplit::ParagraphStream as core::iter::traits::iterator::Iterator>::next(dest, v19);
      if ( *(_QWORD *)dest != 0x8000000000000000LL )
        break;
      *(_OWORD *)src = *(_OWORD *)&dest[8];
      v10 = v29;
      *(_QWORD *)&src[16] = v29;
      v11 = a4[2];
      if ( v29 >= *a4 - v11 )
      {
        v12 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, *(_QWORD *)&dest[16], v29);
      }
      else
      {
        memcpy((void *)(v11 + a4[1]), *(const void **)&dest[16], v29);
        a4[2] = v10 + v11;
        v12 = 0LL;
      }
      v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v12);
      if ( v9
        || ((v13 = a4[2], (unsigned __int64)(*a4 - v13) <= 1)
          ? (v14 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, asc_1D8A4, 1LL))
          : (*(_BYTE *)(a4[1] + v13) = 10, a4[2] = v13 + 1, v14 = 0LL),
            (v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v14)) != 0) )
      {
        core::ptr::drop_in_place<alloc::string::String>(src);
        goto LABEL_25;
      }
      core::ptr::drop_in_place<alloc::string::String>(src);
    }
    if ( *(_QWORD *)dest == 0x8000000000000001LL )
      break;
    *(_QWORD *)src = *(_QWORD *)dest;
    v22 = v29;
    *(_OWORD *)&src[8] = *(_OWORD *)&dest[8];
    v27 = v34;
    v26 = v33;
    v25 = v32;
    v24 = v31;
    v23 = v30;
    v8 = uu_fmt::linebreak::break_lines((__int64)src, a3, a4);
    v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v8);
    if ( v9 )
    {
      core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(src);
LABEL_25:
      core::ptr::drop_in_place<uu_fmt::parasplit::ParagraphStream>(v19);
LABEL_26:
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v35);
      return v9;
    }
    core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(src);
  }
  core::ptr::drop_in_place<uu_fmt::parasplit::ParagraphStream>(v19);
  v16 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
  v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v16);
  if ( v9 )
    goto LABEL_26;
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v35);
  return 0LL;
}
