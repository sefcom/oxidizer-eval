__int64 __fastcall uu_fmt::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // edx
  unsigned __int8 v11; // al
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int128 v18; // [rsp+0h] [rbp-3D8h] BYREF
  __int128 *v19; // [rsp+10h] [rbp-3C8h]
  __int128 v20; // [rsp+18h] [rbp-3C0h] BYREF
  __int128 v21; // [rsp+28h] [rbp-3B0h]
  __int128 v22; // [rsp+38h] [rbp-3A0h]
  __int64 v23; // [rsp+48h] [rbp-390h]
  _BYTE v24[8]; // [rsp+50h] [rbp-388h] BYREF
  __int64 v25; // [rsp+58h] [rbp-380h]
  unsigned __int64 v26; // [rsp+60h] [rbp-378h]
  __int128 v27; // [rsp+68h] [rbp-370h] BYREF
  _BYTE v28[40]; // [rsp+78h] [rbp-360h]
  __int128 v29; // [rsp+A0h] [rbp-338h]
  __int64 v30; // [rsp+B0h] [rbp-328h]
  _QWORD v31[2]; // [rsp+B8h] [rbp-320h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-310h] BYREF
  __int128 *v33; // [rsp+D8h] [rbp-300h]
  __int128 v34; // [rsp+E0h] [rbp-2F8h] BYREF
  __int128 *v35; // [rsp+F0h] [rbp-2E8h]
  __int128 v36; // [rsp+F8h] [rbp-2E0h]
  __int128 v37; // [rsp+108h] [rbp-2D0h]
  __int128 v38; // [rsp+118h] [rbp-2C0h]
  __int64 v39; // [rsp+128h] [rbp-2B0h]

  core::iter::traits::iterator::Iterator::collect(v24, a1, a2);
  if ( v26 >= 2 )
  {
    std::sys::os_str::bytes::Slice::to_string_lossy(&v20, *(_QWORD *)(v25 + 32), *(_QWORD *)(v25 + 40));
    v2 = *((_QWORD *)&v20 + 1);
    v3 = v21;
    LODWORD(v34) = 0;
    v4 = core::char::methods::encode_utf8_raw(&v34);
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v2, v3, v4, v5) )
    {
      *(_QWORD *)&v34 = *((_QWORD *)&v20 + 1);
      *((_QWORD *)&v34 + 1) = *((_QWORD *)&v20 + 1) + v21;
      if ( !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v34, 1LL) )
      {
        if ( (unsigned int)core::str::validations::next_code_point(&v34) )
        {
          if ( (unsigned int)(v10 - 48) < 0xA )
          {
            *(_QWORD *)&v34 = *((_QWORD *)&v20 + 1);
            *((_QWORD *)&v34 + 1) = *((_QWORD *)&v20 + 1) + v21;
            v35 = (_OWORD *)(&dword_0 + 2);
            v11 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v34);
            if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v11) )
            {
              v12 = *((_QWORD *)&v20 + 1);
              v13 = v21;
              LODWORD(v34) = 0;
              v14 = core::char::methods::encode_utf8_raw(&v34);
              v16 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v14, v15, v12, v13);
              if ( !v16 )
                core::option::unwrap_failed(&off_124D38);
              *(_QWORD *)&v27 = 0LL;
              *((_QWORD *)&v27 + 1) = v16;
              *(_QWORD *)v28 = v17;
              v28[8] = 1;
              *(_QWORD *)&v18 = &v27;
              *((_QWORD *)&v18 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v34 = &off_124D50;
              *((_QWORD *)&v34 + 1) = 1LL;
              v35 = &v18;
              v36 = 1uLL;
              core::option::Option<T>::map_or_else(&v32, &v34);
              LODWORD(v36) = 1;
              v34 = v32;
              v35 = v33;
              v6 = alloc::boxed::Box<T>::new(&v34);
              core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v20);
              goto LABEL_15;
            }
          }
        }
      }
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v20);
  }
  uu_fmt::uu_app(&v34);
  clap_builder::builder::command::Command::try_get_matches_from(&v27, &v34, v24);
  if ( (_QWORD)v27 == 0x8000000000000000LL )
  {
    v6 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v27 + 1));
LABEL_15:
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v24);
    return v6;
  }
  v23 = *(_QWORD *)&v28[32];
  v22 = *(_OWORD *)&v28[16];
  v21 = *(_OWORD *)v28;
  v20 = v27;
  uu_fmt::extract_files((__int64)&v34, (__int64)&v20);
  v6 = *((_QWORD *)&v34 + 1);
  if ( (_QWORD)v34 == 0x8000000000000000LL )
  {
LABEL_14:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
    goto LABEL_15;
  }
  v18 = v34;
  v19 = v35;
  uu_fmt::FmtOptions::from_matches((__int64)&v34, (__int64)&v20);
  v6 = *((_QWORD *)&v34 + 1);
  if ( (_QWORD)v34 == 0x8000000000000001LL )
  {
LABEL_13:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v18);
    goto LABEL_14;
  }
  v30 = v39;
  v29 = v38;
  *(_OWORD *)&v28[24] = v37;
  *(_OWORD *)&v28[8] = v36;
  v27 = v34;
  *(_QWORD *)v28 = v35;
  v7 = std::io::stdio::stdout(&v34);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v34, 0x2000LL, v7);
  v31[0] = *((_QWORD *)&v18 + 1);
  v31[1] = *((_QWORD *)&v18 + 1) + 24LL * (_QWORD)v19;
  while ( 1 )
  {
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v31);
    if ( !v8 )
      break;
    v6 = uu_fmt::process_file(*(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16), (__int64)&v27, &v34);
    if ( v6 )
    {
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v34);
      core::ptr::drop_in_place<uu_fmt::FmtOptions>(&v27);
      goto LABEL_13;
    }
  }
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v34);
  core::ptr::drop_in_place<uu_fmt::FmtOptions>(&v27);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v18);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v24);
  return 0LL;
}
