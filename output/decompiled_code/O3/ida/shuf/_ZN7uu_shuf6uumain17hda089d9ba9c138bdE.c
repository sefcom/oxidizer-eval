__int64 __fastcall uu_shuf::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r12
  __int64 v5; // r15
  const char *v6; // rsi
  void (__fastcall __noreturn *v7)(); // rax
  const char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // r15
  const char *v17; // rsi
  void (__fastcall __noreturn *v18)(); // rax
  const char *v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rax
  _OWORD *v25; // rax
  __int128 v26; // xmm0
  char v27; // r13
  char v28; // al
  int v29; // ecx
  __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // rax
  char flag; // bp
  bool v34; // zf
  char v35; // al
  __int64 (__fastcall **v36)(); // rdx
  bool v37; // cl
  __int64 v38; // r13
  bool v39; // r14
  _OWORD *v40; // rax
  __int64 (__fastcall **v41)(); // rdx
  __int64 v42; // r14
  __int64 *v43; // rax
  __int64 *v44; // rdx
  __int64 (__fastcall **v45)(); // rcx
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  _OWORD *v50; // rax
  __int128 v51; // xmm0
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rdx
  unsigned int v55; // ebx
  __int128 v56; // kr30_16
  __int64 v57; // rsi
  int v58; // ebp
  __int64 *v59; // rax
  __int64 *v60; // rbx
  __int64 v61; // rbx
  char v62; // r13
  __int64 v63; // rax
  __int64 (__fastcall **v64)(); // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  char v67; // bl
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 (__fastcall **v70)(); // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rax
  _OWORD *v75; // rax
  __int128 v76; // xmm0
  char v78; // [rsp+0h] [rbp-598h]
  __int64 v79; // [rsp+8h] [rbp-590h]
  __int64 v80; // [rsp+8h] [rbp-590h]
  __int128 v81; // [rsp+10h] [rbp-588h] BYREF
  __m256i v82; // [rsp+20h] [rbp-578h] BYREF
  __int128 v83; // [rsp+40h] [rbp-558h]
  _BYTE fd[48]; // [rsp+50h] [rbp-548h] BYREF
  __int128 v85; // [rsp+80h] [rbp-518h]
  _BYTE v86[48]; // [rsp+90h] [rbp-508h] BYREF
  __int128 v87; // [rsp+C0h] [rbp-4D8h]
  __int128 v88; // [rsp+D0h] [rbp-4C8h]
  __int64 v89; // [rsp+E0h] [rbp-4B8h]
  int v90; // [rsp+F0h] [rbp-4A8h] BYREF
  int v91; // [rsp+F4h] [rbp-4A4h]
  __int64 v92; // [rsp+F8h] [rbp-4A0h] BYREF
  __int64 v93; // [rsp+100h] [rbp-498h]
  __int128 v94; // [rsp+108h] [rbp-490h] BYREF
  __int64 v95; // [rsp+118h] [rbp-480h]
  __int64 v96; // [rsp+120h] [rbp-478h] BYREF
  __int64 (__fastcall **v97)(); // [rsp+128h] [rbp-470h]
  __int128 v98; // [rsp+130h] [rbp-468h] BYREF
  __int64 v99; // [rsp+140h] [rbp-458h]
  _QWORD v100[2]; // [rsp+168h] [rbp-430h] BYREF
  __m256i v101; // [rsp+178h] [rbp-420h] BYREF
  __int128 v102; // [rsp+198h] [rbp-400h]
  __int64 v103; // [rsp+1A8h] [rbp-3F0h]
  __int128 v104; // [rsp+1B0h] [rbp-3E8h] BYREF
  __int64 v105; // [rsp+1C0h] [rbp-3D8h]
  __int64 v106; // [rsp+1C8h] [rbp-3D0h]
  __int128 v107; // [rsp+1D0h] [rbp-3C8h] BYREF
  __m256i v108; // [rsp+1E0h] [rbp-3B8h]
  __int128 v109; // [rsp+200h] [rbp-398h]
  __int128 v110; // [rsp+210h] [rbp-388h]
  __int64 v111; // [rsp+220h] [rbp-378h]
  void (__fastcall __noreturn *v112)(); // [rsp+4A0h] [rbp-F8h] BYREF
  __int64 (__fastcall *v113)(); // [rsp+4A8h] [rbp-F0h]
  __int128 v114; // [rsp+4B0h] [rbp-E8h]
  __int128 v115; // [rsp+4C0h] [rbp-D8h]
  const char *v116; // [rsp+4D0h] [rbp-C8h]
  __int64 v117; // [rsp+4D8h] [rbp-C0h]
  __int128 v118; // [rsp+4E0h] [rbp-B8h] BYREF
  __int64 v119; // [rsp+4F0h] [rbp-A8h]
  __int128 v120; // [rsp+4F8h] [rbp-A0h] BYREF
  __int64 v121; // [rsp+508h] [rbp-90h]
  _QWORD v122[2]; // [rsp+510h] [rbp-88h] BYREF
  __int128 v123; // [rsp+520h] [rbp-78h]
  __int128 v124; // [rsp+530h] [rbp-68h]
  const char *v125; // [rsp+540h] [rbp-58h]
  __int64 v126; // [rsp+548h] [rbp-50h]
  _BYTE v127[72]; // [rsp+550h] [rbp-48h] BYREF

  uu_shuf::uu_app(&v107);
  clap_builder::builder::command::Command::try_get_matches_from(v86, &v107, a1, a2);
  if ( *(_QWORD *)v86 != 0x8000000000000000LL )
  {
    v103 = v87;
    v102 = *(_OWORD *)&v86[32];
    v101 = *(__m256i *)v86;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            &v101,
                            anon_6b32b05e1d077617d275c65ea4c6ad52_6_llvm_10609332461339697138,
                            *(&uu_shuf::options::ECHO + 1)) )
    {
      v5 = (__int64)*(&uu_shuf::options::FILE_OR_ARGS + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
        &v107,
        &v101,
        anon_6b32b05e1d077617d275c65ea4c6ad52_13_llvm_10609332461339697138,
        v5);
      v6 = anon_6b32b05e1d077617d275c65ea4c6ad52_13_llvm_10609332461339697138;
      clap_builder::parser::error::MatchesError::unwrap(
        v86,
        anon_6b32b05e1d077617d275c65ea4c6ad52_13_llvm_10609332461339697138,
        v5,
        &v107);
      v7 = *(void (__fastcall __noreturn **)())v86;
      if ( *(_QWORD *)v86 )
      {
        v8 = *(const char **)&v86[8];
        v9 = *(_OWORD *)&v86[16];
        v10 = *(_OWORD *)&v86[32];
        v11 = *((_QWORD *)&v87 + 1);
        v6 = (const char *)v87;
      }
      else
      {
        v10 = 0LL;
        v9 = (unsigned __int64)"&";
        v8 = "&";
        v7 = core::ops::function::FnOnce::call_once;
        v11 = 0LL;
      }
      v122[0] = v7;
      v122[1] = v8;
      v123 = v9;
      v124 = v10;
      v125 = v6;
      v126 = v11;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v107, v122);
      v95 = v108.m256i_i64[0];
      v94 = v107;
      v93 = 1LL;
