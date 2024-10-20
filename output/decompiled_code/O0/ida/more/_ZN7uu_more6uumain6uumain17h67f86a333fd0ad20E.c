__int64 __fastcall uu_more::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // edx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  int v35; // eax
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v42; // [rsp+0h] [rbp-ED8h]
  int v43; // [rsp+0h] [rbp-ED8h]
  int v44; // [rsp+8h] [rbp-ED0h]
  int v45; // [rsp+8h] [rbp-ED0h]
  struct _Unwind_Exception *v46; // [rsp+10h] [rbp-EC8h]
  int v47; // [rsp+10h] [rbp-EC8h]
  int v48; // [rsp+18h] [rbp-EC0h]
  int v49; // [rsp+18h] [rbp-EC0h]
  int v50; // [rsp+20h] [rbp-EB8h]
  int v51; // [rsp+28h] [rbp-EB0h]
  int v52; // [rsp+30h] [rbp-EA8h]
  int v53; // [rsp+38h] [rbp-EA0h]
  struct _Unwind_Exception *v54; // [rsp+40h] [rbp-E98h]
  int v55; // [rsp+48h] [rbp-E90h]
  struct _Unwind_Exception *v56; // [rsp+50h] [rbp-E88h]
  int v57; // [rsp+58h] [rbp-E80h]
  int v58; // [rsp+60h] [rbp-E78h]
  int v59; // [rsp+68h] [rbp-E70h]
  int v60; // [rsp+70h] [rbp-E68h]
  int v61; // [rsp+78h] [rbp-E60h]
  int v62; // [rsp+80h] [rbp-E58h]
  __int64 v63; // [rsp+80h] [rbp-E58h]
  __int64 v64; // [rsp+88h] [rbp-E50h]
  int v65; // [rsp+90h] [rbp-E48h]
  int v66; // [rsp+98h] [rbp-E40h]
  int v67; // [rsp+A0h] [rbp-E38h]
  unsigned int v68; // [rsp+A4h] [rbp-E34h]
  int v69; // [rsp+A8h] [rbp-E30h]
  int v70; // [rsp+B0h] [rbp-E28h]
  __int64 v71; // [rsp+B8h] [rbp-E20h]
  int v72; // [rsp+C0h] [rbp-E18h]
  int v73; // [rsp+C8h] [rbp-E10h]
  int v74; // [rsp+D0h] [rbp-E08h]
  unsigned int v75; // [rsp+D4h] [rbp-E04h]
  int v76; // [rsp+D8h] [rbp-E00h]
  int v77; // [rsp+E0h] [rbp-DF8h]
  int v78; // [rsp+E8h] [rbp-DF0h]
  int v79; // [rsp+F0h] [rbp-DE8h]
  struct _Unwind_Exception *v80; // [rsp+F8h] [rbp-DE0h]
  int v81; // [rsp+100h] [rbp-DD8h]
  int v82; // [rsp+140h] [rbp-D98h]
  int v83; // [rsp+148h] [rbp-D90h]
  int v84; // [rsp+160h] [rbp-D78h]
  int v85; // [rsp+168h] [rbp-D70h]
  __int64 v86; // [rsp+1B0h] [rbp-D28h]
  __int64 v87; // [rsp+1B8h] [rbp-D20h]
  unsigned int v88; // [rsp+1DCh] [rbp-CFCh]
  __int64 v89; // [rsp+1F0h] [rbp-CE8h]
  __int64 v90; // [rsp+1F8h] [rbp-CE0h]
  char v91; // [rsp+207h] [rbp-CD1h]
  int v92[2]; // [rsp+208h] [rbp-CD0h]
  int v93[2]; // [rsp+210h] [rbp-CC8h]
  char is_dir; // [rsp+21Fh] [rbp-CB9h]
  __int64 v95; // [rsp+220h] [rbp-CB8h]
  __int64 v96; // [rsp+238h] [rbp-CA0h]
  __int64 v97; // [rsp+240h] [rbp-C98h]
  __int64 v98; // [rsp+248h] [rbp-C90h]
  unsigned __int64 v99; // [rsp+260h] [rbp-C78h]
  __int64 v100; // [rsp+2F8h] [rbp-BE0h]
  __int64 v101; // [rsp+300h] [rbp-BD8h]
  _OWORD v102[6]; // [rsp+310h] [rbp-BC8h] BYREF
  __int64 v103; // [rsp+370h] [rbp-B68h]
  int v104[4]; // [rsp+380h] [rbp-B58h] BYREF
  __int128 v105; // [rsp+390h] [rbp-B48h]
  __int128 v106; // [rsp+3A0h] [rbp-B38h]
  __int128 v107; // [rsp+3B0h] [rbp-B28h]
  __int128 v108; // [rsp+3C0h] [rbp-B18h]
  __int128 v109; // [rsp+3D0h] [rbp-B08h]
  __int64 v110; // [rsp+3E0h] [rbp-AF8h]
  int dest[178]; // [rsp+3E8h] [rbp-AF0h] BYREF
  __int128 v112; // [rsp+6B0h] [rbp-828h]
  __int128 v113; // [rsp+6C0h] [rbp-818h]
  __int128 v114; // [rsp+6D0h] [rbp-808h]
  __int128 v115; // [rsp+6E0h] [rbp-7F8h]
  __int128 v116; // [rsp+6F0h] [rbp-7E8h]
  __int128 v117; // [rsp+700h] [rbp-7D8h]
  __int64 v118; // [rsp+710h] [rbp-7C8h]
  char v119[40]; // [rsp+720h] [rbp-7B8h] BYREF
  char v120[24]; // [rsp+748h] [rbp-790h] BYREF
  _OWORD v121[4]; // [rsp+760h] [rbp-778h] BYREF
  _OWORD v122[4]; // [rsp+7A0h] [rbp-738h] BYREF
  __int64 v123; // [rsp+7E8h] [rbp-6F0h] BYREF
  _BYTE v124[88]; // [rsp+7F0h] [rbp-6E8h] BYREF
  _BYTE v125[64]; // [rsp+848h] [rbp-690h] BYREF
  __int64 v126; // [rsp+888h] [rbp-650h]
  __int64 v127; // [rsp+890h] [rbp-648h]
  __int64 v128; // [rsp+898h] [rbp-640h]
  _QWORD v129[2]; // [rsp+8A0h] [rbp-638h] BYREF
  int v130[2]; // [rsp+8B0h] [rbp-628h] BYREF
  __int64 v131; // [rsp+8B8h] [rbp-620h]
  __int64 v132; // [rsp+8C0h] [rbp-618h]
  _QWORD v133[3]; // [rsp+8C8h] [rbp-610h] BYREF
  _BYTE v134[48]; // [rsp+8E0h] [rbp-5F8h] BYREF
  __int128 v135; // [rsp+910h] [rbp-5C8h] BYREF
  __int128 v136; // [rsp+920h] [rbp-5B8h]
  _BYTE v137[32]; // [rsp+930h] [rbp-5A8h] BYREF
  _BYTE v138[48]; // [rsp+950h] [rbp-588h] BYREF
  _OWORD v139[2]; // [rsp+980h] [rbp-558h] BYREF
  __int128 v140; // [rsp+9A0h] [rbp-538h]
  _QWORD v141[2]; // [rsp+9B0h] [rbp-528h] BYREF
  __int128 v142; // [rsp+9C0h] [rbp-518h]
  _QWORD v143[2]; // [rsp+9D0h] [rbp-508h] BYREF
  _QWORD v144[3]; // [rsp+9E0h] [rbp-4F8h] BYREF
  _QWORD v145[3]; // [rsp+9F8h] [rbp-4E0h] BYREF
  _BYTE v146[48]; // [rsp+A10h] [rbp-4C8h] BYREF
  __int128 v147; // [rsp+A40h] [rbp-498h] BYREF
  __int128 v148; // [rsp+A50h] [rbp-488h]
  _BYTE v149[32]; // [rsp+A60h] [rbp-478h] BYREF
  _BYTE v150[48]; // [rsp+A80h] [rbp-458h] BYREF
  _OWORD v151[2]; // [rsp+AB0h] [rbp-428h] BYREF
  __int128 v152; // [rsp+AD0h] [rbp-408h]
  _QWORD v153[2]; // [rsp+AE0h] [rbp-3F8h] BYREF
  __int128 v154; // [rsp+AF0h] [rbp-3E8h]
  unsigned int v155; // [rsp+B04h] [rbp-3D4h]
  int v156; // [rsp+B08h] [rbp-3D0h] BYREF
  unsigned int v157; // [rsp+B0Ch] [rbp-3CCh]
  __int64 v158; // [rsp+B10h] [rbp-3C8h]
  __int64 v159; // [rsp+B18h] [rbp-3C0h] BYREF
  _QWORD v160[2]; // [rsp+B20h] [rbp-3B8h] BYREF
  _QWORD v161[3]; // [rsp+B30h] [rbp-3A8h] BYREF
  _QWORD v162[3]; // [rsp+B48h] [rbp-390h] BYREF
  _BYTE v163[48]; // [rsp+B60h] [rbp-378h] BYREF
  _OWORD v164[2]; // [rsp+B90h] [rbp-348h] BYREF
  __int128 v165; // [rsp+BB8h] [rbp-320h]
  _BYTE v166[32]; // [rsp+BC8h] [rbp-310h] BYREF
  __int128 v167; // [rsp+BE8h] [rbp-2F0h]
  char v168; // [rsp+BFFh] [rbp-2D9h] BYREF
  _BYTE v169[48]; // [rsp+C00h] [rbp-2D8h] BYREF
  _OWORD v170[2]; // [rsp+C30h] [rbp-2A8h] BYREF
  __int128 v171; // [rsp+C50h] [rbp-288h]
  _QWORD v172[2]; // [rsp+C60h] [rbp-278h] BYREF
  __int128 v173; // [rsp+C70h] [rbp-268h]
  int v174[12]; // [rsp+C80h] [rbp-258h] BYREF
  __int64 v175; // [rsp+CB0h] [rbp-228h]
  __int64 v176; // [rsp+CB8h] [rbp-220h]
  __int64 v177; // [rsp+CC0h] [rbp-218h] BYREF
  __int64 v178; // [rsp+CC8h] [rbp-210h] BYREF
  __int64 v179; // [rsp+CD0h] [rbp-208h]
  __int64 v180; // [rsp+CD8h] [rbp-200h]
  __int64 v181; // [rsp+CE0h] [rbp-1F8h]
  __int64 v182; // [rsp+CE8h] [rbp-1F0h]
  __int64 v183; // [rsp+CF0h] [rbp-1E8h]
  __int64 v184; // [rsp+CF8h] [rbp-1E0h]
  char v185; // [rsp+D06h] [rbp-1D2h]
  char v186; // [rsp+D07h] [rbp-1D1h]
  _QWORD *v187; // [rsp+D18h] [rbp-1C0h]
  __int64 (__fastcall *v188)(); // [rsp+D20h] [rbp-1B8h]
  _QWORD *v189; // [rsp+D28h] [rbp-1B0h]
  __int64 (__fastcall *v190)(); // [rsp+D30h] [rbp-1A8h]
  _QWORD *v191; // [rsp+D38h] [rbp-1A0h]
  __int64 (__fastcall *v192)(); // [rsp+D40h] [rbp-198h]
  char *v193; // [rsp+D48h] [rbp-190h]
  __int64 (__fastcall *v194)(); // [rsp+D50h] [rbp-188h]
  _BYTE *v195; // [rsp+D58h] [rbp-180h]
  __int64 (__fastcall *v196)(); // [rsp+D60h] [rbp-178h]
  _BYTE *v197; // [rsp+D68h] [rbp-170h]
  __int64 (__fastcall *v198)(); // [rsp+D70h] [rbp-168h]
  _BYTE *v199; // [rsp+D78h] [rbp-160h]
  __int64 (__fastcall *v200)(); // [rsp+D80h] [rbp-158h]
  _QWORD *v201; // [rsp+D88h] [rbp-150h]
  __int64 (__fastcall *v202)(); // [rsp+D90h] [rbp-148h]
  _QWORD *v203; // [rsp+D98h] [rbp-140h]
  __int64 (__fastcall *v204)(); // [rsp+DA0h] [rbp-138h]
  _QWORD *v205; // [rsp+DA8h] [rbp-130h]
  __int64 (__fastcall *v206)(); // [rsp+DB0h] [rbp-128h]
  __int64 v207; // [rsp+DB8h] [rbp-120h]
  __int64 v208; // [rsp+DC0h] [rbp-118h]
  _QWORD v209[4]; // [rsp+DC8h] [rbp-110h] BYREF
  __int64 v210; // [rsp+DE8h] [rbp-F0h]
  __int64 v211[3]; // [rsp+DF0h] [rbp-E8h] BYREF
  __int64 v212; // [rsp+E08h] [rbp-D0h]
  __int64 v213[3]; // [rsp+E10h] [rbp-C8h] BYREF
  __int64 v214; // [rsp+E28h] [rbp-B0h]
  __int64 v215[3]; // [rsp+E30h] [rbp-A8h] BYREF
  __int64 v216; // [rsp+E48h] [rbp-90h]
  __int64 v217[3]; // [rsp+E50h] [rbp-88h] BYREF
  __int64 v218; // [rsp+E68h] [rbp-70h]
  __int64 v219[3]; // [rsp+E70h] [rbp-68h] BYREF
  __int64 v220; // [rsp+E88h] [rbp-50h]
  __int64 v221[3]; // [rsp+E90h] [rbp-48h] BYREF
  __int64 v222; // [rsp+EA8h] [rbp-30h]
  __int64 v223[5]; // [rsp+EB0h] [rbp-28h] BYREF

  v185 = 0;
  v186 = 1;
  v100 = alloc::alloc::exchange_malloc(0LL, 1LL);
  std::panicking::set_hook(v100, &unk_145658);
  uu_more::uu_app(dest);
  v186 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v104,
    (int)dest,
    a1,
    a2,
    v2,
    v3,
    v42,
    v44,
    v46,
    v48);
  if ( *(_QWORD *)v104 == 0x8000000000000000LL )
    return <T as core::convert::Into<U>>::into(*(_QWORD *)&v104[2], &off_145820);
  v118 = v110;
  v117 = v109;
  v116 = v108;
  v115 = v107;
  v114 = v106;
  v113 = v105;
  v112 = *(_OWORD *)v104;
  v103 = v110;
  v102[5] = v109;
  v102[4] = v108;
  v102[3] = v107;
  v102[2] = v106;
  v102[1] = v105;
  v102[0] = *(_OWORD *)v104;
  uu_more::Options::from(v119, v102);
  alloc::string::String::new(v120);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v121, v102, aFiles, 5LL, &off_145688);
  if ( *(_QWORD *)&v121[0] != 0LL )
  {
    v122[3] = v121[3];
    v122[2] = v121[2];
    v122[1] = v121[1];
    v122[0] = v121[0];
    v123 = uu_more::setup_term();
    v99 = core::iter::traits::exact_size::ExactSizeIterator::len(v122);
    core::iter::traits::iterator::Iterator::map(v125, v122);
    core::iter::traits::iterator::Iterator::peekable(v124, v125);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v96 = <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::next(v124);
            v97 = v4;
            v98 = core::iter::adapters::peekable::Peekable<I>::peek(v124);
            v126 = v96;
            v127 = v97;
            v128 = v98;
            if ( v96 == 0 )
            {
              uu_more::reset_term(&v123);
              goto LABEL_40;
            }
            v95 = v128;
            *(_QWORD *)v92 = std::path::Path::new(v126, v127);
            *(_QWORD *)v93 = v5;
            is_dir = std::path::Path::is_dir();
            if ( (is_dir & 1) == 0 )
              break;
            v90 = crossterm::terminal::disable_raw_mode();
            v214 = v90;
            if ( v90 )
            {
              v215[0] = v214;
              core::result::unwrap_failed(aCalledResultUn, 43LL, v215, &off_1454A8, &off_1457A0);
            }
            <std::path::Path as os_display::native::Quotable>::quote(v137, *(_QWORD *)v92, *(_QWORD *)v93);
            v195 = v137;
            v196 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v136 = v137;
            *((_QWORD *)&v136 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
            v135 = v136;
            core::fmt::Arguments::new_v1(v134, &unk_1457B8, &v135);
            alloc::fmt::format(v133, v134);
            *(_QWORD *)v130 = v133[0];
            v131 = v133[1];
            v132 = v133[2];
            v27 = uucore::mods::error::UUsageError::new(
                    0,
                    (int)v130,
                    v23,
                    v24,
                    v25,
                    v26,
                    v43,
                    v45,
                    v47,
                    v49,
                    v50,
                    v51,
                    v52,
                    v53,
                    v54,
                    v55);
            v69 = v28;
            v70 = v27;
            v129[0] = v27;
            v129[1] = v28;
            v68 = (*(__int64 (__fastcall **)(__int64))(v28 + 96))(v27);
            uucore::mods::error::set_exit_code(v68);
            v29 = uucore::util_name();
            v65 = v30;
            v66 = v29;
            v141[0] = v29;
            v141[1] = v30;
            v187 = v141;
            v188 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v140 = v141;
            *((_QWORD *)&v140 + 1) = <&T as core::fmt::Display>::fmt;
            v201 = v129;
            v202 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)&v142 = v129;
            *((_QWORD *)&v142 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v139[0] = v140;
            v139[1] = v142;
            core::fmt::Arguments::new_v1(v138, &unk_1456D8, v139);
            std::io::stdio::_eprint(v138);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v129);
            v64 = crossterm::terminal::enable_raw_mode();
            v212 = v64;
            if ( v64 )
            {
              v213[0] = v212;
              core::result::unwrap_failed(aCalledResultUn, 43LL, v213, &off_1454A8, &off_1457D8);
            }
          }
          v91 = std::path::Path::exists(*(_QWORD *)v92, *(_QWORD *)v93);
          if ( (v91 & 1) != 0 )
            break;
          v89 = crossterm::terminal::disable_raw_mode();
          v222 = v89;
          if ( v89 )
          {
            v223[0] = v222;
            core::result::unwrap_failed(aCalledResultUn, 43LL, v223, &off_1454A8, &off_1456A0);
          }
          <std::path::Path as os_display::native::Quotable>::quote(v149, *(_QWORD *)v92, *(_QWORD *)v93);
          v199 = v149;
          v200 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v148 = v149;
          *((_QWORD *)&v148 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          v147 = v148;
          core::fmt::Arguments::new_v1(v146, &off_1456B8, &v147);
          alloc::fmt::format(v145, v146);
          v144[0] = v145[0];
          v144[1] = v145[1];
          v144[2] = v145[2];
          v143[0] = uucore::mods::error::USimpleError::new(0LL, v144);
          v143[1] = v9;
          v88 = (*(__int64 (__fastcall **)(_QWORD))(v9 + 96))(v143[0]);
          uucore::mods::error::set_exit_code(v88);
          v153[0] = uucore::util_name();
          v153[1] = v10;
          v191 = v153;
          v192 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v152 = v153;
          *((_QWORD *)&v152 + 1) = <&T as core::fmt::Display>::fmt;
          v205 = v143;
          v206 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          *(_QWORD *)&v154 = v143;
          *((_QWORD *)&v154 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          v151[0] = v152;
          v151[1] = v154;
          core::fmt::Arguments::new_v1(v150, &unk_1456D8, v151);
          std::io::stdio::_eprint(v150);
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v143);
          v220 = crossterm::terminal::enable_raw_mode();
          if ( v220 )
          {
            v221[0] = v220;
            core::result::unwrap_failed(aCalledResultUn, 43LL, v221, &off_1454A8, &off_145708);
          }
        }
        std::fs::File::open(
          (int)&v156,
          v92[0],
          v93[0],
          v6,
          v7,
          v8,
          v43,
          v45,
          v47,
          v49,
          v50,
          v51,
          v52,
          v53,
          (int)v54,
          v55,
          v56,
          v57);
        if ( !v156 )
          break;
        v159 = v158;
        v87 = crossterm::terminal::disable_raw_mode();
        v218 = v87;
        if ( v87 )
        {
          v219[0] = v218;
          core::result::unwrap_failed(aCalledResultUn, 43LL, v219, &off_1454A8, &off_145750);
        }
        <std::path::Path as os_display::native::Quotable>::quote(v166, *(_QWORD *)v92, *(_QWORD *)v93);
        v197 = v166;
        v198 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v165 = v166;
        *((_QWORD *)&v165 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v168 = std::io::error::Error::kind(&v159);
        v193 = &v168;
        v194 = <std::io::error::ErrorKind as core::fmt::Display>::fmt;
        *(_QWORD *)&v167 = &v168;
        *((_QWORD *)&v167 + 1) = <std::io::error::ErrorKind as core::fmt::Display>::fmt;
        v164[0] = v165;
        v164[1] = v167;
        core::fmt::Arguments::new_v1(v163, &off_145768, v164);
        alloc::fmt::format(v162, v163);
        v161[0] = v162[0];
        v161[1] = v162[1];
        v161[2] = v162[2];
        v19 = uucore::mods::error::USimpleError::new(0LL, v161);
        v76 = v20;
        v77 = v19;
        v160[0] = v19;
        v160[1] = v20;
        v75 = (*(__int64 (__fastcall **)(__int64))(v20 + 96))(v19);
        uucore::mods::error::set_exit_code(v75);
        v21 = uucore::util_name();
        v72 = v22;
        v73 = v21;
        v172[0] = v21;
        v172[1] = v22;
        v189 = v172;
        v190 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v171 = v172;
        *((_QWORD *)&v171 + 1) = <&T as core::fmt::Display>::fmt;
        v203 = v160;
        v204 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v173 = v160;
        *((_QWORD *)&v173 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v170[0] = v171;
        v170[1] = v173;
        core::fmt::Arguments::new_v1(v169, &unk_1456D8, v170);
        std::io::stdio::_eprint(v169);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v160);
        v71 = crossterm::terminal::enable_raw_mode();
        v216 = v71;
        if ( v71 )
        {
          v217[0] = v216;
          core::result::unwrap_failed(aCalledResultUn, 43LL, v217, &off_1454A8, &off_145788);
        }
        core::ptr::drop_in_place<std::io::error::Error>(&v159);
        v185 = 0;
      }
      v155 = v157;
      v185 = 0;
      std::io::buffered::bufreader::BufReader<R>::new(v174, v157);
      v86 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(
              (int)v174,
              (char)v120,
              v43,
              v45,
              v47,
              v49,
              v50,
              v51,
              v52,
              v53,
              (int)v54,
              v55,
              (int)v56,
              v57,
              v58,
              v59,
              v60,
              v61,
              v62,
              v64,
              v65,
              v66,
              v67,
              v69,
              v70,
              v71,
              v72,
              v73,
              v74,
              v76,
              v77,
              v78,
              v79,
              v80,
              v81);
      v209[3] = v86;
      v210 = v11;
      if ( v86 )
      {
        v211[0] = v210;
        core::result::unwrap_failed(aCalledResultUn, 43LL, v211, &off_1454A8, &off_145720);
      }
      v84 = <alloc::string::String as core::ops::deref::Deref>::deref(v120);
      v85 = v12;
      v82 = std::path::Path::to_str(*(_QWORD *)v92, *(_QWORD *)v93);
      v83 = v13;
      v14 = core::option::Option<&T>::copied(v95);
      v16 = uu_more::more(v84, v85, (unsigned int)&v123, v99 >= 2, v82, v83, v14, v15, (__int64)v119);
      v175 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v16, v17);
      v176 = v18;
      if ( v175 )
        break;
      alloc::string::String::clear(v120);
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v174);
      v185 = 0;
    }
    v101 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             v175,
             v176,
             &off_145738);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v174);
    v185 = 0;
    goto LABEL_29;
  }
  v177 = std::io::stdio::stdin();
  v63 = <std::io::stdio::Stdin as std::io::Read>::read_to_string(&v177, v120);
  v207 = v63;
  v208 = v31;
  if ( v63 )
  {
    v209[0] = v208;
    core::result::unwrap_failed(aCalledResultUn, 43LL, v209, &off_1454A8, &off_1457F0);
  }
  if ( (alloc::string::String::is_empty(v120) & 1) != 0 )
  {
    v101 = uucore::mods::error::UUsageError::new(
             1,
             (int)aBadUsage,
             9,
             v32,
             v33,
             v34,
             v43,
             v45,
             v47,
             v49,
             v50,
             v51,
             v52,
             v53,
             v54,
             v55);
LABEL_29:
    core::ptr::drop_in_place<alloc::string::String>(v120);
    core::ptr::drop_in_place<uu_more::Options>(v119);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v102);
    return v101;
  }
  v178 = uu_more::setup_term();
  v35 = <alloc::string::String as core::ops::deref::Deref>::deref(v120);
  v181 = 0LL;
  v183 = 0LL;
  v37 = uu_more::more(v35, v36, (unsigned int)&v178, 0, 0, v182, 0LL, v184, (__int64)v119);
  v39 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v37, v38);
  v179 = v39;
  v180 = v40;
  if ( v39 )
  {
    v101 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             v179,
             v180,
             &off_145808);
    goto LABEL_29;
  }
  uu_more::reset_term(&v178);
LABEL_40:
  v101 = 0LL;
  core::ptr::drop_in_place<alloc::string::String>(v120);
  core::ptr::drop_in_place<uu_more::Options>(v119);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v102);
  return v101;
}
