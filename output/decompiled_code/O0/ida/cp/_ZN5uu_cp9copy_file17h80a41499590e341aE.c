        char a11)
{
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // r13
  _BYTE *v21; // rax
  size_t v22; // rbp
  __int64 v23; // r12
  size_t v24; // rbx
  unsigned __int64 v25; // r14
  size_t v26; // rbp
  char v27; // al
  unsigned __int8 v28; // al
  char v29; // cl
  void *v30; // r15
  void *v31; // r13
  __int64 v32; // r12
  __int64 v33; // rcx
  char v34; // bl
  int v35; // eax
  char v36; // al
  char v37; // bl
  char v38; // al
  __int64 v39; // rdx
  int v40; // r12d
  void *v41; // rdx
  __int64 v42; // rax
  void **v43; // rax
  __int64 (__fastcall *v44)(); // r12
  __int64 v45; // rax
  unsigned __int8 v46; // al
  __int64 v47; // r13
  char v48; // al
  __int64 v49; // rax
  int v50; // r14d
  __mode_t v51; // r12d
  __int64 v52; // r12
  size_t v53; // rdx
  size_t v54; // r9
  size_t v55; // r8
  int v56; // r14d
  char v57; // al
  void *v58; // rdi
  size_t v59; // rsi
  __int64 v60; // rdx
  int v61; // ebp
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int128 v67; // kr40_16
  __int128 v68; // kr50_16
  __int64 v69; // rax
  __int64 v70; // rax
  void *v71; // r14
  size_t v72; // r15
  void *v73; // r12
  size_t v74; // r13
  int v75; // edx
  void **v76; // r15
  size_t v77; // r12
  int v78; // ebp
  __int64 v79; // rbp
  void *v80; // r15
  void **v81; // rdi
  size_t v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  size_t v85; // r14
  void **v86; // rbp
  size_t v87; // r12
  __int128 v88; // xmm1
  __int128 v89; // xmm2
  unsigned int v90; // ebp
  char v91; // r14
  char v92; // al
  __int64 v93; // r15
  __int64 v94; // rax
  __int64 v95; // rcx
  void *v96; // rax
  bool v97; // zf
  void *v98; // r14
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rcx
  void *v102; // rax
  bool v103; // zf
  __int64 v104; // rax
  __int64 v105; // rax
  char v106; // al
  char v107; // al
  __int64 v108; // r14
  __int128 v109; // xmm1
  __int128 v110; // xmm2
  __int64 v111; // rax
  __int128 v112; // xmm1
  __int128 v113; // xmm2
  __int64 v114; // rsi
  size_t v115; // rbx
  void *v116; // r14
  void *v117; // rdx
  void *v119; // r15
  char v120; // cl
  unsigned __int8 is_symlink; // [rsp+Fh] [rbp-E69h]
  size_t v122; // [rsp+10h] [rbp-E68h]
  size_t v123; // [rsp+10h] [rbp-E68h]
  void *v124; // [rsp+10h] [rbp-E68h]
  void *v125; // [rsp+18h] [rbp-E60h]
  void *v126; // [rsp+18h] [rbp-E60h]
  size_t n[2]; // [rsp+28h] [rbp-E50h] BYREF
  size_t v129[2]; // [rsp+38h] [rbp-E40h] BYREF
  size_t v130; // [rsp+48h] [rbp-E30h]
  size_t v131; // [rsp+50h] [rbp-E28h]
  __int64 v132; // [rsp+58h] [rbp-E20h]
  _BYTE dest[176]; // [rsp+60h] [rbp-E18h] BYREF
  __int64 *v134; // [rsp+118h] [rbp-D60h]
  __int128 v135; // [rsp+120h] [rbp-D58h] BYREF
  size_t v136; // [rsp+130h] [rbp-D48h]
  __int128 v137; // [rsp+140h] [rbp-D38h]
  __int64 v138; // [rsp+150h] [rbp-D28h]
  __int128 v139; // [rsp+160h] [rbp-D18h] BYREF
  size_t v140; // [rsp+170h] [rbp-D08h]
  void *v141[2]; // [rsp+180h] [rbp-CF8h] BYREF
  size_t v142; // [rsp+190h] [rbp-CE8h]
  _QWORD *v143; // [rsp+1A0h] [rbp-CD8h]
  __int128 v144; // [rsp+1A8h] [rbp-CD0h] BYREF
  __int64 v145; // [rsp+1B8h] [rbp-CC0h]
  void *v146[2]; // [rsp+1C0h] [rbp-CB8h] BYREF
  size_t v147; // [rsp+1D0h] [rbp-CA8h]
  _BYTE src[176]; // [rsp+1E0h] [rbp-C98h] BYREF
  __int64 v149; // [rsp+290h] [rbp-BE8h]
  __int64 v150; // [rsp+298h] [rbp-BE0h] BYREF
  __int64 v151; // [rsp+2A0h] [rbp-BD8h] BYREF
  __int64 v152; // [rsp+2A8h] [rbp-BD0h] BYREF
  int v153; // [rsp+2B0h] [rbp-BC8h]
  __int16 v154; // [rsp+2B4h] [rbp-BC4h]
  void *v155; // [rsp+2B8h] [rbp-BC0h] BYREF
  void **v156; // [rsp+2C0h] [rbp-BB8h]
  size_t v157; // [rsp+2C8h] [rbp-BB0h]
  __int64 *v158; // [rsp+2D0h] [rbp-BA8h] BYREF
  __int64 (__fastcall *v159)(); // [rsp+2D8h] [rbp-BA0h]
  __int64 *v160; // [rsp+2E0h] [rbp-B98h]
  __int64 (__fastcall *v161)(); // [rsp+2E8h] [rbp-B90h]
  __int64 v162; // [rsp+2F0h] [rbp-B88h] BYREF
  size_t v163; // [rsp+2F8h] [rbp-B80h]
  size_t v164; // [rsp+300h] [rbp-B78h]
  char v165; // [rsp+308h] [rbp-B70h]
  __int64 v166; // [rsp+310h] [rbp-B68h] BYREF
  void *v167; // [rsp+318h] [rbp-B60h]
  __int64 v168; // [rsp+320h] [rbp-B58h]
  char v169; // [rsp+328h] [rbp-B50h]
  char ***v170; // [rsp+330h] [rbp-B48h] BYREF
  __int64 (__fastcall *v171)(); // [rsp+338h] [rbp-B40h]
  __int64 *v172; // [rsp+340h] [rbp-B38h]
  __int64 (__fastcall *v173)(); // [rsp+348h] [rbp-B30h]
  __int128 v174; // [rsp+350h] [rbp-B28h] BYREF
  __int64 v175; // [rsp+360h] [rbp-B18h]
  void *v176[2]; // [rsp+370h] [rbp-B08h] BYREF
  size_t v177; // [rsp+380h] [rbp-AF8h]
  __int64 *v178; // [rsp+388h] [rbp-AF0h] BYREF
  __int128 v179; // [rsp+390h] [rbp-AE8h]
  __int64 v180; // [rsp+3A0h] [rbp-AD8h] BYREF
  void *v181; // [rsp+3A8h] [rbp-AD0h]
  void **v182; // [rsp+3B0h] [rbp-AC8h]
  size_t v183; // [rsp+3B8h] [rbp-AC0h]
  unsigned __int64 v184; // [rsp+3C0h] [rbp-AB8h]
  __int128 v185; // [rsp+3C8h] [rbp-AB0h]
  __int64 v186; // [rsp+3D8h] [rbp-AA0h]
  void *v187; // [rsp+3E0h] [rbp-A98h] BYREF
  unsigned int v188; // [rsp+3E8h] [rbp-A90h]
  void *v189; // [rsp+3F0h] [rbp-A88h] BYREF
  unsigned int v190; // [rsp+3F8h] [rbp-A80h]
  int v191; // [rsp+400h] [rbp-A78h] BYREF
  int fd; // [rsp+404h] [rbp-A74h]
  __int64 v193; // [rsp+408h] [rbp-A70h]
  __m256i v194; // [rsp+410h] [rbp-A68h] BYREF
  __m256i v195; // [rsp+430h] [rbp-A48h]
  __int128 v196; // [rsp+450h] [rbp-A28h]
  __int128 v197; // [rsp+460h] [rbp-A18h]
  __int128 v198; // [rsp+470h] [rbp-A08h]
  char **v199; // [rsp+480h] [rbp-9F8h] BYREF
  __int64 v200; // [rsp+488h] [rbp-9F0h]
  _QWORD *v201; // [rsp+490h] [rbp-9E8h]
  __int64 v202; // [rsp+498h] [rbp-9E0h]
  __int64 v203; // [rsp+4A0h] [rbp-9D8h]
  _OWORD v204[9]; // [rsp+4B0h] [rbp-9C8h] BYREF
  void *v205; // [rsp+548h] [rbp-930h] BYREF
  void *v206; // [rsp+550h] [rbp-928h]
  size_t v207; // [rsp+558h] [rbp-920h]
  __int64 v208; // [rsp+560h] [rbp-918h] BYREF
  void *v209; // [rsp+568h] [rbp-910h]
  size_t v210; // [rsp+570h] [rbp-908h]
  size_t v211; // [rsp+578h] [rbp-900h]
  __int64 v212; // [rsp+580h] [rbp-8F8h]
  __int128 v213; // [rsp+588h] [rbp-8F0h]
  __int64 v214; // [rsp+598h] [rbp-8E0h]
  __int64 v215; // [rsp+5A0h] [rbp-8D8h] BYREF
  void *v216; // [rsp+5A8h] [rbp-8D0h]
  size_t v217; // [rsp+5B0h] [rbp-8C8h]
  size_t v218; // [rsp+5B8h] [rbp-8C0h]
  __int64 v219; // [rsp+5C0h] [rbp-8B8h]
  __int128 v220; // [rsp+5C8h] [rbp-8B0h]
  __int64 v221; // [rsp+5D8h] [rbp-8A0h]
  __int128 v222; // [rsp+5E0h] [rbp-898h]
  _QWORD v223[2]; // [rsp+5F0h] [rbp-888h] BYREF
  _QWORD v224[2]; // [rsp+600h] [rbp-878h] BYREF
  _QWORD v225[2]; // [rsp+610h] [rbp-868h] BYREF
  _QWORD v226[2]; // [rsp+620h] [rbp-858h] BYREF
  _QWORD v227[2]; // [rsp+630h] [rbp-848h] BYREF
  _QWORD v228[2]; // [rsp+640h] [rbp-838h] BYREF
  char *v229; // [rsp+650h] [rbp-828h] BYREF
  __int64 (__fastcall *v230)(); // [rsp+658h] [rbp-820h]
  void **v231; // [rsp+660h] [rbp-818h]
  __int64 (__fastcall *v232)(); // [rsp+668h] [rbp-810h]
  __m256i v233; // [rsp+670h] [rbp-808h]
  __m256i v234; // [rsp+690h] [rbp-7E8h]
  __int128 v235; // [rsp+6B0h] [rbp-7C8h]
  __int128 v236; // [rsp+6C0h] [rbp-7B8h]
  __int128 v237; // [rsp+6D0h] [rbp-7A8h]
  __int128 v238; // [rsp+6E0h] [rbp-798h]
  __int64 v239; // [rsp+6F0h] [rbp-788h]
  __int64 v240; // [rsp+700h] [rbp-778h] BYREF
  __int64 v241; // [rsp+708h] [rbp-770h]
  __int64 v242; // [rsp+710h] [rbp-768h]
  __int64 v243; // [rsp+718h] [rbp-760h] BYREF
  __int128 v244; // [rsp+720h] [rbp-758h]
  _QWORD v245[4]; // [rsp+730h] [rbp-748h] BYREF
  _QWORD v246[4]; // [rsp+750h] [rbp-728h] BYREF
  __int128 v247; // [rsp+770h] [rbp-708h]
  __int128 v248; // [rsp+780h] [rbp-6F8h]
  __int128 v249; // [rsp+790h] [rbp-6E8h]
  int v250; // [rsp+7A0h] [rbp-6D8h]
  __int128 v251; // [rsp+7B0h] [rbp-6C8h]
  __int128 v252; // [rsp+7C0h] [rbp-6B8h]
  __int128 v253; // [rsp+7D0h] [rbp-6A8h]
  __int128 v254; // [rsp+7E0h] [rbp-698h]
  __int128 v255; // [rsp+7F0h] [rbp-688h]
  __int128 v256; // [rsp+800h] [rbp-678h]
  __int128 v257; // [rsp+810h] [rbp-668h]
  __int128 v258; // [rsp+820h] [rbp-658h] BYREF
  __int64 v259; // [rsp+830h] [rbp-648h]
  __int128 v260; // [rsp+838h] [rbp-640h] BYREF
  __int128 v261; // [rsp+848h] [rbp-630h] BYREF
  __int128 v262; // [rsp+858h] [rbp-620h] BYREF
  __int64 v263; // [rsp+868h] [rbp-610h]
  __int128 v264; // [rsp+870h] [rbp-608h] BYREF
  __int128 v265; // [rsp+880h] [rbp-5F8h] BYREF
  _QWORD v266[3]; // [rsp+890h] [rbp-5E8h] BYREF
  __int128 v267; // [rsp+8A8h] [rbp-5D0h] BYREF
  __int64 v268; // [rsp+8B8h] [rbp-5C0h]
  _QWORD v269[6]; // [rsp+8C0h] [rbp-5B8h] BYREF
  __int128 v270; // [rsp+8F0h] [rbp-588h] BYREF
  __int128 v271; // [rsp+900h] [rbp-578h] BYREF
  __int64 v272; // [rsp+910h] [rbp-568h]
  __int64 v273; // [rsp+918h] [rbp-560h] BYREF
  __int128 v274; // [rsp+920h] [rbp-558h]
  char v275; // [rsp+930h] [rbp-548h]
  __int64 v276; // [rsp+938h] [rbp-540h] BYREF
  __int128 v277; // [rsp+940h] [rbp-538h]
  char v278; // [rsp+950h] [rbp-528h]
  _QWORD v279[4]; // [rsp+958h] [rbp-520h] BYREF
  _OWORD v280[9]; // [rsp+978h] [rbp-500h] BYREF
  _OWORD v281[9]; // [rsp+A08h] [rbp-470h] BYREF
  __int64 v282; // [rsp+A98h] [rbp-3E0h] BYREF
  __int128 v283; // [rsp+AA0h] [rbp-3D8h]
  __int128 v284; // [rsp+AB0h] [rbp-3C8h]
  __int128 v285; // [rsp+AC0h] [rbp-3B8h]
  __int64 v286; // [rsp+AD0h] [rbp-3A8h]
  __int64 v287; // [rsp+AD8h] [rbp-3A0h] BYREF
  __int128 v288; // [rsp+AE0h] [rbp-398h]
  __int128 v289; // [rsp+AF0h] [rbp-388h]
  __int128 v290; // [rsp+B00h] [rbp-378h]
  __int64 v291; // [rsp+B10h] [rbp-368h]
  _BYTE v292[24]; // [rsp+B18h] [rbp-360h] BYREF
  _OWORD v293[2]; // [rsp+B30h] [rbp-348h] BYREF
  _DWORD v294[36]; // [rsp+B50h] [rbp-328h] BYREF
  _OWORD v295[10]; // [rsp+BE0h] [rbp-298h] BYREF
  __int64 v296; // [rsp+C80h] [rbp-1F8h] BYREF
  __int64 v297; // [rsp+C88h] [rbp-1F0h]
  _BYTE v298[136]; // [rsp+C90h] [rbp-1E8h] BYREF
  __int64 v299; // [rsp+D18h] [rbp-160h] BYREF
  _BYTE v300[136]; // [rsp+D20h] [rbp-158h] BYREF
  _BYTE v301[160]; // [rsp+DA8h] [rbp-D0h] BYREF

  v143 = a2;
  v129[0] = a3;
  v129[1] = a4;
  n[0] = (size_t)a5;
  n[1] = a6;
  LOBYTE(v132) = std::path::Path::is_symlink(a3, a4);
  is_symlink = std::path::Path::is_symlink(a5, a6);
  if ( is_symlink )
  {
    if ( (unsigned int)<[u8] as nix::NixPath>::with_nix_path(a5, a6, (struct stat *)src)
      || (unsigned int)nix::errno::<impl nix::errno::consts::Errno>::result((unsigned int)v13) )
    {
      std::io::error::repr_bitpacked::decode_repr(dest, (v13 << 32) | 2);
      if ( dest[0] >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest[8]);
    }
    else
    {
      memcpy(&dest[8], &src[8], 0x88uLL);
      *(_QWORD *)dest = *(_QWORD *)src;
      if ( *(_QWORD *)(a8 + 24) )
      {
        *(_OWORD *)&src[32] = *(_OWORD *)(a8 + 32);
        memset(src, 0, 32);
        memset(&src[48], 0, 24);
        core::hash::sip::Hasher<S>::reset(src);
        *(_QWORD *)&v204[4] = *(_QWORD *)&src[64];
        v204[3] = *(_OWORD *)&src[48];
        v204[2] = *(_OWORD *)&src[32];
        v204[1] = *(_OWORD *)&src[16];
        v204[0] = *(_OWORD *)src;
        *(_QWORD *)src = *(_QWORD *)dest;
        <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(v204, src, 8LL);
        *(_QWORD *)src = *(_QWORD *)&dest[8];
        <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(v204, src, 8LL);
        v18 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(v204);
        if ( hashbrown::raw::RawTable<T,A>::find(a8, v18, dest) )
        {
          v260 = *(_OWORD *)v129;
          v261 = *(_OWORD *)n;
          v245[0] = &v260;
          v245[1] = <std::path::Display as core::fmt::Display>::fmt;
          v245[2] = &v261;
          v245[3] = <std::path::Display as core::fmt::Display>::fmt;
          *(_QWORD *)dest = &off_182428;
          *(_QWORD *)&dest[8] = 3LL;
          *(_QWORD *)&dest[16] = v245;
          *(_QWORD *)&dest[24] = 2LL;
          *(_QWORD *)&dest[32] = 0LL;
          alloc::fmt::format::format_inner(&v258, dest);
          v15 = a1;
          *(_QWORD *)a1 = 4LL;
          *(_OWORD *)(a1 + 8) = v258;
          v16 = v259;
          goto LABEL_161;
        }
      }
    }
    if ( *(_QWORD *)(a9 + 24) )
    {
      *(_OWORD *)&dest[32] = *(_OWORD *)(a9 + 32);
      memset(dest, 0, 32);
      memset(&dest[48], 0, 24);
      core::hash::sip::Hasher<S>::reset(dest);
      *(_QWORD *)&src[64] = *(_QWORD *)&dest[64];
      *(_OWORD *)&src[48] = *(_OWORD *)&dest[48];
      *(_OWORD *)&src[32] = *(_OWORD *)&dest[32];
      *(_OWORD *)&src[16] = *(_OWORD *)&dest[16];
      *(_OWORD *)src = *(_OWORD *)dest;
      <std::path::Path as core::hash::Hash>::hash(n[0], n[1], src);
      v14 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(src);
      if ( hashbrown::raw::RawTable<T,A>::find(a9, v14, n[0], n[1]) )
      {
        v264 = *(_OWORD *)v129;
        v265 = *(_OWORD *)n;
        v246[0] = &v264;
        v246[1] = <std::path::Display as core::fmt::Display>::fmt;
        v246[2] = &v265;
        v246[3] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)dest = &off_182428;
        *(_QWORD *)&dest[8] = 3LL;
        *(_QWORD *)&dest[16] = v246;
        *(_QWORD *)&dest[24] = 2LL;
        *(_QWORD *)&dest[32] = 0LL;
        alloc::fmt::format::format_inner(&v262, dest);
        v15 = a1;
        *(_QWORD *)a1 = 4LL;
        *(_OWORD *)(a1 + 8) = v262;
        v16 = v263;
LABEL_161:
        *(_QWORD *)(v15 + 24) = v16;
        return a1;
      }
    }
    v17 = *(_BYTE *)(a7 + 65);
    if ( (v17 & 1) == 0 && a11 )
      v17 = *(_BYTE *)(a7 + 64) & 1;
    if ( (v17 & 1) != 0 || (unsigned __int8)v132 != 1 )
    {
      std::sys::pal::unix::fs::stat(dest);
      if ( *(_QWORD *)dest == 2LL )
      {
        std::io::error::repr_bitpacked::decode_repr(dest, *(_QWORD *)&dest[8]);
        if ( dest[0] >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest[8]);
        if ( (*(_BYTE *)(a7 + 60) || *(_BYTE *)(a7 + 61) != 1)
          && !(unsigned __int8)uucore::features::fs::is_symlink_loop(n[0], n[1]) )
        {
          std::env::_var_os(v266, aPosixlyCorrect, 15LL);
          if ( v266[0] == 0x8000000000000000LL )
          {
            v270 = *(_OWORD *)n;
            v223[0] = &v270;
            v223[1] = <std::path::Display as core::fmt::Display>::fmt;
            v269[0] = &off_1823E8;
            v269[1] = 2LL;
            v269[4] = 0LL;
            v269[2] = v223;
            v269[3] = 1LL;
            alloc::fmt::format(&v267, v269);
            v15 = a1;
            *(_QWORD *)a1 = 4LL;
            *(_OWORD *)(a1 + 8) = v267;
            v16 = v268;
            goto LABEL_161;
          }
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v266);
        }
      }
    }
    if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(v129[0], v129[1], n[0], n[1], 1LL) )
    {
      if ( !*(_BYTE *)(a7 + 60) && *(_BYTE *)(a7 + 61) == 1 && !*(_BYTE *)(a7 + 76) )
      {
        v19 = std::sys::pal::unix::fs::unlink((void *)n[0], n[1]);
        if ( v19 )
          goto LABEL_196;
      }
    }
  }
  if ( (unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(v129[0], v129[1], n[0], n[1]) )
  {
    std::path::Path::components(src);
    std::path::Path::components(dest);
    if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(src, dest)
      && !*(_BYTE *)(a7 + 60)
      && *(_BYTE *)(a7 + 61) == 1 )
    {
      v19 = std::sys::pal::unix::fs::unlink((void *)n[0], n[1]);
      if ( v19 )
        goto LABEL_196;
    }
  }
  v20 = dest;
  std::sys::pal::unix::fs::lstat(dest);
  if ( *(_QWORD *)dest == 2LL )
  {
    std::io::error::repr_bitpacked::decode_repr(dest, *(_QWORD *)&dest[8]);
    if ( dest[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest[8]);
    v21 = (_BYTE *)a7;
    goto LABEL_147;
  }
  v21 = (_BYTE *)a7;
  if ( (*(_BYTE *)(a7 + 62) & 1) != 0 && (*(_BYTE *)(a7 + 60) || *(_BYTE *)(a7 + 61) != 1) )
    goto LABEL_147;
  if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(v129[0], v129[1], n[0], n[1], 1LL)
    && !*(_BYTE *)(a7 + 78) )
  {
    if ( (_BYTE)v132 )
    {
      if ( !is_symlink || (*(_BYTE *)(a7 + 65) & 1) == 0 )
        goto LABEL_200;
    }
    else if ( !(is_symlink | (*(_BYTE *)(a7 + 76) == 0))
           && (!(unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(v129, n)
            || *(_BYTE *)(a7 + 60)
            || *(_BYTE *)(a7 + 61)) )
    {
      goto LABEL_200;
    }
  }
  v22 = n[0];
  v23 = n[1];
  v24 = v129[0];
  v131 = v129[1];
  v25 = (unsigned int)std::path::Path::is_symlink(v129[0], v129[1]);
  v125 = (void *)v22;
  v122 = v23;
  v26 = (unsigned int)std::path::Path::is_symlink(v22, v23);
  v27 = *(_BYTE *)(a7 + 65);
  if ( (v27 & 1) != 0 || !a11 )
  {
    v29 = v25 & ((v27 & 1) == 0);
    v28 = 1;
    if ( v29 != 1 )
      goto LABEL_51;
    goto LABEL_50;
  }
  v28 = 1;
  if ( ((unsigned __int8)v25 & ((*(_BYTE *)(a7 + 64) & 1) == 0)) != 0 )
LABEL_50:
    v28 = v26 ^ 1;
LABEL_51:
  v30 = (void *)v24;
  if ( !(unsigned __int8)uucore::features::fs::paths_refer_to_same_file(v24, v131, v125, v23, v28) )
    goto LABEL_79;
  if ( *(_BYTE *)(a7 + 76) )
  {
    if ( *(_BYTE *)(a7 + 60) || *(_BYTE *)(a7 + 61) )
    {
      if ( !(_BYTE)v25 )
      {
        if ( (_BYTE)v26 )
          goto LABEL_79;
        std::path::Path::components(src);
        std::path::Path::components(dest);
        if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(src, dest) )
          goto LABEL_79;
        goto LABEL_64;
      }
    }
    else if ( !(_BYTE)v25 )
    {
      goto LABEL_79;
    }
    if ( (unsigned __int8)v26 | ((*(_BYTE *)(a7 + 65) & 1) == 0) )
      goto LABEL_79;
  }