LABEL_13:
      v16 = (__int64)*(&uu_shuf::options::HEAD_COUNT + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
        &v107,
        &v101,
        anon_6b32b05e1d077617d275c65ea4c6ad52_8_llvm_10609332461339697138,
        v16);
      v17 = anon_6b32b05e1d077617d275c65ea4c6ad52_8_llvm_10609332461339697138;
      clap_builder::parser::error::MatchesError::unwrap(
        v86,
        anon_6b32b05e1d077617d275c65ea4c6ad52_8_llvm_10609332461339697138,
        v16,
        &v107);
      v18 = *(void (__fastcall __noreturn **)())v86;
      if ( *(_QWORD *)v86 )
      {
        v19 = *(const char **)&v86[8];
        v20 = *(_OWORD *)&v86[16];
        v21 = *(_OWORD *)&v86[32];
        v22 = *((_QWORD *)&v87 + 1);
        v17 = (const char *)v87;
      }
      else
      {
        v21 = 0LL;
        v20 = (unsigned __int64)"&";
        v19 = "&";
        v18 = core::ops::function::FnOnce::call_once;
        v22 = 0LL;
      }
      v112 = v18;
      v113 = (__int64 (__fastcall *)())v19;
      v114 = v20;
      v115 = v21;
      v116 = v17;
      v117 = v22;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v127, &v112);
      uu_shuf::parse_head_count(&v98, v127);
      if ( (_QWORD)v98 != 0x8000000000000000LL )
      {
        v108.m256i_i64[0] = v99;
        v107 = v98;
        v108.m256i_i32[2] = 1;
        v25 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v25 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v2 = (__int64)v25;
        v26 = v107;
        v25[1] = *(_OWORD *)v108.m256i_i8;
        *v25 = v26;
        v4 = &off_EF6E0;
        v27 = 1;
        v28 = 0;
        v29 = v93;
        if ( !v93 )
          goto LABEL_21;
LABEL_71:
        if ( v29 == 1 && !v28 )
        {
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v94);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v94);
        }
        goto LABEL_74;
      }
      v4 = (__int64 (__fastcall **)())*((_QWORD *)&v98 + 1);
      v23 = (__int64)*(&uu_shuf::options::OUTPUT + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        &v107,
        &v101,
        anon_6b32b05e1d077617d275c65ea4c6ad52_9_llvm_10609332461339697138,
        v23);
      v24 = clap_builder::parser::error::MatchesError::unwrap(
              anon_6b32b05e1d077617d275c65ea4c6ad52_9_llvm_10609332461339697138,
              v23,
              &v107);
      if ( v24 )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v107, v24);
        *(_QWORD *)&fd[16] = v108.m256i_i64[0];
        *(_OWORD *)fd = v107;
      }
      else
      {
        *(_QWORD *)fd = 0x8000000000000000LL;
      }
      v31 = (__int64)*(&uu_shuf::options::RANDOM_SOURCE + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        &v107,
        &v101,
        anon_6b32b05e1d077617d275c65ea4c6ad52_10_llvm_10609332461339697138,
        v31);
      v32 = clap_builder::parser::error::MatchesError::unwrap(
              anon_6b32b05e1d077617d275c65ea4c6ad52_10_llvm_10609332461339697138,
              v31,
              &v107);
      if ( v32 )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v107, v32);
        *(_QWORD *)&v86[16] = v108.m256i_i64[0];
        *(_OWORD *)v86 = v107;
      }
      else
      {
        *(_QWORD *)v86 = 0x8000000000000000LL;
      }
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               &v101,
               anon_6b32b05e1d077617d275c65ea4c6ad52_11_llvm_10609332461339697138,
               *(&uu_shuf::options::REPEAT + 1));
      v34 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               &v101,
                               anon_6b32b05e1d077617d275c65ea4c6ad52_12_llvm_10609332461339697138,
                               *(&uu_shuf::options::ZERO_TERMINATED + 1)) == 0;
      v35 = 10;
      if ( !v34 )
        v35 = 0;
      *(_QWORD *)&v83 = v4;
      v81 = *(_OWORD *)fd;
      v82.m256i_i64[0] = *(_QWORD *)&fd[16];
      *(_OWORD *)&v82.m256i_u64[1] = *(_OWORD *)v86;
      v82.m256i_i64[3] = *(_QWORD *)&v86[16];
      BYTE8(v83) = flag;
      BYTE9(v83) = v35;
      if ( v4 )
      {
        if ( v93 )
        {
          if ( (_DWORD)v93 == 1 )
          {
            *(_QWORD *)&fd[16] = v95;
            *(_OWORD *)fd = v94;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(
              v86,
              *((_QWORD *)&v94 + 1),
              *((_QWORD *)&v94 + 1) + 24 * v95);
            uu_shuf::find_seps(v86, BYTE9(v83));
            v109 = v83;
            v108 = v82;
            v107 = v81;
            v2 = uu_shuf::shuf_exec(v86, &v107);
            if ( v2 )
            {
              v4 = v36;
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v86);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v86);
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(fd);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(fd);
              v28 = 1;
              v27 = 1;
              goto LABEL_129;
            }
            core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v86);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(fd);
