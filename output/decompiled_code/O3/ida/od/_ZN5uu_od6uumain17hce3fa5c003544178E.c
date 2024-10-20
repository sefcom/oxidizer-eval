__int64 __fastcall uu_od::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  const void *v9; // r15
  size_t v10; // r14
  __int64 v11; // rbx
  size_t v12; // r12
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r15
  char v16; // bp
  __int64 (__fastcall *v17)(); // r14
  unsigned __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 buffer; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int128 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  const void *v26; // r15
  size_t v27; // r14
  size_t v28; // r12
  __int128 v29; // rax
  __int128 v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rsi
  char v36; // [rsp+7h] [rbp-581h]
  __int64 (__fastcall *v37)(); // [rsp+8h] [rbp-580h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+10h] [rbp-578h]
  __int64 (__fastcall *v39)(); // [rsp+18h] [rbp-570h]
  __int128 *v40; // [rsp+20h] [rbp-568h]
  __int64 v41; // [rsp+28h] [rbp-560h]
  __int128 v42; // [rsp+30h] [rbp-558h]
  char v43; // [rsp+40h] [rbp-548h]
  __int64 v44; // [rsp+48h] [rbp-540h] BYREF
  __int64 v45; // [rsp+50h] [rbp-538h]
  __int64 v46; // [rsp+58h] [rbp-530h]
  __int128 v47; // [rsp+60h] [rbp-528h] BYREF
  size_t n; // [rsp+70h] [rbp-518h]
  __int128 v49; // [rsp+78h] [rbp-510h]
  __int128 v50; // [rsp+88h] [rbp-500h]
  __int128 v51; // [rsp+98h] [rbp-4F0h]
  __int128 v52; // [rsp+A8h] [rbp-4E0h]
  __int128 v53; // [rsp+B8h] [rbp-4D0h]
  __int64 v54; // [rsp+C8h] [rbp-4C0h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-4B8h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-4B0h]
  unsigned __int64 v57; // [rsp+E8h] [rbp-4A0h]
  __int64 v58; // [rsp+F8h] [rbp-490h]
  char v59; // [rsp+100h] [rbp-488h]
  char v60[8]; // [rsp+108h] [rbp-480h] BYREF
  __int64 v61; // [rsp+110h] [rbp-478h]
  __int64 v62; // [rsp+118h] [rbp-470h]
  char **v63; // [rsp+120h] [rbp-468h] BYREF
  __int64 v64; // [rsp+128h] [rbp-460h]
  _QWORD *v65; // [rsp+130h] [rbp-458h]
  __int128 v66; // [rsp+138h] [rbp-450h]
  __int128 v67; // [rsp+150h] [rbp-438h] BYREF
  __int64 v68; // [rsp+160h] [rbp-428h]
  char v69; // [rsp+168h] [rbp-420h]
  __int128 v70; // [rsp+170h] [rbp-418h] BYREF
  _BYTE v71[40]; // [rsp+180h] [rbp-408h]
  __int128 v72; // [rsp+1A8h] [rbp-3E0h]
  __int128 v73; // [rsp+1B8h] [rbp-3D0h]
  __int128 v74; // [rsp+1C8h] [rbp-3C0h]
  _OWORD v75[2]; // [rsp+1E0h] [rbp-3A8h] BYREF
  __int64 v76; // [rsp+208h] [rbp-380h]
  _QWORD v77[2]; // [rsp+210h] [rbp-378h] BYREF
  _OWORD v78[3]; // [rsp+220h] [rbp-368h] BYREF
  __int64 v79; // [rsp+250h] [rbp-338h]
  __int128 v80; // [rsp+258h] [rbp-330h] BYREF
  __int128 v81; // [rsp+268h] [rbp-320h]
  __int128 v82; // [rsp+278h] [rbp-310h] BYREF
  __int64 v83; // [rsp+288h] [rbp-300h]
  char **v84; // [rsp+290h] [rbp-2F8h] BYREF
  __int64 v85; // [rsp+298h] [rbp-2F0h]
  __int64 (__fastcall **v86)(); // [rsp+2A0h] [rbp-2E8h]
  __int64 v87; // [rsp+2A8h] [rbp-2E0h]
  __int64 v88; // [rsp+2B0h] [rbp-2D8h]
  _QWORD v89[50]; // [rsp+3B8h] [rbp-1D0h] BYREF
  char v90; // [rsp+54Dh] [rbp-3Bh]
  char v91; // [rsp+54Fh] [rbp-39h]

  uucore::Args::collect_ignore(v60, a1, a2);
  uu_od::uu_app(&v84);
  v2 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v60);
  clap_lex::RawArgs::new(&v37, v2);
  v55 = 0LL;
  if ( (v90 & 8) != 0 )
  {
    v3 = clap_lex::RawArgs::next_os(&v37, &v55);
    if ( v3 )
    {
      v5 = std::path::Path::file_stem(v3, v4);
      if ( v5 )
      {
        std::sys::os_str::bytes::Slice::to_str(&v47, v5);
        if ( !(_QWORD)v47 )
        {
          v26 = (const void *)*((_QWORD *)&v47 + 1);
          v27 = n;
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v47, n, 0LL);
          v11 = *((_QWORD *)&v47 + 1);
          if ( !(_QWORD)v47 )
          {
            v28 = n;
            memcpy((void *)n, v26, v27);
            *(_QWORD *)&v47 = v11;
            *((_QWORD *)&v47 + 1) = v28;
            n = v27;
            clap_lex::RawArgs::insert(&v37, &v55, &v47);
            v89[33] = 1LL;
            v89[34] = 0LL;
            if ( v89[0] != 0x8000000000000000LL )
            {
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v89);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v89);
            }
            v89[0] = 0x8000000000000000LL;
            clap_builder::builder::command::Command::_do_parse(&v70, &v84, &v37, v55);
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v47);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v47);
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v37);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37);
            goto LABEL_13;
          }
          goto LABEL_56;
        }
      }
    }
  }
  if ( (v91 & 2) != 0 )
    goto LABEL_12;
  v6 = clap_lex::RawArgs::next_os(&v37, &v55);
  if ( !v6 )
    goto LABEL_12;
  v8 = std::path::Path::file_name(v6, v7);
  if ( !v8 )
    goto LABEL_12;
  std::sys::os_str::bytes::Slice::to_str(&v47, v8);
  if ( (_QWORD)v47 || v89[0] != 0x8000000000000000LL )
    goto LABEL_12;
  v9 = (const void *)*((_QWORD *)&v47 + 1);
  v10 = n;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v47, n, 0LL);
  v11 = *((_QWORD *)&v47 + 1);
  if ( (_QWORD)v47 )