LABEL_64:
  if ( !*(_BYTE *)(a7 + 78) )
    goto LABEL_79;
  if ( *(_BYTE *)(a7 + 78) != 1 )
  {
    if ( ((unsigned __int8)v25 & (unsigned __int8)v26) != 0 && (*(_BYTE *)(a7 + 65) & 1) == 0 )
      goto LABEL_79;
LABEL_75:
    v162 = 1LL;
    v163 = v24;
    v164 = v131;
    v165 = 1;
    v166 = 1LL;
    v167 = v125;
    v168 = v23;
    v169 = 1;
    v158 = &v162;
    v159 = <os_display::Quoted as core::fmt::Display>::fmt;
    v160 = &v166;
    v161 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &unk_1822C0;
    *(_QWORD *)&dest[8] = 3LL;
    *(_QWORD *)&dest[16] = &v158;
    *(_QWORD *)&dest[24] = 2LL;
    *(_QWORD *)&dest[32] = 0LL;
    alloc::fmt::format::format_inner(v146, dest);
    v31 = v146[0];
    v30 = v146[1];
    v32 = 4LL;
    v26 = v147;
    goto LABEL_119;
  }
  if ( !(_BYTE)v26 )
    goto LABEL_75;
LABEL_79:
  v25 = a7;
  if ( *(_BYTE *)(a7 + 77) == 2
    || (uu_cp::OverwriteMode::verify((__int64)&v180, (_BYTE *)(a7 + 60), (__int64)v125, v23, *(_BYTE *)(a7 + 71) & 1),
        v32 = v180,
        v180 == 13) )
  {
    v33 = *(_QWORD *)(a7 + 8);
    if ( !v33 || *(__int64 *)(a7 + 16) < 0 )
      goto LABEL_348;
    switch ( *(_BYTE *)(a7 + 76) )
    {
      case 0:
        *(_QWORD *)&v135 = 0x8000000000000000LL;
        goto LABEL_90;
      case 1:
        v20 = v204;
        uucore::features::backup_control::simple_backup_path(v204, v125, v122);
        goto LABEL_89;
      case 2:
        v20 = src;
        uucore::features::backup_control::numbered_backup_path(src, v125, v122);
        goto LABEL_89;
      case 3:
        uucore::features::backup_control::existing_backup_path(dest, v125, v122);
LABEL_89:
        v135 = *(_OWORD *)v20;
        v136 = *((_QWORD *)v20 + 2);
        if ( (_QWORD)v135 == 0x8000000000000000LL )
        {
LABEL_90:
          LOBYTE(v33) = 1;
          v34 = 0;
LABEL_91:
          if ( *(_BYTE *)(a7 + 60) >= 2u )
            goto LABEL_139;
          v35 = *(unsigned __int8 *)(a7 + 61);
          LODWORD(v130) = v33;
          if ( v35 != 2 )
          {
            if ( v35 != 1 && !(unsigned __int8)uucore::features::fs::is_symlink_loop(v125, v122) )
            {
              std::sys::pal::unix::fs::stat(dest);
              if ( *(_QWORD *)dest == 2LL )
              {
                v31 = *(void **)&dest[8];
                goto LABEL_96;
              }
              if ( (dest[56] & 0x92) != 0 )
                goto LABEL_139;
            }
            goto LABEL_95;
          }
          if ( (*(_BYTE *)(a7 + 56) & 1) == 0 )
          {
LABEL_139:
            if ( !(((_QWORD)v135 == 0x8000000000000000LL) | (unsigned __int8)v34) )
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v135);
LABEL_141:
            v97 = (unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(v129[0], v129[1], n[0], n[1]) == 0;
            v21 = (_BYTE *)a7;
            if ( !v97 )
            {
              if ( *(_BYTE *)(a7 + 78) )
              {
                v21 = (_BYTE *)a7;
                if ( *(_BYTE *)(a7 + 78) == 2 && *(_BYTE *)(a7 + 76) )
                  goto LABEL_200;
              }
              else
              {
                v21 = (_BYTE *)a7;
                if ( ((unsigned __int8)v132 & is_symlink) == 0 )
                  goto LABEL_200;
              }
            }
LABEL_147:
            if ( ((unsigned __int8)v132 & v21[62]) != 0 && (v21[60] || v21[61] != 1) )
            {
              v273 = 1LL;
              v274 = *(_OWORD *)n;
              v275 = 1;
              v224[0] = &v273;
              v224[1] = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)dest = &off_182408;
              *(_QWORD *)&dest[8] = 2LL;
              *(_QWORD *)&dest[16] = v224;
              *(_QWORD *)&dest[24] = 1LL;
              *(_QWORD *)&dest[32] = 0LL;
              alloc::fmt::format::format_inner(&v271, dest);
              v15 = a1;
              *(_QWORD *)a1 = 4LL;
              *(_OWORD *)(a1 + 8) = v271;
              v16 = v272;
              goto LABEL_161;
            }
            if ( (v21[72] & 1) != 0 )
            {
              v46 = v21[68] & 1;
              src[0] = v46;
              if ( !*v143 )
              {
                uu_cp::print_paths(v46, v129[0], v129[1], n[0], n[1]);
                v21 = (_BYTE *)a7;
                if ( (*(_BYTE *)(a7 + 56) & 1) == 0 )
                  goto LABEL_154;
                goto LABEL_176;
              }
              *(_QWORD *)dest = src;
              *(_QWORD *)&dest[8] = v129[0];
              *(_OWORD *)&dest[16] = __PAIR128__(n[0], v129[1]);
              *(_QWORD *)&dest[32] = n[1];
              indicatif::progress_bar::ProgressBar::suspend(v143, dest);
              v21 = (_BYTE *)a7;
            }
            if ( (v21[56] & 1) == 0 )
              goto LABEL_154;
LABEL_176:
            v57 = v21[65];
            if ( (v57 & 1) != 0 || !a11 )
            {
              v58 = (void *)v129[0];
              v59 = v129[1];
              if ( (v57 & 1) != 0 )
                goto LABEL_179;
            }
            else
            {
              v58 = (void *)v129[0];
              v59 = v129[1];
              if ( (*(_BYTE *)(a7 + 64) & 1) != 0 )
              {
LABEL_179:
                v61 = 1;
                if ( (unsigned int)<[u8] as nix::NixPath>::with_nix_path(v58, v59, (struct stat *)dest)
                  || (unsigned int)nix::errno::<impl nix::errno::consts::Errno>::result((unsigned int)v60) )
                {
                  goto LABEL_186;
                }
                goto LABEL_185;
              }
            }
            v61 = 1;
            if ( (unsigned int)<[u8] as nix::NixPath>::with_nix_path(v58, v59, (struct stat *)dest)
              || (unsigned int)nix::errno::<impl nix::errno::consts::Errno>::result((unsigned int)v60) )
            {
              goto LABEL_186;
            }
LABEL_185:
            memcpy(src, dest, 0x90uLL);
            v61 = 0;
LABEL_186:
            if ( v61 )
            {
              *(_QWORD *)&v280[0] = (v60 << 32) | 2;
              v62 = 1LL;
            }
            else
            {
              memcpy(v280, src, sizeof(v280));
              v62 = 0LL;
            }
            v279[3] = v62;
            v276 = 1LL;
            v277 = *(_OWORD *)v129;
            v278 = 1;
            v225[0] = &v276;
            v225[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)dest = &off_1822F0;
            *(_QWORD *)&dest[8] = 1LL;
            *(_QWORD *)&dest[16] = v225;
            *(_QWORD *)&dest[24] = 1LL;
            *(_QWORD *)&dest[32] = 0LL;
            alloc::fmt::format::format_inner(&v240, dest);
            v63 = v240;
            v64 = v241;
            if ( v61 )
            {
              v65 = v242;
              v66 = *(_QWORD *)&v280[0];
              *(_QWORD *)a1 = 3LL;
              *(_QWORD *)(a1 + 8) = v63;
              *(_QWORD *)(a1 + 16) = v64;
              *(_QWORD *)(a1 + 24) = v65;
              *(_QWORD *)(a1 + 32) = v66;
              return a1;
            }
            v67 = v280[0];
            v68 = v280[1];
            v251 = v280[2];
            v252 = v280[3];
            v253 = v280[4];
            v254 = v280[5];
            v255 = v280[6];
            v256 = v280[7];
            v257 = v280[8];
            if ( v240 )
              _rust_dealloc(v241, v240, 1LL);
            v281[8] = v257;
            v281[7] = v256;
            v281[6] = v255;
            v281[5] = v254;
            v281[4] = v253;
            v281[3] = v252;
            v281[2] = v251;
            v281[0] = v67;
            v281[1] = v68;
            if ( !*(_QWORD *)(a10 + 24) )
              goto LABEL_154;
            *(_OWORD *)&dest[32] = *(_OWORD *)(a10 + 32);
            memset(dest, 0, 32);
            memset(&dest[48], 0, 24);
            core::hash::sip::Hasher<S>::reset(dest);
            *(_QWORD *)&src[64] = *(_QWORD *)&dest[64];
            *(_OWORD *)&src[48] = *(_OWORD *)&dest[48];
            *(_OWORD *)&src[32] = *(_OWORD *)&dest[32];
            *(_OWORD *)&src[16] = *(_OWORD *)&dest[16];
            *(_OWORD *)src = *(_OWORD *)dest;
            *(_QWORD *)dest = *(_QWORD *)&v281[0];
            <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(src, dest, 8LL);
            *(_QWORD *)dest = *((_QWORD *)&v281[0] + 1);
            <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(src, dest, 8LL);
            v69 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(src);
            v70 = hashbrown::raw::RawTable<T,A>::find(a10, v69, v281);
            if ( !v70 )
            {
LABEL_154:
              *(_QWORD *)&v204[0] = 1LL;
              *(_OWORD *)((char *)v204 + 8) = *(_OWORD *)v129;
              BYTE8(v204[1]) = 1;
              *(_QWORD *)src = 1LL;
              *(_OWORD *)&src[8] = *(_OWORD *)n;
              src[24] = 1;
              v229 = (char *)v204;
              v230 = <os_display::Quoted as core::fmt::Display>::fmt;
              v231 = (void **)src;
              v232 = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)dest = &anon_edd0bd9b3106a806526586a6c9f9e2d7_208_llvm_17885426612345091974;
              *(_QWORD *)&dest[8] = 2LL;
              *(_QWORD *)&dest[16] = &v229;
              *(_QWORD *)&dest[24] = 2LL;
              *(_QWORD *)&dest[32] = 0LL;
              alloc::fmt::format::format_inner(&v194, dest);
              v47 = v194.m256i_i64[1];
              if ( !v194.m256i_i64[1] )
                goto LABEL_348;
              v123 = v194.m256i_u64[2];
              if ( v194.m256i_i64[2] < 0 )
                goto LABEL_348;
              v132 = v194.m256i_i64[0];
              v48 = *(_BYTE *)(a7 + 65);
              if ( (v48 & 1) != 0 || !a11 )
              {
                if ( (v48 & 1) != 0 )
                  goto LABEL_159;
              }
              else if ( (*(_BYTE *)(a7 + 64) & 1) != 0 )
              {
LABEL_159:
                std::sys::pal::unix::fs::stat(dest);
LABEL_164:
                if ( *(_QWORD *)dest != 2LL )
                  memcpy(v295, &dest[16], sizeof(v295));
                memcpy(v301, v295, sizeof(v301));
                if ( *(_QWORD *)dest == 2LL )
                {
                  uu_cp::copy_file::{{closure}}(dest, v129[0], v129[1], *(_QWORD *)&dest[8]);
                  v49 = *(_QWORD *)dest;
                  v222 = *(_OWORD *)&dest[8];
                  *(_QWORD *)a1 = 4LL;
                  *(_QWORD *)(a1 + 8) = v49;
                  *(_OWORD *)(a1 + 16) = v222;
                  goto LABEL_324;
                }
                v222 = v295[0];
                memcpy(v294, &v301[16], sizeof(v294));
                v293[1] = v295[0];
                v293[0] = *(_OWORD *)dest;
                std::sys::pal::unix::fs::stat(dest);
                if ( *(_QWORD *)dest == 2LL )
                {
                  std::io::error::repr_bitpacked::decode_repr(dest, *(_QWORD *)&dest[8]);
                  if ( dest[0] >= 3u )
                    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest[8]);
                  v50 = v294[6];
                  if ( (*(_BYTE *)(a7 + 50) & 1) == 0 )
                  {
                    v50 = v294[6] & 0x1FF;
                    if ( (*(_BYTE *)(a7 + 51) & 1) != 0 )
                      v50 = 438;
                  }
                  v51 = umask(0);
                  umask(v51);
                  v52 = v50 & ~v51;
                  LODWORD(v131) = v52;
                  v126 = (void *)v129[0];
                  v53 = v129[1];
                  v54 = n[0];
                  v55 = n[1];
                  v56 = v294[6] & 0xF000;
                  switch ( *(_BYTE *)(a7 + 78) )
                  {
                    case 0:
                      goto LABEL_202;
                    case 1:
                      goto LABEL_214;
                    case 2:
                      goto LABEL_207;
                    case 3:
                      goto LABEL_209;
                    case 4:
                      goto LABEL_205;
                    case 5:
                      goto LABEL_218;
                  }
                }
                std::sys::pal::unix::fs::lstat(dest);
                if ( *(_QWORD *)dest == 2LL )
                {
                  *(_QWORD *)src = v47;
                  *(_QWORD *)&src[8] = v123;
                  *(_QWORD *)&src[16] = *(_QWORD *)&dest[8];
                  <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(
                    dest,
                    src);
                  v75 = *(_DWORD *)&dest[8];
                  v247 = *(_OWORD *)&dest[12];
                  v248 = *(_OWORD *)&dest[28];
                  v249 = *(_OWORD *)&dest[44];
                  v250 = *(_DWORD *)&dest[60];
                  if ( *(_QWORD *)dest == 13LL )
                  {
                    LODWORD(v131) = *(_DWORD *)&dest[8];
                    v126 = (void *)v129[0];
                    v53 = v129[1];
                    v54 = n[0];
                    v55 = n[1];
                    v56 = v294[6] & 0xF000;
                    switch ( *(_BYTE *)(a7 + 78) )
                    {
                      case 0:
                        goto LABEL_202;
                      case 1:
                        goto LABEL_214;
                      case 2:
                        goto LABEL_207;
                      case 3:
                        goto LABEL_209;
                      case 4:
                        goto LABEL_205;
                    }
                  }
                  *(_QWORD *)a1 = *(_QWORD *)dest;
                  *(_DWORD *)(a1 + 8) = v75;
                  v88 = v248;
                  v89 = v249;
                  *(_OWORD *)(a1 + 12) = v247;
                  *(_OWORD *)(a1 + 28) = v88;
                  *(_OWORD *)(a1 + 44) = v89;
                  *(_DWORD *)(a1 + 60) = v250;
LABEL_324:
                  v114 = v132;
                  if ( !v132 )
                    return a1;
                  goto LABEL_325;
                }
                LODWORD(v131) = *(_DWORD *)&dest[56];
                v126 = (void *)v129[0];
                v53 = v129[1];
                v54 = n[0];
                v55 = n[1];
                v56 = v294[6] & 0xF000;
                switch ( *(_BYTE *)(a7 + 78) )
                {
                  case 0:
LABEL_202:
                    v130 = v53;
                    v76 = (void **)dest;
                    v124 = (void *)v54;
                    v77 = v55;
                    std::sys::pal::unix::fs::stat(dest);
                    if ( *(_QWORD *)dest == 2LL )
                    {
                      std::io::error::repr_bitpacked::decode_repr(dest, *(_QWORD *)&dest[8]);
                      if ( dest[0] >= 3u )
                        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest[8]);
                      goto LABEL_245;
                    }
                    if ( !*(_QWORD *)(a7 + 8) || *(__int64 *)(a7 + 16) < 0 )
                      goto LABEL_348;
                    break;
                  case 1:
LABEL_214:
                    v85 = v53;
                    v86 = (void **)v54;
                    v87 = v55;
                    std::sys::pal::unix::fs::stat(dest);
                    if ( *(_QWORD *)dest == 2LL )
                    {
                      std::io::error::repr_bitpacked::decode_repr(dest, *(_QWORD *)&dest[8]);
                      if ( dest[0] >= 3u )
                        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest[8]);
                    }
                    else if ( !*(_BYTE *)(a7 + 60) && !*(_BYTE *)(a7 + 61) )
                    {
                      v81 = v86;
                      v82 = std::sys::pal::unix::fs::unlink(v86, v87);
                      v80 = (void *)v82;
                      if ( v82 )
                        goto LABEL_322;
                    }
                    uu_cp::symlink_file(&v215, v126, v85, v86, v87, a8);
                    v79 = v215;
                    if ( v215 == 13 )
                      goto LABEL_281;
                    v80 = v216;
                    v81 = (void **)v217;
                    v82 = v218;
                    v83 = v219;
                    v137 = v220;
                    v84 = v221;
                    goto LABEL_229;
                  case 2:
LABEL_207:
                    uu_cp::copy_helper(&v208, v126, v53, v54, v55, a7, v47, v123, v56 == 40960, v56 == 4096, a8);
                    v79 = v208;
                    if ( v208 == 13 )
                      goto LABEL_281;
                    v80 = v209;
                    v81 = (void **)v210;
                    v82 = v211;
                    v83 = v212;
                    v137 = v213;
                    v84 = v214;
                    goto LABEL_229;
                  case 3:
LABEL_209:
                    v130 = v53;
                    v52 = v54;
                    v134 = (__int64 *)v55;
                    std::sys::pal::unix::fs::stat(dest);
                    if ( *(_QWORD *)dest == 2LL )
                    {
                      std::io::error::repr_bitpacked::decode_repr(dest, *(_QWORD *)&dest[8]);
                      if ( dest[0] >= 3u )
                        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest[8]);
                      uu_cp::copy_helper(v204, v126, v130, v52, v134, a7, v47, v123, v56 == 40960, v56 == 4096, a8);
                      v79 = *(_QWORD *)&v204[0];
                      if ( *(_QWORD *)&v204[0] == 13LL )
                        goto LABEL_281;
                      v80 = (void *)*((_QWORD *)&v204[0] + 1);
                      v82 = *((_QWORD *)&v204[1] + 1);
                      v81 = *(void ***)&v204[1];
                      v83 = *(_QWORD *)&v204[2];
                      v137 = *(_OWORD *)((char *)&v204[2] + 8);
                      v84 = *((_QWORD *)&v204[3] + 1);
                    }
                    else
                    {
LABEL_218:
                      switch ( *(_BYTE *)(a7 + 77) )
                      {
                        case 0:
                          uu_cp::copy_helper(&v180, v126, v130, v52, v134, a7, v47, v123, v56 == 40960, v56 == 4096, a8);
                          v79 = v180;
                          if ( v180 == 13 )
                            goto LABEL_281;
                          v80 = v181;
                          v81 = v182;
                          v82 = v183;
                          v83 = v184;
                          v137 = v185;
                          v84 = v186;
                          break;
                        case 1:
                          if ( (*(_BYTE *)(a7 + 71) & 1) != 0 )
                          {
                            v170 = (char ***)(&dword_0 + 1);
                            v171 = (__int64 (__fastcall *)())v52;
                            v172 = v134;
                            LOBYTE(v173) = 1;
                            v226[0] = &v170;
                            v226[1] = <os_display::Quoted as core::fmt::Display>::fmt;
                            v199 = &off_182218;
                            v200 = 2LL;
                            v203 = 0LL;
                            v201 = v226;
                            v202 = 1LL;
                            std::io::stdio::_print(&v199);
                          }
                          goto LABEL_281;
                        case 2:
                          v81 = (void **)dest;
                          v82 = std::sys::pal::unix::fs::lstat(dest);
                          v80 = *(void **)&dest[8];
                          if ( *(_QWORD *)dest == 2LL )
                            goto LABEL_322;
                          memcpy(&src[16], &dest[16], 0xA0uLL);
                          *(_OWORD *)src = *(_OWORD *)dest;
                          v81 = &v187;
                          v82 = std::fs::Metadata::modified(&v187, v293);
                          v90 = v188;
                          if ( v188 == 1000000000 )
                          {
                            v80 = v187;
LABEL_322:
                            v79 = 2LL;
                            goto LABEL_323;
                          }
                          v119 = v187;
                          v81 = &v189;
                          std::fs::Metadata::modified(&v189, src);
                          v82 = v190;
                          if ( v190 == 1000000000 )
                          {
                            v80 = v189;
                            goto LABEL_322;
                          }
                          v120 = ((__int64)v119 > (__int64)v189) - ((__int64)v119 < (__int64)v189);
                          if ( (__int64)v119 > (__int64)v189 == (__int64)v119 < (__int64)v189 )
                            v120 = (v90 > v190) - (v90 < v190);
                          if ( v120 != 1 )
                            goto LABEL_281;
                          uu_cp::OverwriteMode::verify(
                            (__int64)&v194,
                            (_BYTE *)(a7 + 60),
                            v52,
                            (__int64)v134,
                            *(_BYTE *)(a7 + 71) & 1);
                          v79 = v194.m256i_i64[0];
                          if ( v194.m256i_i64[0] == 13 )
                          {
                            uu_cp::copy_helper(
                              &v229,
                              v126,
                              v130,
                              v52,
                              v134,
                              a7,
                              v47,
                              v123,
                              v56 == 40960,
                              v56 == 4096,
                              a8);
                            v79 = (__int64)v229;
                            if ( v229 == &byte_9[4] )
                              goto LABEL_281;
                            v80 = v230;
                            v81 = v231;
                            v82 = (size_t)v232;
                            v83 = v233.m256i_i64[0];
                            v137 = *(_OWORD *)&v233.m256i_u64[1];
                            v84 = v233.m256i_i64[3];
                          }
                          else
                          {
                            v80 = (void *)v194.m256i_i64[1];
                            v82 = v194.m256i_u64[3];
                            v81 = (void **)v194.m256i_i64[2];
                            v83 = v195.m256i_i64[0];
                            v137 = *(_OWORD *)&v195.m256i_u64[1];
                            v84 = v195.m256i_i64[3];
                          }
                          break;
                        case 3:
                          v228[0] = v52;
                          v228[1] = v134;
                          v227[0] = v228;
                          v227[1] = <std::path::Display as core::fmt::Display>::fmt;
                          *(_QWORD *)dest = &off_1823B0;
                          *(_QWORD *)&dest[8] = 2LL;
                          *(_QWORD *)&dest[16] = v227;
                          *(_QWORD *)&dest[24] = 1LL;
                          *(_QWORD *)&dest[32] = 0LL;
                          alloc::fmt::format::format_inner(&v155, dest);
                          v80 = v155;
                          v81 = v156;
                          v79 = 4LL;
                          v82 = v157;
                          goto LABEL_323;
                      }
                    }
LABEL_229:
                    v138 = v84;
LABEL_323:
                    *(_QWORD *)a1 = v79;
                    *(_QWORD *)(a1 + 8) = v80;
                    *(_QWORD *)(a1 + 16) = v81;
                    *(_QWORD *)(a1 + 24) = v82;
                    *(_QWORD *)(a1 + 32) = v83;
                    *(_OWORD *)(a1 + 40) = v137;
                    *(_QWORD *)(a1 + 56) = v138;
                    goto LABEL_324;
                  case 4:
LABEL_205:
                    v152 = 0x1B600000000LL;
                    v153 = 256;
                    v154 = 1;
                    std::fs::OpenOptions::_open(&v191, &v152, v54, v55);
                    if ( v191 )
                    {
                      v151 = v193;
                      core::result::unwrap_failed(aCalledResultUn_0, 43LL, &v151, &off_181B70, &off_1823D0);
                    }
                    v78 = fd;
                    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
                    close(v78);
                    goto LABEL_281;
                }
                switch ( *(_BYTE *)(a7 + 76) )
                {
                  case 0:
                    *(_QWORD *)&v139 = 0x8000000000000000LL;
                    goto LABEL_240;
                  case 1:
                    v76 = (void **)&v243;
                    uucore::features::backup_control::simple_backup_path(&v243, v124, v77);
                    goto LABEL_239;
                  case 2:
                    v76 = &v205;
                    uucore::features::backup_control::numbered_backup_path(&v205, v124, v77);
                    goto LABEL_239;
                  case 3:
                    uucore::features::backup_control::existing_backup_path(dest, v124, v77);
LABEL_239:
                    v139 = *(_OWORD *)v76;
                    v140 = (size_t)v76[2];
                    if ( (_QWORD)v139 == 0x8000000000000000LL )
                    {
LABEL_240:
                      v91 = 0;
                      goto LABEL_241;
                    }
                    *(_OWORD *)v176 = v139;
                    v115 = v140;
                    v177 = v140;
                    v116 = (void *)*((_QWORD *)&v139 + 1);
                    if ( !*((_QWORD *)&v139 + 1) || (v140 & 0x8000000000000000LL) != 0LL )
                      goto LABEL_348;
                    if ( (unsigned __int8)std::path::Path::is_symlink(v124, v77) )
                    {
                      v80 = (void *)std::sys::pal::unix::fs::rename(v124, v77, v116, v115);
                      if ( !v80 )
                      {
LABEL_320:
                        std::sys::os_str::bytes::Slice::to_owned(dest, v116, v115);
                        v179 = *(_OWORD *)&dest[8];
                        v178 = *(__int64 **)dest;
                        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v178);
                        v80 = (void *)std::sys::pal::unix::fs::unlink(v124, v77);
                        if ( !v80 )
                        {
                          v91 = 1;
                          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v176);
LABEL_241:
                          if ( !*(_BYTE *)(a7 + 60) && !*(_BYTE *)(a7 + 61) )
                          {
                            v81 = (void **)v124;
                            v80 = (void *)std::sys::pal::unix::fs::unlink(v124, v77);
                            if ( v80 )
                            {
                              v82 = 0x8000000000000000LL;
                              LOBYTE(v82) = (_QWORD)v139 == 0x8000000000000000LL;
                              v79 = 2LL;
                              if ( !(((_QWORD)v139 == 0x8000000000000000LL) | (unsigned __int8)v91) )
                              {
                                v81 = (void **)&v139;
                                v82 = <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v139);
                              }
                              goto LABEL_323;
                            }
                          }
                          if ( !(((_QWORD)v139 == 0x8000000000000000LL) | (unsigned __int8)v91) )
                            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v139);