LABEL_136:
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v101);
            return (unsigned int)uucore::mods::error::get_exit_code();
          }
          v105 = v95;
          v104 = v94;
          v85 = v83;
          *(__m256i *)&fd[16] = v82;
          *(_OWORD *)fd = v81;
          if ( (_QWORD)v81 == 0x8000000000000000LL )
          {
            v42 = std::io::stdio::stdout(&v101);
            v43 = (__int64 *)_rust_alloc(8LL, 8LL);
            if ( !v43 )
              alloc::alloc::handle_alloc_error(8LL, 8LL);
            v44 = v43;
            *v43 = v42;
            v45 = (__int64 (__fastcall **)())&unk_EF818;
          }
          else
          {
            v108.m256i_i64[0] = v82.m256i_i64[0];
            v107 = v81;
            std::fs::File::create(v100, *((_QWORD *)&v81 + 1));
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
              &v96,
              v100,
              &v107);
            v2 = v96;
            if ( v96 )
            {
              v4 = v97;
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v107);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v107);
              v78 = 1;
              v52 = *(_QWORD *)&fd[24];
              goto LABEL_125;
            }
            v58 = (int)v97;
            v59 = (__int64 *)_rust_alloc(4LL, 4LL);
            if ( !v59 )
              alloc::alloc::handle_alloc_error(4LL, 4LL);
            v60 = v59;
            *(_DWORD *)v59 = v58;
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v107);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v107);
            v45 = &off_EF868;
            v44 = v60;
          }
          std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v98, 0x2000LL, v44, v45);
          v52 = *(_QWORD *)&fd[24];
          if ( *(_QWORD *)&fd[24] == 0x8000000000000000LL )
          {
            v92 = rand::rngs::thread::thread_rng(&v98);
            v90 = 1;
            v78 = 1;
          }
          else
          {
            v108.m256i_i64[0] = *(_QWORD *)&fd[40];
            v107 = *(_OWORD *)&fd[24];
            std::fs::File::open(v100, *(_QWORD *)&fd[32]);
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
              &v96,
              v100,
              &v107);
            v2 = v96;
            if ( v96 )
            {
              v4 = v97;
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v107);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v107);
              v78 = 0;
