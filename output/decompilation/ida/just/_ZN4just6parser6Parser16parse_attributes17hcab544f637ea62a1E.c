__int64 __fastcall just::parser::Parser::parse_attributes(__int64 a1, _QWORD *a2)
{
  char v2; // cl
  char v3; // al
  char v4; // al
  __int64 v5; // r13
  char v6; // al
  char v7; // cl
  char v8; // al
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rax
  unsigned __int8 v13; // al
  char v14; // al
  char v15; // al
  __int64 v16; // rsi
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  int v20; // edx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  int v24; // esi
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  int v28; // ecx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int v31; // ecx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  int v43; // esi
  int v44; // edx
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  int v48; // edx
  char v50; // r14
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  int v54; // eax
  __int64 v55; // rcx
  __int128 v56; // xmm0
  __int64 v57; // rdx
  char v58; // si
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  int v61; // edi
  __int64 v62; // rcx
  __int128 v63; // xmm0
  __int64 v64; // rdx
  char v65; // si
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  int v68; // edi
  _BYTE v70[72]; // [rsp+10h] [rbp-2F8h] BYREF
  char v71; // [rsp+58h] [rbp-2B0h]
  _DWORD v72[7]; // [rsp+59h] [rbp-2AFh]
  _DWORD v73[2]; // [rsp+78h] [rbp-290h]
  __int128 v74; // [rsp+80h] [rbp-288h] BYREF
  __int128 v75; // [rsp+90h] [rbp-278h]
  __int128 v76; // [rsp+A0h] [rbp-268h]
  __m256i v77; // [rsp+B0h] [rbp-258h]
  _QWORD v78[2]; // [rsp+D8h] [rbp-230h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-220h]
  _QWORD v80[3]; // [rsp+F0h] [rbp-218h] BYREF
  _QWORD v81[3]; // [rsp+108h] [rbp-200h] BYREF
  __int128 v82; // [rsp+120h] [rbp-1E8h] BYREF
  __int128 v83; // [rsp+130h] [rbp-1D8h]
  __int128 v84; // [rsp+140h] [rbp-1C8h]
  __int128 v85; // [rsp+150h] [rbp-1B8h]
  __int64 v86; // [rsp+160h] [rbp-1A8h]
  __int128 v87; // [rsp+170h] [rbp-198h]
  __int128 v88; // [rsp+180h] [rbp-188h]
  __int128 v89; // [rsp+190h] [rbp-178h]
  __int128 v90; // [rsp+1A0h] [rbp-168h]
  _OWORD v91[3]; // [rsp+1B0h] [rbp-158h] BYREF
  __int64 v92; // [rsp+1E0h] [rbp-128h]
  __int128 v93; // [rsp+1E8h] [rbp-120h]
  _OWORD v94[4]; // [rsp+200h] [rbp-108h] BYREF
  __int64 v95; // [rsp+240h] [rbp-C8h]
  __int128 v96; // [rsp+250h] [rbp-B8h]
  __int128 v97; // [rsp+260h] [rbp-A8h]
  __int128 v98; // [rsp+270h] [rbp-98h]
  __int128 v99; // [rsp+280h] [rbp-88h]
  _OWORD v100[4]; // [rsp+290h] [rbp-78h] BYREF
  char v101; // [rsp+2D0h] [rbp-38h]
  _DWORD v102[13]; // [rsp+2D1h] [rbp-37h]

  v78[0] = 0LL;
  v79 = 0LL;
  v80[0] = 0LL;
  v80[2] = 0LL;
  v101 = 37;
LABEL_2:
  just::parser::Parser::accept((__int64)v70, a2, 9);
  v2 = v71;
  v87 = *(_OWORD *)v70;
  v88 = *(_OWORD *)&v70[16];
  v89 = *(_OWORD *)&v70[32];
  v90 = *(_OWORD *)&v70[48];
  v3 = v70[64];
  v73[0] = *(_DWORD *)&v70[65];
  *(_DWORD *)((char *)v73 + 3) = *(_DWORD *)&v70[68];
  if ( v71 != 37 )
  {
    v44 = v72[0];
    *(_DWORD *)(a1 + 84) = *(_DWORD *)((char *)v72 + 3);
    *(_DWORD *)(a1 + 81) = v44;
    v45 = v87;
    v46 = v88;
    v47 = v89;
    *(_OWORD *)(a1 + 56) = v90;
    *(_OWORD *)(a1 + 40) = v47;
    *(_OWORD *)(a1 + 24) = v46;
    *(_OWORD *)(a1 + 8) = v45;
    v48 = v73[0];
    *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)v73 + 3);
    *(_DWORD *)(a1 + 73) = v48;
    *(_BYTE *)(a1 + 72) = v3;