LABEL_56:
    alloc::raw_vec::handle_error(v11, n);
  v12 = n;
  memcpy((void *)n, v9, v10);
  v89[0] = v11;
  v89[1] = v12;
  v89[2] = v10;
LABEL_12:
  clap_builder::builder::command::Command::_do_parse(&v70, &v84, &v37, v55);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v37);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37);
LABEL_13:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v84);
  if ( (_QWORD)v70 == 0x8000000000000000LL )
  {
    v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v70 + 1));
    v15 = v14;
LABEL_17:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v60);
    goto LABEL_44;
  }
  v79 = *(_QWORD *)&v71[32];
  v78[2] = *(_OWORD *)&v71[16];
  v78[1] = *(_OWORD *)v71;
  v78[0] = v70;
  uu_od::OdOptions::new(&v70, v78, v61, v62);
  v13 = *((_QWORD *)&v70 + 1);
  v15 = *(_QWORD *)v71;
  if ( (_QWORD)v70 == 2LL )
  {
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v78);
    goto LABEL_17;
  }
  v53 = v74;
  v52 = v73;
  v51 = v72;
  v50 = *(_OWORD *)&v71[24];
  v49 = *(_OWORD *)&v71[8];
  v47 = v70;
  n = *(_QWORD *)v71;
  v69 = BYTE10(v74);
  v68 = *((_QWORD *)&v73 + 1);
  v67 = *(_OWORD *)v71;
  uu_od::open_input_peek_reader(
    &v70,
    *(_QWORD *)&v71[24],
    *(_QWORD *)&v71[32],
    *((_QWORD *)&v73 + 1),
    v70,
    *((_QWORD *)&v70 + 1));
  v16 = BYTE9(v53);
  v17 = (__int64 (__fastcall *)())(v53 + 4);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v37, v53 + 4, 1LL);
  if ( v37 )
    alloc::raw_vec::handle_error(v38, v39);
  v40 = &v70;
  v37 = v38;
  v38 = v39;
  v39 = v17;
  v41 = 4LL;
  v42 = 0LL;
  v43 = v16;
  uu_od::output_info::OutputInfo::new(&v55, v53, *((_QWORD *)&v51 + 1), v52, BYTE8(v53));
  v44 = 0LL;
  v45 = 1LL;
  v46 = 0LL;
  v18 = v57;
  v76 = v58;
  v36 = v59;
  v15 = 0LL;
  while ( 1 )
  {
    uu_od::inputdecoder::InputDecoder<I>::peek_read(&v80, &v37);
    if ( BYTE8(v81) == 3 )
    {
      v54 = v80;
      *(_QWORD *)&v23 = uucore::util_name();
      v75[0] = v23;
      v77[0] = v75;
      v77[1] = <&T as core::fmt::Display>::fmt;
      v63 = (char **)&unk_100348;
      v64 = 2LL;
      v65 = v77;
      v66 = 1uLL;
      std::io::stdio::_eprint(&v63);
      *(_QWORD *)&v75[0] = &v54;
      *((_QWORD *)&v75[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      v63 = (char **)&unk_100368;
      v64 = 2LL;
      v65 = v75;
      v66 = 1uLL;
      std::io::stdio::_eprint(&v63);
      uu_od::inputoffset::InputOffset::print_final_offset(&v67);
      v13 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
      v15 = v24;
      core::ptr::drop_in_place<std::io::error::Error>(v54);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v44);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44);
      goto LABEL_43;
    }
    v75[0] = v80;
    v75[1] = v81;
    v19 = *((_QWORD *)&v80 + 1);
    if ( !*((_QWORD *)&v80 + 1) )
      break;
    if ( *((_QWORD *)&v80 + 1) != v18 )
    {
      v22 = *((_QWORD *)&v80 + 1) + v76;
      if ( *((_QWORD *)&v80 + 1) + v76 >= v18 )
        v22 = v18;
      uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(v75, *((_QWORD *)&v80 + 1), v22);
      goto LABEL_31;
    }
    if ( v36
      || (buffer = uu_od::inputdecoder::MemoryDecoder::get_buffer(v75, 0LL),
          !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(buffer, v21, v45, v46)) )
    {
      uu_od::inputdecoder::MemoryDecoder::clone_buffer(v75, &v44);
LABEL_31:
      uu_od::inputoffset::InputOffset::format_byte_offset(&v63, &v67);
      uu_od::print_bytes(v64, v65, v75, &v55);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v63);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v63);
      v15 = 0LL;
      goto LABEL_32;
    }
    if ( (v15 & 1) == 0 )
    {
      v63 = &off_100338;
      v64 = 1LL;
      v65 = (_QWORD *)&byte_8;
      v66 = 0LL;
      std::io::stdio::_print(&v63);
      LOBYTE(v15) = 1;
    }