LABEL_124:
              core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v98);
LABEL_125:
              if ( v52 != 0x8000000000000000LL && v78 )
              {
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&fd[24]);
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&fd[24]);
              }
              v27 = 1;
              v28 = 0;
LABEL_129:
              v29 = v93;
              if ( !v93 )
              {
LABEL_21:
                if ( v27 )
                {
                  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v94);
                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v94);
                }
                goto LABEL_74;
              }
              goto LABEL_71;
            }
            v91 = (int)v97;
            v90 = 0;
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v107);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v107);
            v78 = 0;
          }
          if ( BYTE8(v85) )
          {
            if ( (_BYTE)v105 || (unsigned __int64)v104 > *((_QWORD *)&v104 + 1) )
            {
              alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v107, 18LL, 0LL);
              v73 = *((_QWORD *)&v107 + 1);
              if ( (_QWORD)v107 )
                alloc::raw_vec::handle_error(*((_QWORD *)&v107 + 1), v108.m256i_i64[0]);
              v74 = v108.m256i_i64[0];
              *(_OWORD *)v108.m256i_i64[0] = unk_124AA;
              *(_WORD *)(v74 + 16) = 29793;
              v108.m256i_i32[2] = 1;
              *(_QWORD *)&v107 = v73;
              *((_QWORD *)&v107 + 1) = v74;
              v108.m256i_i64[0] = 18LL;
              v75 = (_OWORD *)_rust_alloc(32LL, 8LL);
              if ( !v75 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v2 = (__int64)v75;
              v76 = v107;
              v75[1] = *(_OWORD *)v108.m256i_i8;
              *v75 = v76;
              v4 = &off_EF6E0;
LABEL_121:
              if ( v90 )
                <alloc::rc::Rc<T,A> as core::ops::drop::Drop>::drop(&v92);
              else
                close(v91);
              goto LABEL_124;
            }
            v79 = v52;
            v61 = v85;
            if ( (_QWORD)v85 )
            {
              v62 = BYTE9(v85);
              while ( 1 )
              {
                *(_QWORD *)&v107 = <core::ops::range::RangeInclusive<usize> as uu_shuf::Shufable>::choose(&v104, &v90);
                v63 = <usize as uu_shuf::Writable>::write_all_to(&v107, &v98);
                v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v63);
                if ( v2 )
                  break;
                LOBYTE(v100[0]) = v62;
                v65 = v99;
                if ( (unsigned __int64)(v98 - v99) <= 1 )
                {
                  v66 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v98, v100, 1LL);
                }
                else
                {
                  *(_BYTE *)(*((_QWORD *)&v98 + 1) + v99) = v62;
                  v99 = v65 + 1;
                  v66 = 0LL;
                }
                v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v66);
                if ( v2 )
                  break;
                if ( !--v61 )
                  goto LABEL_132;
              }
              v4 = v64;
              v52 = v79;
              goto LABEL_121;
            }
          }
          else
          {
            <core::ops::range::RangeInclusive<usize> as uu_shuf::Shufable>::partial_shuffle(v86, &v104, &v90, v85);
            v80 = v52;
            v111 = v89;
            v110 = v88;
            v109 = v87;
            v108 = *(__m256i *)&v86[16];
            v107 = *(_OWORD *)v86;
            v67 = BYTE9(v85);
            while ( <uu_shuf::NonrepeatingIterator as core::iter::traits::iterator::Iterator>::next(&v107) )
            {
              v100[0] = v68;
              v69 = <usize as uu_shuf::Writable>::write_all_to(v100, &v98);
              v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v69);
              if ( !v2 )
              {
                LOBYTE(v96) = v67;
                v71 = v99;
                if ( (unsigned __int64)(v98 - v99) <= 1 )
                {
                  v72 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v98, &v96, 1LL);
                }
                else
                {
                  *(_BYTE *)(*((_QWORD *)&v98 + 1) + v99) = v67;
                  v99 = v71 + 1;
                  v72 = 0LL;
                }
                v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v72);
                if ( !v2 )
                  continue;
              }
              v4 = v70;
              v52 = v80;
              if ( (_QWORD)v107 )
              {
                <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v107);
              }
              else
              {
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop((char *)&v107 + 8);
                <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v107 + 8);
              }
              goto LABEL_121;
            }
            if ( (_QWORD)v107 )
            {
              <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v107);
            }
            else
            {
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop((char *)&v107 + 8);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v107 + 8);
            }
          }