LABEL_245:
                          v92 = *(_BYTE *)(a7 + 65);
                          if ( (v92 & 1) != 0 || !a11 )
                          {
                            if ( (v92 & 1) == 0 )
                              goto LABEL_255;
                          }
                          else if ( (*(_BYTE *)(a7 + 64) & 1) == 0 )
                          {
                            goto LABEL_255;
                          }
                          if ( (unsigned __int8)std::path::Path::is_symlink(v126, v130) )
                          {
                            uucore::features::fs::canonicalize(&v135, v126, v130, 2LL, 1LL);
                            if ( (_QWORD)v135 == 0x8000000000000000LL )
                            {
                              v150 = *((_QWORD *)&v135 + 1);
                              core::result::unwrap_failed(aCalledResultUn_0, 43LL, &v150, &off_181B70, &off_182378);
                            }
                            *(_OWORD *)v146 = v135;
                            v147 = v136;
                            if ( !*((_QWORD *)&v135 + 1) || (v136 & 0x8000000000000000LL) != 0LL )
                              goto LABEL_348;
                            v93 = std::sys::pal::unix::fs::link(*((void **)&v135 + 1), v136, v124, v77);
                            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v146);
                            goto LABEL_256;
                          }
LABEL_255:
                          v93 = std::sys::pal::unix::fs::link(v126, v130, v124, v77);
