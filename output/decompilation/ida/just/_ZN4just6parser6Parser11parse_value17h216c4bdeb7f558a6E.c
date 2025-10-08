__int64 __fastcall just::parser::Parser::parse_value(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  unsigned __int8 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // cl
  char v17; // al
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  char v24; // cl
  int v25; // esi
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  int v29; // esi
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int64 v36; // rdx
  char v37; // si
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  int v40; // edi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int128 v43; // xmm0
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  int v47; // ecx
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int64 v51; // r15
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  __int128 v57; // xmm3
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  __int64 v61; // rcx
  __int128 v62; // xmm0
  __int64 v63; // rdx
  char v64; // si
  __int128 v65; // xmm1
  __int128 v66; // xmm2
  int v67; // edi
  __int64 v68; // rcx
  __int128 v69; // xmm0
  __int64 v70; // rdx
  char v71; // si
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  int v74; // edi
  __int64 v75; // r15
  char v76; // al
  __int64 v77; // rcx
  __int128 v78; // xmm0
  __int64 v79; // rdx
  char v80; // si
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  int v83; // edi
  unsigned __int8 v84; // [rsp+Fh] [rbp-3B9h]
  __int128 v85; // [rsp+10h] [rbp-3B8h] BYREF
  __int128 v86; // [rsp+20h] [rbp-3A8h]
  __int128 v87; // [rsp+30h] [rbp-398h]
  __int128 v88; // [rsp+40h] [rbp-388h]
  __int128 v89; // [rsp+50h] [rbp-378h]
  _BYTE v90[72]; // [rsp+68h] [rbp-360h] BYREF
  __int128 v91; // [rsp+B0h] [rbp-318h]
  __int128 v92; // [rsp+C0h] [rbp-308h]
  __int128 v93; // [rsp+D0h] [rbp-2F8h]
  __int64 v94; // [rsp+E0h] [rbp-2E8h]
  __int64 v95; // [rsp+E8h] [rbp-2E0h]
  __int64 v96; // [rsp+F0h] [rbp-2D8h]
  __int128 v97; // [rsp+F8h] [rbp-2D0h] BYREF
  __int64 v98; // [rsp+108h] [rbp-2C0h]
  __int128 v99; // [rsp+110h] [rbp-2B8h] BYREF
  __int128 v100; // [rsp+120h] [rbp-2A8h]
  __int128 v101; // [rsp+130h] [rbp-298h]
  __int128 v102; // [rsp+140h] [rbp-288h]
  __int64 v103; // [rsp+150h] [rbp-278h]
  __int128 v104; // [rsp+160h] [rbp-268h] BYREF
  __int64 v105; // [rsp+170h] [rbp-258h]
  __int64 v106; // [rsp+180h] [rbp-248h]
  __int64 v107; // [rsp+188h] [rbp-240h]
  __int128 v108; // [rsp+190h] [rbp-238h]
  __int64 v109; // [rsp+1A0h] [rbp-228h]
  __int128 v110; // [rsp+1B0h] [rbp-218h] BYREF
  __int128 v111; // [rsp+1C0h] [rbp-208h]
  __int128 v112; // [rsp+1D0h] [rbp-1F8h]
  __int128 v113; // [rsp+1E0h] [rbp-1E8h]
  __int64 v114; // [rsp+1F0h] [rbp-1D8h]
  __int128 v115; // [rsp+200h] [rbp-1C8h]
  __int128 v116; // [rsp+210h] [rbp-1B8h]
  __int128 v117; // [rsp+220h] [rbp-1A8h]
  __int128 v118; // [rsp+230h] [rbp-198h]
  __int64 v119; // [rsp+240h] [rbp-188h]
  _OWORD v120[4]; // [rsp+250h] [rbp-178h] BYREF
  __int64 v121; // [rsp+290h] [rbp-138h]
  __int64 v122; // [rsp+298h] [rbp-130h] BYREF
  __int128 v123; // [rsp+2A0h] [rbp-128h]
  __int128 v124; // [rsp+2B0h] [rbp-118h]
  __int128 v125; // [rsp+2C0h] [rbp-108h]
  __int128 v126; // [rsp+2D0h] [rbp-F8h]
  __int128 v127; // [rsp+2E0h] [rbp-E8h]
  __int128 v128; // [rsp+2F0h] [rbp-D8h]
  __int128 v129; // [rsp+300h] [rbp-C8h]
  __int64 v130; // [rsp+310h] [rbp-B8h]
  __int64 v131; // [rsp+318h] [rbp-B0h] BYREF
  __int128 v132; // [rsp+320h] [rbp-A8h]
  __int128 v133; // [rsp+330h] [rbp-98h]
  __int128 v134; // [rsp+340h] [rbp-88h]
  __int128 v135; // [rsp+350h] [rbp-78h]
  __int128 v136; // [rsp+360h] [rbp-68h]
  __int128 v137; // [rsp+370h] [rbp-58h]
  __int128 v138; // [rsp+380h] [rbp-48h]
  __int64 v139; // [rsp+390h] [rbp-38h]

  if ( (unsigned __int8)just::parser::Parser::next_is((__int64)a2, 33)
    || just::parser::Parser::next_is_shell_expanded_string(a2) )
  {
    just::parser::Parser::parse_string_literal(v90, a2);
    result = (unsigned __int8)v91;
    if ( (_BYTE)v91 == 37 )
    {
      v4 = *(_OWORD *)v90;
      v5 = *(_OWORD *)&v90[16];
      v87 = *(_OWORD *)&v90[32];
      v86 = *(_OWORD *)&v90[16];
      v85 = *(_OWORD *)v90;
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v90[32];
      *(_OWORD *)(a1 + 24) = v5;
      *(_OWORD *)(a1 + 8) = v4;
      *(_QWORD *)a1 = 16LL;
      return result;
    }
    goto LABEL_35;
  }
  if ( !(unsigned __int8)just::parser::Parser::next_is((__int64)a2, 3) )
  {
    if ( (unsigned __int8)just::parser::Parser::next_is((__int64)a2, 24) )
    {
      just::parser::Parser::accepted_keyword((__int64)v90, a2, 3u);
      result = v90[0];
      v16 = v91;
      if ( (_BYTE)v91 != 37 )
      {
        *(_QWORD *)(a1 + 72) = *(_QWORD *)&v90[64];
        v26 = *(_OWORD *)&v90[1];
        v27 = *(_OWORD *)&v90[17];
        v28 = *(_OWORD *)&v90[33];
        *(_OWORD *)(a1 + 57) = *(_OWORD *)&v90[49];
        *(_OWORD *)(a1 + 41) = v28;
        *(_OWORD *)(a1 + 25) = v27;
        *(_OWORD *)(a1 + 9) = v26;
        v29 = DWORD1(v91);
        *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v91 + 1);
        *(_DWORD *)(a1 + 84) = v29;
        *(_BYTE *)(a1 + 8) = result;
        *(_BYTE *)(a1 + 80) = v16;
        goto LABEL_38;
      }
      if ( (v90[0] & 1) != 0 )
      {
        just::parser::Parser::expect((__int64)v90, a2);
        result = (unsigned __int8)v91;
        if ( (_BYTE)v91 == 37 )
        {
          just::parser::Parser::parse_condition((__int64)v90, a2);
          result = (unsigned __int8)v91;
          if ( (_BYTE)v91 == 37 )
          {
            v99 = *(_OWORD *)v90;
            *(_QWORD *)&v100 = *(_QWORD *)&v90[16];
            just::parser::Parser::expect((__int64)v90, a2);
            v17 = v91;
            if ( (_BYTE)v91 == 37 )
            {
              just::parser::Parser::parse_expression((__int64)v90, a2);
              v85 = *(_OWORD *)&v90[8];
              v86 = *(_OWORD *)&v90[24];
              v87 = *(_OWORD *)&v90[40];
              v88 = *(_OWORD *)&v90[56];
              v89 = v91;
              if ( *(_QWORD *)v90 != 18LL )
              {
                v130 = v94;
                v129 = v93;
                v128 = v92;
                v122 = *(_QWORD *)v90;
                v123 = v85;
                v124 = v86;
                v125 = v87;
                v126 = v88;
                v127 = v89;
                v75 = alloc::boxed::Box<T>::new(&v122);
                *(_QWORD *)&v104 = v75;
                just::parser::Parser::expect((__int64)v90, a2);
                v76 = v91;
                if ( (_BYTE)v91 == 37 )
                {
                  result = v100;
                  *(_QWORD *)(a1 + 32) = v100;
                  *(_OWORD *)(a1 + 16) = v99;
                  *(_QWORD *)a1 = 8LL;
                  *(_QWORD *)(a1 + 8) = v75;
                  return result;
                }
                v77 = *(_QWORD *)v90;
                v78 = *(_OWORD *)&v90[8];
                v79 = *(_QWORD *)&v90[56];
                v80 = v90[64];
                LODWORD(v85) = *(_DWORD *)&v90[65];
                *(_DWORD *)((char *)&v85 + 3) = *(_DWORD *)&v90[68];
                *(_DWORD *)(a1 + 84) = DWORD1(v91);
                *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v91 + 1);
                v81 = *(_OWORD *)&v90[24];
                v82 = *(_OWORD *)&v90[40];
                v83 = v85;
                *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)&v85 + 3);
                *(_DWORD *)(a1 + 73) = v83;
                *(_QWORD *)(a1 + 8) = v77;
                *(_OWORD *)(a1 + 16) = v78;
                *(_OWORD *)(a1 + 32) = v81;
                *(_OWORD *)(a1 + 48) = v82;
                *(_QWORD *)(a1 + 64) = v79;
                *(_BYTE *)(a1 + 72) = v80;
                *(_BYTE *)(a1 + 80) = v76;
                *(_QWORD *)a1 = 18LL;
                core::ptr::drop_in_place<alloc::boxed::Box<just::expression::Expression>>(&v104);
                return core::ptr::drop_in_place<just::condition::Condition>(&v99);
              }
              *(_OWORD *)(a1 + 72) = v89;
              v18 = v85;
              v19 = v86;
              v20 = v87;
              *(_OWORD *)(a1 + 56) = v88;
              *(_OWORD *)(a1 + 40) = v20;
              *(_OWORD *)(a1 + 24) = v19;
              *(_OWORD *)(a1 + 8) = v18;
            }
            else
            {
              v68 = *(_QWORD *)v90;
              v69 = *(_OWORD *)&v90[8];
              v70 = *(_QWORD *)&v90[56];
              v71 = v90[64];
              LODWORD(v85) = *(_DWORD *)&v90[65];
              *(_DWORD *)((char *)&v85 + 3) = *(_DWORD *)&v90[68];
              *(_DWORD *)(a1 + 84) = DWORD1(v91);
              *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v91 + 1);
              v72 = *(_OWORD *)&v90[24];
              v73 = *(_OWORD *)&v90[40];
              v74 = v85;
              *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)&v85 + 3);
              *(_DWORD *)(a1 + 73) = v74;
              *(_QWORD *)(a1 + 8) = v68;
              *(_OWORD *)(a1 + 16) = v69;
              *(_OWORD *)(a1 + 32) = v72;
              *(_OWORD *)(a1 + 48) = v73;
              *(_QWORD *)(a1 + 64) = v70;
              *(_BYTE *)(a1 + 72) = v71;
              *(_BYTE *)(a1 + 80) = v17;
            }
            *(_QWORD *)a1 = 18LL;
            return core::ptr::drop_in_place<just::condition::Condition>(&v99);
          }