LABEL_132:
          if ( v90 )
            <alloc::rc::Rc<T,A> as core::ops::drop::Drop>::drop(&v92);
          else
            close(v91);
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v98);
          goto LABEL_136;
        }
        v99 = v95;
        v98 = v94;
        uu_shuf::read_input_file(&v107, *((_QWORD *)&v94 + 1));
        v2 = *((_QWORD *)&v107 + 1);
        v38 = v107;
        v4 = (__int64 (__fastcall **)())v108.m256i_i64[0];
        v39 = (_QWORD)v107 != 0x8000000000000000LL;
        if ( (_QWORD)v107 != 0x8000000000000000LL )
        {
          *(_OWORD *)fd = v107;
          *(_QWORD *)&fd[16] = v108.m256i_i64[0];
          v40 = (_OWORD *)_rust_alloc(16LL, 8LL);
          if ( !v40 )
            alloc::alloc::handle_alloc_error(8LL, 16LL);
          *v40 = *(_OWORD *)&fd[8];
          alloc::slice::hack::into_vec(v86, v40, 1LL);
          uu_shuf::find_seps(v86, BYTE9(v83));
          v109 = v83;
          v108 = v82;
          v107 = v81;
          v2 = uu_shuf::shuf_exec(v86, &v107);
          if ( !v2 )
          {
            core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v86);
            core::ptr::drop_in_place<alloc::string::String>(fd);
            core::ptr::drop_in_place<alloc::string::String>(&v98);
            goto LABEL_136;
          }
          v4 = v41;
          core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(v86);
          core::ptr::drop_in_place<alloc::string::String>(fd);
        }
        v106 = v38;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v98);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v98);
        v27 = 0;
        if ( v106 == 0x8000000000000000LL )
        {
          v37 = v39;
          if ( (_QWORD)v81 != 0x8000000000000000LL )
          {
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v81);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v81);
            v28 = 0;
            v27 = 0;