LABEL_256:
                          v149 = v93;
                          v94 = std::path::Path::file_name(v124, v77);
                          if ( v94 )
                          {
                            std::sys::os_str::bytes::Slice::to_str(dest, v94);
                            if ( *(_QWORD *)dest )
                              v96 = 0LL;
                            else
                              v96 = *(void **)&dest[8];
                            v95 = *(_QWORD *)&dest[16];
                          }
                          else
                          {
                            v96 = 0LL;
                          }
                          v97 = v96 == 0LL;
                          v98 = &unk_2EBEF;
                          if ( !v96 )
                            v96 = &unk_2EBEF;
                          v99 = 17LL;
                          if ( !v97 )
                            v99 = v95;
                          v162 = 0LL;
                          v163 = (size_t)v96;
                          v164 = v99;
                          v165 = 1;
                          v100 = std::path::Path::file_name(v126, v130);
                          if ( v100 )
                          {
                            std::sys::os_str::bytes::Slice::to_str(dest, v100);
                            if ( *(_QWORD *)dest )
                              v102 = 0LL;
                            else
                              v102 = *(void **)&dest[8];
                            v101 = *(_QWORD *)&dest[16];
                          }
                          else
                          {
                            v102 = 0LL;
                          }
                          v103 = v102 == 0LL;
                          if ( v102 )
                            v98 = v102;
                          v104 = 17LL;
                          if ( !v103 )
                            v104 = v101;
                          v166 = 0LL;
                          v167 = v98;
                          v168 = v104;
                          v169 = 1;
                          v158 = &v162;
                          v159 = <os_display::Quoted as core::fmt::Display>::fmt;
                          v160 = &v166;
                          v161 = <os_display::Quoted as core::fmt::Display>::fmt;
                          *(_QWORD *)dest = &off_182390;
                          *(_QWORD *)&dest[8] = 2LL;
                          *(_QWORD *)&dest[16] = &v158;
                          *(_QWORD *)&dest[24] = 2LL;
                          *(_QWORD *)&dest[32] = 0LL;
                          alloc::fmt::format::format_inner(v141, dest);
                          v80 = v141[0];
                          v81 = (void **)v141[1];
                          v83 = v149;
                          if ( v149 )
                          {
                            if ( v141[0] != (void *)0x8000000000000000LL )
                            {
                              v82 = v142;
                              v79 = 3LL;
                              goto LABEL_323;
                            }
                          }
                          else if ( v141[0] )
                          {
                            _rust_dealloc(v141[1], v141[0], 1LL);
                          }
