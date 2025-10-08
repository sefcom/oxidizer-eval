__int64 __fastcall uu_fmt::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // r15
  __int128 v4; // kr00_16
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int8 v7; // al
  int v8; // edx
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbp
  _QWORD v24[2]; // [rsp+0h] [rbp-3C8h] BYREF
  __int128 v25; // [rsp+18h] [rbp-3B0h] BYREF
  _BYTE v26[40]; // [rsp+28h] [rbp-3A0h]
  __int128 v27; // [rsp+50h] [rbp-378h]
  __int64 v28; // [rsp+60h] [rbp-368h]
  __int128 v29; // [rsp+68h] [rbp-360h] BYREF
  __int128 v30; // [rsp+78h] [rbp-350h]
  __int128 v31; // [rsp+88h] [rbp-340h]
  __int64 v32; // [rsp+98h] [rbp-330h]
  _BYTE v33[8]; // [rsp+A0h] [rbp-328h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-320h]
  unsigned __int64 v35; // [rsp+B0h] [rbp-318h]
  __int128 v36; // [rsp+B8h] [rbp-310h] BYREF
  _QWORD *v37; // [rsp+C8h] [rbp-300h]
  __int128 dest; // [rsp+D0h] [rbp-2F8h] BYREF
  _QWORD *v39; // [rsp+E0h] [rbp-2E8h]
  __int128 v40; // [rsp+E8h] [rbp-2E0h]
  __int128 v41; // [rsp+F8h] [rbp-2D0h]
  __int128 v42; // [rsp+108h] [rbp-2C0h]
  __int64 v43; // [rsp+118h] [rbp-2B0h]

  core::iter::traits::iterator::Iterator::collect(v33, a1, a2);
  v2 = v34;
  v3 = v35;
  if ( v35 >= 2 )
  {
    alloc::string::String::from_utf8_lossy(&v29, *(_QWORD *)(v34 + 32), *(_QWORD *)(v34 + 40));
    v4 = v29;
    v5 = v30;
    LODWORD(dest) = 0;
    v6 = core::char::methods::encode_utf8_raw(&dest);
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(*((_QWORD *)&v4 + 1), v5, v6) )
    {
      *(_QWORD *)&dest = *((_QWORD *)&v4 + 1);
      *((_QWORD *)&dest + 1) = *((_QWORD *)&v4 + 1) + v5;
      if ( !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&dest, 1LL) )
      {
        v7 = core::str::validations::next_code_point(&dest);
        if ( (((unsigned int)(v8 - 48) < 0xA) & v7) != 0 )
        {
          *(_QWORD *)&dest = *((_QWORD *)&v4 + 1);
          *((_QWORD *)&dest + 1) = *((_QWORD *)&v4 + 1) + v5;
          v39 = (_QWORD *)(&dword_0 + 2);
          v9 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&dest);
          if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v9) )
          {
            LODWORD(dest) = 0;
            v10 = core::char::methods::encode_utf8_raw(&dest);
            v11 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v10, *((_QWORD *)&v4 + 1), v5);
            if ( !v11 )
              core::option::unwrap_failed(&off_EF688);
            *(_QWORD *)&v25 = 0LL;
            *((_QWORD *)&v25 + 1) = v11;
            *(_QWORD *)v26 = v12;
            v26[8] = 1;
            v24[0] = &v25;
            v24[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&dest = &off_EF678;
            *((_QWORD *)&dest + 1) = 1LL;
            v39 = v24;
            v40 = 1uLL;
            core::option::Option<T>::map_or_else(&v36, &dest);
            LODWORD(v40) = 1;
            dest = v36;
            v39 = v37;
            v13 = alloc::boxed::Box<T>::new(&dest);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v4, *((_QWORD *)&v4 + 1));
            goto LABEL_20;
          }
        }
      }
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v4, *((_QWORD *)&v4 + 1));
  }
  uu_fmt::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v25, &dest, v2, v3);
  if ( __OFSUB__(-(__int64)v25, 1LL) )
  {
    v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
            *((_QWORD *)&v25 + 1),
            &dest,
            v14,
            -(__int64)v25);
    goto LABEL_20;
  }
  v32 = *(_QWORD *)&v26[32];
  v31 = *(_OWORD *)&v26[16];
  v30 = *(_OWORD *)v26;
  v29 = v25;
  uu_fmt::extract_files(&dest, &v29);
  v13 = *((_QWORD *)&dest + 1);
  v19 = v39;
  if ( (_QWORD)dest == 0x8000000000000000LL )
  {
LABEL_19:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
    goto LABEL_20;
  }
  uu_fmt::FmtOptions::from_matches(&dest, &v29, v15, v16, v17, v18, dest, *((_QWORD *)&dest + 1), v39);
  v20 = *((_QWORD *)&dest + 1);
  if ( (_QWORD)dest == 0x8000000000000001LL )
  {
LABEL_18:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v24);
    v13 = v20;
    goto LABEL_19;
  }
  v28 = v43;
  v27 = v42;
  *(_OWORD *)&v26[24] = v41;
  *(_OWORD *)&v26[8] = v40;
  v25 = dest;
  *(_QWORD *)v26 = v39;
  v21 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&dest, v21);
  v22 = v13 + 24LL * (_QWORD)v19;
  while ( v13 != v22 && v13 )
  {
    v20 = uu_fmt::process_file(*(_QWORD *)(v13 + 8), *(_QWORD *)(v13 + 16), &v25, &dest);
    v13 += 24LL;
    if ( v20 )
    {
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&dest);
      core::ptr::drop_in_place<uu_fmt::FmtOptions>(&v25);
      goto LABEL_18;
    }
  }
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&dest);
  core::ptr::drop_in_place<uu_fmt::FmtOptions>(&v25);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v24);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
  v13 = 0LL;
LABEL_20:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v33);
  return v13;
}