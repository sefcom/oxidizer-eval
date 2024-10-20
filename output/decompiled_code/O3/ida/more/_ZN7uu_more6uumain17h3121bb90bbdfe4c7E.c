__int64 __fastcall uu_more::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall **v3)(); // rdx
  __int64 v4; // rbx
  __int64 (__fastcall **v5)(); // r12
  unsigned __int64 v6; // rbx
  __int64 i; // rax
  __int64 (__fastcall *v8)(); // r12
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int64 (__fastcall *v16)(); // rdx
  __int64 v17; // r15
  __int64 (__fastcall **v18)(); // r12
  __int64 (__fastcall *v19)(); // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int64 (__fastcall *v24)(); // rdx
  __int64 v25; // r15
  __int64 (__fastcall **v26)(); // r12
  __int64 (__fastcall *v27)(); // rsi
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  char v31; // al
  _QWORD **v32; // rdx
  int v33; // ebp
  int v34; // r15d
  int v35; // ecx
  int v36; // r8d
  __int64 (__fastcall **v37)(); // rdx
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int64 (__fastcall *v40)(); // rdx
  __int64 v41; // r15
  __int64 (__fastcall **v42)(); // r12
  __int64 (__fastcall *v43)(); // rsi
  __int64 v44; // rax
  unsigned int v45; // ebx
  __int64 v46; // rdx
  int v47; // r9d
  __int64 (__fastcall **v48)(); // rdx
  __int64 v49; // rdi
  __int64 v50; // rax
  _OWORD *v51; // rax
  __int128 v52; // xmm0
  __int128 v53; // rax
  __int128 v54; // rax
  __int64 v55; // r14
  __int64 (__fastcall **v56)(); // r15
  __int64 (__fastcall *v57)(); // rsi
  __int64 v59; // [rsp+20h] [rbp-4E8h] BYREF
  __int64 (__fastcall **v60)(); // [rsp+28h] [rbp-4E0h]
  _QWORD **v61; // [rsp+30h] [rbp-4D8h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+38h] [rbp-4D0h]
  __int64 *v63; // [rsp+40h] [rbp-4C8h]
  __int64 (__fastcall *v64)(); // [rsp+48h] [rbp-4C0h]
  __int64 v65; // [rsp+50h] [rbp-4B8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-4B0h]
  __int64 v67; // [rsp+60h] [rbp-4A8h]
  _QWORD *v68; // [rsp+68h] [rbp-4A0h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+70h] [rbp-498h]
  __int64 *v70; // [rsp+78h] [rbp-490h]
  __int64 (__fastcall *v71)(); // [rsp+80h] [rbp-488h]
  __int64 v72; // [rsp+88h] [rbp-480h] BYREF
  __int64 (__fastcall **v73)(); // [rsp+90h] [rbp-478h]
  __int128 v74; // [rsp+B0h] [rbp-458h] BYREF
  _BYTE v75[40]; // [rsp+C0h] [rbp-448h] BYREF
  __int128 v76; // [rsp+E8h] [rbp-420h]
  __int64 v77; // [rsp+F8h] [rbp-410h]
  unsigned __int64 v78; // [rsp+100h] [rbp-408h]
  unsigned __int64 v79; // [rsp+108h] [rbp-400h]
  __int64 v80; // [rsp+110h] [rbp-3F8h] BYREF
  __int64 v81; // [rsp+118h] [rbp-3F0h] BYREF
  _OWORD v82[3]; // [rsp+120h] [rbp-3E8h] BYREF
  __int64 v83; // [rsp+150h] [rbp-3B8h]
  unsigned __int64 v84; // [rsp+158h] [rbp-3B0h]
  _DWORD v85[2]; // [rsp+160h] [rbp-3A8h] BYREF
  __int64 v86; // [rsp+168h] [rbp-3A0h]
  _OWORD v87[3]; // [rsp+170h] [rbp-398h] BYREF
  __int64 v88; // [rsp+1A0h] [rbp-368h]
  unsigned __int64 v89; // [rsp+1A8h] [rbp-360h]
  __int128 dest; // [rsp+1B0h] [rbp-358h] BYREF
  __int128 v91; // [rsp+1C0h] [rbp-348h]
  __int64 v92; // [rsp+1D0h] [rbp-338h]
  int fd; // [rsp+1D8h] [rbp-330h]
  __int128 v94; // [rsp+478h] [rbp-90h] BYREF
  __int64 v95; // [rsp+488h] [rbp-80h]
  __int128 v96; // [rsp+490h] [rbp-78h] BYREF
  __int64 v97; // [rsp+4A0h] [rbp-68h]
  __int128 v98; // [rsp+4A8h] [rbp-60h] BYREF
  __int64 v99; // [rsp+4B8h] [rbp-50h]
  __int128 v100; // [rsp+4C0h] [rbp-48h] BYREF
  __int64 v101; // [rsp+4D0h] [rbp-38h]

  std::panicking::set_hook(1LL, &unk_114960);
  uu_more::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v74, &dest, a1, a2);
  v79 = 0x8000000000000000LL;
  if ( (_QWORD)v74 != 0x8000000000000000LL )
  {
    v83 = *(_QWORD *)&v75[32];
    v82[2] = *(_OWORD *)&v75[16];
    v82[1] = *(_OWORD *)v75;
    v82[0] = v74;
    uu_more::Options::from(&v72, v82);
    v65 = 0LL;
    v66 = 1LL;
    v67 = 0LL;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v82, aFiles, 5LL);
    clap_builder::parser::error::MatchesError::unwrap(v87, aFiles, 5LL, &dest);
    if ( !*(_QWORD *)&v87[0] )
    {
      *(_QWORD *)&v74 = std::io::stdio::stdin();
      if ( <std::io::stdio::Stdin as std::io::Read>::read_to_string(&v74, &v65) )
      {
        *(_QWORD *)&dest = v46;
        core::result::unwrap_failed(aCalledResultUn, 43LL, &dest, &off_1148A0, &off_114C00);
      }
      if ( !v67 )
      {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&dest, 9LL, 0LL);
        v49 = *((_QWORD *)&dest + 1);
        if ( (_QWORD)dest )
          alloc::raw_vec::handle_error(*((_QWORD *)&dest + 1), v91);
        v50 = v91;
        *(_QWORD *)v91 = 0x6761737520646162LL;
        *(_BYTE *)(v50 + 8) = 101;
        DWORD2(v91) = 1;
        *(_QWORD *)&dest = v49;
        *((_QWORD *)&dest + 1) = v50;
        *(_QWORD *)&v91 = 9LL;
        v51 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v51 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v4 = (__int64)v51;
        v52 = dest;
        v51[1] = v91;
        *v51 = v52;
        v5 = &off_114B78;
LABEL_118:
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v65);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v65);
        if ( v72 != v79 )
        {
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v72);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v72);
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v82);
        goto LABEL_121;
      }
      *(_QWORD *)&dest = uu_more::setup_term();
      v4 = uu_more::more(v66, v67, (unsigned int)&dest, 0, 0, v47, 0LL);
      if ( v4 )
      {
        v5 = v48;
        goto LABEL_118;
      }
      uu_more::reset_term(&dest);
