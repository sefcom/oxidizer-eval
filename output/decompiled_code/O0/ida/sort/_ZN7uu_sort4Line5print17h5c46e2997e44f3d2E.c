__int64 __fastcall uu_sort::Line::print(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r12
  _QWORD *v5; // r13
  _BYTE *v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdi
  _BYTE *v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 result; // rax
  __int64 v14; // rcx
  _BYTE *v15; // rcx
  _BYTE *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 range; // r14
  unsigned __int64 v24; // r13
  unsigned int v25; // eax
  __int64 v26; // r12
  __int64 v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // edx
  unsigned __int64 v33; // r15
  const char **v34; // rsi
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rbx
  __int64 v41; // rbp
  bool v42; // cf
  unsigned __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  const char **v48; // rdx
  unsigned __int64 leading_gen; // rax
  unsigned __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // r13
  __int64 v61; // rbx
  __int64 v62; // r15
  __int64 v63; // rax
  _QWORD *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbx
  char v73; // al
  _QWORD *v74; // r14
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  char **v83; // r8
  __int64 v84; // rcx
  __int64 v85; // rax
  char **v86; // rax
  char v87; // [rsp+Fh] [rbp-309h] BYREF
  _QWORD *v88; // [rsp+10h] [rbp-308h]
  char **v89; // [rsp+18h] [rbp-300h]
  __int64 v90; // [rsp+20h] [rbp-2F8h]
  const char *v91; // [rsp+28h] [rbp-2F0h] BYREF
  __int64 v92; // [rsp+30h] [rbp-2E8h]
  __int64 v93; // [rsp+38h] [rbp-2E0h]
  __int64 v94; // [rsp+40h] [rbp-2D8h]
  __int64 v95; // [rsp+48h] [rbp-2D0h]
  __int64 v96; // [rsp+50h] [rbp-2C8h]
  __int64 v97; // [rsp+58h] [rbp-2C0h]
  _QWORD v98[3]; // [rsp+60h] [rbp-2B8h] BYREF
  char v99; // [rsp+78h] [rbp-2A0h] BYREF
  _BYTE v100[7]; // [rsp+79h] [rbp-29Fh] BYREF
  __int64 v101; // [rsp+80h] [rbp-298h] BYREF
  __int64 v102; // [rsp+88h] [rbp-290h]
  __int64 v103; // [rsp+90h] [rbp-288h]
  __int64 *v104; // [rsp+98h] [rbp-280h]
  _QWORD *v105; // [rsp+A0h] [rbp-278h]
  unsigned __int64 v106; // [rsp+A8h] [rbp-270h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-268h]
  unsigned __int64 v108; // [rsp+B8h] [rbp-260h]
  char **v109; // [rsp+C0h] [rbp-258h]
  unsigned __int64 v110; // [rsp+C8h] [rbp-250h]
  __int64 v111; // [rsp+D0h] [rbp-248h]
  __int64 v112; // [rsp+D8h] [rbp-240h] BYREF
  __int64 v113; // [rsp+E0h] [rbp-238h] BYREF
  __int64 v114; // [rsp+E8h] [rbp-230h] BYREF
  __int128 v115; // [rsp+F0h] [rbp-228h] BYREF
  __int64 v116; // [rsp+100h] [rbp-218h]
  __int64 v117; // [rsp+108h] [rbp-210h] BYREF
  __int64 v118; // [rsp+110h] [rbp-208h] BYREF
  __int64 v119; // [rsp+120h] [rbp-1F8h] BYREF
  __int64 v120; // [rsp+128h] [rbp-1F0h] BYREF
  __int64 v121; // [rsp+138h] [rbp-1E0h]
  __int64 v122; // [rsp+140h] [rbp-1D8h] BYREF
  __int64 v123; // [rsp+148h] [rbp-1D0h] BYREF
  __int64 v124; // [rsp+15Ch] [rbp-1BCh] BYREF
  bool v125; // [rsp+164h] [rbp-1B4h]
  _QWORD v126[2]; // [rsp+168h] [rbp-1B0h] BYREF
  _QWORD v127[2]; // [rsp+178h] [rbp-1A0h] BYREF
  _QWORD v128[2]; // [rsp+188h] [rbp-190h] BYREF
  _QWORD v129[2]; // [rsp+198h] [rbp-180h] BYREF
  _QWORD v130[6]; // [rsp+1A8h] [rbp-170h] BYREF
  _QWORD v131[6]; // [rsp+1D8h] [rbp-140h] BYREF
  _QWORD v132[6]; // [rsp+208h] [rbp-110h] BYREF
  _QWORD v133[6]; // [rsp+238h] [rbp-E0h] BYREF
  _QWORD v134[3]; // [rsp+268h] [rbp-B0h] BYREF
  __int128 v135; // [rsp+280h] [rbp-98h]
  _QWORD v136[3]; // [rsp+298h] [rbp-80h] BYREF
  __int128 v137; // [rsp+2B0h] [rbp-68h]
  char v138[16]; // [rsp+2C8h] [rbp-50h] BYREF
  __int128 v139; // [rsp+2D8h] [rbp-40h]

  v3 = a3;
  v5 = a1;
  if ( (*(_BYTE *)(a3 + 124) & 1) != 0 )
  {
    alloc::str::<impl str>::replace(&v101, *a1, a1[1], 9LL, ">\n_^ no match for key\nk", 1LL);
    v126[0] = &v101;
    v126[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v130[0] = &unk_1D2C00;
    v130[1] = 2LL;
    v130[4] = 0LL;
    v130[2] = v126;
    v130[3] = 1LL;
    v17 = std::io::Write::write_fmt(a2, v130);
    if ( v17 )
    {
      v72 = v17;
    }
    else
    {
      v106 = 0LL;
      v107 = 8LL;
      v108 = 0LL;
      v18 = *a1;
      v19 = v5[1];
      v20 = *(unsigned int *)(v3 + 120);
      if ( (_DWORD)v20 == 1114112 )
        uu_sort::tokenize_default(v18, v19, &v106);
      else
        uu_sort::tokenize_with_separator(v18, v19, v20, &v106);
      v90 = *(_QWORD *)(v3 + 8);
      if ( !v90 )
        goto LABEL_131;
      if ( (v90 & 7) != 0 )
        goto LABEL_131;
      v21 = *(_QWORD *)(v3 + 16);
      if ( v21 >= 0x24924924924924ALL )
        goto LABEL_131;
      v105 = a2;
      if ( v21 )
      {
        v121 = v90 + 56 * v21;
        v104 = &v120;
        v110 = 0LL;
        v109 = &off_1D2DC8;
        v89 = &off_1D2D98;
        v111 = v3;
        v88 = v5;
        do
        {
          if ( !v107 || (v107 & 7) != 0 || v108 >> 59 )
            goto LABEL_131;
          range = uu_sort::FieldSelector::get_range(v90, *v5, v5[1]);
          v24 = v22;
          v25 = *(unsigned __int8 *)(v90 + 53);
          if ( v25 < 2 )
          {
            v26 = *v88;
            v27 = v88[1];
            v38 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    range,
                    v22,
                    *v88,
                    v27);
            if ( !v38 )
            {
              v83 = &off_1D2C30;
              goto LABEL_130;
            }
            v125 = *(_BYTE *)(v90 + 53) == 1;
            v124 = 0x2E00110000LL;
            v34 = (const char **)v38;
            uu_sort::numeric_str_cmp::NumInfo::parse((__int64)v138, v38, v39, (__int64)&v124);
            v40 = v139 + range;
            if ( __CFADD__((_QWORD)v139, range) )
            {
              v86 = &off_1D2C48;
              goto LABEL_161;
            }
            v36 = *((_QWORD *)&v139 + 1);
            v41 = *((_QWORD *)&v139 + 1) - v139;
            v35 = 0LL;
            if ( *((_QWORD *)&v139 + 1) < (unsigned __int64)v139 )
              v41 = 0LL;
            v42 = __CFADD__(v40, v41);
            v43 = v40 + v41;
            if ( v42 )
            {
              v86 = &off_1D2C60;
              goto LABEL_161;
            }
            if ( v139 != 0 )
            {
              if ( *(_BYTE *)(v90 + 53) != 1 )
              {
                v53 = v88;
                goto LABEL_61;
              }
              v26 = *v88;
              v27 = v88[1];
              v51 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                      v43,
                      v24,
                      *v88,
                      v27);
              if ( v51 )
              {
                v91 = "k";
                v92 = 9LL;
                v93 = v51;
                v94 = v52;
                v95 = v51;
                v96 = v52 + v51;
                v97 = 0LL;
                v34 = &v91;
                <core::str::pattern::MultiCharEqSearcher<C> as core::str::pattern::Searcher>::next(&v115, &v91);
                v53 = v88;
                if ( v115 == 0 && !++v43 )
                {
                  v86 = &off_1D2C90;
                  goto LABEL_161;
                }
LABEL_61:
                while ( 1 )
                {
                  v26 = *v53;
                  v27 = v53[1];
                  v54 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                          range,
                          v40,
                          *v53,
                          v27);
                  if ( !v54 )
                    break;
                  v56 = v55;
                  v91 = "-";
                  v92 = 3LL;
                  v93 = v54;
                  v94 = v55;
                  v95 = v54;
                  v96 = v55 + v54;
                  v97 = 0LL;
                  <core::str::pattern::MultiCharEqSearcher<C> as core::str::pattern::ReverseSearcher>::next_back(
                    &v115,
                    &v91);
                  if ( (_QWORD)v115 || v116 != v56 )
                    goto LABEL_69;
                  v42 = v40-- == 0;
                  v53 = v88;
                  if ( v42 )
                    core::panicking::panic_const::panic_const_sub_overflow(&off_1D2CC0, &v91, v57, v58);
                }
                v24 = v40;
                v83 = &off_1D2CA8;
              }
              else
              {
                range = v43;
                v83 = &off_1D2C78;
              }
LABEL_130:
              core::str::slice_error_fail(v26, v27, range, v24, v83);
            }
            v26 = *v88;
            v27 = v88[1];
            v44 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    v139 + range,
                    v43,
                    *v88,
                    v27);
            if ( !v44 )
            {
              range = v40;
              v24 = v43;
              v83 = &off_1D2CD8;
              goto LABEL_130;
            }
            v91 = (const char *)v44;
            v92 = v45;
            v93 = v44;
            v94 = v45 + v44;
            v95 = 0LL;
            do
            {
              v34 = &v91;
              <core::str::pattern::MultiCharEqSearcher<C> as core::str::pattern::Searcher>::next(&v115, &v91);
            }
            while ( (_QWORD)v115 == 1LL );
            if ( (_QWORD)v115 )
              v46 = 0LL;
            else
              v46 = *((_QWORD *)&v115 + 1);
            v42 = __CFADD__(v46, v40);
            v40 += v46;
            if ( v42 )
            {
              v86 = &off_1D2CF0;
              goto LABEL_161;
            }
            v42 = __CFADD__(v46, v43);
            v43 += v46;
            if ( v42 )
            {
              v86 = &off_1D2D08;
              goto LABEL_161;
            }
LABEL_69:
            v24 = v43;
            range = v40;
          }
          else if ( v25 == 2 )
          {
            v26 = *v88;
            v27 = v88[1];
            v47 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    range,
                    v22,
                    *v88,
                    v27);
            if ( !v47 )
            {
              v83 = &off_1D2D20;
              goto LABEL_130;
            }
            v34 = v48;
            leading_gen = uu_sort::get_leading_gen(v47, v48);
            v42 = __CFADD__(leading_gen, range);
            range += leading_gen;
            if ( v42 )
            {
              v86 = &off_1D2D38;
              goto LABEL_161;
            }
            v42 = v35 < leading_gen;
            v35 -= leading_gen;
            v50 = 0LL;
            if ( !v42 )
              v50 = v35;
            v42 = __CFADD__(range, v50);
            v24 = range + v50;
            if ( v42 )
            {
              v86 = &off_1D2D50;
LABEL_161:
              v89 = v86;
LABEL_162:
              core::panicking::panic_const::panic_const_add_overflow(v89, v34, v35, v36);
            }
          }
          else if ( v25 == 3 )
          {
            v26 = *v88;
            v27 = v88[1];
            v28 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    range,
                    v22,
                    *v88,
                    v27);
            if ( !v28 )
            {
              v83 = &off_1D2D68;
              goto LABEL_130;
            }
            v30 = v29;
            v98[0] = v28;
            v98[1] = v29 + v28;
            v98[2] = 0LL;
            v99 = 0;
            if ( (unsigned __int8)uu_sort::month_parse(v28, v29) )
            {
              v31 = core::iter::traits::iterator::Iterator::try_fold(v98, &v99, v100);
              if ( v32 == 1114112 )
                core::option::unwrap_failed(&off_1D2D80);
              v33 = v31;
              v34 = (const char **)&v99;
              core::iter::traits::iterator::Iterator::try_fold(v98, &v99, v100);
              if ( (_DWORD)v35 != 1114112 )
              {
                v34 = (const char **)&v99;
                core::iter::traits::iterator::Iterator::try_fold(v98, &v99, v100);
                if ( (_DWORD)v35 != 1114112 )
                {
                  v34 = (const char **)&v99;
                  v37 = core::iter::traits::iterator::Iterator::try_fold(v98, &v99, v100);
                  if ( (_DWORD)v35 != 1114112 )
                    v30 = v37;
                }
              }
            }
            else
            {
              v34 = (const char **)&v99;
              v33 = core::iter::traits::iterator::Iterator::try_fold(v98, &v99, v100);
              if ( (_DWORD)v35 == 1114112 )
                v33 = v30;
              v30 = v33;
            }
            v42 = __CFADD__(v33, range);
            range += v33;
            if ( v42 )
              goto LABEL_162;
            v42 = v30 < v33;
            v59 = v30 - v33;
            v60 = 0LL;
            if ( !v42 )
              v60 = v59;
            v42 = __CFADD__(range, v60);
            v24 = range + v60;
            if ( v42 )
            {
              v86 = &off_1D2DB0;
              goto LABEL_161;
            }
          }
          v61 = v102;
          if ( !v102 )
            goto LABEL_131;
          v62 = v103;
          if ( v103 < 0 )
            goto LABEL_131;
          if ( range )
          {
            if ( v103 <= range )
            {
              if ( v103 != range )
                goto LABEL_135;
            }
            else if ( *(char *)(v102 + range) < -64 )
            {
              goto LABEL_135;
            }
          }
          if ( v103 < range )
            core::panicking::panic_nounwind(anon_8012e1ef25b0b3807da7d204fab9cdcd_18_llvm_15792747221160264835, 102LL);
          LOBYTE(v91) = 0;
          v63 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v102, v102 + range, 0LL, 0LL, &v91);
          alloc::str::<impl str>::repeat(&v117, asc_33DE8, 1LL, v63);
          v127[0] = &v117;
          v127[1] = <alloc::string::String as core::fmt::Display>::fmt;
          v131[0] = anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
          v131[1] = 1LL;
          v131[4] = 0LL;
          v131[2] = v127;
          v131[3] = 1LL;
          v64 = v105;
          v65 = std::io::Write::write_fmt(v105, v131);
          v66 = v117;
          if ( v65 )
          {
            v72 = v65;
            v104 = &v118;
            goto LABEL_137;
          }
          if ( v117 )
            _rust_dealloc(v118, v117, 1LL);
          if ( range >= v24 )
          {
            v134[0] = &off_1D2C20;
            v134[1] = 1LL;
            v134[2] = 8LL;
            v135 = 0LL;
            v71 = std::io::Write::write_fmt(v64, v134);
            v3 = v111;
            v5 = v88;
            if ( v71 )
              goto LABEL_96;
          }
          else
          {
            v61 = v102;
            if ( !v102 )
              goto LABEL_131;
            v62 = v103;
            if ( v103 < 0 )
              goto LABEL_131;
            v67 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    range,
                    v24,
                    v102,
                    v103);
            if ( !v67 )
            {
              v110 = range;
              range = v24;
              v109 = &off_1D2DE0;
LABEL_135:
              core::str::slice_error_fail(v61, v62, v110, range, v109);
            }
            LOBYTE(v91) = 0;
            v69 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v67, v67 + v68, 0LL, 0LL, &v91);
            alloc::str::<impl str>::repeat(&v119, "_^ no match for key\nk", 1LL, v69);
            v128[0] = &v119;
            v128[1] = <alloc::string::String as core::fmt::Display>::fmt;
            v132[0] = &unk_1D2C00;
            v132[1] = 2LL;
            v132[4] = 0LL;
            v132[2] = v128;
            v132[3] = 1LL;
            v70 = std::io::Write::write_fmt(v105, v132);
            v66 = v119;
            v3 = v111;
            v5 = v88;
            if ( v70 )
            {
              v72 = v70;
LABEL_137:
              if ( v66 )
LABEL_138:
                _rust_dealloc(*v104, v66, 1LL);
              goto LABEL_139;
            }
            if ( v119 )
              _rust_dealloc(v120, v119, 1LL);
          }
          v90 += 56LL;
        }
        while ( v90 != v121 );
      }
      v73 = *(_BYTE *)(v3 + 152);
      v74 = v105;
      if ( v73 == 5 || (*(_BYTE *)(v3 + 131) & 1) != 0 || (*(_BYTE *)(v3 + 132) & 1) != 0 )
        goto LABEL_119;
      if ( (*(_BYTE *)(v3 + 127) & 1) == 0
        && (*(_BYTE *)(v3 + 125) & 1) == 0
        && (*(_BYTE *)(v3 + 126) & 1) == 0
        && v73 == 6
        && (*(_BYTE *)(v3 + 128) & 1) == 0 )
      {
        v75 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v3);
        v77 = 56 * (v76 - 1) + v75;
        v78 = 0LL;
        if ( v76 )
          v78 = v77;
        if ( !(unsigned __int8)core::option::Option<T>::map_or(v78, 1LL) )
          goto LABEL_119;
      }
      if ( !v5[1] )
      {
        v136[0] = &off_1D2C20;
        v136[1] = 1LL;
        v136[2] = 8LL;
        v137 = 0LL;
        v71 = std::io::Write::write_fmt(v74, v136);
        if ( v71 )
        {
LABEL_96:
          v72 = v71;
          goto LABEL_139;
        }
        goto LABEL_119;
      }
      if ( !v102 || v103 < 0 )
