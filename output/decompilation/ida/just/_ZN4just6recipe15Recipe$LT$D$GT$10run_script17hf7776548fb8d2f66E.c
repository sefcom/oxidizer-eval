__int64 __fastcall just::recipe::Recipe<D>::run_script(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // r15
  __int64 v8; // r13
  char v9; // al
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 i; // rbx
  char v14; // cl
  int v15; // edx
  _OWORD *v16; // rsi
  int v17; // edx
  __m128 v18; // xmm0
  char v19; // al
  char v20; // cl
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 *v23; // r14
  __int64 (__fastcall **v24)(); // rax
  __int64 v25; // rsi
  __int64 (__fastcall **v26)(); // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdx
  char v37; // cl
  _BYTE *v38; // rdi
  int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // rcx
  __m128 v42; // xmm0
  char v43; // dl
  char v44; // si
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int64 v47; // rdx
  __int128 v48; // xmm0
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  __int64 v53; // rbp
  __int64 v54; // rax
  char v55; // al
  __int64 v56; // rbx
  __int64 v57; // r15
  __int64 v58; // r13
  void *v59; // rdx
  void *v60; // r12
  __int64 v61; // rcx
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  __int64 v71; // rdx
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm2
  __int128 v75; // xmm3
  int v76; // ebx
  __int64 v78; // [rsp+20h] [rbp-388h]
  __int64 v79; // [rsp+20h] [rbp-388h]
  __int64 v81[2]; // [rsp+30h] [rbp-378h] BYREF
  _BYTE v82[23]; // [rsp+40h] [rbp-368h]
  _BYTE v83[48]; // [rsp+60h] [rbp-348h] BYREF
  __int128 v84; // [rsp+90h] [rbp-318h]
  __int128 v85; // [rsp+A0h] [rbp-308h]
  __int128 v86; // [rsp+B0h] [rbp-2F8h]
  __int64 v87; // [rsp+C0h] [rbp-2E8h]
  __int64 v88; // [rsp+C8h] [rbp-2E0h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-2D8h]
  __int64 v90; // [rsp+D8h] [rbp-2D0h]
  _OWORD dest[14]; // [rsp+E0h] [rbp-2C8h] BYREF
  _QWORD v92[3]; // [rsp+1C0h] [rbp-1E8h] BYREF
  __int64 *v93; // [rsp+1D8h] [rbp-1D0h]
  __int64 v94; // [rsp+1E0h] [rbp-1C8h]
  __int64 v95; // [rsp+1E8h] [rbp-1C0h]
  _OWORD src[14]; // [rsp+1F0h] [rbp-1B8h] BYREF
  _OWORD v97[2]; // [rsp+2D0h] [rbp-D8h] BYREF
  __int128 v98; // [rsp+2F0h] [rbp-B8h] BYREF
  __int64 v99; // [rsp+300h] [rbp-A8h]
  __int64 *v100; // [rsp+308h] [rbp-A0h]
  __int64 v101; // [rsp+310h] [rbp-98h]
  __int64 v102; // [rsp+318h] [rbp-90h]
  __int64 v103; // [rsp+320h] [rbp-88h]
  char v104[8]; // [rsp+328h] [rbp-80h] BYREF
  __int64 v105; // [rsp+330h] [rbp-78h]
  __int64 v106; // [rsp+338h] [rbp-70h]
  __int128 v107; // [rsp+340h] [rbp-68h] BYREF
  __int64 v108; // [rsp+350h] [rbp-58h]
  _OWORD v109[5]; // [rsp+358h] [rbp-50h] BYREF

  v102 = a6;
  v101 = a5;
  v103 = a4;
  v88 = 0LL;
  v89 = 8LL;
  v90 = 0LL;
  v78 = *(_QWORD *)(a2 + 8);
  v94 = a2;
  v95 = *(_QWORD *)(a2 + 16);
  if ( v95 )
  {
    v7 = 32 * v95;
    v8 = 0LL;
    do
    {
      just::evaluator::Evaluator::evaluate_line(
        (__int64)dest,
        a7,
        *(_QWORD *)(v78 + v8 + 8),
        *(_QWORD *)(v78 + v8 + 16),
        0);
      v9 = dest[0];
      if ( LOBYTE(dest[0]) != 56 )
        goto LABEL_41;
      *(_QWORD *)((char *)&src[1] + 7) = *((_QWORD *)&dest[1] + 1);
      *(_OWORD *)((char *)src + 7) = *(_OWORD *)((char *)dest + 8);
      v107 = *(_OWORD *)((char *)dest + 8);
      v108 = *((_QWORD *)&dest[1] + 1);
      alloc::vec::Vec<T,A>::push(&v88, &v107, &off_430C40);
      v8 += 32LL;
    }
    while ( v7 != v8 );
  }
  v10 = *a3;
  if ( *(_BYTE *)(*a3 + 423) && (*(_BYTE *)(v10 + 408) || *(_BYTE *)(v94 + 253) == 1) && v90 )
  {
    v11 = v89;
    v12 = 24 * v90;
    for ( i = 0LL; v12 != i; i += 24LL )
    {
      v14 = *(_BYTE *)(v10 + 405);
      v15 = *(_DWORD *)(v10 + 384);
      LOBYTE(dest[0]) = *(_BYTE *)(v10 + 388);
      BYTE1(dest[0]) = 1;
      *(_DWORD *)((char *)dest + 5) = 0;
      *(_DWORD *)((char *)dest + 2) = 0;
      *(_DWORD *)((char *)dest + 9) = v15;
      *(_DWORD *)((char *)dest + 13) = 10;
      BYTE1(dest[1]) = v14;
      v16 = dest;
      just::color::Color::stderr((__int64)v83, (__int64)dest);
      if ( !v83[17] )
        goto LABEL_13;
      v18 = 0LL;
      v19 = 10;
      if ( v83[17] != 1 )
      {
        v20 = 10;
        goto LABEL_15;
      }
      v20 = 10;
      if ( v83[0] == 1 )
      {
LABEL_13:
        v18 = (__m128)*(unsigned __int64 *)&v83[1];
        v19 = v83[9];
        v20 = v83[13];
        v17 = (v83[12] << 16) | *(unsigned __int16 *)&v83[10];
        LODWORD(v16) = (v83[16] << 16) | *(unsigned __int16 *)&v83[14];
      }
LABEL_15:
      v21 = *(_QWORD *)(v11 + i + 8);
      v22 = *(_QWORD *)(v11 + i + 16);
      _mm_storel_ps((double *)&src[1] + 1, v18);
      LOBYTE(src[2]) = v19;
      *(_WORD *)((char *)&src[2] + 1) = v17;
      BYTE3(src[2]) = BYTE2(v17);
      BYTE4(src[2]) = v20;
      *(_WORD *)((char *)&src[2] + 5) = (_WORD)v16;
      BYTE7(src[2]) = BYTE2(v16);
      *(_QWORD *)&src[0] = 0x8000000000000000LL;
      *((_QWORD *)&src[0] + 1) = v21;
      *(_QWORD *)&src[1] = v22;
      v81[0] = (__int64)src;
      v81[1] = (__int64)<ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &unk_42DBD8;
      *((_QWORD *)&dest[0] + 1) = 2LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = v81;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      std::io::stdio::_eprint(dest);
      core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(src);
    }
  }
  if ( !*(_BYTE *)(v10 + 408) )
  {
    v23 = (__int64 *)v94;
    v100 = (__int64 *)(v94 + 216);
    v24 = (__int64 (__fastcall **)())just::attribute_set::AttributeSet::get((__int64 *)(v94 + 216), 16);
    if ( v24 && (unsigned __int64)*v24 + 0x7FFFFFFFFFFFFFFFLL > 0x13 )
    {
      v25 = a3[2];
      v26 = 0LL;
      if ( *(_QWORD *)(v25 + 216) != 0x8000000000000000LL )
        v26 = (__int64 (__fastcall **)())(v25 + 216);
      if ( *v24 == (__int64 (__fastcall *)())0x8000000000000000LL )
        v24 = v26;
      if ( !v24 )
      {
        just::interpreter::Interpreter::default_script_interpreter();
        v24 = &just::interpreter::Interpreter::default_script_interpreter::INSTANCE;
      }
      *((_QWORD *)&v97[0] + 1) = v24;
      *(_QWORD *)&v97[0] = 0LL;
    }
    else
    {
      if ( !v90 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aEvaluatedLines);
        v27 = *(_QWORD *)&dest[0];
        *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)dest + 8);
        *(_BYTE *)a1 = 29;
        *(_QWORD *)(a1 + 8) = v27;
        goto LABEL_43;
      }
      v92[0] = v89;
      just::shebang::Shebang::new(v109, *(_QWORD *)(v89 + 8), *(_QWORD *)(v89 + 16));
      if ( *(_QWORD *)&v109[0] )
      {
        *(_OWORD *)&v83[23] = v109[1];
        *(_OWORD *)&v83[7] = v109[0];
      }
      else
      {
        just::recipe::Recipe<D>::run_script::{{closure}}(dest, v92);
        v9 = dest[0];
        *(_OWORD *)v83 = *(_OWORD *)((char *)dest + 1);
        *(_OWORD *)&v83[16] = *(_OWORD *)((char *)&dest[1] + 1);
        *(_QWORD *)&v83[31] = *(_QWORD *)&dest[2];
        src[0] = *(_OWORD *)((char *)&dest[2] + 8);
        src[1] = *(_OWORD *)((char *)&dest[3] + 8);
        src[2] = *(_OWORD *)((char *)&dest[4] + 8);
        src[3] = *(_OWORD *)((char *)&dest[5] + 8);
        if ( LOBYTE(dest[0]) != 56 )
        {
          *(_QWORD *)&v82[15] = *(_QWORD *)&v83[31];
          *(_OWORD *)v82 = *(_OWORD *)&v83[16];
          *(_OWORD *)v81 = *(_OWORD *)v83;
          v50 = src[0];
          v51 = src[1];
          v52 = src[2];
          v47 = a1;
          *(_OWORD *)(a1 + 88) = src[3];
          *(_OWORD *)(a1 + 72) = v52;
          *(_OWORD *)(a1 + 56) = v51;
          *(_OWORD *)(a1 + 40) = v50;
          *(_QWORD *)(a1 + 32) = *(_QWORD *)&v82[15];
          v48 = *(_OWORD *)v81;
          *(_OWORD *)(a1 + 17) = *(_OWORD *)v82;
          goto LABEL_42;
        }
      }
      v97[0] = *(_OWORD *)&v83[7];
      v97[1] = *(_OWORD *)&v83[23];
    }
    just::execution_context::ExecutionContext::tempdir((__int64)dest, a3, (__int64)v23);
    v9 = dest[0];
    if ( LOBYTE(dest[0]) != 56 )
    {
LABEL_41:
      v45 = dest[2];
      v46 = dest[3];
      *(_OWORD *)((char *)src + 15) = dest[1];
      src[0] = *(_OWORD *)((char *)dest + 1);
      v47 = a1;
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&dest[6];
      *(_OWORD *)(a1 + 80) = dest[5];
      *(_OWORD *)(a1 + 64) = dest[4];
      *(_OWORD *)(a1 + 48) = v46;
      *(_OWORD *)(a1 + 32) = v45;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)src + 15);
      v48 = src[0];