LABEL_103:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v65);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v65);
      if ( v72 != v79 )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v72);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v72);
      }
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v82);
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
    v6 = v89;
    v80 = uu_more::setup_term();
    v77 = v88;
    v76 = v87[2];
    *(_OWORD *)&v75[24] = v87[1];
    *(_OWORD *)&v75[8] = v87[0];
    v84 = v6;
    v78 = v6;
    for ( i = 0LL; ; i = v74 )
    {
      v8 = (__int64 (__fastcall *)())*((_QWORD *)&v74 + 1);
      v9 = *(__int64 **)v75;
      *(_QWORD *)&v74 = 0LL;
      if ( !i )
      {
        v12 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v75[8]);
        if ( v12 )
        {
          v8 = *(__int64 (__fastcall **)())(v12 + 8);
          v9 = *(__int64 **)(v12 + 16);
          if ( (_QWORD)v74 )
            goto LABEL_18;
        }
        else
        {
          v8 = 0LL;
          if ( (_QWORD)v74 )
          {
LABEL_18:
            v11 = *((_QWORD *)&v74 + 1);
            if ( !v8 )
              goto LABEL_102;
            goto LABEL_19;
          }
        }
      }
      v10 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v75[8]);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        v10 = *(_QWORD *)(v10 + 16);
      }
      else
      {
        v11 = 0LL;
      }
      *(_QWORD *)&v74 = 1LL;
      *((_QWORD *)&v74 + 1) = v11;
      *(_QWORD *)v75 = v10;
      if ( !v8 )
      {
LABEL_102:
        uu_more::reset_term(&v80);
        goto LABEL_103;
      }
