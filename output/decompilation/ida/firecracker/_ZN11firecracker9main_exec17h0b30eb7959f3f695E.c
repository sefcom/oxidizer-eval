__int64 __fastcall firecracker::main_exec(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  _DWORD *v7; // rdx
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  _OWORD *v13; // r12
  unsigned __int64 v14; // rbx
  _DWORD *v15; // rdx
  __int128 v16; // xmm0
  __int64 v17; // rax
  char v18; // r13
  __int64 v19; // rcx
  char v20; // al
  char v21; // r13
  char v22; // bl
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  _DWORD *v26; // rcx
  __int64 v27; // rax
  char v28; // al
  int v29; // edx
  __int64 v30; // rbx
  _DWORD *v31; // rax
  __int64 v32; // rdx
  _DWORD *v33; // rdi
  __int128 v34; // rax
  __int64 v35; // rax
  unsigned __int8 v36; // r15
  __int64 v37; // rax
  int *v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  _DWORD *v44; // rcx
  _DWORD *v45; // rsi
  int v46; // eax
  __int64 v47; // rcx
  int v48; // edx
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // r10
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rcx
  int *v63; // r14
  __int64 v64; // r10
  int v65; // eax
  char v66; // [rsp+Fh] [rbp-479h]
  unsigned __int8 v67; // [rsp+Fh] [rbp-479h]
  _BYTE dest[144]; // [rsp+10h] [rbp-478h] BYREF
  _DWORD *v69; // [rsp+A0h] [rbp-3E8h]
  __int128 v70; // [rsp+A8h] [rbp-3E0h]
  __int64 v71; // [rsp+B8h] [rbp-3D0h]
  __m256i v72; // [rsp+C0h] [rbp-3C8h] BYREF
  __int128 v73; // [rsp+E0h] [rbp-3A8h]
  int v74; // [rsp+F0h] [rbp-398h]
  __int64 v75; // [rsp+F8h] [rbp-390h]
  __int128 v76; // [rsp+100h] [rbp-388h]
  __int128 v77; // [rsp+110h] [rbp-378h] BYREF
  __int64 v78; // [rsp+120h] [rbp-368h]
  __int64 v79; // [rsp+128h] [rbp-360h]
  _BYTE v80[48]; // [rsp+130h] [rbp-358h] BYREF
  _OWORD src[9]; // [rsp+160h] [rbp-328h] BYREF
  __int128 v82; // [rsp+1F0h] [rbp-298h] BYREF
  __int128 v83; // [rsp+200h] [rbp-288h]
  __int128 v84; // [rsp+210h] [rbp-278h]
  __int128 v85; // [rsp+220h] [rbp-268h] BYREF
  __int64 v86; // [rsp+230h] [rbp-258h]
  __int128 v87; // [rsp+240h] [rbp-248h]
  _BYTE v88[48]; // [rsp+250h] [rbp-238h] BYREF
  __int128 v89; // [rsp+280h] [rbp-208h] BYREF
  __int64 v90; // [rsp+290h] [rbp-1F8h]
  __int128 v91; // [rsp+298h] [rbp-1F0h] BYREF
  __int64 v92; // [rsp+2A8h] [rbp-1E0h]
  __int64 v93; // [rsp+2B0h] [rbp-1D8h]
  __int64 v94; // [rsp+2B8h] [rbp-1D0h]
  __int64 v95; // [rsp+2C0h] [rbp-1C8h]
  __int128 v96; // [rsp+2C8h] [rbp-1C0h] BYREF
  _OWORD v97[2]; // [rsp+2D8h] [rbp-1B0h] BYREF
  __int128 v98; // [rsp+2F8h] [rbp-190h] BYREF
  __int128 v99; // [rsp+308h] [rbp-180h]
  _BYTE v100[20]; // [rsp+31Ch] [rbp-16Ch]
  __int64 v101; // [rsp+330h] [rbp-158h]
  int v102; // [rsp+338h] [rbp-150h]
  __int128 v103; // [rsp+33Ch] [rbp-14Ch]
  __int128 v104; // [rsp+34Ch] [rbp-13Ch]
  int v105; // [rsp+35Ch] [rbp-12Ch]
  __int128 v106; // [rsp+360h] [rbp-128h]
  __int64 v107; // [rsp+378h] [rbp-110h] BYREF
  __int128 v108; // [rsp+380h] [rbp-108h]
  __int64 v109; // [rsp+390h] [rbp-F8h] BYREF
  __int128 v110; // [rsp+398h] [rbp-F0h]
  __int64 v111; // [rsp+3A8h] [rbp-E0h] BYREF
  __int128 v112; // [rsp+3B0h] [rbp-D8h]
  _OWORD v113[3]; // [rsp+3C0h] [rbp-C8h] BYREF
  __int128 v114; // [rsp+3F0h] [rbp-98h]
  _OWORD v115[3]; // [rsp+400h] [rbp-88h] BYREF
  __int128 v116; // [rsp+430h] [rbp-58h]
  _BYTE v117[72]; // [rsp+440h] [rbp-48h] BYREF

  result = vmm::logger::logging::Logger::init(&vmm::logger::logging::LOGGER);
  if ( (_BYTE)result )
  {
    *a1 = 0;
    return result;
  }
  v69 = a1;
  vmm::arch::host_page_size();
  v2 = std::io::stdio::stdin();
  v3 = alloc::boxed::Box<T>::new(v2);
  std::panicking::set_hook(v3, &unk_3A3F30);
  core::fmt::num::imp::<impl usize>::_fmt(51200LL, src, 20LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest);
  v86 = *(_QWORD *)&dest[16];
  v85 = *(_OWORD *)dest;
  v72.m256i_i64[0] = 0LL;
  v72.m256i_i64[1] = 8LL;
  *((_QWORD *)&v73 + 1) = 0LL;
  *(_OWORD *)&v72.m256i_u64[2] = 0LL;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aApiSock;
  *(_OWORD *)&dest[96] = 8uLL;
  *(_QWORD *)&dest[120] = 0LL;
  *(_WORD *)&dest[136] = 256;
  dest[138] = 0;
  utils::arg_parser::Argument::default_value(src, dest);
  *((_QWORD *)&src[7] + 1) = aPathToUnixDoma;
  *(_QWORD *)&src[8] = 43LL;
  memcpy(dest, src, sizeof(dest));
  utils::arg_parser::ArgParser::arg(&v82, &v72, dest);
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aId;
  *(_OWORD *)&dest[96] = 2uLL;
  *(_QWORD *)&dest[120] = 0LL;
  *(_WORD *)&dest[136] = 256;
  dest[138] = 0;
  utils::arg_parser::Argument::default_value(src, dest);
  *((_QWORD *)&src[7] + 1) = aMicrovmUniqueI;
  *(_QWORD *)&src[8] = 26LL;
  memcpy(dest, src, sizeof(dest));
  utils::arg_parser::ArgParser::arg(&v72, &v82, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aSeccompFilter;
  *(_OWORD *)&dest[96] = 0xEuLL;
  *(_QWORD *)&dest[120] = 0LL;
  *(_WORD *)&dest[136] = 256;
  dest[138] = 0;
  v4 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 16LL, 0LL);
  if ( !v4 )
    goto LABEL_53;
  *v4 = aNoSeccomp;
  v4[1] = 10LL;
  *(_QWORD *)&v82 = 1LL;
  *((_QWORD *)&v82 + 1) = v4;
  *(_QWORD *)&v83 = 1LL;
  utils::arg_parser::Argument::forbids(src, dest);
  *((_QWORD *)&src[7] + 1) = aOptionalParame;
  *(_QWORD *)&src[8] = 99LL;
  memcpy(dest, src, sizeof(dest));
  utils::arg_parser::ArgParser::arg(&v82, &v72, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aNoSeccomp;
  *(_OWORD *)&dest[96] = 0xAuLL;
  *(_QWORD *)&dest[120] = 0LL;
  *(_WORD *)&dest[136] = 0;
  dest[138] = 0;
  v5 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 16LL, 0LL);
  if ( !v5 )
LABEL_53:
    alloc::alloc::handle_alloc_error(8LL, 16LL);
  *v5 = aSeccompFilter;
  v5[1] = 14LL;
  v72.m256i_i64[0] = 1LL;
  v72.m256i_i64[1] = (__int64)v5;
  v72.m256i_i64[2] = 1LL;
  utils::arg_parser::Argument::forbids(src, dest);
  *((_QWORD *)&src[7] + 1) = aOptionalParame_0;
  *(_QWORD *)&src[8] = 104LL;
  memcpy(dest, src, sizeof(dest));
  utils::arg_parser::ArgParser::arg(src, &v82, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aStartTimeUs;
  *(_OWORD *)&dest[96] = 0xDuLL;
  *(_QWORD *)&dest[120] = aProcessStartTi;
  *(_QWORD *)&dest[128] = 74LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(&v72, src, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aStartTimeCpuUs;
  *(_OWORD *)&dest[96] = 0x11uLL;
  *(_QWORD *)&dest[120] = aProcessStartCp;
  *(_QWORD *)&dest[128] = 78LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(src, &v72, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aParentCpuTimeU;
  *(_OWORD *)&dest[96] = 0x12uLL;
  *(_QWORD *)&dest[120] = aParentProcessC;
  *(_QWORD *)&dest[128] = 79LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(&v72, src, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aConfigFile;
  *(_OWORD *)&dest[96] = 0xBuLL;
  *(_QWORD *)&dest[120] = aPathToAFileTha;
  *(_QWORD *)&dest[128] = 70LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(src, &v72, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aMetadata;
  *(_OWORD *)&dest[96] = 8uLL;
  *(_QWORD *)&dest[120] = aPathToAFileTha_0;
  *(_QWORD *)&dest[128] = 72LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(&v72, src, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aNoApi;
  *(_QWORD *)&dest[96] = 6LL;
  *(_QWORD *)&dest[104] = aConfigFile;
  *(_QWORD *)&dest[112] = 11LL;
  *(_QWORD *)&dest[120] = aOptionalParame_1;
  *(_OWORD *)&dest[128] = 0x5AuLL;
  utils::arg_parser::ArgParser::arg(src, &v72, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aLogPath_0;
  *(_OWORD *)&dest[96] = 8uLL;
  *(_QWORD *)&dest[120] = aPathToAFifoOrA;
  *(_QWORD *)&dest[128] = 68LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(&v72, src, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aLevel;
  *(_OWORD *)&dest[96] = 5uLL;
  *(_QWORD *)&dest[120] = aSetTheLoggerLe;
  *(_QWORD *)&dest[128] = 21LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(src, &v72, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aModule;
  *(_OWORD *)&dest[96] = 6uLL;
  *(_QWORD *)&dest[120] = aSetTheLoggerMo;
  *(_QWORD *)&dest[128] = 29LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(&v72, src, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aShowLevel_0;
  *(_OWORD *)&dest[96] = 0xAuLL;
  *(_QWORD *)&dest[120] = aWhetherOrNotTo;
  *(_OWORD *)&dest[128] = 0x2FuLL;
  utils::arg_parser::ArgParser::arg(src, &v72, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aShowLogOrigin_0;
  *(_OWORD *)&dest[96] = 0xFuLL;
  *(_QWORD *)&dest[120] = aWhetherOrNotTo_0;
  *(_OWORD *)&dest[128] = 0x4CuLL;
  utils::arg_parser::ArgParser::arg(&v72, src, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aMetricsPath_0;
  *(_OWORD *)&dest[96] = 0xCuLL;
  *(_QWORD *)&dest[120] = aPathToAFifoOrA_0;
  *(_QWORD *)&dest[128] = 69LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(src, &v72, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aBootTimer;
  *(_OWORD *)&dest[96] = 0xAuLL;
  *(_QWORD *)&dest[120] = aWhetherOrNotTo_1;
  *(_OWORD *)&dest[128] = 0x5EuLL;
  utils::arg_parser::ArgParser::arg(&v72, src, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aVersion;
  *(_OWORD *)&dest[96] = 7uLL;
  *(_QWORD *)&dest[120] = "Print the binary version number.assertion failed: j < self.len()Block: Spurious event received"
                          ": Unrecognized event in uffd_msg: \x01";
  *(_OWORD *)&dest[128] = 0x20uLL;
  utils::arg_parser::ArgParser::arg(src, &v72, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aSnapshotVersio;
  *(_OWORD *)&dest[96] = 0x10uLL;
  *(_QWORD *)&dest[120] = aPrintTheSuppor;
  *(_OWORD *)&dest[128] = 0x28uLL;
  utils::arg_parser::ArgParser::arg(&v72, src, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aDescribeSnapsh;
  *(_OWORD *)&dest[96] = 0x11uLL;
  *(_QWORD *)&dest[120] = aPrintTheDataFo;
  *(_QWORD *)&dest[128] = 66LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(&v82, &v72, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aHttpApiMaxPayl;
  *(_OWORD *)&dest[96] = 0x19uLL;
  *(_QWORD *)&dest[120] = 0LL;
  *(_WORD *)&dest[136] = 256;
  dest[138] = 0;
  utils::arg_parser::Argument::default_value(src, dest);
  *((_QWORD *)&src[7] + 1) = aHttpApiRequest;
  *(_QWORD *)&src[8] = 44LL;
  memcpy(dest, src, sizeof(dest));
  utils::arg_parser::ArgParser::arg(src, &v82, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aMmdsSizeLimit;
  *(_OWORD *)&dest[96] = 0xFuLL;
  *(_QWORD *)&dest[120] = aMmdsDataStoreL;
  *(_QWORD *)&dest[128] = 32LL;
  *(_QWORD *)&dest[136] = 256LL;
  utils::arg_parser::ArgParser::arg(&v72, src, dest);
  *(_QWORD *)&dest[24] = v71;
  *(_OWORD *)&dest[8] = v70;
  *(_OWORD *)&dest[40] = v70;
  *(_QWORD *)&dest[56] = v71;
  *(_QWORD *)dest = 3LL;
  *(_QWORD *)&dest[32] = 3LL;
  *(_QWORD *)&dest[64] = 0LL;
  *(_QWORD *)&dest[72] = 8LL;
  *(_QWORD *)&dest[80] = 0LL;
  *(_QWORD *)&dest[88] = aEnablePci;
  *(_OWORD *)&dest[96] = 0xAuLL;
  *(_QWORD *)&dest[120] = aEnablesPcieSup;
  *(_OWORD *)&dest[128] = 0x15uLL;
  utils::arg_parser::ArgParser::arg(v80, &v72, dest);
  utils::arg_parser::ArgParser::parse_from_cmdline(dest, v80);
  v6 = *(_QWORD *)dest;
  if ( *(_QWORD *)dest == 0x8000000000000004LL )
  {
    if ( (unsigned __int8)utils::arg_parser::Arguments::flag_present(v80, aHelp, 4LL) )
    {
      *(_QWORD *)&src[0] = &off_3A3FA8;
      *((_QWORD *)&src[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &off_3A3EB0;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[32] = 0LL;
      *(_QWORD *)&dest[16] = src;
      *(_QWORD *)&dest[24] = 1LL;
      std::io::stdio::_print(dest);
      utils::arg_parser::ArgParser::formatted_help(src, v80);
      v72.m256i_i64[0] = (__int64)src;
      v72.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_3A3ED0;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[32] = 0LL;
      *(_QWORD *)&dest[16] = &v72;
      *(_QWORD *)&dest[24] = 1LL;
      std::io::stdio::_print(dest);
      core::ptr::drop_in_place<alloc::string::String>(src);
LABEL_15:
      *v69 = 11;
      goto LABEL_16;
    }
    if ( (unsigned __int8)utils::arg_parser::Arguments::flag_present(v80, aVersion, 7LL) )
    {
      *(_QWORD *)&src[0] = &off_3A3FA8;
      *((_QWORD *)&src[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &off_3A3EB0;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[32] = 0LL;
      *(_QWORD *)&dest[16] = src;
      *(_QWORD *)&dest[24] = 1LL;
      std::io::stdio::_print(dest);
      goto LABEL_15;
    }
    if ( (unsigned __int8)utils::arg_parser::Arguments::flag_present(v80, aSnapshotVersio, 16LL) )
    {
      src[1] = xmmword_393F8;
      src[0] = xmmword_393E8;
      *(_QWORD *)&src[2] = 0LL;
      v72.m256i_i64[0] = (__int64)src;
      v72.m256i_i64[1] = (__int64)semver::display::<impl core::fmt::Display for semver::Version>::fmt;
      *(_QWORD *)dest = &off_3A3EF0;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[32] = 0LL;
      *(_QWORD *)&dest[16] = &v72;
      *(_QWORD *)&dest[24] = 1LL;
      std::io::stdio::_print(dest);
      core::ptr::drop_in_place<semver::Version>(src);
      goto LABEL_15;
    }
    v9 = utils::arg_parser::Arguments::single_value(v80, aDescribeSnapsh, 17LL);
    if ( v9 )
    {
      firecracker::print_snapshot_data_format(dest, *(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16));
      v10 = *(_QWORD *)dest;
      if ( *(_QWORD *)dest != 7LL )
      {
        v15 = v69;
        *((_QWORD *)v69 + 6) = *(_QWORD *)&dest[40];
        v16 = *(_OWORD *)&dest[8];
        *((_OWORD *)v15 + 2) = *(_OWORD *)&dest[24];
        *((_OWORD *)v15 + 1) = v16;
        *v15 = 3;
        *((_QWORD *)v15 + 1) = v10;
        goto LABEL_16;
      }
      goto LABEL_15;
    }
    v11 = utils::arg_parser::Arguments::single_value(v80, aId, 2LL);
    if ( !v11 )
      core::option::unwrap_failed(&off_3A3F60);
    v12 = v11;
    utils::validators::validate_instance_id(dest, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
    core::result::Result<T,E>::expect(dest);
    v13 = src;
    <alloc::string::String as core::clone::Clone>::clone(src, v12);
    std::sync::once_lock::OnceLock<T>::try_insert(dest, src);
    v14 = 0x8000000000000000LL;
    if ( *(_QWORD *)&dest[8] == 0x8000000000000000LL )
    {
      v72.m256i_i64[0] = 0x8000000000000000LL;
    }
    else
    {
      v72.m256i_i64[2] = *(_QWORD *)&dest[24];
      *(_OWORD *)v72.m256i_i8 = *(_OWORD *)&dest[8];
    }
    core::result::Result<T,E>::unwrap(&v72);
    if ( utils::arg_parser::Arguments::single_value(v80, aLogPath_0, 8LL) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest);
      v13 = *(_OWORD **)&dest[8];
      v14 = *(_QWORD *)dest;
      v75 = *(_QWORD *)&dest[16];
    }
    v17 = utils::arg_parser::Arguments::single_value(v80, aLevel, 5LL);
    v18 = 6;
    if ( v17 )
    {
      <vmm::logger::logging::LevelFilter as core::str::traits::FromStr>::from_str(
        dest,
        *(_QWORD *)(v17 + 8),
        *(_QWORD *)(v17 + 16));
      v19 = *(_QWORD *)dest;
      v20 = dest[8];
      *(_QWORD *)&src[0] = *(_QWORD *)&dest[9];
      *(_QWORD *)((char *)src + 7) = *(_QWORD *)&dest[16];
      if ( *(_QWORD *)dest != 0x8000000000000001LL )
      {
        if ( !__OFSUB__(-*(_QWORD *)dest, 1LL) )
        {
          v32 = *(_QWORD *)&src[0];
          v33 = v69;
          *((_QWORD *)v69 + 3) = *(_QWORD *)((char *)src + 7);
          *(_QWORD *)((char *)v33 + 17) = v32;
          *v33 = 4;
          *((_QWORD *)v33 + 1) = v19;
          *((_BYTE *)v33 + 16) = v20;
          core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v14, v13);
          goto LABEL_16;
        }
        v18 = dest[8];
      }
    }
    v66 = v18;
    *(_QWORD *)&v76 = v14;
    *((_QWORD *)&v76 + 1) = v13;
    v79 = v12;
    v21 = 2 - utils::arg_parser::Arguments::flag_present(v80, aShowLevel_0, 10LL);
    v22 = 2 - utils::arg_parser::Arguments::flag_present(v80, aShowLogOrigin_0, 15LL);
    v23 = utils::arg_parser::Arguments::single_value(v80, aModule, 6LL);
    v24 = 0x8000000000000000LL;
    if ( v23 )
    {
      <alloc::string::String as core::clone::Clone>::clone(dest, v23);
      v24 = *(_QWORD *)dest;
      v106 = *(_OWORD *)&dest[8];
    }
    *(_OWORD *)&dest[32] = v106;
    *(_OWORD *)dest = v76;
    *(_QWORD *)&dest[16] = v75;
    dest[50] = v66;
    dest[48] = v21;
    dest[49] = v22;
    *(_QWORD *)&dest[24] = v24;
    v25 = vmm::logger::logging::Logger::update(&vmm::logger::logging::LOGGER, dest);
    if ( v25 )
    {
      v26 = v69;
      *v69 = 5;
      *((_QWORD *)v26 + 1) = v25;
    }
    else
    {
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
      {
        v72.m256i_i64[0] = (__int64)&off_3A3FA8;
        v72.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        *(_QWORD *)dest = &off_3A3F10;
        *(_QWORD *)&dest[8] = 1LL;
        *(_QWORD *)&dest[32] = 0LL;
        *(_QWORD *)&dest[16] = &v72;
        *(_QWORD *)&dest[24] = 1LL;
        v27 = log::__private_api::loc(&off_3A3FB8);
        *(_QWORD *)&src[0] = aFirecracker;
        *((_QWORD *)&src[0] + 1) = 11LL;
        *(_QWORD *)&src[1] = aFirecracker;
        *((_QWORD *)&src[1] + 1) = 11LL;
        *(_QWORD *)&src[2] = v27;
        log::__private_api::log_impl(dest, 3LL, src);
      }
      v28 = vmm::signal_handler::register_signal_handlers();
      v30 = v79;
      if ( (v28 & 1) != 0 )
      {
        v31 = v69;
        *v69 = 1;
        v31[1] = v29;
      }
      else
      {
        *(_QWORD *)&v34 = firecracker::resize_fdtable();
        v77 = v34;
        if ( (_QWORD)v34 == 3LL )
        {
          core::ptr::drop_in_place<core::result::Result<(),firecracker::ResizeFdTableError>>(&v77);
        }
        else
        {
          v82 = v34;
          if ( (unsigned __int64)v34 >= 2 )
          {
            v44 = v69;
            *v69 = 8;
            *(_OWORD *)(v44 + 2) = v34;
            goto LABEL_16;
          }
          if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) > 3 )
          {
            v72.m256i_i64[0] = (__int64)&v82;
            v72.m256i_i64[1] = (__int64)firecracker::_::<impl core::fmt::Display for firecracker::ResizeFdTableError>::fmt;
            *(_QWORD *)dest = &off_3A3F20;
            *(_QWORD *)&dest[8] = 1LL;
            *(_QWORD *)&dest[32] = 0LL;
            *(_QWORD *)&dest[16] = &v72;
            *(_QWORD *)&dest[24] = 1LL;
            v35 = log::__private_api::loc(&off_3A3FD0);
            *(_QWORD *)&src[0] = aFirecracker;
            *((_QWORD *)&src[0] + 1) = 11LL;
            *(_QWORD *)&src[1] = aFirecracker;
            *((_QWORD *)&src[1] + 1) = 11LL;
            *(_QWORD *)&src[2] = v35;
            log::__private_api::log_impl(dest, 4LL, src);
          }
          core::ptr::drop_in_place<firecracker::ResizeFdTableError>(&v82);
        }
        <alloc::string::String as core::clone::Clone>::clone(&v96, v30);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec((char *)v97 + 8);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v98);
        BYTE8(v99) = 0;
        if ( utils::arg_parser::Arguments::single_value(v80, aMetricsPath_0, 12LL)
          && (<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v117),
              vmm::vmm_config::metrics::init_metrics(&v89, v117),
              (_QWORD)v89 != 0x8000000000000000LL) )
        {
          v101 = v90;
          *(_OWORD *)&v100[4] = v89;
          v45 = v69;
          *v69 = 6;
          v46 = *(_DWORD *)&v100[16];
          v47 = v101;
          v48 = v102;
          v49 = v103;
          v50 = v104;
          *(_OWORD *)(v45 + 1) = *(_OWORD *)v100;
          v45[5] = v46;
          *((_QWORD *)v45 + 3) = v47;
          v45[8] = v48;
          *(_OWORD *)(v45 + 9) = v49;
          *(_OWORD *)(v45 + 13) = v50;
          v45[17] = v105;
        }
        else
        {
          v36 = utils::arg_parser::Arguments::flag_present(v80, aNoSeccomp, 10LL);
          v37 = utils::arg_parser::Arguments::single_value(v80, aSeccompFilter, 14LL);
          firecracker::seccomp::SeccompConfig::from_args((__int64)dest, v36, v37);
          if ( dest[0] == 21 )
          {
            firecracker::seccomp::get_filters((__int64)v88, *(int *)&dest[4], *(unsigned int *)&dest[8]);
            v38 = v69;
            if ( *(_QWORD *)v88 )
            {
              v82 = *(_OWORD *)v88;
              v83 = *(_OWORD *)&v88[16];
              v84 = *(_OWORD *)&v88[32];
              v39 = utils::arg_parser::Arguments::single_value(v80, aConfigFile, 11LL);
              v40 = 0x8000000000000000LL;
              if ( v39 )
              {
                std::fs::read_to_string(dest, v39);
                src[0] = *(_OWORD *)&dest[8];
                v40 = 0x8000000000000000LL;
                if ( *(_QWORD *)dest != 0x8000000000000001LL )
                {
                  v109 = *(_QWORD *)dest;
                  v110 = src[0];
                  core::result::Result<T,E>::expect(dest, &v109, aUnableToOpenOr, 50LL, &off_3A3FE8);
                  v40 = *(_QWORD *)dest;
                  v87 = *(_OWORD *)&dest[8];
                }
              }
              v41 = utils::arg_parser::Arguments::single_value(v80, aMetadata, 8LL);
              *((_QWORD *)&v76 + 1) = v40;
              if ( v41
                && (std::fs::read_to_string(dest, v41),
                    src[0] = *(_OWORD *)&dest[8],
                    *(_QWORD *)dest != 0x8000000000000001LL) )
              {
                v111 = *(_QWORD *)dest;
                v112 = src[0];
                core::result::Result<T,E>::expect(&v77, &v111, aUnableToOpenOr_0, 49LL, &off_3A4000);
              }
              else
              {
                *(_QWORD *)&v77 = 0x8000000000000000LL;
              }
              LOBYTE(v76) = utils::arg_parser::Arguments::flag_present(v80, aBootTimer, 10LL);
              v67 = utils::arg_parser::Arguments::flag_present(v80, aEnablePci, 10LL);
              v51 = (unsigned int)utils::arg_parser::Arguments::flag_present(v80, aNoApi, 6LL);
              v52 = utils::arg_parser::Arguments::single_value(v80, aHttpApiMaxPayl, 25LL);
              if ( !v52 )
                core::option::unwrap_failed(&off_3A4030);
              core::num::<impl u64>::from_ascii_radix(dest, *(_QWORD *)(v52 + 8), *(_QWORD *)(v52 + 16));
              v53 = core::result::Result<T,E>::expect(dest, aHttpApiMaxPayl_0, 69LL, &off_3A4018);
              v54 = utils::arg_parser::Arguments::single_value(v80, aMmdsSizeLimit, 15LL);
              v55 = v53;
              if ( v54 )
              {
                core::num::<impl u64>::from_ascii_radix(dest, *(_QWORD *)(v54 + 8), *(_QWORD *)(v54 + 16));
                v55 = core::result::Result<T,E>::expect(dest, aMmdsSizeLimitP, 59LL, &off_3A4048);
              }
              if ( (_BYTE)v51 )
              {
                <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(dest);
                core::iter::traits::iterator::Iterator::collect(src, dest);
                v72.m256i_i64[0] = *((_QWORD *)&v76 + 1);
                *(_OWORD *)&v72.m256i_u64[1] = v87;
                *(_OWORD *)&dest[64] = v99;
                *(_OWORD *)&dest[48] = v98;
                *(_OWORD *)&dest[32] = v97[1];
                *(_OWORD *)&dest[16] = v97[0];
                *(_OWORD *)dest = v96;
                if ( (_QWORD)v77 == 0x8000000000000000LL )
                  v56 = 0LL;
                else
                  v56 = *((_QWORD *)&v77 + 1);
                firecracker::run_without_api(
                  (unsigned int)v115,
                  (unsigned int)src,
                  (unsigned int)&v72,
                  (unsigned int)dest,
                  (unsigned __int8)v76,
                  v67,
                  v55,
                  v56,
                  v78);
                v58 = 11;
                if ( LOBYTE(v115[0]) != 29 )
                {
                  *(_OWORD *)&dest[52] = v116;
                  *(_OWORD *)&dest[36] = v115[2];
                  *(_OWORD *)&dest[20] = v115[1];
                  *(_OWORD *)&dest[4] = v115[0];
                  v38[17] = HIDWORD(v116);
                  *(_OWORD *)(v38 + 13) = *(_OWORD *)&dest[48];
                  *(_OWORD *)(v38 + 9) = *(_OWORD *)&dest[32];
                  *(_OWORD *)(v38 + 5) = *(_OWORD *)&dest[16];
                  *(_OWORD *)(v38 + 1) = *(_OWORD *)dest;
                  v58 = 10;
                }
                *v38 = v58;
                core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::sync::Arc<alloc::vec::Vec<u64>>>>(src);
                core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v77);
              }
              else
              {
                if ( !utils::arg_parser::Arguments::single_value(v80, aApiSock, 8LL)
                  || (<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest),
                      src[0] = *(_OWORD *)&dest[8],
                      *(_QWORD *)dest == 0x8000000000000000LL) )
                {
                  core::option::expect_failed(aMissingArgumen, 26LL, &off_3A4060);
                }
                v107 = *(_QWORD *)dest;
                v108 = src[0];
                v57 = utils::arg_parser::Arguments::single_value(v80, aStartTimeUs, 13LL);
                if ( v57 )
                {
                  v51 = (__int64)dest;
                  core::num::<impl u64>::from_ascii_radix(dest, *(_QWORD *)(v57 + 8), *(_QWORD *)(v57 + 16));
                  v79 = core::result::Result<T,E>::expect(dest, aStartTimeUsPar, 55LL, &off_3A4078);
                  v75 = 1LL;
                }
                else
                {
                  v75 = 0LL;
                }
                v59 = utils::arg_parser::Arguments::single_value(v80, aStartTimeCpuUs, 17LL);
                if ( v59 )
                {
                  core::num::<impl u64>::from_ascii_radix(dest, *(_QWORD *)(v59 + 8), *(_QWORD *)(v59 + 16));
                  v51 = core::result::Result<T,E>::expect(dest, aStartTimeCpuUs_0, 59LL, &off_3A4090);
                  v60 = 1LL;
                }
                else
                {
                  v60 = 0LL;
                }
                v61 = utils::arg_parser::Arguments::single_value(v80, aParentCpuTimeU, 18LL);
                if ( v61 )
                {
                  core::num::<impl u64>::from_ascii_radix(dest, *(_QWORD *)(v61 + 8), *(_QWORD *)(v61 + 16));
                  v61 = core::result::Result<T,E>::expect(dest, aParentCpuTimeU_0, 60LL, &off_3A40A8);
                  v62 = 1LL;
                }
                else
                {
                  v62 = 0LL;
                }
                *(_QWORD *)&v91 = v75;
                *((_QWORD *)&v91 + 1) = v79;
                v92 = v60;
                v93 = v51;
                v94 = v62;
                v95 = v61;
                *(_QWORD *)dest = *((_QWORD *)&v76 + 1);
                *(_OWORD *)&dest[8] = v87;
                v63 = v69;
                if ( (_QWORD)v77 == 0x8000000000000000LL )
                  v64 = 0LL;
                else
                  v64 = *((_QWORD *)&v77 + 1);
                firecracker::api_server_adapter::run_with_api(
                  v113,
                  (__int64)&v82,
                  dest,
                  &v107,
                  &v96,
                  &v91,
                  v76,
                  v67,
                  v53,
                  v55,
                  v64,
                  v78);
                v65 = 11;
                if ( LOBYTE(v113[0]) != 32 )
                {
                  *(_OWORD *)&dest[52] = v114;
                  *(_OWORD *)&dest[36] = v113[2];
                  *(_OWORD *)&dest[20] = v113[1];
                  *(_OWORD *)&dest[4] = v113[0];
                  v63[17] = HIDWORD(v114);
                  *(_OWORD *)(v63 + 13) = *(_OWORD *)&dest[48];
                  *(_OWORD *)(v63 + 9) = *(_OWORD *)&dest[32];
                  *(_OWORD *)(v63 + 5) = *(_OWORD *)&dest[16];
                  *(_OWORD *)(v63 + 1) = *(_OWORD *)dest;
                  v65 = 9;
                }
                *v63 = v65;
                core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v77);
                core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::sync::Arc<alloc::vec::Vec<u64>>>>(&v82);
              }
              goto LABEL_16;
            }
          }
          else
          {
            *(_OWORD *)&v88[24] = *(_OWORD *)&dest[16];
            *(_OWORD *)&v88[8] = *(_OWORD *)dest;
            v38 = v69;
          }
          *(_OWORD *)&dest[20] = *(_OWORD *)&v88[24];
          *(_OWORD *)&dest[4] = *(_OWORD *)&v88[8];
          src[2] = *(_OWORD *)&dest[32];
          v74 = *(_DWORD *)&dest[48];
          v72 = *(__m256i *)dest;
          v73 = *(_OWORD *)&dest[32];
          v38[13] = *(_DWORD *)&dest[48];
          v42 = *(_OWORD *)v72.m256i_i8;
          v43 = *(_OWORD *)&v72.m256i_u64[2];
          *(_OWORD *)(v38 + 9) = v73;
          *(_OWORD *)(v38 + 5) = v43;
          *(_OWORD *)(v38 + 1) = v42;
          *v38 = 7;
        }
        core::ptr::drop_in_place<vmm::vmm_config::instance_info::InstanceInfo>(&v96);
      }
    }
  }
  else
  {
    v7 = v69;
    *((_QWORD *)v69 + 6) = *(_QWORD *)&dest[40];
    v8 = *(_OWORD *)&dest[8];
    *((_OWORD *)v7 + 2) = *(_OWORD *)&dest[24];
    *((_OWORD *)v7 + 1) = v8;
    *v7 = 2;
    *((_QWORD *)v7 + 1) = v6;
  }
LABEL_16:
  core::ptr::drop_in_place<utils::arg_parser::ArgParser>(v80);
  return core::ptr::drop_in_place<alloc::string::String>(&v85);
}