LABEL_32:
    *(_BYTE *)(a1 + 80) = v2;
    *(_QWORD *)a1 = 1LL;
LABEL_33:
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<just::attribute::AttributeDiscriminant,usize>>(v80);
    return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<just::attribute::Attribute,usize>>(v78);
  }
  if ( v70[64] != 37 )
  {
    *(_OWORD *)&v70[48] = v90;
    *(_OWORD *)&v70[32] = v89;
    *(_OWORD *)&v70[16] = v88;
    *(_OWORD *)v70 = v87;
    *(_DWORD *)&v70[68] = *(_DWORD *)((char *)v73 + 3);
    *(_DWORD *)&v70[65] = v73[0];
    core::option::Option<T>::get_or_insert_with(v100, v70);
    while ( 1 )
    {
      just::parser::Parser::parse_name((__int64)v70, a2);
      v4 = v71;
      v74 = *(_OWORD *)v70;
      v75 = *(_OWORD *)&v70[16];
      v76 = *(_OWORD *)&v70[32];
      v5 = *(_QWORD *)&v70[48];
      v82 = *(_OWORD *)&v70[56];
      if ( v71 != 37 )
      {
        v28 = v72[0];
        v16 = a1;
        *(_DWORD *)(a1 + 84) = *(_DWORD *)((char *)v72 + 3);
        *(_DWORD *)(a1 + 81) = v28;
        v29 = v74;
        v30 = v75;
        *(_OWORD *)(a1 + 40) = v76;
        *(_OWORD *)(a1 + 24) = v30;
        *(_OWORD *)(a1 + 8) = v29;
        *(_OWORD *)(a1 + 64) = v82;
        *(_QWORD *)(a1 + 56) = v5;
        goto LABEL_28;
      }
      v97 = v74;
      v98 = v75;
      v99 = v76;
      v96 = v82;
      v91[0] = v74;
      v91[1] = v75;
      v91[2] = v76;
      v92 = *(_QWORD *)&v70[48];
      v93 = v82;
      v81[0] = 0LL;
      v81[1] = 8LL;
      v81[2] = 0LL;
      just::parser::Parser::accepted((__int64)v70, a2, 12);
      v6 = v70[0];
      v7 = v71;
      if ( v71 != 37 )
        goto LABEL_23;
      if ( (v70[0] & 1) != 0 )
      {
        just::parser::Parser::parse_string_literal((__int64)v70, a2);
        v8 = v71;
        if ( v71 != 37 )
          goto LABEL_24;
        v76 = *(_OWORD *)&v70[32];
        v75 = *(_OWORD *)&v70[16];
        v74 = *(_OWORD *)v70;
        alloc::vec::Vec<T,A>::push(v81, &v74, &off_4309E8);
      }
      else
      {
        just::parser::Parser::accepted((__int64)v70, a2, 28);
        v6 = v70[0];
        v7 = v71;
        if ( v71 != 37 )
        {
LABEL_23:
          *(_QWORD *)(a1 + 72) = *(_QWORD *)&v70[64];
          v21 = *(_OWORD *)&v70[1];
          v22 = *(_OWORD *)&v70[17];
          v23 = *(_OWORD *)&v70[33];
          *(_OWORD *)(a1 + 57) = *(_OWORD *)&v70[49];
          *(_OWORD *)(a1 + 41) = v23;
          *(_OWORD *)(a1 + 25) = v22;
          *(_OWORD *)(a1 + 9) = v21;
          v24 = *(_DWORD *)((char *)v72 + 3);
          *(_DWORD *)(a1 + 81) = v72[0];
          *(_DWORD *)(a1 + 84) = v24;
          *(_BYTE *)(a1 + 8) = v6;
          *(_BYTE *)(a1 + 80) = v7;
          *(_QWORD *)a1 = 1LL;
          goto LABEL_25;
        }
        if ( (v70[0] & 1) != 0 )
        {
          while ( 1 )
          {
            just::parser::Parser::parse_string_literal((__int64)v70, a2);
            v8 = v71;
            if ( v71 != 37 )
              break;
            v76 = *(_OWORD *)&v70[32];
            v75 = *(_OWORD *)&v70[16];
            v74 = *(_OWORD *)v70;
            alloc::vec::Vec<T,A>::push(v81, &v74, &off_4309D0);
            just::parser::Parser::accepted((__int64)v70, a2, 15);
            v6 = v70[0];
            v7 = v71;
            if ( v71 != 37 )
              goto LABEL_23;
            if ( (v70[0] & 1) == 0 )
            {
              just::parser::Parser::expect((__int64)v70, a2);
              v9 = v71;
              if ( v71 == 37 )
                goto LABEL_16;
              v55 = *(_QWORD *)v70;
              v56 = *(_OWORD *)&v70[8];
              v57 = *(_QWORD *)&v70[56];
              v58 = v70[64];
              LODWORD(v74) = *(_DWORD *)&v70[65];
              *(_DWORD *)((char *)&v74 + 3) = *(_DWORD *)&v70[68];
              *(_DWORD *)(a1 + 84) = *(_DWORD *)((char *)v72 + 3);
              *(_DWORD *)(a1 + 81) = v72[0];
              v59 = *(_OWORD *)&v70[24];
              v60 = *(_OWORD *)&v70[40];
              v61 = v74;
              *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)&v74 + 3);
              *(_DWORD *)(a1 + 73) = v61;
              *(_QWORD *)(a1 + 8) = v55;
              *(_OWORD *)(a1 + 16) = v56;
              *(_OWORD *)(a1 + 32) = v59;
              *(_OWORD *)(a1 + 48) = v60;
              *(_QWORD *)(a1 + 64) = v57;
              *(_BYTE *)(a1 + 72) = v58;
              *(_BYTE *)(a1 + 80) = v9;
              *(_QWORD *)a1 = 1LL;
              goto LABEL_25;
            }
          }
LABEL_24:
          v77.m256i_i64[2] = *(_QWORD *)&v70[64];
          *(_OWORD *)v77.m256i_i8 = *(_OWORD *)&v70[48];
          v76 = *(_OWORD *)&v70[32];
          v75 = *(_OWORD *)&v70[16];
          v74 = *(_OWORD *)v70;
          *(_DWORD *)(a1 + 84) = *(_DWORD *)((char *)v72 + 3);
          *(_DWORD *)(a1 + 81) = v72[0];
          *(_QWORD *)(a1 + 72) = v77.m256i_i64[2];
          v25 = v74;
          v26 = v75;
          v27 = v76;
          *(_OWORD *)(a1 + 56) = *(_OWORD *)v77.m256i_i8;
          *(_OWORD *)(a1 + 40) = v27;
          *(_OWORD *)(a1 + 24) = v26;
          *(_OWORD *)(a1 + 8) = v25;
          *(_BYTE *)(a1 + 80) = v8;
          *(_QWORD *)a1 = 1LL;
LABEL_25:
          core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(v81);
          goto LABEL_33;
        }
      }
