__int64 __fastcall backdoorautomater::Param::set_param(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 i; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  char v25; // r14
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // bp
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 k; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  char v45; // r14
  unsigned __int8 v46; // dl
  unsigned __int8 v47; // bp
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rbx
  __int64 v68; // r15
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 m; // rsi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rdx
  char v77; // r14
  unsigned __int8 v78; // dl
  unsigned __int8 v79; // bp
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rbx
  __int64 v83; // r15
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rbx
  __int64 v89; // r15
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rbx
  __int64 v105; // r15
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rbx
  __int64 v111; // r15
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rbx
  __int64 v117; // r15
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 j; // rsi
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 v125; // rdx
  char v126; // r14
  unsigned __int8 v127; // dl
  unsigned __int8 v128; // bp
  __int128 v130; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v131; // [rsp+10h] [rbp-A8h]
  __int128 v132; // [rsp+18h] [rbp-A0h]
  __int128 v133; // [rsp+30h] [rbp-88h] BYREF
  __int64 v134; // [rsp+40h] [rbp-78h]
  __int64 v135; // [rsp+50h] [rbp-68h] BYREF
  __int64 v136; // [rsp+58h] [rbp-60h]
  __int64 v137; // [rsp+60h] [rbp-58h]
  __int64 v138; // [rsp+68h] [rbp-50h]
  __int128 v139; // [rsp+70h] [rbp-48h] BYREF
  __int64 v140; // [rsp+80h] [rbp-38h]

  v135 = 0LL;
  v136 = 1LL;
  v137 = 0LL;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, aErrorChooseAVa, 31LL);
  v138 = a1;
  v140 = v131;
  v139 = v130;
  switch ( a2 )
  {
    case 1:
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AA40;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v2 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v2, v3, &off_22AA50);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v4 = v138;
      core::ptr::drop_in_place<alloc::string::String>(v138);
      *(_QWORD *)(v4 + 16) = v131;
      *(_OWORD *)v4 = v130;
      v5 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v5, v6);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v4);
      *(_QWORD *)(v4 + 16) = v134;
      *(_OWORD *)v4 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AA68;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v7 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v7, v8, &off_22AA78);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v9 = v138;
      v10 = v138 + 48;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 48);
      *(_QWORD *)(v10 + 16) = v131;
      *(_OWORD *)v10 = v130;
      v11 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v9 + 56), *(_QWORD *)(v9 + 64), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v11, v12);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v10);
      *(_QWORD *)(v10 + 16) = v134;
      *(_OWORD *)v10 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AA90;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v13 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v13, v14, &off_22AAA0);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v15 = v138;
      v16 = v138 + 24;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 24);
      *(_QWORD *)(v16 + 16) = v131;
      *(_OWORD *)v16 = v130;
      v17 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v15 + 32), *(_QWORD *)(v15 + 40), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v17, v18);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v16);
      *(_QWORD *)(v16 + 16) = v134;
      *(_OWORD *)v16 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      for ( i = v137; !v137; i = v137 )
      {
        *(_QWORD *)&v130 = &off_22AAB8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AAC8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AAD8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AAE8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AAF8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v20 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v20, v21, &off_22AB08);
      }
      v22 = core::str::<impl str>::trim_matches(v136, i);
      v23 = v138;
      v25 = core::num::<impl core::str::traits::FromStr for u8>::from_str(v22, v24);
      v27 = v26;
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v139);
      <alloc::string::String as core::ops::arith::Add<&str>>::add(&v133, &v130, v136, v137);
      core::result::Result<T,E>::expect(v25 & 1, v27, *((_QWORD *)&v133 + 1), v134, &off_22AB20);
      *(_BYTE *)(v23 + 144) = v27;
      core::ptr::drop_in_place<alloc::string::String>(&v133);
      break;
    case 2:
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AB38;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v97 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v97, v98, &off_22AB48);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v99 = v138;
      core::ptr::drop_in_place<alloc::string::String>(v138);
      *(_QWORD *)(v99 + 16) = v131;
      *(_OWORD *)v99 = v130;
      v100 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v99 + 8), *(_QWORD *)(v99 + 16), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v100, v101);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v99);
      *(_QWORD *)(v99 + 16) = v134;
      *(_OWORD *)v99 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AA68;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v102 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v102, v103, &off_22AB60);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v104 = v138;
      v105 = v138 + 48;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 48);
      *(_QWORD *)(v105 + 16) = v131;
      *(_OWORD *)v105 = v130;
      v106 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v104 + 56), *(_QWORD *)(v104 + 64), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v106, v107);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v105);
      *(_QWORD *)(v105 + 16) = v134;
      *(_OWORD *)v105 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AB78;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v108 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v108, v109, &off_22AB88);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v110 = v138;
      v111 = v138 + 24;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 24);
      *(_QWORD *)(v111 + 16) = v131;
      *(_OWORD *)v111 = v130;
      v112 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v110 + 32), *(_QWORD *)(v110 + 40), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v112, v113);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v111);
      *(_QWORD *)(v111 + 16) = v134;
      *(_OWORD *)v111 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22ABA0;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v114 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v114, v115, &off_22ABB0);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v116 = v138;
      v117 = v138 + 96;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 96);
      *(_QWORD *)(v117 + 16) = v131;
      *(_OWORD *)v117 = v130;
      v118 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v116 + 104), *(_QWORD *)(v116 + 112), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v118, v119);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v117);
      *(_QWORD *)(v117 + 16) = v134;
      *(_OWORD *)v117 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      for ( j = v137; !v137; j = v137 )
      {
        *(_QWORD *)&v130 = &off_22AAB8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22ABC8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AAD8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AAE8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AAF8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v121 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v121, v122, &off_22ABD8);
      }
      v123 = core::str::<impl str>::trim_matches(v136, j);
      v124 = v138;
      v126 = core::num::<impl core::str::traits::FromStr for u8>::from_str(v123, v125);
      v128 = v127;
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v139);
      <alloc::string::String as core::ops::arith::Add<&str>>::add(&v133, &v130, v136, v137);
      core::result::Result<T,E>::expect(v126 & 1, v128, *((_QWORD *)&v133 + 1), v134, &off_22ABF0);
      *(_BYTE *)(v124 + 144) = v128;
      core::ptr::drop_in_place<alloc::string::String>(&v133);
      break;
    case 3:
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AB38;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v28 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v28, v29, &off_22AC08);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v30 = v138;
      core::ptr::drop_in_place<alloc::string::String>(v138);
      *(_QWORD *)(v30 + 16) = v131;
      *(_OWORD *)v30 = v130;
      v31 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v30 + 8), *(_QWORD *)(v30 + 16), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v31, v32);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v30);
      *(_QWORD *)(v30 + 16) = v134;
      *(_OWORD *)v30 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AA68;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v33 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v33, v34, &off_22AC20);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v35 = v138;
      v36 = v138 + 48;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 48);
      *(_QWORD *)(v36 + 16) = v131;
      *(_OWORD *)v36 = v130;
      v37 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v35 + 56), *(_QWORD *)(v35 + 64), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v37, v38);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v36);
      *(_QWORD *)(v36 + 16) = v134;
      *(_OWORD *)v36 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      for ( k = v137; !v137; k = v137 )
      {
        *(_QWORD *)&v130 = &off_22AAB8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AC38;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AC48;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AC58;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v40 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v40, v41, &off_22AC68);
      }
      v42 = core::str::<impl str>::trim_matches(v136, k);
      v43 = v138;
      v45 = core::num::<impl core::str::traits::FromStr for u8>::from_str(v42, v44);
      v47 = v46;
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v139);
      <alloc::string::String as core::ops::arith::Add<&str>>::add(&v133, &v130, v136, v137);
      core::result::Result<T,E>::expect(v45 & 1, v47, *((_QWORD *)&v133 + 1), v134, &off_22AC80);
      *(_BYTE *)(v43 + 144) = v47;
      core::ptr::drop_in_place<alloc::string::String>(&v133);
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AC98;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v48 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v48, v49, &off_22ACA8);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v50 = v138;
      v51 = v138 + 96;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 96);
      *(_QWORD *)(v51 + 16) = v131;
      *(_OWORD *)v51 = v130;
      v52 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v50 + 104), *(_QWORD *)(v50 + 112), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v52, v53);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v51);
      *(_QWORD *)(v51 + 16) = v134;
      *(_OWORD *)v51 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22ACC0;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v54 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v54, v55, &off_22ACD0);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v56 = v138;
      v57 = v138 + 120;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 120);
      *(_QWORD *)(v57 + 16) = v131;
      *(_OWORD *)v57 = v130;
      v58 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v56 + 128), *(_QWORD *)(v56 + 136), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v58, v59);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v57);
      goto LABEL_35;
    case 4:
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AB38;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v60 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v60, v61, &off_22ACE8);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v62 = v138;
      core::ptr::drop_in_place<alloc::string::String>(v138);
      *(_QWORD *)(v62 + 16) = v131;
      *(_OWORD *)v62 = v130;
      v63 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v62 + 8), *(_QWORD *)(v62 + 16), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v63, v64);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v62);
      *(_QWORD *)(v62 + 16) = v134;
      *(_OWORD *)v62 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AA68;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v65 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v65, v66, &off_22AD00);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v67 = v138;
      v68 = v138 + 48;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 48);
      *(_QWORD *)(v68 + 16) = v131;
      *(_OWORD *)v68 = v130;
      v69 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v67 + 56), *(_QWORD *)(v67 + 64), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v69, v70);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v68);
      *(_QWORD *)(v68 + 16) = v134;
      *(_OWORD *)v68 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      for ( m = v137; !v137; m = v137 )
      {
        *(_QWORD *)&v130 = &off_22AAB8;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AC38;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AC48;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = &off_22AC58;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v72 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v72, v73, &off_22AD18);
      }
      v74 = core::str::<impl str>::trim_matches(v136, m);
      v75 = v138;
      v77 = core::num::<impl core::str::traits::FromStr for u8>::from_str(v74, v76);
      v79 = v78;
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v139);
      <alloc::string::String as core::ops::arith::Add<&str>>::add(&v133, &v130, v136, v137);
      core::result::Result<T,E>::expect(v77 & 1, v79, *((_QWORD *)&v133 + 1), v134, &off_22AD30);
      *(_BYTE *)(v75 + 144) = v79;
      core::ptr::drop_in_place<alloc::string::String>(&v133);
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AC98;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v80 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v80, v81, &off_22AD48);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v82 = v138;
      v83 = v138 + 96;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 96);
      *(_QWORD *)(v83 + 16) = v131;
      *(_OWORD *)v83 = v130;
      v84 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v82 + 104), *(_QWORD *)(v82 + 112), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v84, v85);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v83);
      *(_QWORD *)(v83 + 16) = v134;
      *(_OWORD *)v83 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AD60;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v86 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v86, v87, &off_22AD70);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v88 = v138;
      v89 = v138 + 120;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 120);
      *(_QWORD *)(v89 + 16) = v131;
      *(_OWORD *)v89 = v130;
      v90 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v88 + 128), *(_QWORD *)(v88 + 136), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v90, v91);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v89);
      *(_QWORD *)(v89 + 16) = v134;
      *(_OWORD *)v89 = v133;
      alloc::vec::Vec<T,A>::clear(&v135);
      while ( !v137 )
      {
        *(_QWORD *)&v130 = &off_22AD88;
        *((_QWORD *)&v130 + 1) = 1LL;
        v131 = 8LL;
        v132 = 0LL;
        std::io::stdio::_print(&v130);
        *(_QWORD *)&v130 = std::io::stdio::stdin(&v130);
        v92 = std::io::stdio::Stdin::read_line(&v130, &v135);
        core::result::Result<T,E>::expect(v92, v93, &off_22AD98);
      }
      <alloc::string::String as core::clone::Clone>::clone(&v130, &v135);
      v94 = v138;
      v57 = v138 + 72;
      core::ptr::drop_in_place<alloc::string::String>(v138 + 72);
      *(_QWORD *)(v57 + 16) = v131;
      *(_OWORD *)v57 = v130;
      v95 = core::str::<impl str>::trim_end_matches(*(_QWORD *)(v94 + 80), *(_QWORD *)(v94 + 88), 10LL);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v130, v95, v96);
      v134 = v131;
      v133 = v130;
      core::ptr::drop_in_place<alloc::string::String>(v57);
LABEL_35:
      *(_QWORD *)(v57 + 16) = v134;
      *(_OWORD *)v57 = v133;
      break;
  }
  alloc::vec::Vec<T,A>::clear(&v135);
  core::ptr::drop_in_place<alloc::string::String>(&v139);
  return core::ptr::drop_in_place<alloc::string::String>(&v135);
}