LABEL_35:
          *(_QWORD *)&v89 = *(_QWORD *)&v90[64];
          v88 = *(_OWORD *)&v90[48];
          v87 = *(_OWORD *)&v90[32];
          v86 = *(_OWORD *)&v90[16];
          v85 = *(_OWORD *)v90;
          *(_DWORD *)(a1 + 84) = DWORD1(v91);
          v47 = *(_DWORD *)((char *)&v91 + 1);
LABEL_36:
          *(_DWORD *)(a1 + 81) = v47;
          *(_QWORD *)(a1 + 72) = v89;
          v48 = v85;
          v49 = v86;
          v50 = v87;
          *(_OWORD *)(a1 + 56) = v88;
          *(_OWORD *)(a1 + 40) = v50;
          *(_OWORD *)(a1 + 24) = v49;
          *(_OWORD *)(a1 + 8) = v48;
          goto LABEL_37;
        }
LABEL_27:
        v34 = *(_QWORD *)v90;
        v35 = *(_OWORD *)&v90[8];
        v36 = *(_QWORD *)&v90[56];
        v37 = v90[64];
        LODWORD(v85) = *(_DWORD *)&v90[65];
        *(_DWORD *)((char *)&v85 + 3) = *(_DWORD *)&v90[68];
        *(_DWORD *)(a1 + 84) = DWORD1(v91);
        *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v91 + 1);
        v38 = *(_OWORD *)&v90[24];
        v39 = *(_OWORD *)&v90[40];
        v40 = v85;
        *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)&v85 + 3);
        *(_DWORD *)(a1 + 73) = v40;
        *(_QWORD *)(a1 + 8) = v34;
        *(_OWORD *)(a1 + 16) = v35;
        *(_OWORD *)(a1 + 32) = v38;
        *(_OWORD *)(a1 + 48) = v39;
        *(_QWORD *)(a1 + 64) = v36;
        *(_BYTE *)(a1 + 72) = v37;
        goto LABEL_37;
      }
      just::parser::Parser::parse_name(v90, a2);
      result = (unsigned __int8)v91;
      v85 = *(_OWORD *)v90;
      v86 = *(_OWORD *)&v90[16];
      v87 = *(_OWORD *)&v90[32];
      v88 = *(_OWORD *)&v90[48];
      *(_QWORD *)&v89 = *(_QWORD *)&v90[64];
      if ( (_BYTE)v91 != 37 )
        goto LABEL_39;
      v110 = v85;
      v111 = v86;
      v112 = v87;
      v113 = v88;
      v114 = v89;
      v99 = v85;
      v100 = v86;
      v101 = v87;
      v102 = v88;
      v103 = v89;
      if ( !(unsigned __int8)just::parser::Parser::next_is((__int64)a2, 28) )
      {
        result = v114;
        *(_QWORD *)(a1 + 72) = v114;
        v58 = v110;
        v59 = v111;
        v60 = v112;
        *(_OWORD *)(a1 + 56) = v113;
        *(_OWORD *)(a1 + 40) = v60;
        *(_OWORD *)(a1 + 24) = v59;
        *(_OWORD *)(a1 + 8) = v58;
        *(_QWORD *)a1 = 17LL;
        return result;
      }
      just::parser::Parser::parse_sequence(v90, a2);
      result = (unsigned __int8)v91;
      if ( (_BYTE)v91 != 37 )
        goto LABEL_35;
      v108 = *(_OWORD *)v90;
      v109 = *(_QWORD *)&v90[16];
      v41 = just::token::Token::lexeme(&v99);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v41, v42, aWhich, 5LL) )
        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a2 + 13, 4LL);
      v105 = v109;
      v104 = v108;
      just::thunk::Thunk::resolve(v90, &v110, &v104);
      result = *(_QWORD *)v90;
      v85 = *(_OWORD *)&v90[8];
      v86 = *(_OWORD *)&v90[24];
      v87 = *(_OWORD *)&v90[40];
      v88 = *(_OWORD *)&v90[56];
      v89 = v91;
      if ( *(_QWORD *)v90 != 7LL )
      {
        *(_QWORD *)(a1 + 120) = v94;
        v43 = v92;
        *(_OWORD *)(a1 + 104) = v93;
        *(_OWORD *)(a1 + 88) = v43;
        *(_OWORD *)(a1 + 72) = v89;
        v44 = v85;
        v45 = v86;
        v46 = v87;
        *(_OWORD *)(a1 + 56) = v88;
        *(_OWORD *)(a1 + 40) = v46;
        *(_OWORD *)(a1 + 24) = v45;
        *(_OWORD *)(a1 + 8) = v44;
        *(_QWORD *)a1 = result;
        return result;
      }
    }
    else
    {
      if ( !(unsigned __int8)just::parser::Parser::next_is((__int64)a2, 28) )
      {
        result = just::parser::Parser::unexpected_token((__int64)v90, a2);
        v89 = v91;
        v30 = *(_OWORD *)&v90[8];
        v31 = *(_OWORD *)&v90[24];
        v32 = *(_OWORD *)&v90[40];
        v33 = *(_OWORD *)&v90[56];
        v88 = *(_OWORD *)&v90[56];
        v87 = *(_OWORD *)&v90[40];
        v86 = *(_OWORD *)&v90[24];
        v85 = *(_OWORD *)&v90[8];
        *(_OWORD *)(a1 + 72) = v91;
        *(_OWORD *)(a1 + 56) = v33;
        *(_OWORD *)(a1 + 40) = v32;
        *(_OWORD *)(a1 + 24) = v31;
        *(_OWORD *)(a1 + 8) = v30;
        goto LABEL_38;
      }
      just::parser::Parser::presume((__int64)v90, a2, 28);
      result = (unsigned __int8)v91;
      if ( (_BYTE)v91 != 37 )
        goto LABEL_27;
      just::parser::Parser::parse_expression((__int64)v90, a2);
      result = *(_QWORD *)v90;
      v85 = *(_OWORD *)&v90[8];
      v86 = *(_OWORD *)&v90[24];
      v87 = *(_OWORD *)&v90[40];
      v88 = *(_OWORD *)&v90[56];
      v89 = v91;
      if ( *(_QWORD *)v90 != 18LL )
      {
        v139 = v94;
        v138 = v93;
        v137 = v92;
        v131 = *(_QWORD *)v90;
        v132 = v85;
        v133 = v86;
        v134 = v87;
        v135 = v88;
        v136 = v89;
        v51 = alloc::boxed::Box<T>::new(&v131);
        *(_QWORD *)&v99 = v51;
        just::parser::Parser::expect((__int64)v90, a2);
        result = (unsigned __int8)v91;
        if ( (_BYTE)v91 == 37 )
        {
          *(_QWORD *)a1 = 13LL;
          *(_QWORD *)(a1 + 8) = v51;
        }
        else
        {
          v61 = *(_QWORD *)v90;
          v62 = *(_OWORD *)&v90[8];
          v63 = *(_QWORD *)&v90[56];
          v64 = v90[64];
          LODWORD(v85) = *(_DWORD *)&v90[65];
          *(_DWORD *)((char *)&v85 + 3) = *(_DWORD *)&v90[68];
          *(_DWORD *)(a1 + 84) = DWORD1(v91);
          *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v91 + 1);
          v65 = *(_OWORD *)&v90[24];
          v66 = *(_OWORD *)&v90[40];
          v67 = v85;
          *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)&v85 + 3);
          *(_DWORD *)(a1 + 73) = v67;
          *(_QWORD *)(a1 + 8) = v61;
          *(_OWORD *)(a1 + 16) = v62;
          *(_OWORD *)(a1 + 32) = v65;
          *(_OWORD *)(a1 + 48) = v66;
          *(_QWORD *)(a1 + 64) = v63;
          *(_BYTE *)(a1 + 72) = v64;
          *(_BYTE *)(a1 + 80) = result;
          *(_QWORD *)a1 = 18LL;
          return core::ptr::drop_in_place<alloc::boxed::Box<just::expression::Expression>>(&v99);
        }
        return result;
      }
    }
    *(_OWORD *)(a1 + 72) = v89;
    v21 = v85;
    v22 = v86;
    v23 = v87;
    *(_OWORD *)(a1 + 56) = v88;
    *(_OWORD *)(a1 + 40) = v23;
    *(_OWORD *)(a1 + 24) = v22;
    *(_OWORD *)(a1 + 8) = v21;
