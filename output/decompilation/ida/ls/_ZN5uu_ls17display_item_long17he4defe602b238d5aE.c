__int64 __fastcall uu_ls::display_item_long(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  unsigned __int8 v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *metadata; // r15
  unsigned __int8 has_acl; // r12
  _BOOL8 v14; // rax
  const char *v15; // rcx
  void *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // al
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 v24; // al
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 v27; // al
  unsigned __int8 v28; // al
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int8 v31; // al
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int8 v34; // al
  const char *v35; // rax
  __int64 v36; // rax
  const char *v37; // rdx
  unsigned __int8 v38; // al
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int8 v41; // al
  unsigned __int8 v42; // al
  unsigned __int8 v43; // al
  unsigned __int8 v44; // al
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbp
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int8 v52; // al
  __int64 v53; // r12
  __int64 v54; // rdx
  unsigned __int8 v55; // al
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r12
  __int64 v61; // r13
  unsigned __int64 v62; // rax
  __int64 v63; // rdi
  unsigned __int64 v64; // rbx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rsi
  bool v67; // cf
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int8 v74; // al
  unsigned __int8 v75; // al
  __int64 v76; // rax
  __int128 *v77; // r15
  __int64 v78; // r8
  __int64 v79; // r12
  __int64 v80; // r13
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  char v87; // r12
  __int64 v88; // rcx
  __int64 v89; // rsi
  unsigned __int8 v90; // al
  __int64 v91; // rax
  __int64 v92; // rbx
  char v94; // [rsp+Fh] [rbp-179h]
  __int128 v95; // [rsp+10h] [rbp-178h] BYREF
  __int128 *v96; // [rsp+20h] [rbp-168h]
  __int64 (__fastcall *v97)(); // [rsp+28h] [rbp-160h]
  __int128 *v98; // [rsp+30h] [rbp-158h]
  __int64 (__fastcall *v99)(); // [rsp+38h] [rbp-150h]
  __int128 *v100; // [rsp+40h] [rbp-148h]
  __int64 (__fastcall *v101)(); // [rsp+48h] [rbp-140h]
  __int128 v102; // [rsp+50h] [rbp-138h] BYREF
  __int128 *v103; // [rsp+60h] [rbp-128h]
  __int64 (__fastcall *v104)(); // [rsp+68h] [rbp-120h]
  __int128 v105; // [rsp+70h] [rbp-118h] BYREF
  __int128 *v106; // [rsp+80h] [rbp-108h]
  __int128 v107; // [rsp+88h] [rbp-100h]
  __int64 v108; // [rsp+98h] [rbp-F0h]
  __int64 v109; // [rsp+A0h] [rbp-E8h]
  __int64 v110; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v111; // [rsp+B0h] [rbp-D8h]
  __int64 v112; // [rsp+B8h] [rbp-D0h]
  __int128 v113; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v114; // [rsp+D0h] [rbp-B8h]
  __int64 v115; // [rsp+D8h] [rbp-B0h]
  __int128 v116; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v117; // [rsp+F0h] [rbp-98h]
  __int128 *v118; // [rsp+100h] [rbp-88h] BYREF
  __int64 (__fastcall *v119)(); // [rsp+108h] [rbp-80h]
  __int64 v120; // [rsp+110h] [rbp-78h]
  __int64 v121; // [rsp+118h] [rbp-70h]
  __int128 v122; // [rsp+120h] [rbp-68h] BYREF
  __int64 v123; // [rsp+130h] [rbp-58h]
  __int64 v124; // [rsp+138h] [rbp-50h]
  _BYTE v125[72]; // [rsp+140h] [rbp-48h] BYREF

  v7 = a6;
  v121 = a5;
  v115 = a4;
  v109 = a1;
  v110 = 0LL;
  v111 = 1LL;
  v112 = 0LL;
  if ( *(_BYTE *)(a6 + 29) != 2 )
  {
    uu_ls::colors::StyleManager::apply_normal(&v105, (_QWORD *)a6);
    *(_QWORD *)&v102 = &v105;
    *((_QWORD *)&v102 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v95 = &xmmword_23C10;
    *((_QWORD *)&v95 + 1) = 1LL;
    v98 = 0LL;
    v96 = &v102;
    v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v9 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
    core::result::Result<T,E>::unwrap(v9, &off_212788);
    core::ptr::drop_in_place<alloc::string::String>(&v105);
  }
  v94 = *(_BYTE *)(a3 + 238);
  if ( v94 )
    alloc::vec::Vec<T,A>::append_elements(&v110, asc_36240, 2LL);
  metadata = uu_ls::PathData::get_metadata(v109, v115);
  if ( metadata )
  {
    has_acl = uucore::features::fsxattr::has_acl(*(_QWORD *)(v109 + 8), *(_QWORD *)(v109 + 16));
    uucore::features::fs::display_permissions(&v118, metadata, 1LL);
    v14 = *(_QWORD *)(v109 + 64) >= 2uLL;
    v15 = asc_34771;
    if ( *(_QWORD *)(v109 + 64) < 2uLL )
      v15 = (_BYTE *)(&dword_0 + 1);
    *(_QWORD *)&v122 = v15;
    *((_QWORD *)&v122 + 1) = v14;
    v16 = &unk_3624C;
    if ( !has_acl )
      v16 = &dword_0 + 1;
    *(_QWORD *)&v116 = v16;
    *((_QWORD *)&v116 + 1) = has_acl;
    uu_ls::display_symlink_count((__int64)&v102, *((_QWORD *)metadata + 6));
    uu_ls::pad_left((__int64)&v113, *((__int64 *)&v102 + 1), (__int64)v103, a2[1], v17, v18);
    *(_QWORD *)&v95 = &v118;
    *((_QWORD *)&v95 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v96 = &v122;
    v97 = <&T as core::fmt::Display>::fmt;
    v98 = &v116;
    v99 = <&T as core::fmt::Display>::fmt;
    v100 = &v113;
    v101 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v105 = &unk_212698;
    *((_QWORD *)&v105 + 1) = 4LL;
    v106 = &v95;
    v107 = 4uLL;
    v19 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v105);
    core::result::Result<T,E>::unwrap(v19, &off_2127A0);
    core::ptr::drop_in_place<alloc::string::String>(&v113);
    core::ptr::drop_in_place<alloc::string::String>(&v102);
    core::ptr::drop_in_place<alloc::string::String>(&v118);
    if ( *(_BYTE *)(a3 + 226) )
    {
      uu_ls::display_uname((__int64)&v105, metadata[15], *(_BYTE *)(a3 + 227));
      uu_ls::pad_right((__int64)&v102, *((__int64 *)&v105 + 1), (__int64)v106, a2[2], v22, v23);
      *(_QWORD *)&v113 = &v102;
      *((_QWORD *)&v113 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126D8;
      *((_QWORD *)&v95 + 1) = 1LL;
      v98 = 0LL;
      v96 = &v113;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v24 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
      core::result::Result<T,E>::unwrap(v24, &off_2127B8);
      core::ptr::drop_in_place<alloc::string::String>(&v102);
      core::ptr::drop_in_place<alloc::string::String>(&v105);
    }
    if ( *(_BYTE *)(a3 + 225) )
    {
      uu_ls::display_group((__int64)&v105, metadata[16], *(_BYTE *)(a3 + 227));
      uu_ls::pad_right((__int64)&v102, *((__int64 *)&v105 + 1), (__int64)v106, a2[3], v25, v26);
      *(_QWORD *)&v113 = &v102;
      *((_QWORD *)&v113 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126D8;
      *((_QWORD *)&v95 + 1) = 1LL;
      v98 = 0LL;
      v96 = &v113;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v27 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
      core::result::Result<T,E>::unwrap(v27, &off_2127D0);
      core::ptr::drop_in_place<alloc::string::String>(&v102);
      core::ptr::drop_in_place<alloc::string::String>(&v105);
    }
    if ( *(_BYTE *)(a3 + 235) )
    {
      uu_ls::pad_right((__int64)&v105, *(_QWORD *)(v109 + 56), *(_QWORD *)(v109 + 64), a2[4], v20, v21);
      *(_QWORD *)&v102 = &v105;
      *((_QWORD *)&v102 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126D8;
      *((_QWORD *)&v95 + 1) = 1LL;
      v98 = 0LL;
      v96 = &v102;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v28 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
      core::result::Result<T,E>::unwrap(v28, &off_2127E8);
      core::ptr::drop_in_place<alloc::string::String>(&v105);
    }
    if ( *(_BYTE *)(a3 + 224) )
    {
      uu_ls::display_uname((__int64)&v105, metadata[15], *(_BYTE *)(a3 + 227));
      uu_ls::pad_right((__int64)&v102, *((__int64 *)&v105 + 1), (__int64)v106, a2[2], v29, v30);
      *(_QWORD *)&v113 = &v102;
      *((_QWORD *)&v113 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126D8;
      *((_QWORD *)&v95 + 1) = 1LL;
      v98 = 0LL;
      v96 = &v113;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v31 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
      core::result::Result<T,E>::unwrap(v31, &off_212800);
      core::ptr::drop_in_place<alloc::string::String>(&v102);
      core::ptr::drop_in_place<alloc::string::String>(&v105);
    }
    uu_ls::display_len_or_rdev((__int64)&v105, (__int64)metadata, *(_QWORD *)(a3 + 208));
    if ( (_QWORD)v107 == 0x8000000000000000LL )
    {
      v114 = (__int64)v106;
      v113 = v105;
      uu_ls::pad_left((__int64)&v102, *((__int64 *)&v105 + 1), (__int64)v106, a2[5], v32, v33);
      v118 = &v102;
      v119 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126D8;
      *((_QWORD *)&v95 + 1) = 1LL;
      v98 = 0LL;
      v96 = (__int128 *)&v118;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v34 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
      core::result::Result<T,E>::unwrap(v34, &off_212818);
      core::ptr::drop_in_place<alloc::string::String>(&v102);
      core::ptr::drop_in_place<alloc::string::String>(&v113);
    }
    else
    {
      v124 = v7;
      v60 = (__int64)v106;
      v123 = (__int64)v106;
      v122 = v105;
      v117 = v108;
      v116 = v107;
      v61 = *((_QWORD *)&v105 + 1);
      v62 = a2[5];
      v63 = a2[6];
      v64 = a2[7];
      v65 = -1LL;
      if ( v64 < 0xFFFFFFFFFFFFFFFELL )
        v65 = v64 + 2;
      v66 = 0LL;
      v67 = v62 < v65;
      v68 = v62 - v65;
      if ( !v67 )
        v66 = v68;
      v69 = core::cmp::max_by(v63, v66);
      uu_ls::pad_left((__int64)&v118, v61, v60, v69, v70, v71);
      uu_ls::pad_left((__int64)&v113, *((__int64 *)&v116 + 1), v117, v64, v72, v73);
      *(_QWORD *)&v102 = &v118;
      *((_QWORD *)&v102 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v103 = &v113;
      v104 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126E8;
      *((_QWORD *)&v95 + 1) = 2LL;
      v98 = 0LL;
      v96 = &v102;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v74 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
      core::result::Result<T,E>::unwrap(v74, &off_212830);
      core::ptr::drop_in_place<alloc::string::String>(&v113);
      core::ptr::drop_in_place<alloc::string::String>(&v118);
      core::ptr::drop_in_place<alloc::string::String>(&v116);
      v7 = v124;
      core::ptr::drop_in_place<alloc::string::String>(&v122);
    }
    uu_ls::display_date((__int64)&v105, (__int64)metadata, a3);
    *(_QWORD *)&v102 = &v105;
    *((_QWORD *)&v102 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v95 = &off_212708;
    *((_QWORD *)&v95 + 1) = 2LL;
    v98 = 0LL;
    v96 = &v102;
    v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v75 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
    core::result::Result<T,E>::unwrap(v75, &off_212848);
    core::ptr::drop_in_place<alloc::string::String>(&v105);
    *(_QWORD *)&v95 = 0LL;
    *((_QWORD *)&v95 + 1) = 1LL;
    v96 = 0LL;
    v76 = ansi_width::ansi_width(v111, v112);
    v77 = &v113;
    uu_ls::display_item_name((__int64)&v113, v109, a3, 0LL, v78, &v95, v115, v7, v76);
    if ( a7
      && (v79 = *((_QWORD *)&v113 + 1),
          v80 = v114,
          LODWORD(v95) = 0,
          v81 = core::char::methods::encode_utf8_raw(39LL, &v95),
          !(unsigned __int8)core::slice::<impl [T]>::starts_with(v79, v80, v81, v82)) )
    {
      *(_QWORD *)&v105 = &v113;
      *((_QWORD *)&v105 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126D8;
      *((_QWORD *)&v95 + 1) = 1LL;
      v98 = 0LL;
      v96 = &v105;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v77 = (__int128 *)v125;
      core::option::Option<T>::map_or_else(v125, &v95, v83, v84, v85, v86);
      v87 = 0;
    }
    else
    {
      v87 = 1;
    }
    v103 = (__int128 *)*((_QWORD *)v77 + 2);
    v102 = *v77;
    if ( v94 )
    {
      v88 = *(_QWORD *)(v121 + 16);
      if ( v88 )
        v89 = *(_QWORD *)(16 * v88 + *(_QWORD *)(v121 + 8) - 8) + 1LL;
      else
        v89 = 0LL;
      uu_ls::dired::update_positions(v121, v112 + v89, (__int64)v103 + v112 + v89);
    }
    *(_QWORD *)&v105 = &v102;
    *((_QWORD *)&v105 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v106 = (__int128 *)(a3 + 250);
    *(_QWORD *)&v107 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    *(_QWORD *)&v95 = "\x01";
    *((_QWORD *)&v95 + 1) = 2LL;
    v98 = 0LL;
    v96 = &v105;
    v97 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v90 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
    core::result::Result<T,E>::unwrap(v90, &off_212860);
    core::ptr::drop_in_place<alloc::string::String>(&v102);
    if ( !v87 )
      core::ptr::drop_in_place<alloc::string::String>(&v113);
  }
  else
  {
    if ( (*(_BYTE *)(v109 + 248) & 1) != 0 )
    {
      switch ( __ROL4__((*(_DWORD *)(v109 + 252) & 0xF000) - 0x2000, 19) )
      {
        case 0:
          v35 = aC;
          break;
        case 1:
          v35 = (const char *)&unk_3624E;
          break;
        case 2:
          v35 = (const char *)&unk_3624D;
          break;
        case 4:
          v35 = asc_351B4;
          break;
        default:
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      v35 = asc_3624F;
    }
    *(_QWORD *)&v116 = v35;
    *((_QWORD *)&v116 + 1) = 1LL;
    v36 = 0LL;
    v37 = (_BYTE *)(&dword_0 + 1);
    if ( *(_QWORD *)(v109 + 64) >= 2uLL )
      v37 = asc_34771;
    LOBYTE(v36) = *(_QWORD *)(v109 + 64) >= 2uLL;
    *(_QWORD *)&v113 = v37;
    *((_QWORD *)&v113 + 1) = v36;
    uu_ls::pad_left((__int64)&v102, (__int64)asc_3623A, 1LL, a2[1], v10, v11);
    *(_QWORD *)&v95 = &v116;
    *((_QWORD *)&v95 + 1) = <&T as core::fmt::Display>::fmt;
    v96 = &v113;
    v97 = <&T as core::fmt::Display>::fmt;
    v98 = &v102;
    v99 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v105 = &unk_212728;
    *((_QWORD *)&v105 + 1) = 3LL;
    v106 = &v95;
    v107 = 3uLL;
    v38 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v105);
    core::result::Result<T,E>::unwrap(v38, &off_212878);
    core::ptr::drop_in_place<alloc::string::String>(&v102);
    if ( *(_BYTE *)(a3 + 226) )
    {
      uu_ls::pad_right((__int64)&v105, (__int64)asc_3623A, 1LL, a2[2], v39, v40);
      *(_QWORD *)&v102 = &v105;
      *((_QWORD *)&v102 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126D8;
      *((_QWORD *)&v95 + 1) = 1LL;
      v98 = 0LL;
      v96 = &v102;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v41 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
      core::result::Result<T,E>::unwrap(v41, &off_212890);
      core::ptr::drop_in_place<alloc::string::String>(&v105);
    }
    if ( *(_BYTE *)(a3 + 225) )
    {
      uu_ls::pad_right((__int64)&v105, (__int64)asc_3623A, 1LL, a2[3], v39, v40);
      *(_QWORD *)&v102 = &v105;
      *((_QWORD *)&v102 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126D8;
      *((_QWORD *)&v95 + 1) = 1LL;
      v98 = 0LL;
      v96 = &v102;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v42 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
      core::result::Result<T,E>::unwrap(v42, &off_2128A8);
      core::ptr::drop_in_place<alloc::string::String>(&v105);
    }
    if ( *(_BYTE *)(a3 + 235) )
    {
      uu_ls::pad_right((__int64)&v105, *(_QWORD *)(v109 + 56), *(_QWORD *)(v109 + 64), a2[4], v39, v40);
      *(_QWORD *)&v102 = &v105;
      *((_QWORD *)&v102 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126D8;
      *((_QWORD *)&v95 + 1) = 1LL;
      v98 = 0LL;
      v96 = &v102;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v43 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
      core::result::Result<T,E>::unwrap(v43, &off_2128C0);
      core::ptr::drop_in_place<alloc::string::String>(&v105);
    }
    if ( *(_BYTE *)(a3 + 224) )
    {
      uu_ls::pad_right((__int64)&v105, (__int64)asc_3623A, 1LL, a2[2], v39, v40);
      *(_QWORD *)&v102 = &v105;
      *((_QWORD *)&v102 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v95 = &off_2126D8;
      *((_QWORD *)&v95 + 1) = 1LL;
      v98 = 0LL;
      v96 = &v102;
      v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v44 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
      core::result::Result<T,E>::unwrap(v44, &off_2128D8);
      core::ptr::drop_in_place<alloc::string::String>(&v105);
    }
    *(_QWORD *)&v95 = 0LL;
    *((_QWORD *)&v95 + 1) = 1LL;
    v96 = 0LL;
    v45 = ansi_width::ansi_width(v111, v112);
    uu_ls::display_item_name((__int64)&v118, v109, a3, 0LL, v46, &v95, v115, v7, v45);
    uu_ls::pad_left((__int64)&v113, (__int64)asc_3623A, 1LL, a2[5], v47, v48);
    v49 = v121;
    uu_ls::pad_left((__int64)&v102, (__int64)asc_3623A, 1LL, 12LL, v50, v51);
    *(_QWORD *)&v105 = &v113;
    *((_QWORD *)&v105 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v106 = &v102;
    *(_QWORD *)&v107 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v95 = &off_212758;
    *((_QWORD *)&v95 + 1) = 3LL;
    v98 = 0LL;
    v96 = &v105;
    v97 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v52 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
    core::result::Result<T,E>::unwrap(v52, &off_2128F0);
    core::ptr::drop_in_place<alloc::string::String>(&v102);
    core::ptr::drop_in_place<alloc::string::String>(&v113);
    if ( v94 )
    {
      v53 = v112;
      core::str::<impl str>::trim_matches(v119, v120);
      uu_ls::dired::calculate_and_update_positions(v49, v53, v54);
    }
    *(_QWORD *)&v105 = &v118;
    *((_QWORD *)&v105 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v106 = (__int128 *)(a3 + 250);
    *(_QWORD *)&v107 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    *(_QWORD *)&v95 = "\x01";
    *((_QWORD *)&v95 + 1) = 2LL;
    v98 = 0LL;
    v96 = &v105;
    v97 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v55 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v110, &v95);
    core::result::Result<T,E>::unwrap(v55, &off_212908);
    core::ptr::drop_in_place<alloc::string::String>(&v118);
  }
  *(_QWORD *)&v105 = &v110;
  *((_QWORD *)&v105 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v95 = &xmmword_23C10;
  *((_QWORD *)&v95 + 1) = 1LL;
  v98 = 0LL;
  v96 = &v105;
  v97 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v91 = std::io::Write::write_fmt(v115, &v95, v56, v57, v58, v59);
  if ( v91 )
  {
    v92 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v91);
    core::ptr::drop_in_place<alloc::string::String>(&v110);
  }
  else
  {
    core::ptr::drop_in_place<alloc::string::String>(&v110);
    return 0LL;
  }
  return v92;
}