LABEL_68:
            if ( v82.m256i_i64[1] != 0x8000000000000000LL )
            {
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v82.m256i_u64[1]);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v82.m256i_u64[1]);
              v28 = 0;
            }
LABEL_70:
            v29 = v93;
            if ( !v93 )
              goto LABEL_21;
            goto LABEL_71;
          }
        }
        else
        {
          v37 = v39;
        }
      }
      else if ( (_QWORD)v81 == 0x8000000000000000LL )
      {
        v27 = 1;
        v37 = 0;
        v2 = 0LL;
      }
      else
      {
        v108.m256i_i64[0] = v82.m256i_i64[0];
        v107 = v81;
        std::fs::File::create(v86, *((_QWORD *)&v81 + 1));
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          fd,
          v86,
          &v107);
        v2 = *(_QWORD *)fd;
        if ( *(_QWORD *)fd )
        {
          v4 = *(__int64 (__fastcall ***)())&fd[8];
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v107);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v107);
          v27 = 1;
          v37 = 0;
        }
        else
        {
          close(*(int *)&fd[8]);
          core::ptr::drop_in_place<alloc::string::String>(&v107);
          v27 = 1;
          v37 = 0;
          v2 = 0LL;
        }
      }
      v28 = 0;
      if ( v37 )
        goto LABEL_70;
      goto LABEL_68;
    }
    v12 = (__int64)*(&uu_shuf::options::INPUT_RANGE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &v107,
      &v101,
      anon_6b32b05e1d077617d275c65ea4c6ad52_7_llvm_10609332461339697138,
      v12);
    v13 = clap_builder::parser::error::MatchesError::unwrap(
            anon_6b32b05e1d077617d275c65ea4c6ad52_7_llvm_10609332461339697138,
            v12,
            &v107);
    if ( v13 )
    {
      uu_shuf::parse_range(v86, *(_QWORD *)(v13 + 8), *(_QWORD *)(v13 + 16));
      if ( !*(_QWORD *)v86 )
      {
        v95 = *(_QWORD *)&v86[24];
        v94 = *(_OWORD *)&v86[8];
        v93 = 2LL;
        goto LABEL_13;
      }
      v108.m256i_i64[0] = *(_QWORD *)&v86[24];
      v107 = *(_OWORD *)&v86[8];
      v108.m256i_i32[2] = 1;
      v14 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v14 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v2 = (__int64)v14;
      v15 = v107;
      v14[1] = *(_OWORD *)v108.m256i_i8;
      *v14 = v15;
      v4 = &off_EF6E0;
    }
    else
    {
      v30 = (__int64)*(&uu_shuf::options::FILE_OR_ARGS + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
        &v107,
        &v101,
        anon_6b32b05e1d077617d275c65ea4c6ad52_13_llvm_10609332461339697138,
        v30);
      clap_builder::parser::error::MatchesError::unwrap(
        v86,
        anon_6b32b05e1d077617d275c65ea4c6ad52_13_llvm_10609332461339697138,
        v30,
        &v107);
      if ( *(_QWORD *)v86 )
      {
        v85 = v87;
        *(_OWORD *)&fd[32] = *(_OWORD *)&v86[32];
        *(__m256i *)fd = *(__m256i *)v86;
      }
      else
      {
        *(_QWORD *)fd = core::ops::function::FnOnce::call_once;
        *(_QWORD *)&fd[8] = "&";
        *(_QWORD *)&fd[16] = "&";
        *(_QWORD *)&fd[24] = 0LL;
        *(_QWORD *)&fd[40] = 0LL;
        *((_QWORD *)&v85 + 1) = 0LL;
      }
      v46 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(fd);
      if ( v46 )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v107, v46);
        *(_QWORD *)&v86[16] = v108.m256i_i64[0];
        *(_OWORD *)v86 = v107;
      }
      else
      {
        *(_QWORD *)v86 = 0x8000000000000000LL;
      }
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v107, 1LL, 0LL);
      v47 = *((_QWORD *)&v107 + 1);
      if ( (_QWORD)v107 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v107 + 1), v108.m256i_i64[0]);
      v48 = v108.m256i_i64[0];
      *(_BYTE *)v108.m256i_i64[0] = 45;
      *(_QWORD *)&v107 = v47;
      *((_QWORD *)&v107 + 1) = v48;
      v108.m256i_i64[0] = 1LL;
      if ( *(_QWORD *)v86 == 0x8000000000000000LL )
      {
        v82.m256i_i64[0] = v108.m256i_i64[0];
        v81 = v107;
      }
      else
      {
        v82.m256i_i64[0] = *(_QWORD *)&v86[16];
        v81 = *(_OWORD *)v86;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v107);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v107);
      }
      v49 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(fd);
      if ( !v49 )
      {
        v95 = v82.m256i_i64[0];
        v94 = v81;
        v93 = 0LL;
        goto LABEL_13;
      }
      *(_QWORD *)&v98 = v49;
      *(_QWORD *)v86 = &v98;
      *(_QWORD *)&v86[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v107 = &off_EF750;
      *((_QWORD *)&v107 + 1) = 2LL;
      v108.m256i_i64[0] = (__int64)v86;
      *(_OWORD *)&v108.m256i_u64[1] = 1uLL;
      alloc::fmt::format::format_inner(&v120, &v107);
      v108.m256i_i32[2] = 1;
      v107 = v120;
      v108.m256i_i64[0] = v121;
      v50 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v50 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v2 = (__int64)v50;
      v51 = v107;
      v50[1] = *(_OWORD *)v108.m256i_i8;
      *v50 = v51;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v81);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v81);
      v4 = &off_EF7A8;
    }