LABEL_281:
                          if ( !is_symlink )
                          {
                            v105 = std::sys::pal::unix::fs::set_perm((void *)n[0], n[1]);
                            core::result::Result<T,E>::ok(v105);
                          }
                          v106 = *(_BYTE *)(a7 + 65);
                          if ( (v106 & 1) != 0 || !a11 )
                          {
                            if ( (v106 & 1) != 0 )
                            {
LABEL_286:
                              uucore::features::fs::canonicalize(&v144, v129[0], v129[1], 0LL, 1LL);
                              if ( (_QWORD)v144 == 0x8000000000000000LL )
                              {
LABEL_287:
                                core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v144);
                                goto LABEL_290;
                              }
                              v174 = v144;
                              v175 = v145;
                              if ( *((_QWORD *)&v144 + 1) && v145 >= 0 )
                              {
                                uu_cp::copy_attributes(
                                  (__int64)&v282,
                                  *((__int64 *)&v144 + 1),
                                  v145,
                                  (void *)n[0],
                                  n[1],
                                  (_BYTE *)(a7 + 48));
                                if ( v282 != 13 )
                                {
                                  *(_QWORD *)a1 = v282;
                                  v112 = v284;
                                  v113 = v285;
                                  *(_OWORD *)(a1 + 8) = v283;
                                  *(_OWORD *)(a1 + 24) = v112;
                                  *(_OWORD *)(a1 + 40) = v113;
                                  *(_QWORD *)(a1 + 56) = v286;
                                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v174);
                                  if ( (_QWORD)v144 == 0x8000000000000000LL )
                                    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v144);
                                  goto LABEL_324;
                                }
                                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v174);
                                if ( (_QWORD)v144 == 0x8000000000000000LL )
                                  goto LABEL_287;