LABEL_16:
      v76 = v99;
      v75 = v98;
      v74 = v97;
      v77.m256i_i64[0] = v5;
      *(_OWORD *)&v77.m256i_u64[1] = v96;
      just::attribute::Attribute::new((__int64)v70, (__int64)&v74, (__int64)v81);
      v4 = v71;
      v82 = *(_OWORD *)v70;
      v83 = *(_OWORD *)&v70[16];
      v84 = *(_OWORD *)&v70[32];
      v85 = *(_OWORD *)&v70[48];
      v86 = *(_QWORD *)&v70[64];
      if ( v71 != 37 )
      {
        v31 = v72[0];
        v16 = a1;
        *(_DWORD *)(a1 + 84) = *(_DWORD *)((char *)v72 + 3);
        *(_DWORD *)(a1 + 81) = v31;
        *(_QWORD *)(a1 + 72) = v86;
        v32 = v82;
        v33 = v83;
        v34 = v84;
        *(_OWORD *)(a1 + 56) = v85;
        *(_OWORD *)(a1 + 40) = v34;
        *(_OWORD *)(a1 + 24) = v33;
        *(_OWORD *)(a1 + 8) = v32;
        goto LABEL_28;
      }
      v94[0] = v82;
      v94[1] = v83;
      v94[2] = v84;
      v94[3] = v85;
      v95 = v86;
      v10 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v78[0], v78[1], v94);
      v11 = *(_QWORD *)&v94[0];
      v12 = (__int64 *)core::option::Option<T>::or_else(v10, *(_QWORD *)&v94[0], v80[0], v80[1]);
      if ( v12 )
      {
        v35 = *v12;
        *(_QWORD *)&v70[8] = just::token::Token::lexeme(v91);
        *(_QWORD *)&v70[16] = v36;
        *(_QWORD *)&v70[24] = v35;
        *(_QWORD *)v70 = 0x800000000000001ALL;
        just::token::Token::error(&v74, v91, v70);
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v77.m256i_u64[2];
        v37 = v74;
        v38 = v75;
        v39 = v76;
        *(_OWORD *)(a1 + 56) = *(_OWORD *)v77.m256i_i8;
        *(_OWORD *)(a1 + 40) = v39;
        *(_OWORD *)(a1 + 24) = v38;
        *(_OWORD *)(a1 + 8) = v37;
        *(_QWORD *)a1 = 1LL;
        core::ptr::drop_in_place<just::attribute::Attribute>(v94);
        goto LABEL_33;
      }
      v13 = just::attribute::Attribute::discriminant(v11);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v80, v13, v5);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v78, v94, v5);
      just::parser::Parser::accepted((__int64)v70, a2, 15);
      v14 = v70[0];
      v2 = v71;
      if ( v71 != 37 )
      {
        *(_QWORD *)(a1 + 72) = *(_QWORD *)&v70[64];
        v40 = *(_OWORD *)&v70[1];
        v41 = *(_OWORD *)&v70[17];
        v42 = *(_OWORD *)&v70[33];
        *(_OWORD *)(a1 + 57) = *(_OWORD *)&v70[49];
        *(_OWORD *)(a1 + 41) = v42;
        *(_OWORD *)(a1 + 25) = v41;
        *(_OWORD *)(a1 + 9) = v40;
        v43 = *(_DWORD *)((char *)v72 + 3);
        *(_DWORD *)(a1 + 81) = v72[0];
        *(_DWORD *)(a1 + 84) = v43;
        *(_BYTE *)(a1 + 8) = v14;
        goto LABEL_32;
      }
      if ( (v70[0] & 1) == 0 )
      {
        just::parser::Parser::expect((__int64)v70, a2);
        v15 = v71;
        if ( v71 == 37 )
        {
          just::parser::Parser::expect_eol((__int64)v70, a2);
          v4 = v71;
          if ( v71 == 37 )
            goto LABEL_2;
          v16 = a1;
          *(_QWORD *)(a1 + 72) = *(_QWORD *)&v70[64];
          v17 = *(_OWORD *)v70;
          v18 = *(_OWORD *)&v70[16];
          v19 = *(_OWORD *)&v70[32];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v70[48];
          *(_OWORD *)(a1 + 40) = v19;
          *(_OWORD *)(a1 + 24) = v18;
          *(_OWORD *)(a1 + 8) = v17;
          v20 = *(_DWORD *)((char *)v72 + 3);
          *(_DWORD *)(a1 + 81) = v72[0];
          *(_DWORD *)(a1 + 84) = v20;
LABEL_28:
          *(_BYTE *)(v16 + 80) = v4;
          *(_QWORD *)v16 = 1LL;
        }
        else
        {
          v62 = *(_QWORD *)v70;
          v63 = *(_OWORD *)&v70[8];
          v64 = *(_QWORD *)&v70[56];
          v65 = v70[64];
          LODWORD(v74) = *(_DWORD *)&v70[65];
          *(_DWORD *)((char *)&v74 + 3) = *(_DWORD *)&v70[68];
          *(_DWORD *)(a1 + 84) = *(_DWORD *)((char *)v72 + 3);
          *(_DWORD *)(a1 + 81) = v72[0];
          v66 = *(_OWORD *)&v70[24];
          v67 = *(_OWORD *)&v70[40];
          v68 = v74;
          *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)&v74 + 3);
          *(_DWORD *)(a1 + 73) = v68;
          *(_QWORD *)(a1 + 8) = v62;
          *(_OWORD *)(a1 + 16) = v63;
          *(_OWORD *)(a1 + 32) = v66;
          *(_OWORD *)(a1 + 48) = v67;
          *(_QWORD *)(a1 + 64) = v64;
          *(_BYTE *)(a1 + 72) = v65;
          *(_BYTE *)(a1 + 80) = v15;
          *(_QWORD *)a1 = 1LL;
        }
        goto LABEL_33;
      }
    }
  }
  if ( !v79 )
  {
    *(_BYTE *)(a1 + 72) = 37;
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<just::attribute::AttributeDiscriminant,usize>>(v80);
    return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<just::attribute::Attribute,usize>>(v78);
  }
  v50 = v101;
  if ( v101 == 37 )
    core::option::unwrap_failed(&off_430A00);
  *(_OWORD *)v77.m256i_i8 = v100[3];
  v76 = v100[2];
  v75 = v100[1];
  v74 = v100[0];
  LODWORD(v91[0]) = v102[0];
  *(_DWORD *)((char *)v91 + 3) = *(_DWORD *)((char *)v102 + 3);
  <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(v70, v78);
  core::iter::traits::iterator::Iterator::collect(&v82, v70);
  v51 = v74;
  v52 = v75;
  v53 = v76;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)v77.m256i_i8;
  *(_OWORD *)(a1 + 40) = v53;
  *(_OWORD *)(a1 + 24) = v52;
  *(_OWORD *)(a1 + 8) = v51;
  v54 = v91[0];
  *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)v91 + 3);
  *(_DWORD *)(a1 + 73) = v54;
  *(_OWORD *)(a1 + 80) = v82;
  *(_QWORD *)(a1 + 96) = v83;
  *(_BYTE *)(a1 + 72) = v50;
  *(_QWORD *)a1 = 0LL;
  return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<just::attribute::AttributeDiscriminant,usize>>(v80);
}