LABEL_131:
        core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
      LOBYTE(v91) = 0;
      v79 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v102, v102 + v103, 0LL, 0LL, &v91);
      alloc::str::<impl str>::repeat(&v122, "_^ no match for key\nk", 1LL, v79);
      v129[0] = &v122;
      v129[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v133[0] = &unk_1D2C00;
      v133[1] = 2LL;
      v133[4] = 0LL;
      v133[2] = v129;
      v133[3] = 1LL;
      v80 = std::io::Write::write_fmt(v74, v133);
      v66 = v122;
      if ( !v80 )
      {
        if ( v122 )
          _rust_dealloc(v123, v122, 1LL);
LABEL_119:
        if ( !v106 )
        {
          v82 = 1LL;
          result = 0LL;
LABEL_123:
          (&v91)[v82] = (const char *)result;
          if ( v92 && v93 )
            result = _rust_dealloc(v91, v93, v92);
          if ( v101 )
            return _rust_dealloc(v102, v101, 1LL);
          return result;
        }
        if ( !(v106 >> 60) )
        {
          result = 16 * v106;
          v91 = (const char *)v107;
          v92 = 8LL;
          v82 = 2LL;
          goto LABEL_123;
        }
LABEL_142:
        core::panicking::panic_nounwind(anon_bbfa63c375300e8ec948f413288f2077_22_llvm_2503978504656084376, 69LL);
      }
      v72 = v80;
      if ( v122 )
      {
        v104 = &v123;
        goto LABEL_138;
      }
LABEL_139:
      if ( v106 )
      {
        if ( v106 >> 60 )
          goto LABEL_142;
        v85 = 16 * v106;
        v91 = (const char *)v107;
        v92 = 8LL;
        v84 = 2LL;
      }
      else
      {
        v84 = 1LL;
        v85 = 0LL;
      }
      (&v91)[v84] = (const char *)v85;
      if ( v92 && v93 )
        _rust_dealloc(v91, v93, v92);
    }
    if ( v101 )
      _rust_dealloc(v102, v101, 1LL);
    v112 = v72;
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v112, &off_1D27F8, &off_1D2BE8);
  }
  v6 = (_BYTE *)*a1;
  v7 = a1[1];
  v8 = a2[2];
  if ( *a2 - v8 <= v7 )
  {
    v81 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v6, a1[1]);
    if ( v81 )
    {
      v114 = v81;
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v114, &off_1D27F8, &off_1D2BB8);
    }
    v12 = a2[2];
  }
  else
  {
    if ( !v6 )
      goto LABEL_153;
    v9 = a2[1];
    if ( !v9 )
      goto LABEL_153;
    v10 = (_BYTE *)(v8 + v9);
    v11 = v10 - v6;
    if ( v10 <= v6 )
      v11 = v6 - v10;
    if ( v11 < v7 )
      goto LABEL_153;
    memcpy(v10, v6, v5[1]);
    v12 = v7 + v8;
    a2[2] = v12;
  }
  result = *(unsigned __int8 *)(v3 + 153);
  v87 = *(_BYTE *)(v3 + 153);
  if ( (unsigned __int64)(*a2 - v12) >= 2 )
  {
    v14 = a2[1];
    if ( v14 )
    {
      v15 = (_BYTE *)(v12 + v14);
      v16 = (_BYTE *)(v15 - &v87);
      if ( v15 <= &v87 )
        v16 = (_BYTE *)(&v87 - v15);
      if ( v16 )
      {
        *v15 = result;
        a2[2] = v12 + 1;
        return result;
      }
    }
LABEL_153:
    core::panicking::panic_nounwind(anon_b48a01bb6feb0400357d4af0fdbfc6b7_19_llvm_10676135426869736008, 166LL);
  }
  result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, &v87, 1LL);
  if ( result )
  {
    v113 = result;
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v113, &off_1D27F8, &off_1D2BD0);
  }
  return result;
}