LABEL_290:
                                v107 = *(_BYTE *)(a7 + 65);
                                if ( (v107 & 1) == 0 && a11 )
                                  v107 = *(_BYTE *)(a7 + 64) & 1;
                                uucore::features::fs::FileInformation::from_path(&v296, v129[0], v129[1], v107 & 1);
                                v108 = v297;
                                if ( v296 )
                                {
                                  *(_QWORD *)a1 = 2LL;
                                  *(_QWORD *)(a1 + 8) = v108;
                                  goto LABEL_324;
                                }
                                memcpy(v300, v298, sizeof(v300));
                                v299 = v297;
                                std::path::Path::to_path_buf(v292, n[0]);
                                hashbrown::map::HashMap<K,V,S,A>::insert(v279, a10, &v299, v292);
                                if ( v279[0] != 0x8000000000000000LL )
                                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v279);
                                if ( *v143 )
                                {
                                  std::sys::pal::unix::fs::stat(dest);
                                  if ( *(_QWORD *)dest == 2LL )
                                  {
                                    v111 = *(_QWORD *)&dest[8];
                                    *(_QWORD *)a1 = 2LL;
                                    *(_QWORD *)(a1 + 8) = v111;
                                    goto LABEL_324;
                                  }
                                  indicatif::progress_bar::ProgressBar::inc(v143, *(_QWORD *)&dest[80]);
                                }
                                *(_QWORD *)a1 = 13LL;
                                v114 = v132;
                                if ( !v132 )
                                  return a1;