LABEL_74:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v101);
    if ( v2 )
      goto LABEL_75;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v86[8]);
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_75:
  *(_QWORD *)&v81 = v2;
  *((_QWORD *)&v81 + 1) = v4;
  *(_QWORD *)v86 = &v81;
  *(_QWORD *)&v86[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v107 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v107 + 1) = 1LL;
  v108.m256i_i64[0] = (__int64)v86;
  *(_OWORD *)&v108.m256i_u64[1] = 1uLL;
  alloc::fmt::format::format_inner(&v118, &v107);
  *(_OWORD *)v86 = v118;
  *(_QWORD *)&v86[16] = v119;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v118 + 1), v119, 1LL, 0LL) )
  {
    *(_QWORD *)fd = uucore::util_name();
    *(_QWORD *)&fd[8] = v53;
    v112 = (void (__fastcall __noreturn *)())fd;
    v113 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v107 = &unk_EF660;
    *((_QWORD *)&v107 + 1) = 2LL;
    v108.m256i_i64[0] = (__int64)&v112;
    *(_OWORD *)&v108.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&v107);
    *(_QWORD *)fd = v86;
    *(_QWORD *)&fd[8] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v107 = &unk_EF680;
    *((_QWORD *)&v107 + 1) = 2LL;
    v108.m256i_i64[0] = (__int64)fd;
    *(_OWORD *)&v108.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&v107);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v81 + 1) + 104LL))(v81) )
  {
    *(_QWORD *)fd = uucore::execution_phrase();
    *(_QWORD *)&fd[8] = v54;
    v112 = (void (__fastcall __noreturn *)())fd;
    v113 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v107 = &off_EF6A0;
    *((_QWORD *)&v107 + 1) = 2LL;
    v108.m256i_i64[0] = (__int64)&v112;
    *(_OWORD *)&v108.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&v107);
  }
  v55 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v81 + 1) + 96LL))(v81);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v86);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v86);
  v56 = v81;
  if ( **((_QWORD **)&v81 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v81 + 1))(v81);
  v57 = *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8LL);
  if ( v57 )
    _rust_dealloc(v56, v57, *(_QWORD *)(*((_QWORD *)&v56 + 1) + 16LL));
  return v55;
}