LABEL_32:
    v68 += v19;
    if ( (_QWORD)v67 )
    {
      *(_QWORD *)&v67 = 1LL;
      *((_QWORD *)&v67 + 1) += v19;
    }
  }
  uu_od::inputoffset::InputOffset::print_final_offset(&v67);
  if ( (unsigned __int8)<uu_od::peekreader::PeekReader<R> as uu_od::multifilereader::HasError>::has_error(v40) )
  {
    v13 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    v15 = v25;
  }
  else
  {
    v13 = 0LL;
  }
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v44);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44);
LABEL_43:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v55);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v55);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v37);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37);
  core::ptr::drop_in_place<uu_od::peekreader::PeekReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>(&v70);
  core::ptr::drop_in_place<uu_od::OdOptions>(&v47);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v78);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v60);
LABEL_44:
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v60);
  if ( v13 )
  {
    v55 = v13;
    v56 = v15;
    *(_QWORD *)&v70 = &v55;
    *((_QWORD *)&v70 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v84 = (char **)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    v85 = 1LL;
    v88 = 0LL;
    v86 = (__int64 (__fastcall **)())&v70;
    v87 = 1LL;
    alloc::fmt::format::format_inner(&v82, &v84);
    v70 = v82;
    *(_QWORD *)v71 = v83;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v82 + 1), v83, 1LL, 0LL) )
    {
      *(_QWORD *)&v29 = uucore::util_name();
      v47 = v29;
      v37 = (__int64 (__fastcall *)())&v47;
      v38 = <&T as core::fmt::Display>::fmt;
      v84 = (char **)&unk_100348;
      v85 = 2LL;
      v88 = 0LL;
      v86 = &v37;
      v87 = 1LL;
      std::io::stdio::_eprint(&v84);
      *(_QWORD *)&v47 = &v70;
      *((_QWORD *)&v47 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v84 = (char **)&unk_100368;
      v85 = 2LL;
      v88 = 0LL;
      v86 = (__int64 (__fastcall **)())&v47;
      v87 = 1LL;
      std::io::stdio::_eprint(&v84);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(v56 + 104))(v55) )
    {
      *(_QWORD *)&v30 = uucore::execution_phrase();
      v47 = v30;
      v37 = (__int64 (__fastcall *)())&v47;
      v38 = <&T as core::fmt::Display>::fmt;
      v84 = &off_100388;
      v85 = 2LL;
      v88 = 0LL;
      v86 = &v37;
      v87 = 1LL;
      std::io::stdio::_eprint(&v84);
    }
    v31 = (*(__int64 (__fastcall **)(__int64))(v56 + 96))(v55);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v70);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v70);
    v32 = v55;
    v33 = v56;
    if ( *(_QWORD *)v56 )
      (*(void (__fastcall **)(__int64))v56)(v55);
    v34 = *(_QWORD *)(v33 + 8);
    if ( v34 )
      _rust_dealloc(v32, v34, *(_QWORD *)(v33 + 16));
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return v31;
}