LABEL_325:
                                _rust_dealloc(v47, v114, 1LL);
                                return a1;
                              }
LABEL_348:
                              core::panicking::panic_nounwind(
                                anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571,
                                162LL);
                            }
                          }
                          else if ( (*(_BYTE *)(a7 + 64) & 1) != 0 )
                          {
                            goto LABEL_286;
                          }
                          uu_cp::copy_attributes(
                            (__int64)&v287,
                            v129[0],
                            v129[1],
                            (void *)n[0],
                            n[1],
                            (_BYTE *)(a7 + 48));
                          if ( v287 != 13 )
                          {
                            *(_QWORD *)a1 = v287;
                            v109 = v289;
                            v110 = v290;
                            *(_OWORD *)(a1 + 8) = v288;
                            *(_OWORD *)(a1 + 24) = v109;
                            *(_OWORD *)(a1 + 40) = v110;
                            *(_QWORD *)(a1 + 56) = v291;
                            goto LABEL_324;
                          }
                          goto LABEL_290;
                        }
                      }
                    }
                    else
                    {
                      if ( !std::sys::pal::unix::fs::copy(v124, v77, v116, v115) )
                        goto LABEL_320;
                      v80 = v117;
                    }
                    v81 = v176;
                    v82 = <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v176);
                    goto LABEL_322;
                }
              }
              std::sys::pal::unix::fs::lstat(dest);
              goto LABEL_164;
            }
            v71 = (void *)n[0];
            v72 = n[1];
            v73 = *(void **)(v70 - 16);
            v74 = *(_QWORD *)(v70 - 8);
            core::slice::raw::from_raw_parts::precondition_check(v73, 1LL, 1LL, v74);
            v19 = std::sys::pal::unix::fs::link(v73, v74, v71, v72);
            if ( v19 )
            {
LABEL_196:
              *(_QWORD *)a1 = 2LL;
              *(_QWORD *)(a1 + 8) = v19;
              return a1;
            }