LABEL_19:
      if ( (unsigned __int8)std::path::Path::is_dir(v8, v9) )
      {
        v13 = crossterm::terminal::disable_raw_mode(v8, v9);
        if ( v13 )
        {
          *(_QWORD *)&dest = v13;
          core::result::unwrap_failed(aCalledResultUn, 43LL, &dest, &off_1148A0, &off_114B08);
        }
        v61 = (_QWORD **)(&dword_0 + 1);
        v62 = v8;
        v63 = v9;
        LOBYTE(v64) = 1;
        v68 = &v61;
        v69 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_114B20;
        *((_QWORD *)&dest + 1) = 2LL;
        v92 = 0LL;
        *(_QWORD *)&v91 = &v68;
        *((_QWORD *)&v91 + 1) = 1LL;
        alloc::fmt::format::format_inner(&v96, &dest);
        DWORD2(v91) = 0;
        dest = v96;
        *(_QWORD *)&v91 = v97;
        v14 = _rust_alloc(32LL, 8LL);
        if ( !v14 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v15 = dest;
        *(_OWORD *)(v14 + 16) = v91;
        *(_OWORD *)v14 = v15;
        v59 = v14;
        v60 = &off_114B78;
        uucore::mods::error::set_exit_code(*(unsigned int *)(v14 + 24));
        v68 = (_QWORD *)uucore::util_name();
        v69 = v16;
        v61 = &v68;
        v62 = <&T as core::fmt::Display>::fmt;
        v63 = &v59;
        v64 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_114A70;
        *((_QWORD *)&dest + 1) = 3LL;
        v92 = 0LL;
        *(_QWORD *)&v91 = &v61;
        *((_QWORD *)&v91 + 1) = 2LL;
        std::io::stdio::_eprint(&dest);
        v17 = v59;
        v18 = v60;
        if ( *v60 )
          ((void (__fastcall *)(__int64))*v60)(v59);
        v19 = v18[1];
        if ( v19 )
          _rust_dealloc(v17, v19, v18[2]);
        v20 = crossterm::terminal::enable_raw_mode();
        if ( v20 )
        {
          *(_QWORD *)&dest = v20;
          core::result::unwrap_failed(aCalledResultUn, 43LL, &dest, &off_1148A0, &off_114BE8);
        }
        continue;
      }
      std::fs::metadata(&dest);
      if ( (_DWORD)dest == 2 )
      {
        core::ptr::drop_in_place<std::io::error::Error>((char *)&dest + 8);
        v21 = crossterm::terminal::disable_raw_mode((char *)&dest + 8, v8);
        if ( v21 )
        {
          *(_QWORD *)&dest = v21;
          core::result::unwrap_failed(aCalledResultUn, 43LL, &dest, &off_1148A0, &off_114AB8);
        }
        v61 = (_QWORD **)(&dword_0 + 1);
        v62 = v8;
        v63 = v9;
        LOBYTE(v64) = 1;
        v68 = &v61;
        v69 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_114AD0;
        *((_QWORD *)&dest + 1) = 2LL;
        v92 = 0LL;
        *(_QWORD *)&v91 = &v68;
        *((_QWORD *)&v91 + 1) = 1LL;
        alloc::fmt::format::format_inner(&v98, &dest);
        DWORD2(v91) = 0;
        dest = v98;
        *(_QWORD *)&v91 = v99;
        v22 = _rust_alloc(32LL, 8LL);
        if ( !v22 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v23 = dest;
        *(_OWORD *)(v22 + 16) = v91;
        *(_OWORD *)v22 = v23;
        v59 = v22;
        v60 = &off_114A00;
        uucore::mods::error::set_exit_code(*(unsigned int *)(v22 + 24));
        v68 = (_QWORD *)uucore::util_name();
        v69 = v24;
        v61 = &v68;
        v62 = <&T as core::fmt::Display>::fmt;
        v63 = &v59;
        v64 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_114A70;
        *((_QWORD *)&dest + 1) = 3LL;
        v92 = 0LL;
        *(_QWORD *)&v91 = &v61;
        *((_QWORD *)&v91 + 1) = 2LL;
        std::io::stdio::_eprint(&dest);
        v25 = v59;
        v26 = v60;
        if ( *v60 )
          ((void (__fastcall *)(__int64))*v60)(v59);
        v27 = v26[1];
        if ( v27 )
          _rust_dealloc(v25, v27, v26[2]);
        v28 = crossterm::terminal::enable_raw_mode();
        if ( v28 )
        {
          *(_QWORD *)&dest = v28;
          core::result::unwrap_failed(aCalledResultUn, 43LL, &dest, &off_1148A0, &off_114AF0);
        }
        continue;
      }
      std::fs::File::open(v85, v8, v9);
      if ( v85[0] )
      {
        v29 = v86;
        v81 = v86;
        v30 = crossterm::terminal::disable_raw_mode(v85, v8);
        if ( v30 )
        {
          *(_QWORD *)&dest = v30;
          core::result::unwrap_failed(aCalledResultUn, 43LL, &dest, &off_1148A0, &off_1149A8);
        }
        v61 = (_QWORD **)(&dword_0 + 1);
        v62 = v8;
        v63 = v9;
        LOBYTE(v64) = 1;
        switch ( v29 & 3 )
        {
          case 0LL:
            v31 = *(_BYTE *)(v29 + 16);
            break;
          case 1LL:
            v31 = *(_BYTE *)(v29 + 15);
            break;
          case 2LL:
            switch ( HIDWORD(v29) )
            {
              case 1:
              case 0xD:
                goto LABEL_61;
              case 2:
                goto LABEL_52;
              case 4:
                goto LABEL_63;
              case 7:
                goto LABEL_71;
              case 0xB:
                goto LABEL_80;
              case 0xC:
                goto LABEL_89;
              case 0x10:
                goto LABEL_94;
              case 0x11:
                goto LABEL_84;
              case 0x12:
                goto LABEL_83;
              case 0x14:
                goto LABEL_75;
              case 0x15:
                goto LABEL_88;
              case 0x16:
                goto LABEL_91;
              case 0x1A:
                goto LABEL_93;
              case 0x1B:
                goto LABEL_62;
              case 0x1C:
                goto LABEL_92;
              case 0x1D:
                goto LABEL_72;
              case 0x1E:
                goto LABEL_95;
              case 0x1F:
                goto LABEL_77;
              case 0x20:
                goto LABEL_78;
              case 0x23:
                goto LABEL_73;
              case 0x24:
                goto LABEL_69;
              case 0x26:
                goto LABEL_65;
              case 0x27:
                goto LABEL_70;
              case 0x28:
                goto LABEL_90;
              case 0x62:
                goto LABEL_81;
              case 0x63:
                goto LABEL_64;
              case 0x64:
                goto LABEL_67;
              case 0x65:
                goto LABEL_79;
              case 0x67:
                goto LABEL_85;
              case 0x68:
                goto LABEL_87;
              case 0x6B:
                goto LABEL_82;
              case 0x6E:
                goto LABEL_68;
              case 0x6F:
                goto LABEL_74;
              case 0x71:
                goto LABEL_86;
              case 0x74:
                goto LABEL_66;
              case 0x7A:
                goto LABEL_76;
              default:
                goto LABEL_96;
            }
          case 3LL:
            switch ( HIDWORD(v29) )
            {
              case 0:
LABEL_52:
                v31 = 0;
                break;
              case 1:
LABEL_61:
                v31 = 1;
                break;
              case 2:
LABEL_74:
                v31 = 2;
                break;
              case 3:
LABEL_87:
                v31 = 3;
                break;
              case 4:
LABEL_86:
                v31 = 4;
                break;
              case 5:
LABEL_79:
                v31 = 5;
                break;
              case 6:
LABEL_85:
                v31 = 6;
                break;
              case 7:
LABEL_82:
                v31 = 7;
                break;
              case 8:
LABEL_81:
                v31 = 8;
                break;
              case 9:
LABEL_64:
                v31 = 9;
                break;
              case 0xA:
LABEL_67:
                v31 = 10;
                break;
              case 0xB:
LABEL_78:
                v31 = 11;
                break;
              case 0xC:
LABEL_84:
                v31 = 12;
                break;
              case 0xD:
LABEL_80:
                v31 = 13;
                break;
              case 0xE:
LABEL_75:
                v31 = 14;
                break;
              case 0xF:
LABEL_88:
                v31 = 15;
                break;
              case 0x10:
LABEL_70:
                v31 = 16;
                break;
              case 0x11:
LABEL_95:
                v31 = 17;
                break;
              case 0x12:
LABEL_90:
                v31 = 18;
                break;
              case 0x13:
LABEL_66:
                v31 = 19;
                break;
              case 0x14:
LABEL_91:
                v31 = 20;
                break;
              case 0x15:
                v31 = 21;
                break;
              case 0x16:
LABEL_68:
                v31 = 22;
                break;
              case 0x17:
                v31 = 23;
                break;
              case 0x18:
LABEL_92:
                v31 = 24;
                break;
              case 0x19:
LABEL_72:
                v31 = 25;
                break;
              case 0x1A:
LABEL_76:
                v31 = 26;
                break;
              case 0x1B:
LABEL_62:
                v31 = 27;
                break;
              case 0x1C:
LABEL_94:
                v31 = 28;
                break;
              case 0x1D:
LABEL_93:
                v31 = 29;
                break;
              case 0x1E:
LABEL_73:
                v31 = 30;
                break;
              case 0x1F:
LABEL_83:
                v31 = 31;
                break;
              case 0x20:
LABEL_77:
                v31 = 32;
                break;
              case 0x21:
LABEL_69:
                v31 = 33;
                break;
              case 0x22:
LABEL_71:
                v31 = 34;
                break;
              case 0x23:
LABEL_63:
                v31 = 35;
                break;
              case 0x24:
LABEL_65:
                v31 = 36;
                break;
              case 0x25:
                v31 = 37;
                break;
              case 0x26:
LABEL_89:
                v31 = 38;
                break;
              case 0x27:
                v31 = 39;
                break;
              case 0x28:
LABEL_96:
                v31 = 40;
                break;
              default:
                v31 = 41;
                break;
            }
            break;
        }
        LOBYTE(v59) = v31;
        v68 = &v61;
        v69 = <os_display::Quoted as core::fmt::Display>::fmt;
        v70 = &v59;
        v71 = <std::io::error::ErrorKind as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_1149C0;
        *((_QWORD *)&dest + 1) = 2LL;
        v92 = 0LL;
        *(_QWORD *)&v91 = &v68;
        *((_QWORD *)&v91 + 1) = 2LL;
        alloc::fmt::format::format_inner(&v100, &dest);
        DWORD2(v91) = 0;
        dest = v100;
        *(_QWORD *)&v91 = v101;
        v38 = _rust_alloc(32LL, 8LL);
        if ( !v38 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v39 = dest;
        *(_OWORD *)(v38 + 16) = v91;
        *(_OWORD *)v38 = v39;
        v59 = v38;
        v60 = &off_114A00;
        uucore::mods::error::set_exit_code(*(unsigned int *)(v38 + 24));
        v68 = (_QWORD *)uucore::util_name();
        v69 = v40;
        v61 = &v68;
        v62 = <&T as core::fmt::Display>::fmt;
        v63 = &v59;
        v64 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_114A70;
        *((_QWORD *)&dest + 1) = 3LL;
        v92 = 0LL;
        *(_QWORD *)&v91 = &v61;
        *((_QWORD *)&v91 + 1) = 2LL;
        std::io::stdio::_eprint(&dest);
        v41 = v59;
        v42 = v60;
        if ( *v60 )
          ((void (__fastcall *)(__int64))*v60)(v59);
        v43 = v42[1];
        if ( v43 )
          _rust_dealloc(v41, v43, v42[2]);
        v44 = crossterm::terminal::enable_raw_mode();
        if ( v44 )
        {
          *(_QWORD *)&dest = v44;
          core::result::unwrap_failed(aCalledResultUn, 43LL, &dest, &off_1148A0, &off_114AA0);
        }
        core::ptr::drop_in_place<std::io::error::Error>(&v81);
        continue;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&dest, 0x2000LL, v85[1]);
      if ( <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(&dest, &v65) )
      {
        v61 = v32;
        core::result::unwrap_failed(aCalledResultUn, 43LL, &v61, &off_1148A0, &off_114990);
      }
      v33 = v66;
      v34 = v67;
      std::sys::os_str::bytes::Slice::to_str(&v61, v8, v9);
      v35 = 0;
      if ( !v61 )
      {
        v36 = (int)v62;
        if ( !v11 )
          goto LABEL_47;
LABEL_46:
        v11 = *((_QWORD *)&v74 + 1);
        goto LABEL_47;
      }
      v36 = 0;
      if ( v11 )
        goto LABEL_46;
LABEL_47:
      LOBYTE(v35) = v84 >= 2;
      v4 = uu_more::more(v33, v34, (unsigned int)&v80, v35, v36, (_DWORD)v63, v11);
      if ( v4 )
      {
        v5 = v37;
        if ( *((_QWORD *)&dest + 1) )
          _rust_dealloc(dest, *((_QWORD *)&dest + 1), 1LL);
        close(fd);
        goto LABEL_118;
      }
      v67 = 0LL;
      if ( *((_QWORD *)&dest + 1) )
        _rust_dealloc(dest, *((_QWORD *)&dest + 1), 1LL);
      close(fd);
    }
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v74 + 1));
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
  v4 = v2;
  v5 = v3;
