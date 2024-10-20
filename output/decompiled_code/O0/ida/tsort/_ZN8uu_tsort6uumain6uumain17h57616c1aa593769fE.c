__int64 __fastcall uu_tsort::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-D78h]
  int v28; // [rsp+0h] [rbp-D78h]
  char v29; // [rsp+7h] [rbp-D71h]
  int v30; // [rsp+8h] [rbp-D70h]
  int v31; // [rsp+8h] [rbp-D70h]
  struct _Unwind_Exception *v32; // [rsp+10h] [rbp-D68h]
  int v33; // [rsp+10h] [rbp-D68h]
  int v34; // [rsp+18h] [rbp-D60h]
  int v35; // [rsp+18h] [rbp-D60h]
  int v36; // [rsp+20h] [rbp-D58h]
  int v37; // [rsp+28h] [rbp-D50h]
  int v38; // [rsp+30h] [rbp-D48h]
  int v39; // [rsp+38h] [rbp-D40h]
  int v40; // [rsp+40h] [rbp-D38h]
  int v41; // [rsp+48h] [rbp-D30h]
  struct _Unwind_Exception *v42; // [rsp+50h] [rbp-D28h]
  int v43; // [rsp+58h] [rbp-D20h]
  int v44; // [rsp+60h] [rbp-D18h]
  int v45; // [rsp+68h] [rbp-D10h]
  int v46; // [rsp+70h] [rbp-D08h]
  int v47; // [rsp+78h] [rbp-D00h]
  int v48; // [rsp+80h] [rbp-CF8h]
  int v49; // [rsp+88h] [rbp-CF0h]
  int v50; // [rsp+90h] [rbp-CE8h]
  int v51; // [rsp+98h] [rbp-CE0h]
  int v52; // [rsp+A0h] [rbp-CD8h]
  int v53; // [rsp+A8h] [rbp-CD0h]
  int v54; // [rsp+B0h] [rbp-CC8h]
  int v55; // [rsp+B8h] [rbp-CC0h]
  int v56; // [rsp+C0h] [rbp-CB8h]
  int v57; // [rsp+C8h] [rbp-CB0h]
  int v58; // [rsp+D0h] [rbp-CA8h]
  int v59; // [rsp+D8h] [rbp-CA0h]
  int v60; // [rsp+E0h] [rbp-C98h]
  int v61; // [rsp+E8h] [rbp-C90h]
  int v62; // [rsp+F0h] [rbp-C88h]
  struct _Unwind_Exception *v63; // [rsp+F8h] [rbp-C80h]
  int v64; // [rsp+100h] [rbp-C78h]
  __int64 v65; // [rsp+120h] [rbp-C58h]
  int v66; // [rsp+158h] [rbp-C20h]
  int v67; // [rsp+160h] [rbp-C18h]
  char is_dir; // [rsp+16Fh] [rbp-C09h]
  char v69; // [rsp+18Fh] [rbp-BE9h]
  __int64 one; // [rsp+1A8h] [rbp-BD0h]
  __int64 v71; // [rsp+1C0h] [rbp-BB8h]
  _OWORD v72[6]; // [rsp+1D0h] [rbp-BA8h] BYREF
  __int64 v73; // [rsp+230h] [rbp-B48h]
  __int128 v74; // [rsp+238h] [rbp-B40h] BYREF
  __int128 v75; // [rsp+248h] [rbp-B30h]
  __int128 v76; // [rsp+258h] [rbp-B20h]
  __int128 v77; // [rsp+268h] [rbp-B10h]
  __int128 v78; // [rsp+278h] [rbp-B00h]
  __int128 v79; // [rsp+288h] [rbp-AF0h]
  __int64 v80; // [rsp+298h] [rbp-AE0h]
  int v81[26]; // [rsp+2A0h] [rbp-AD8h] BYREF
  int v82[178]; // [rsp+308h] [rbp-A70h] BYREF
  __int128 v83; // [rsp+5D0h] [rbp-7A8h]
  __int128 v84; // [rsp+5E0h] [rbp-798h]
  __int128 v85; // [rsp+5F0h] [rbp-788h]
  __int128 v86; // [rsp+600h] [rbp-778h]
  __int128 v87; // [rsp+610h] [rbp-768h]
  __int128 v88; // [rsp+620h] [rbp-758h]
  __int64 v89; // [rsp+630h] [rbp-748h]
  __int64 v90; // [rsp+640h] [rbp-738h] BYREF
  __int64 v91; // [rsp+648h] [rbp-730h] BYREF
  int v92; // [rsp+654h] [rbp-724h] BYREF
  int v93[14]; // [rsp+658h] [rbp-720h] BYREF
  int v94[2]; // [rsp+690h] [rbp-6E8h]
  int v95[2]; // [rsp+698h] [rbp-6E0h]
  _QWORD v96[3]; // [rsp+6A0h] [rbp-6D8h] BYREF
  _QWORD v97[3]; // [rsp+6B8h] [rbp-6C0h] BYREF
  _BYTE v98[48]; // [rsp+6D0h] [rbp-6A8h] BYREF
  __int128 v99; // [rsp+700h] [rbp-678h] BYREF
  __int128 v100; // [rsp+710h] [rbp-668h]
  __int64 v101; // [rsp+720h] [rbp-658h] BYREF
  __int64 v102; // [rsp+728h] [rbp-650h]
  _BYTE v103[16]; // [rsp+730h] [rbp-648h] BYREF
  int v104[4]; // [rsp+740h] [rbp-638h] BYREF
  char v105[24]; // [rsp+750h] [rbp-628h] BYREF
  __int64 v106; // [rsp+768h] [rbp-610h]
  __int64 v107; // [rsp+770h] [rbp-608h]
  _BYTE v108[48]; // [rsp+778h] [rbp-600h] BYREF
  _BYTE src[72]; // [rsp+7A8h] [rbp-5D0h] BYREF
  _BYTE v110[72]; // [rsp+7F0h] [rbp-588h] BYREF
  _BYTE dest[72]; // [rsp+838h] [rbp-540h] BYREF
  __int64 v112; // [rsp+880h] [rbp-4F8h]
  __int64 v113; // [rsp+888h] [rbp-4F0h]
  _BYTE v114[24]; // [rsp+890h] [rbp-4E8h] BYREF
  _BYTE v115[64]; // [rsp+8A8h] [rbp-4D0h] BYREF
  _QWORD v116[3]; // [rsp+8E8h] [rbp-490h] BYREF
  _BYTE v117[24]; // [rsp+900h] [rbp-478h] BYREF
  _QWORD v118[3]; // [rsp+918h] [rbp-460h] BYREF
  _QWORD *v119; // [rsp+930h] [rbp-448h]
  __int64 v120; // [rsp+938h] [rbp-440h]
  _QWORD v121[3]; // [rsp+940h] [rbp-438h] BYREF
  _QWORD v122[3]; // [rsp+958h] [rbp-420h] BYREF
  _BYTE v123[48]; // [rsp+970h] [rbp-408h] BYREF
  __int128 v124; // [rsp+9A0h] [rbp-3D8h] BYREF
  __int128 v125; // [rsp+9B0h] [rbp-3C8h]
  _BYTE v126[32]; // [rsp+9C0h] [rbp-3B8h] BYREF
  __int64 v127; // [rsp+9E0h] [rbp-398h] BYREF
  __int128 v128; // [rsp+9E8h] [rbp-390h]
  __int64 v129; // [rsp+9F8h] [rbp-380h]
  __int128 v130; // [rsp+A00h] [rbp-378h] BYREF
  __int64 v131; // [rsp+A10h] [rbp-368h]
  _QWORD v132[3]; // [rsp+A20h] [rbp-358h] BYREF
  _QWORD v133[3]; // [rsp+A38h] [rbp-340h] BYREF
  _BYTE v134[48]; // [rsp+A50h] [rbp-328h] BYREF
  _OWORD v135[2]; // [rsp+A80h] [rbp-2F8h] BYREF
  __int128 v136; // [rsp+AA0h] [rbp-2D8h]
  _QWORD v137[2]; // [rsp+AB0h] [rbp-2C8h] BYREF
  __int128 v138; // [rsp+AC0h] [rbp-2B8h]
  _QWORD v139[2]; // [rsp+AD0h] [rbp-2A8h] BYREF
  __int64 v140; // [rsp+AE0h] [rbp-298h]
  __int64 v141; // [rsp+AE8h] [rbp-290h] BYREF
  _BYTE v142[48]; // [rsp+AF0h] [rbp-288h] BYREF
  _OWORD v143[2]; // [rsp+B20h] [rbp-258h] BYREF
  __int128 v144; // [rsp+B40h] [rbp-238h]
  _QWORD v145[2]; // [rsp+B50h] [rbp-228h] BYREF
  __int128 v146; // [rsp+B60h] [rbp-218h]
  _BYTE v147[48]; // [rsp+B70h] [rbp-208h] BYREF
  __int128 v148; // [rsp+BA0h] [rbp-1D8h] BYREF
  __int128 v149; // [rsp+BB0h] [rbp-1C8h]
  _BYTE v150[48]; // [rsp+BC0h] [rbp-1B8h] BYREF
  __int128 v151; // [rsp+BF0h] [rbp-188h] BYREF
  __int128 v152; // [rsp+C08h] [rbp-170h]
  _BYTE v153[24]; // [rsp+C18h] [rbp-160h] BYREF
  __int128 v154; // [rsp+C30h] [rbp-148h] BYREF
  __int64 v155; // [rsp+C40h] [rbp-138h]
  _BYTE v156[48]; // [rsp+C50h] [rbp-128h] BYREF
  __int128 v157; // [rsp+C80h] [rbp-F8h] BYREF
  __int128 v158; // [rsp+C90h] [rbp-E8h]
  _BYTE v159[30]; // [rsp+CA0h] [rbp-D8h] BYREF
  char v160; // [rsp+CBEh] [rbp-BAh]
  char v161; // [rsp+CBFh] [rbp-B9h]
  __int64 *v162; // [rsp+CD0h] [rbp-A8h]
  __int64 (__fastcall *v163)(); // [rsp+CD8h] [rbp-A0h]
  __int64 *v164; // [rsp+CE0h] [rbp-98h]
  __int64 (__fastcall *v165)(); // [rsp+CE8h] [rbp-90h]
  _BYTE *v166; // [rsp+CF0h] [rbp-88h]
  __int64 (__fastcall *v167)(); // [rsp+CF8h] [rbp-80h]
  _QWORD *v168; // [rsp+D00h] [rbp-78h]
  __int64 (__fastcall *v169)(); // [rsp+D08h] [rbp-70h]
  _BYTE *v170; // [rsp+D10h] [rbp-68h]
  __int64 (__fastcall *v171)(); // [rsp+D18h] [rbp-60h]
  _QWORD *v172; // [rsp+D20h] [rbp-58h]
  __int64 (__fastcall *v173)(); // [rsp+D28h] [rbp-50h]
  _QWORD *v174; // [rsp+D30h] [rbp-48h]
  __int64 (__fastcall *v175)(); // [rsp+D38h] [rbp-40h]
  __int64 *v176; // [rsp+D40h] [rbp-38h]
  __int64 (__fastcall *v177)(); // [rsp+D48h] [rbp-30h]
  _BYTE *v178; // [rsp+D50h] [rbp-28h]
  __int64 (__fastcall *v179)(); // [rsp+D58h] [rbp-20h]
  char v180; // [rsp+D66h] [rbp-12h]
  char v181[17]; // [rsp+D67h] [rbp-11h] BYREF

  v160 = 0;
  v161 = 1;
  uu_tsort::uu_app(v82);
  v161 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v81, (int)v82, a1, a2, v2, v3, v27, v30, v32, v34);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v74, v81);
  if ( (_QWORD)v74 != 0x8000000000000000LL )
  {
    v89 = v80;
    v88 = v79;
    v87 = v78;
    v86 = v77;
    v85 = v76;
    v84 = v75;
    v83 = v74;
    v73 = v80;
    v72[5] = v79;
    v72[4] = v78;
    v72[3] = v77;
    v72[2] = v76;
    v72[1] = v75;
    v72[0] = v74;
    one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v72, aFile, 4LL, &off_10E3C8);
    v90 = core::option::Option<T>::expect(one, aValueIsRequire, 25LL, &off_10E3E0);
    v69 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v90, &off_10E3F8);
    if ( (v69 & 1) != 0 )
    {
      v91 = std::io::stdio::stdin();
      *(_QWORD *)v94 = &v91;
      *(_QWORD *)v95 = &unk_10E498;
    }
    else
    {
      v66 = std::path::Path::new(&v90);
      v67 = v4;
      is_dir = std::path::Path::is_dir();
      if ( (is_dir & 1) != 0 )
      {
        v164 = &v90;
        v165 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v100 = &v90;
        *((_QWORD *)&v100 + 1) = <&T as core::fmt::Display>::fmt;
        v99 = v100;
        core::fmt::Arguments::new_v1(v98, &unk_10E478, &v99);
        alloc::fmt::format(v97, v98);
        v96[0] = v97[0];
        v96[1] = v97[1];
        v96[2] = v97[2];
        v71 = uucore::mods::error::USimpleError::new(1LL, v96);
        goto LABEL_14;
      }
      std::fs::File::open((int)v104, v66, v67, v5, v6, v7, v28, v31, v33, v35, v36, v37, v38, v39, v40, v41, v42, v43);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v103,
        v104,
        v90);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v101, v103);
      if ( v101 )
      {
        v71 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v101,
                v102,
                &off_10E460);
        goto LABEL_14;
      }
      v160 = 1;
      v92 = v102;
      *(_QWORD *)v94 = &v92;
      *(_QWORD *)v95 = &off_10E408;
    }
    std::io::buffered::bufreader::BufReader<R>::new((int)v93, v94[0], v95[0]);
    alloc::string::String::new(v105);
    v8 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(
           (int)v93,
           (char)v105,
           v28,
           v31,
           v33,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           (int)v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61,
           v62,
           v63,
           v64);
    v65 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v8, v9);
    v106 = v65;
    v107 = v10;
    if ( v65 )
    {
      v71 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v107,
              &off_10E5D0);
    }
    else
    {
      <uu_tsort::Graph as core::default::Default>::default(v108);
      v11 = <alloc::string::String as core::ops::deref::Deref>::deref(v105);
      core::str::<impl str>::lines(v110, v11, v12);
      <I as core::iter::traits::collect::IntoIterator>::into_iter(src, v110);
      memcpy(dest, src, sizeof(dest));
LABEL_19:
      v112 = <core::str::iter::Lines as core::iter::traits::iterator::Iterator>::next(dest);
      v113 = v13;
      if ( !v112 )
      {
LABEL_20:
        uu_tsort::Graph::run_tsort(&v127, v108);
        if ( v127 )
        {
          v131 = v129;
          v130 = v128;
          v137[0] = uucore::util_name();
          v137[1] = v21;
          v174 = v137;
          v175 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v136 = v137;
          *((_QWORD *)&v136 + 1) = <&T as core::fmt::Display>::fmt;
          v162 = &v90;
          v163 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v138 = &v90;
          *((_QWORD *)&v138 + 1) = <&T as core::fmt::Display>::fmt;
          v135[0] = v136;
          v135[1] = v138;
          core::fmt::Arguments::new_v1(v134, &unk_10E558, v135);
          alloc::fmt::format(v133, v134);
          v132[0] = v133[0];
          v132[1] = v133[1];
          v132[2] = v133[2];
          v139[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v130);
          v139[1] = v22;
          while ( 1 )
          {
            v140 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v139);
            if ( !v140 )
              break;
            v141 = v140;
            v145[0] = uucore::util_name();
            v145[1] = v26;
            v172 = v145;
            v173 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v144 = v145;
            *((_QWORD *)&v144 + 1) = <&T as core::fmt::Display>::fmt;
            v176 = &v141;
            v177 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v146 = &v141;
            *((_QWORD *)&v146 + 1) = <&T as core::fmt::Display>::fmt;
            v143[0] = v144;
            v143[1] = v146;
            core::fmt::Arguments::new_v1(v142, &unk_10E588, v143);
            v29 = core::fmt::Write::write_fmt(v132, v142);
            v180 = v29 & 1;
            if ( (v29 & 1) != 0 )
              core::result::unwrap_failed(aCalledResultUn, 43LL, v181, &unk_10E2B8, &off_10E5B8);
          }
          v168 = v132;
          v169 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v149 = v132;
          *((_QWORD *)&v149 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v148 = v149;
          core::fmt::Arguments::new_v1(v147, &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168, &v148);
          std::io::stdio::_eprint(v147);
          v23 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v130);
          alloc::slice::<impl [T]>::join(v153, v23, v24, asc_16BBE, 1LL);
          v166 = v153;
          v167 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v152 = v153;
          *((_QWORD *)&v152 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v151 = v152;
          core::fmt::Arguments::new_v1(v150, &unk_10E388, &v151);
          std::io::stdio::_print(v150);
          core::ptr::drop_in_place<alloc::string::String>(v153);
          v71 = uucore::mods::error::USimpleError::new(1LL, 1LL, 0LL);
          core::ptr::drop_in_place<alloc::string::String>(v132);
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v130);
        }
        else
        {
          v155 = v129;
          v154 = v128;
          v19 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v154);
          alloc::slice::<impl [T]>::join(v159, v19, v20, asc_16BBE, 1LL);
          v170 = v159;
          v171 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v158 = v159;
          *((_QWORD *)&v158 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v157 = v158;
          core::fmt::Arguments::new_v1(v156, &unk_10E388, &v157);
          std::io::stdio::_print(v156);
          core::ptr::drop_in_place<alloc::string::String>(v159);
          v71 = 0LL;
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v154);
        }
        core::ptr::drop_in_place<uu_tsort::Graph>(v108);
        core::ptr::drop_in_place<alloc::string::String>(v105);
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(v93);
        if ( (v160 & 1) == 0 )
          goto LABEL_39;
