__int64 __fastcall uu_tsort::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 (__fastcall **v4)(); // rcx
  __int64 *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 inclusive; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v20; // rax
  __int64 i; // rax
  __int64 (__fastcall *v22)(); // rdx
  unsigned __int8 v23; // al
  char v24; // [rsp+Bh] [rbp-4FDh]
  int v25; // [rsp+Ch] [rbp-4FCh] BYREF
  __int128 v26; // [rsp+10h] [rbp-4F8h] BYREF
  __int128 v27; // [rsp+20h] [rbp-4E8h]
  __int128 v28; // [rsp+30h] [rbp-4D8h]
  _BYTE v29[24]; // [rsp+40h] [rbp-4C8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-4B0h] BYREF
  __int128 v31; // [rsp+60h] [rbp-4A8h] BYREF
  __int64 v32; // [rsp+70h] [rbp-498h]
  __int64 *v33; // [rsp+80h] [rbp-488h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+88h] [rbp-480h]
  __int64 v35; // [rsp+90h] [rbp-478h] BYREF
  __int64 v36; // [rsp+98h] [rbp-470h]
  __int64 v37; // [rsp+A0h] [rbp-468h]
  __int64 v38; // [rsp+A8h] [rbp-460h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-458h]
  __int128 v40; // [rsp+B8h] [rbp-450h]
  __int128 v41; // [rsp+C8h] [rbp-440h]
  __int64 v42; // [rsp+D8h] [rbp-430h]
  __int64 v43; // [rsp+E0h] [rbp-428h] BYREF
  _QWORD v44[2]; // [rsp+E8h] [rbp-420h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-410h] BYREF
  __int64 v46; // [rsp+100h] [rbp-408h] BYREF
  __int128 v47; // [rsp+108h] [rbp-400h]
  __int64 v48; // [rsp+118h] [rbp-3F0h]
  _OWORD v49[2]; // [rsp+120h] [rbp-3E8h] BYREF
  __int64 v50; // [rsp+140h] [rbp-3C8h]
  __int64 v51; // [rsp+148h] [rbp-3C0h]
  _QWORD v52[2]; // [rsp+150h] [rbp-3B8h] BYREF
  __int128 v53; // [rsp+160h] [rbp-3A8h]
  __int128 v54; // [rsp+170h] [rbp-398h]
  __int64 v55; // [rsp+180h] [rbp-388h]
  __int128 v56; // [rsp+188h] [rbp-380h] BYREF
  __int64 v57; // [rsp+198h] [rbp-370h]
  __int128 v58; // [rsp+1A0h] [rbp-368h] BYREF
  __int64 v59; // [rsp+1B0h] [rbp-358h]
  __int128 v60; // [rsp+1B8h] [rbp-350h] BYREF
  __int64 v61; // [rsp+1C8h] [rbp-340h]
  __int128 v62; // [rsp+1D0h] [rbp-338h] BYREF
  __int128 v63; // [rsp+1E0h] [rbp-328h]
  __int128 v64; // [rsp+1F0h] [rbp-318h]
  __int128 v65; // [rsp+200h] [rbp-308h]
  __int16 v66; // [rsp+210h] [rbp-2F8h]
  _BYTE v67[640]; // [rsp+218h] [rbp-2F0h] BYREF
  _QWORD v68[2]; // [rsp+498h] [rbp-70h] BYREF
  _BYTE v69[40]; // [rsp+4A8h] [rbp-60h] BYREF
  __int16 v70; // [rsp+4D0h] [rbp-38h]

  uu_tsort::uu_app(&v62);
  clap_builder::builder::command::Command::try_get_matches_from(&v38, &v62, a1, a2);
  if ( v38 != 0x8000000000000000LL )
  {
    v55 = v42;
    v54 = v41;
    v53 = v40;
    v52[0] = v38;
    v52[1] = v39;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v62, v52, aFile, 4LL);
    v3 = clap_builder::parser::error::MatchesError::unwrap(aFile, 4LL, &v62);
    if ( !v3 )
      core::option::expect_failed(aValueIsRequire, 25LL, &off_11E828);
    v30 = v3;
    v24 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16), asc_14DBB, 1LL);
    if ( v24 )
    {
      v43 = std::io::stdio::stdin();
      v4 = (__int64 (__fastcall **)())&unk_11E940;
      v5 = &v43;
      goto LABEL_6;
    }
    v7 = *(_QWORD *)(v30 + 8);
    v8 = *(_QWORD *)(v30 + 16);
    if ( (unsigned __int8)std::path::Path::is_dir(v7, v8) )
    {
      *(_QWORD *)&v26 = &v30;
      *((_QWORD *)&v26 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v62 = &unk_11E788;
      *((_QWORD *)&v62 + 1) = 2LL;
      *(_QWORD *)&v64 = 0LL;
      *(_QWORD *)&v63 = &v26;
      *((_QWORD *)&v63 + 1) = 1LL;
      core::option::Option<T>::map_or_else(&v56, &v62);
      DWORD2(v63) = 1;
      v62 = v56;
      *(_QWORD *)&v63 = v57;
      v2 = alloc::boxed::Box<T>::new(&v62);
    }
    else
    {
      std::fs::File::open(&v62, v7, v8);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v26,
        &v62,
        v30);
      v2 = v26;
      if ( !(_QWORD)v26 )
      {
        v25 = DWORD2(v26);
        v4 = &off_11E840;
        v5 = (__int64 *)&v25;
LABEL_6:
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v38, 0x2000LL, v5, v4);
        v35 = 0LL;
        v36 = 1LL;
        v37 = 0LL;
        if ( <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(&v38, &v35) )
        {
          v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
LABEL_22:
          core::ptr::drop_in_place<alloc::string::String>(&v35);
          core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(v38, v39);
          if ( !v24 )
            core::ptr::drop_in_place<std::fs::File>(&v25);
          goto LABEL_24;
        }
        std::thread::local::LocalKey<T>::try_with(&v62);
        v9 = core::result::Result<T,E>::expect(&v62);
        v49[0] = *(_OWORD *)&off_11E9B0;
        v49[1] = xmmword_11E9C0;
        v50 = v9;
        v51 = v10;
        v11 = v37;
        <char as core::str::pattern::Pattern>::into_searcher(&v26, v36, v37);
        v65 = v28;
        v64 = v27;
        v63 = v26;
        *(_QWORD *)&v62 = 0LL;
        *((_QWORD *)&v62 + 1) = v11;
        v66 = 0;
LABEL_13:
        inclusive = core::str::iter::SplitInternal<P>::next_inclusive();
        if ( inclusive )
        {
          v13 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v67, inclusive);
          if ( v13 )
          {
            v15 = v14;
            <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v69, v13);
            v68[0] = 0LL;
            v68[1] = v15;
            v70 = 1;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v29, v68);
            if ( *(_QWORD *)&v29[16] )
            {
              v31 = *(_OWORD *)&v29[8];
              v32 = 2LL;
              while ( 1 )
              {
                v16 = (__int64 *)<core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(&v31);
                if ( !v16 )
                {
                  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v29);
                  goto LABEL_13;
                }
                if ( v17 != 2 )
                  break;
                uu_tsort::Graph::add_edge((__int64)v49, *v16, v16[1], v16[2], v16[3]);
              }
              v18 = *(_OWORD *)(v30 + 8);
              v46 = 0LL;
              v47 = v18;
              LOBYTE(v48) = 0;
              v33 = &v46;
              v34 = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v26 = &unk_11E7A8;
              *((_QWORD *)&v26 + 1) = 2LL;
              *(_QWORD *)&v28 = 0LL;
              *(_QWORD *)&v27 = &v33;
              *((_QWORD *)&v27 + 1) = 1LL;
              core::option::Option<T>::map_or_else(&v58, &v26);
              DWORD2(v27) = 1;
              v26 = v58;
              *(_QWORD *)&v27 = v59;
              v2 = alloc::boxed::Box<T>::new(&v26);
              core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v29);
              core::ptr::drop_in_place<uu_tsort::Graph>(v49);
              goto LABEL_22;
            }
            core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v29);
          }
        }
        uu_tsort::Graph::run_tsort((__int64)&v46, v49);
        if ( v46 )
        {
          *(_QWORD *)&v29[16] = v48;
          *(_OWORD *)v29 = v47;
          *(_QWORD *)&v20 = uucore::util_name();
          v31 = v20;
          *(_QWORD *)&v26 = &v31;
          *((_QWORD *)&v26 + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v27 = &v30;
          *((_QWORD *)&v27 + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v62 = &unk_11E7C8;
          *((_QWORD *)&v62 + 1) = 3LL;
          *(_QWORD *)&v64 = 0LL;
          *(_QWORD *)&v63 = &v26;
          *((_QWORD *)&v63 + 1) = 2LL;
          core::option::Option<T>::map_or_else(&v60, &v62);
          v31 = v60;
          v32 = v61;
          v44[0] = *(_QWORD *)&v29[8];
          v44[1] = *(_QWORD *)&v29[8] + 16LL * *(_QWORD *)&v29[16];
          for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v44);
                i;
                i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v44) )
          {
            v45 = i;
            v33 = (__int64 *)uucore::util_name();
            v34 = v22;
            *(_QWORD *)&v26 = &v33;
            *((_QWORD *)&v26 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v27 = &v45;
            *((_QWORD *)&v27 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v62 = &unk_11E7F8;
            *((_QWORD *)&v62 + 1) = 3LL;
            *(_QWORD *)&v64 = 0LL;
            *(_QWORD *)&v63 = &v26;
            *((_QWORD *)&v63 + 1) = 2LL;
            v23 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v31, &v62);
            core::result::Result<T,E>::unwrap(v23);
          }
          *(_QWORD *)&v26 = &v31;
          *((_QWORD *)&v26 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v62 = &unk_14AF0;
          *((_QWORD *)&v62 + 1) = 1LL;
          *(_QWORD *)&v64 = 0LL;
          *(_QWORD *)&v63 = &v26;
          *((_QWORD *)&v63 + 1) = 1LL;
          std::io::stdio::_eprint(&v62);
          alloc::str::join_generic_copy(&v62, *(_QWORD *)&v29[8], *(_QWORD *)&v29[16], asc_14CA2, 1LL);
          *(_QWORD *)&v27 = v63;
          v26 = v62;
          v33 = (__int64 *)&v26;
          v34 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v62 = &unk_11E730;
          *((_QWORD *)&v62 + 1) = 2LL;
          *(_QWORD *)&v64 = 0LL;
          *(_QWORD *)&v63 = &v33;
          *((_QWORD *)&v63 + 1) = 1LL;
          std::io::stdio::_print(&v62);
          core::ptr::drop_in_place<alloc::string::String>(&v26);
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v26);
          *(_QWORD *)&v63 = v27;
          v62 = v26;
          DWORD2(v63) = 1;
          v2 = alloc::boxed::Box<T>::new(&v62);
          core::ptr::drop_in_place<alloc::string::String>(&v31);
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v29);
        }
        else
        {
          v32 = v48;
          v31 = v47;
          alloc::str::join_generic_copy(&v62, *((_QWORD *)&v47 + 1), v48, asc_14CA2, 1LL);
          *(_QWORD *)&v27 = v63;
          v26 = v62;
          *(_QWORD *)v29 = &v26;
          *(_QWORD *)&v29[8] = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v62 = &unk_11E730;
          *((_QWORD *)&v62 + 1) = 2LL;
          *(_QWORD *)&v64 = 0LL;
          *(_QWORD *)&v63 = v29;
          *((_QWORD *)&v63 + 1) = 1LL;
          std::io::stdio::_print(&v62);
          core::ptr::drop_in_place<alloc::string::String>(&v26);
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v31);
          v2 = 0LL;
        }
        core::ptr::drop_in_place<uu_tsort::Graph>(v49);
        core::ptr::drop_in_place<alloc::string::String>(&v35);
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(v38, v39);
        if ( !v24 )
          core::ptr::drop_in_place<std::fs::File>(&v25);
      }
    }
LABEL_24:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v52);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v39);
}