LABEL_38:
    *(_QWORD *)a1 = 18LL;
    return result;
  }
  just::parser::Parser::next((__int64)v90, a2);
  result = (unsigned __int8)v91;
  v85 = *(_OWORD *)v90;
  v86 = *(_OWORD *)&v90[16];
  v87 = *(_OWORD *)&v90[32];
  v88 = *(_OWORD *)&v90[48];
  *(_QWORD *)&v89 = *(_QWORD *)&v90[64];
  if ( (_BYTE)v91 != 37 )
  {
LABEL_39:
    v47 = *(_DWORD *)((char *)&v91 + 1);
    *(_DWORD *)(a1 + 84) = DWORD1(v91);
    goto LABEL_36;
  }
  v120[0] = v85;
  v120[1] = v86;
  v120[2] = v87;
  v120[3] = v88;
  v121 = v89;
  v99 = v85;
  v100 = v86;
  v101 = v87;
  v102 = v88;
  v103 = v89;
  just::string_kind::StringKind::from_string_or_backtick(v90, v120);
  v6 = v90[0];
  result = (unsigned __int8)v91;
  if ( (_BYTE)v91 != 37 )
  {
    v24 = v90[1];
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v90[64];
    *(_OWORD *)(a1 + 58) = *(_OWORD *)&v90[50];
    *(_OWORD *)(a1 + 42) = *(_OWORD *)&v90[34];
    *(_OWORD *)(a1 + 26) = *(_OWORD *)&v90[18];
    *(_OWORD *)(a1 + 10) = *(_OWORD *)&v90[2];
    v25 = DWORD1(v91);
    *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v91 + 1);
    *(_DWORD *)(a1 + 84) = v25;
    *(_BYTE *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 9) = v24;