LABEL_42:
      *(_OWORD *)(v47 + 1) = v48;
      *(_BYTE *)v47 = v9;
      goto LABEL_43;
    }
    *(_QWORD *)((char *)&src[1] + 7) = *((_QWORD *)&dest[1] + 1);
    v98 = *(_OWORD *)((char *)dest + 8);
    v99 = *((_QWORD *)&dest[1] + 1);
    std::path::Path::to_path_buf(v92, *((_QWORD *)&dest[0] + 1), *(_QWORD *)&dest[1]);
    v28 = v23[27];
    v29 = v23[28];
    v30 = 0LL;
    v31 = v28;
    if ( v28 )
      v31 = v23[29];
    LOBYTE(v30) = v28 != 0;
    dest[0] = v30;
    *(_QWORD *)&dest[1] = v28;
    *((_QWORD *)&dest[1] + 1) = v29;
    dest[2] = v30;
    *(_QWORD *)&dest[3] = v28;
    *((_QWORD *)&dest[3] + 1) = v29;
    *(_QWORD *)&dest[4] = v31;
    v32 = core::iter::traits::iterator::Iterator::try_fold(dest);
    v34 = v33;
    v93 = v23 + 18;
    v35 = just::token::Token::lexeme(v23 + 18);
    just::executor::Executor::script_filename((__int64)dest, (__int64)v97, v35, v36, v32, v34);
    std::path::PathBuf::push(v92, dest);
    just::executor::Executor::script((__int64)v104, *(__int64 *)&v97[0], *((__int64 *)&v97[0] + 1), v78, v95, v89, v90);
    if ( *(_BYTE *)(v10 + 423) != 3 )
    {
LABEL_47:
      v53 = v10;
      v54 = std::fs::write(v92, v104);
      if ( !v54 )
        goto LABEL_49;
      just::execution_context::ExecutionContext::tempdir::{{closure}}(dest, v23, v54);
      v55 = dest[0];
      src[0] = *(_OWORD *)((char *)dest + 1);
      src[1] = *(_OWORD *)((char *)&dest[1] + 1);
      src[2] = *(_OWORD *)((char *)&dest[2] + 1);
      src[3] = *(_OWORD *)((char *)&dest[3] + 1);
      src[4] = *(_OWORD *)((char *)&dest[4] + 1);
      src[5] = *(_OWORD *)((char *)&dest[5] + 1);
      *(_QWORD *)((char *)&src[5] + 15) = *(_QWORD *)&dest[6];
      if ( LOBYTE(dest[0]) != 56 )
      {
        v71 = a1;
        *(_QWORD *)(a1 + 96) = *(_QWORD *)((char *)&src[5] + 15);
        *(_OWORD *)(a1 + 81) = src[5];
        *(_OWORD *)(a1 + 65) = src[4];
        v72 = src[0];
        v73 = src[1];
        v74 = src[2];
        v75 = src[3];
      }
      else
      {
LABEL_49:
        v56 = v92[1];
        v57 = v92[2];
        v58 = just::token::Token::lexeme(v93);
        v60 = v59;
        v79 = a3[2];
        just::recipe::Recipe<D>::working_directory(v81, v23, v79, a3[3]);
        if ( v81[0] == 0x8000000000000000LL )
          v61 = 0LL;
        else
          v61 = v81[1];
        just::executor::Executor::command(dest, v97, v53, v56, v57, v58, v60, v61, *(__int64 *)v82);
        v87 = *((_QWORD *)&dest[6] + 1);
        *(_OWORD *)v83 = *(_OWORD *)((char *)dest + 8);
        *(_OWORD *)&v83[16] = *(_OWORD *)((char *)&dest[1] + 8);
        *(_OWORD *)&v83[32] = *(_OWORD *)((char *)&dest[2] + 8);
        v84 = *(_OWORD *)((char *)&dest[3] + 8);
        v85 = *(_OWORD *)((char *)&dest[4] + 8);
        v86 = *(_OWORD *)((char *)&dest[5] + 8);
        if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
        {
          *(_QWORD *)(a1 + 96) = v87;
          *(_OWORD *)(a1 + 80) = v86;
          *(_OWORD *)(a1 + 64) = v85;
          v62 = *(_OWORD *)v83;
          v63 = *(_OWORD *)&v83[16];
          v64 = *(_OWORD *)&v83[32];
          *(_OWORD *)(a1 + 48) = v84;
          *(_OWORD *)(a1 + 32) = v64;
          *(_OWORD *)(a1 + 16) = v63;
          *(_OWORD *)a1 = v62;
          core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v81);
LABEL_65:
          core::ptr::drop_in_place<std::path::PathBuf>(v92);
          core::ptr::drop_in_place<tempfile::dir::TempDir>(&v98);
          goto LABEL_43;
        }
        src[13] = dest[13];
        src[12] = dest[12];
        src[11] = dest[11];
        src[10] = dest[10];
        src[9] = dest[9];
        src[8] = dest[8];
        src[7] = dest[7];
        *(_OWORD *)((char *)src + 8) = *(_OWORD *)v83;
        *(_OWORD *)((char *)&src[1] + 8) = *(_OWORD *)&v83[16];
        *(_OWORD *)((char *)&src[2] + 8) = *(_OWORD *)&v83[32];
        *(_OWORD *)((char *)&src[3] + 8) = v84;
        *(_OWORD *)((char *)&src[4] + 8) = v85;
        *(_OWORD *)((char *)&src[5] + 8) = v86;
        *((_QWORD *)&src[6] + 1) = v87;
        *(_QWORD *)&src[0] = *(_QWORD *)&dest[0];
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v81);
        if ( *(_BYTE *)(v79 + 489) || (unsigned __int8)just::attribute_set::AttributeSet::contains(v100, 14) )
          std::process::Command::args(src, v101, v102);
        <std::process::Command as just::command_ext::CommandExt>::export(src, v79 + 168, a3[1], v103, v79 + 568);
        memcpy(dest, src, sizeof(dest));
        <std::process::Command as just::command_ext::CommandExt>::status_guard(v83, dest);
        *(_OWORD *)v81 = *(_OWORD *)v83;
        if ( *(_DWORD *)v83 == 1 )
        {
          v65 = v81[1];
          *(_QWORD *)v83 = v81[1];
          v66 = just::token::Token::lexeme(v93);
          just::executor::Executor::error((__int64)dest, (__int64 *)v97, v65, v66, v67);
          *(_QWORD *)(a1 + 96) = *(_QWORD *)&dest[6];
          *(_OWORD *)(a1 + 80) = dest[5];
          *(_OWORD *)(a1 + 64) = dest[4];
          v68 = dest[0];
          v69 = dest[1];
          v70 = dest[2];
          *(_OWORD *)(a1 + 48) = dest[3];
          *(_OWORD *)(a1 + 32) = v70;
          *(_OWORD *)(a1 + 16) = v69;
          *(_OWORD *)a1 = v68;
          goto LABEL_65;
        }
        v76 = *(_DWORD *)&v83[16];
        core::option::Option<T>::map_or_else(
          (unsigned int)dest,
          (v81[0] & 0x7F00000000LL) == 0,
          BYTE5(v81[0]),
          (_DWORD)v23,
          HIDWORD(v81[0]),
          (_DWORD)v23,
          *(_DWORD *)(v79 + 488));
        v55 = dest[0];
        if ( LOBYTE(dest[0]) == 56 )
        {
          if ( !v76 )
          {
            *(_BYTE *)a1 = 56;
            core::ptr::drop_in_place<std::path::PathBuf>(v92);
            core::ptr::drop_in_place<tempfile::dir::TempDir>(&v98);
            goto LABEL_43;
          }
          *(_BYTE *)a1 = 30;
          *(_DWORD *)(a1 + 4) = v76;
          goto LABEL_65;
        }
        v71 = a1;
        *(_QWORD *)(a1 + 96) = *(_QWORD *)&dest[6];
        *(_OWORD *)(a1 + 81) = *(_OWORD *)((char *)&dest[5] + 1);
        *(_OWORD *)(a1 + 65) = *(_OWORD *)((char *)&dest[4] + 1);
        v72 = *(_OWORD *)((char *)dest + 1);
        v73 = *(_OWORD *)((char *)&dest[1] + 1);
        v74 = *(_OWORD *)((char *)&dest[2] + 1);
        v75 = *(_OWORD *)((char *)&dest[3] + 1);
      }
      *(_OWORD *)(v71 + 49) = v75;
      *(_OWORD *)(v71 + 33) = v74;
      *(_OWORD *)(v71 + 17) = v73;
      *(_OWORD *)(v71 + 1) = v72;
      *(_BYTE *)v71 = v55;
      goto LABEL_65;
    }
    v37 = *(_BYTE *)(v10 + 405);
    LOBYTE(dest[0]) = *(_BYTE *)(v10 + 388);
    *(_QWORD *)((char *)dest + 1) = 0LL;
    *(_QWORD *)((char *)dest + 9) = 0xA00000004LL;
    BYTE1(dest[1]) = v37;
    v38 = v83;
    just::color::Color::stderr((__int64)v83, (__int64)dest);
    v40 = v105;
    v41 = v106;
    if ( !v83[17] )
      goto LABEL_40;
    v42 = 0LL;
    v43 = 10;
    if ( v83[17] != 1 )
    {
      v44 = 10;
      goto LABEL_46;
    }
    v44 = 10;
    if ( v83[0] == 1 )
    {
LABEL_40:
      v42 = (__m128)*(unsigned __int64 *)&v83[1];
      v43 = v83[9];
      v44 = v83[13];
      LODWORD(v38) = (v83[12] << 16) | *(unsigned __int16 *)&v83[10];
      v39 = (v83[16] << 16) | *(unsigned __int16 *)&v83[14];
    }
LABEL_46:
    _mm_storel_ps((double *)&src[1] + 1, v42);
    LOBYTE(src[2]) = v43;
    *(_WORD *)((char *)&src[2] + 1) = (_WORD)v38;
    BYTE3(src[2]) = BYTE2(v38);
    BYTE4(src[2]) = v44;
    *(_WORD *)((char *)&src[2] + 5) = v39;
    BYTE7(src[2]) = BYTE2(v39);
    *(_QWORD *)&src[0] = 0x8000000000000000LL;
    *((_QWORD *)&src[0] + 1) = v40;
    *(_QWORD *)&src[1] = v41;
    v81[0] = (__int64)src;
    v81[1] = (__int64)<ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = &unk_42DBD8;
    *((_QWORD *)&dest[0] + 1) = 2LL;
    *(_QWORD *)&dest[2] = 0LL;
    *(_QWORD *)&dest[1] = v81;
    *((_QWORD *)&dest[1] + 1) = 1LL;
    std::io::stdio::_eprint(dest);
    core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(src);
    goto LABEL_47;
  }
  *(_BYTE *)a1 = 56;
LABEL_43:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v88);
  return core::ptr::drop_in_place<just::evaluator::Evaluator>(a7);
}