LABEL_200:
            *(_QWORD *)a1 = 13LL;
            return a1;
          }
          v38 = *(_BYTE *)(a7 + 65);
          if ( (v38 & 1) != 0 || !a11 )
          {
            if ( (v38 & 1) != 0 )
              goto LABEL_112;
          }
          else if ( (*(_BYTE *)(a7 + 64) & 1) != 0 )
          {
LABEL_112:
            v40 = 1;
            if ( (unsigned int)<[u8] as nix::NixPath>::with_nix_path(v30, v131, (struct stat *)dest)
              || (unsigned int)nix::errno::<impl nix::errno::consts::Errno>::result((unsigned int)v39) )
            {
              goto LABEL_128;
            }
            goto LABEL_127;
          }
          v40 = 1;
          if ( (unsigned int)<[u8] as nix::NixPath>::with_nix_path(v30, v131, (struct stat *)dest)
            || (unsigned int)nix::errno::<impl nix::errno::consts::Errno>::result((unsigned int)v39) )
          {
            goto LABEL_128;
          }
LABEL_127:
          memcpy(v204, dest, sizeof(v204));
          v40 = 0;
LABEL_128:
          if ( v40 )
          {
            *(_QWORD *)&src[8] = (v39 << 32) | 2;
            v42 = 1LL;
          }
          else
          {
            memcpy(&src[8], v204, 0x90uLL);
            v42 = 0LL;
          }
          *(_QWORD *)src = v42;
          v215 = 1LL;
          v216 = v30;
          v217 = v131;
          LOBYTE(v218) = 1;
          v178 = &v215;
          *(_QWORD *)&v179 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)dest = &off_1822F0;
          *(_QWORD *)&dest[8] = 1LL;
          *(_QWORD *)&dest[16] = &v178;
          *(_QWORD *)&dest[24] = 1LL;
          *(_QWORD *)&dest[32] = 0LL;
          alloc::fmt::format::format_inner(&v205, dest);
          v31 = v205;
          v30 = v206;
          if ( v40 )
          {
            v26 = v207;
            v32 = 3LL;
            v25 = *(_QWORD *)&src[8];
LABEL_97:
            if ( !(((_QWORD)v135 == 0x8000000000000000LL) | (unsigned __int8)v34) )
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v135);
            goto LABEL_119;
          }
          v25 = *(_QWORD *)&src[8];
          v43 = *(void ***)&src[24];
          v26 = *(_QWORD *)&src[16];
          v44 = *(__int64 (__fastcall **)())&src[32];
          v194 = *(__m256i *)&src[40];
          v195 = *(__m256i *)&src[72];
          v196 = *(_OWORD *)&src[104];
          v197 = *(_OWORD *)&src[120];
          v198 = *(_OWORD *)&src[136];
          if ( v205 )
          {
            v30 = *(void **)&src[24];
            _rust_dealloc(v206, v205, 1LL);
            v43 = (void **)v30;
          }
          v229 = (char *)v25;
          v230 = (__int64 (__fastcall *)())v26;
          v231 = v43;
          v232 = v44;
          v237 = v198;
          v236 = v197;
          v235 = v196;
          v234 = v195;
          v233 = v194;
          if ( *(_QWORD *)(a10 + 24) )
          {
            *(_OWORD *)&dest[32] = *(_OWORD *)(a10 + 32);
            memset(dest, 0, 32);
            memset(&dest[48], 0, 24);
            core::hash::sip::Hasher<S>::reset(dest);
            *(_QWORD *)&v204[4] = *(_QWORD *)&dest[64];
            v204[3] = *(_OWORD *)&dest[48];
            v204[2] = *(_OWORD *)&dest[32];
            v204[1] = *(_OWORD *)&dest[16];
            v204[0] = *(_OWORD *)dest;
            *(_QWORD *)dest = v25;
            <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(v204, dest, 8LL);
            *(_QWORD *)dest = v26;
            <core::hash::sip::Hasher<S> as core::hash::Hasher>::write(v204, dest, 8LL);
            v45 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(v204);
            if ( hashbrown::raw::RawTable<T,A>::find(a10, v45, &v229) )
            {
LABEL_95:
              v31 = (void *)std::sys::pal::unix::fs::unlink(v125, v122);
              if ( v31 )
              {
LABEL_96:
                v32 = 2LL;
                goto LABEL_97;
              }
              goto LABEL_139;
            }
          }
          goto LABEL_139;
        }
        *(_OWORD *)v141 = v135;
        v142 = v136;
        if ( !*((_QWORD *)&v135 + 1) || (v136 & 0x8000000000000000LL) != 0LL )
          goto LABEL_348;
        if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(
                                v24,
                                v131,
                                *((_QWORD *)&v135 + 1),
                                v136,
                                1LL) )
        {
          v199 = (char **)(&dword_0 + 1);
          v200 = (__int64)v125;
          v201 = (_QWORD *)v122;
          LOBYTE(v202) = 1;
          v208 = 1LL;
          v209 = (void *)v24;
          v210 = v131;
          LOBYTE(v211) = 1;
          v170 = &v199;
          v171 = <os_display::Quoted as core::fmt::Display>::fmt;
          v172 = &v208;
          v173 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)dest = &off_182290;
          *(_QWORD *)&dest[8] = 3LL;
          *(_QWORD *)&dest[16] = &v170;
          *(_QWORD *)&dest[24] = 2LL;
          *(_QWORD *)&dest[32] = 0LL;
          alloc::fmt::format::format_inner(&v155, dest);
          v31 = v155;
          v30 = v156;
          v32 = 4LL;
          v26 = v157;
LABEL_118:
          LODWORD(v130) = 0;
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v141);
          goto LABEL_119;
        }
        v36 = std::path::Path::is_symlink(v125, v122);
        v25 = (unsigned __int64)v141[1];
        if ( !v141[1] )
          goto LABEL_348;
        v26 = v142;
        if ( (v142 & 0x8000000000000000LL) != 0LL )
          goto LABEL_348;
        v37 = v36;
        if ( v36 )
        {
          v31 = (void *)std::sys::pal::unix::fs::rename(v125, v122, v141[1], v142);
          if ( !v31 )
            goto LABEL_120;
        }
        else
        {
          if ( !std::sys::pal::unix::fs::copy(v125, v122, v141[1], v142) )
          {
LABEL_120:
            std::sys::os_str::bytes::Slice::to_owned(dest, v25, v26);
            v244 = *(_OWORD *)&dest[8];
            v243 = *(_QWORD *)dest;
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v243);
            LODWORD(v130) = 0;
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v141);
            if ( v37 )
              goto LABEL_141;
            v34 = 1;
            LODWORD(v33) = 0;
            goto LABEL_91;
          }
          v31 = v41;
        }
        v32 = 2LL;
        goto LABEL_118;
    }
  }
  v31 = v181;
  v30 = v182;
  v26 = v183;
  v25 = v184;
  v238 = v185;
  v239 = v186;
LABEL_119:
  *(_QWORD *)a1 = v32;
  *(_QWORD *)(a1 + 8) = v31;
  *(_QWORD *)(a1 + 16) = v30;
  *(_QWORD *)(a1 + 24) = v26;
  *(_QWORD *)(a1 + 32) = v25;
  *(_OWORD *)(a1 + 40) = v238;
  *(_QWORD *)(a1 + 56) = v239;
  return a1;
}