LABEL_37:
    *(_BYTE *)(a1 + 80) = result;
    goto LABEL_38;
  }
  v7 = just::token::Token::lexeme(&v99);
  v9 = v8;
  just::token::Token::lexeme(&v99);
  v84 = v6;
  v10 = (v6 - 1) | 0xFFFFFFFFFFFFFFFDLL;
  v11 = 2LL * v6 + 1;
  v13 = v12 + v10;
  v106 = v7;
  v107 = v9;
  v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v11,
          v13,
          v7,
          v9);
  v96 = v15;
  v95 = v14;
  if ( !v14 )
    core::str::slice_error_fail(v106, v107, v11, v13, &off_4308C8);
  just::parser::Parser::advance((__int64)v90, a2);
  result = (unsigned __int8)v91;
  v85 = *(_OWORD *)v90;
  v86 = *(_OWORD *)&v90[16];
  v87 = *(_OWORD *)&v90[32];
  v88 = *(_OWORD *)&v90[48];
  *(_QWORD *)&v89 = *(_QWORD *)&v90[64];
  if ( (_BYTE)v91 != 37 )
    goto LABEL_39;
  v115 = v85;
  v116 = v86;
  v117 = v87;
  v118 = v88;
  v119 = v89;
  if ( (v84 & 1) != 0 )
    just::unindent::unindent(&v97, v95, v96);
  else
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v97, v95);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(*((_QWORD *)&v97 + 1), v98, asc_71382, 2LL) )
  {
    *(_QWORD *)v90 = 0x8000000000000016LL;
    just::token::Token::error(&v85, &v99, v90);
    *(_OWORD *)(a1 + 72) = v89;
    v52 = v85;
    v53 = v86;
    v54 = v87;
    *(_OWORD *)(a1 + 56) = v88;
    *(_OWORD *)(a1 + 40) = v54;
    *(_OWORD *)(a1 + 24) = v53;
    *(_OWORD *)(a1 + 8) = v52;
    *(_QWORD *)a1 = 18LL;
    return core::ptr::drop_in_place<alloc::string::String>(&v97);
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v98;
    *(_OWORD *)(a1 + 8) = v97;
    v55 = v116;
    v56 = v117;
    v57 = v118;
    *(_OWORD *)(a1 + 32) = v115;
    *(_OWORD *)(a1 + 48) = v55;
    *(_OWORD *)(a1 + 64) = v56;
    *(_OWORD *)(a1 + 80) = v57;
    result = v119;
    *(_QWORD *)(a1 + 96) = v119;
    *(_QWORD *)a1 = 9LL;
  }
  return result;
}