LABEL_121:
  v72 = v4;
  v73 = v5;
  *(_QWORD *)&v74 = &v72;
  *((_QWORD *)&v74 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&dest = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&dest + 1) = 1LL;
  v92 = 0LL;
  *(_QWORD *)&v91 = &v74;
  *((_QWORD *)&v91 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v94, &dest);
  v74 = v94;
  *(_QWORD *)v75 = v95;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v94 + 1), v95, 1LL, 0LL) )
  {
    *(_QWORD *)&v53 = uucore::util_name();
    v87[0] = v53;
    *(_QWORD *)&v82[0] = v87;
    *((_QWORD *)&v82[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_114900;
    *((_QWORD *)&dest + 1) = 2LL;
    v92 = 0LL;
    *(_QWORD *)&v91 = v82;
    *((_QWORD *)&v91 + 1) = 1LL;
    std::io::stdio::_eprint(&dest);
    *(_QWORD *)&v87[0] = &v74;
    *((_QWORD *)&v87[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_114920;
    *((_QWORD *)&dest + 1) = 2LL;
    v92 = 0LL;
    *(_QWORD *)&v91 = v87;
    *((_QWORD *)&v91 + 1) = 1LL;
    std::io::stdio::_eprint(&dest);
  }
  if ( ((unsigned __int8 (__fastcall *)(__int64))v73[13])(v72) )
  {
    *(_QWORD *)&v54 = uucore::execution_phrase();
    v87[0] = v54;
    *(_QWORD *)&v82[0] = v87;
    *((_QWORD *)&v82[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_114940;
    *((_QWORD *)&dest + 1) = 2LL;
    v92 = 0LL;
    *(_QWORD *)&v91 = v82;
    *((_QWORD *)&v91 + 1) = 1LL;
    std::io::stdio::_eprint(&dest);
  }
  v45 = ((__int64 (__fastcall *)(__int64))v73[12])(v72);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v74);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v74);
  v55 = v72;
  v56 = v73;
  if ( *v73 )
    ((void (__fastcall *)(__int64))*v73)(v72);
  v57 = v56[1];
  if ( v57 )
    _rust_dealloc(v55, v57, v56[2]);
  return v45;
}
