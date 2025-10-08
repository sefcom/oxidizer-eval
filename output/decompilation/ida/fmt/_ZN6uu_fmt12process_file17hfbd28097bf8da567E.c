__int64 __fastcall uu_fmt::process_file(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 (__fastcall **v7)(); // rdx
  __int64 v8; // r14
  void *v9; // r13
  size_t v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD v20[10]; // [rsp+10h] [rbp-228h] BYREF
  char v21; // [rsp+60h] [rbp-1D8h]
  _BYTE v22[56]; // [rsp+68h] [rbp-1D0h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-198h] BYREF
  void *src; // [rsp+B0h] [rbp-188h]
  size_t n; // [rsp+B8h] [rbp-180h]
  __int128 v26; // [rsp+C0h] [rbp-178h]
  __int128 v27; // [rsp+D0h] [rbp-168h]
  __int128 v28; // [rsp+E0h] [rbp-158h]
  __int128 v29; // [rsp+F0h] [rbp-148h]
  __int128 v30; // [rsp+100h] [rbp-138h]
  __int128 v31; // [rsp+150h] [rbp-E8h] BYREF
  void *v32; // [rsp+160h] [rbp-D8h]
  size_t v33; // [rsp+168h] [rbp-D0h]
  __int128 v34; // [rsp+170h] [rbp-C8h]
  __int128 v35; // [rsp+180h] [rbp-B8h]
  __int128 v36; // [rsp+190h] [rbp-A8h]
  __int128 v37; // [rsp+1A0h] [rbp-98h]
  __int128 v38; // [rsp+1B0h] [rbp-88h]

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, asc_19EEA, 1LL) )
  {
    v5 = std::io::stdio::stdin();
    v6 = alloc::boxed::Box<T>::new(v5);
    v7 = (__int64 (__fastcall **)())&unk_F07E0;
    goto LABEL_3;
  }
  std::fs::File::open(&v31, a1, a2);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v23,
    &v31,
    a1,
    a2);
  v13 = v23;
  if ( (_QWORD)v23 )
    return v13;
  LODWORD(v20[0]) = DWORD2(v23);
  std::fs::File::metadata(&v31, v20);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v23,
    &v31,
    a1,
    a2);
  if ( (_DWORD)v23 == 2 )
  {
    v13 = *((_QWORD *)&v23 + 1);
LABEL_28:
    core::ptr::drop_in_place<std::fs::File>(v20);
    return v13;
  }
  if ( (WORD4(v27) & 0xF000) == 0x4000 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v23, aReadError, 10LL);
    v32 = src;
    v31 = v23;
    LODWORD(v33) = 1;
    v13 = alloc::boxed::Box<T>::new(&v31);
    goto LABEL_28;
  }
  v6 = alloc::boxed::Box<T>::new(LODWORD(v20[0]));
  v7 = &off_F0788;
LABEL_3:
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v22, v6, v7);
  v20[0] = 0x8000000000000002LL;
  v20[7] = a3;
  v20[8] = v22;
  v20[9] = a3;
  v21 = 1;
  while ( 1 )
  {
    <uu_fmt::parasplit::ParagraphStream as core::iter::traits::iterator::Iterator>::next(&v23, v20);
    if ( (_QWORD)v23 == 0x8000000000000001LL )
      break;
    v8 = *((_QWORD *)&v23 + 1);
    v9 = src;
    v10 = n;
    if ( (_QWORD)v23 == 0x8000000000000000LL )
    {
      v11 = a4[2];
      if ( n >= *a4 - v11 )
      {
        v12 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, src, n);
      }
      else
      {
        memcpy((void *)(v11 + a4[1]), src, n);
        a4[2] = v10 + v11;
        v12 = 0LL;
      }
      v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v12);
      if ( v13
        || ((v14 = a4[2], (unsigned __int64)(*a4 - v14) <= 1)
          ? (v15 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, asc_19C48, 1LL))
          : (*(_BYTE *)(a4[1] + v14) = 10, a4[2] = v14 + 1, v15 = 0LL),
            (v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15)) != 0) )
      {
        core::ptr::drop_in_place<alloc::string::String>(v8, v9);
LABEL_22:
        core::ptr::drop_in_place<uu_fmt::parasplit::ParagraphStream>(v20);
        goto LABEL_23;
      }
      core::ptr::drop_in_place<alloc::string::String>(v8, v9);
    }
    else
    {
      v31 = v23;
      v32 = src;
      v33 = n;
      v38 = v30;
      v37 = v29;
      v36 = v28;
      v35 = v27;
      v34 = v26;
      v16 = uu_fmt::linebreak::break_lines((__int64)&v31, a3, a4);
      v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v16);
      core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(&v31);
      if ( v13 )
        goto LABEL_22;
    }
  }
  core::ptr::drop_in_place<uu_fmt::parasplit::ParagraphStream>(v20);
  v17 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
  v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v17);
  if ( !v13 )
  {
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v22);
    return 0LL;
  }
LABEL_23:
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v22);
  return v13;
}