LABEL_38:
        core::ptr::drop_in_place<std::fs::File>(&v92);
LABEL_39:
        v160 = 0;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v72);
        return v71;
      }
      core::str::<impl str>::split_whitespace(v115, v112, v113);
      core::iter::traits::iterator::Iterator::collect(v114, v115);
      if ( (alloc::vec::Vec<T,A>::is_empty(v114) & 1) != 0 )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v114);
        goto LABEL_20;
      }
      v14 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v114);
      core::slice::<impl [T]>::chunks(v117, v14, v15, 2LL, &off_10E4F0);
      <I as core::iter::traits::collect::IntoIterator>::into_iter(v116, v117);
      v118[0] = v116[0];
      v118[1] = v116[1];
      v118[2] = v116[2];
      while ( 1 )
      {
        v119 = (_QWORD *)<core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(v118);
        v120 = v16;
        if ( !v119 )
        {
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v114);
          goto LABEL_19;
        }
        if ( v120 != 2 )
          break;
        uu_tsort::Graph::add_edge(v108, *v119, v119[1], v119[2], v119[3]);
      }
      v17 = <alloc::string::String as core::ops::deref::Deref>::deref(v90);
      os_display::native::Quotable::maybe_quote(v126, v17, v18);
      v178 = v126;
      v179 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v125 = v126;
      *((_QWORD *)&v125 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v124 = v125;
      core::fmt::Arguments::new_v1(v123, &unk_10E538, &v124);
      alloc::fmt::format(v122, v123);
      v121[0] = v122[0];
      v121[1] = v122[1];
      v121[2] = v122[2];
      v71 = uucore::mods::error::USimpleError::new(1LL, v121);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v114);
      core::ptr::drop_in_place<uu_tsort::Graph>(v108);
    }
    core::ptr::drop_in_place<alloc::string::String>(v105);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(v93);
LABEL_14:
    if ( (v160 & 1) == 0 )
      goto LABEL_39;
    goto LABEL_38;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v74 + 1),
           &off_10E5E8);
}
