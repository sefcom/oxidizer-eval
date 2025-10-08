void *__fastcall rg::search(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // edx
  char v5; // r12
  void *result; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  void (__fastcall *v11)(_OWORD *, __int64); // rcx
  char v12; // bp
  unsigned int v13; // eax
  char **v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // bp
  int v20; // eax
  char v21; // bl
  unsigned int v22; // ecx
  char v23; // al
  char v24; // al
  char v25; // [rsp+2h] [rbp-BB6h]
  char v26; // [rsp+3h] [rbp-BB5h] BYREF
  int v27; // [rsp+4h] [rbp-BB4h]
  __int64 v28; // [rsp+8h] [rbp-BB0h] BYREF
  __int64 v29; // [rsp+10h] [rbp-BA8h]
  __int64 v30; // [rsp+18h] [rbp-BA0h]
  __int64 v31; // [rsp+20h] [rbp-B98h]
  char **v32; // [rsp+28h] [rbp-B90h] BYREF
  __int64 v33; // [rsp+30h] [rbp-B88h]
  __int64 **v34; // [rsp+38h] [rbp-B80h]
  __int128 v35; // [rsp+40h] [rbp-B78h]
  char **v36; // [rsp+68h] [rbp-B50h] BYREF
  __int64 v37; // [rsp+70h] [rbp-B48h] BYREF
  unsigned int v38; // [rsp+78h] [rbp-B40h]
  unsigned int v39; // [rsp+7Ch] [rbp-B3Ch]
  void (__fastcall *v40)(_OWORD *, __int64); // [rsp+80h] [rbp-B38h]
  __int64 v41; // [rsp+88h] [rbp-B30h] BYREF
  __int64 v42; // [rsp+90h] [rbp-B28h]
  __int64 *v43; // [rsp+98h] [rbp-B20h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+A0h] [rbp-B18h]
  char ***v45; // [rsp+A8h] [rbp-B10h]
  __int64 (__fastcall *v46)(); // [rsp+B0h] [rbp-B08h]
  __int64 v47; // [rsp+B8h] [rbp-B00h]
  _BYTE v48[56]; // [rsp+C0h] [rbp-AF8h] BYREF
  __int128 v49; // [rsp+F8h] [rbp-AC0h]
  _BYTE v50[27]; // [rsp+108h] [rbp-AB0h]
  char v51; // [rsp+123h] [rbp-A95h]
  int v52; // [rsp+124h] [rbp-A94h]
  _OWORD v53[17]; // [rsp+130h] [rbp-A88h] BYREF
  _OWORD v54[3]; // [rsp+240h] [rbp-978h] BYREF
  __int128 v55; // [rsp+270h] [rbp-948h]
  __int128 v56; // [rsp+288h] [rbp-930h] BYREF
  _BYTE v57[248]; // [rsp+298h] [rbp-920h] BYREF
  _OWORD v58[53]; // [rsp+390h] [rbp-828h] BYREF
  __int128 v59; // [rsp+6E8h] [rbp-4D0h] BYREF
  _QWORD src[104]; // [rsp+6F8h] [rbp-4C0h] BYREF
  _QWORD v61[42]; // [rsp+A38h] [rbp-180h] BYREF

  v47 = std::time::Instant::now();
  v39 = v4;
  v5 = *(_BYTE *)(a2 + 360);
  v26 = v5;
  result = rg::flags::hiargs::HiArgs::walk_builder(&v59, a2);
  if ( (_QWORD)v59 == 2LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v59 + 1);
    *(_BYTE *)a1 = 1;
    return result;
  }
  memcpy(&v53[1], src, 0xC8uLL);
  v53[0] = v59;
  ignore::walk::WalkBuilder::build(v58, v53);
  memcpy(v61, v58, 0x148uLL);
  v61[41] = &v26;
  core::ptr::drop_in_place<ignore::walk::WalkBuilder>(v53);
  memcpy(v58, v61, 0x150uLL);
  v29 = rg::flags::hiargs::HiArgs::sort(a2, v58);
  v30 = v7;
  if ( *(_DWORD *)(a2 + 768) == 1000000000 )
  {
    DWORD2(v55) = 1000000000;
  }
  else
  {
    v8 = *(_OWORD *)(a2 + 712);
    v9 = *(_OWORD *)(a2 + 728);
    v10 = *(_OWORD *)(a2 + 744);
    v55 = *(_OWORD *)(a2 + 760);
    v54[2] = v10;
    v54[1] = v9;
    v54[0] = v8;
  }
  rg::flags::hiargs::HiArgs::matcher((__int64)v53, a2);
  if ( BYTE3(v53[6]) == 2 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&v53[0];
LABEL_8:
    *(_BYTE *)a1 = 1;
    return (void *)core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(
                     v29,
                     v30);
  }
  *(_OWORD *)&v50[11] = *(_OWORD *)((char *)&v53[5] + 3);
  *(_OWORD *)v50 = *(_OWORD *)((char *)&v53[4] + 8);
  v49 = *(_OWORD *)((char *)&v53[3] + 8);
  *(_OWORD *)&v48[40] = *(_OWORD *)((char *)&v53[2] + 8);
  *(_OWORD *)&v48[24] = *(_OWORD *)((char *)&v53[1] + 8);
  *(_OWORD *)&v48[8] = *(_OWORD *)((char *)v53 + 8);
  *(_QWORD *)v48 = *(_QWORD *)&v53[0];
  v51 = BYTE3(v53[6]);
  v52 = DWORD1(v53[6]);
  rg::flags::hiargs::HiArgs::searcher((__int64)v53, a2);
  if ( *(_QWORD *)&v53[0] == 2LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v53[0] + 1);
    *(_BYTE *)a1 = 1;
    core::ptr::drop_in_place<rg::search::PatternMatcher>(v48);
    return (void *)core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(
                     v29,
                     v30);
  }
  memcpy(v57, &v53[1], sizeof(v57));
  v56 = v53[0];
  rg::flags::hiargs::HiArgs::stdout((__int64)&v32, (_BYTE *)a2);
  v38 = a3;
  rg::flags::hiargs::HiArgs::printer(v53, a2, a3, (__int64)&v32);
  rg::flags::hiargs::HiArgs::search_worker(v58);
  if ( *(_QWORD *)&v58[0] == 2LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v58[0] + 1);
    goto LABEL_8;
  }
  memcpy(src, &v58[1], sizeof(src));
  v59 = v58[0];
  v11 = *(void (__fastcall **)(_OWORD *, __int64))(v30 + 24);
  v25 = *(_BYTE *)(a2 + 907);
  v12 = 0;
  v27 = 0;
  v40 = v11;
  v11(v53, v29);
  while ( 1 )
  {
    if ( LODWORD(v53[0]) == 3 )
      goto LABEL_39;
    *(_QWORD *)&v58[7] = *(_QWORD *)&v53[7];
    v58[6] = v53[6];
    v58[5] = v53[5];
    v58[4] = v53[4];
    v58[3] = v53[3];
    v58[2] = v53[2];
    v58[1] = v53[1];
    v58[0] = v53[0];
    rg::search::SearchWorker<W>::search(&v56, &v59, v58);
    v13 = *(_DWORD *)&v57[40];
    if ( *(_DWORD *)&v57[40] == 1000000001 )
      break;
LABEL_30:
    *(_QWORD *)&v48[48] = *(_QWORD *)&v57[32];
    *(_OWORD *)&v48[32] = *(_OWORD *)&v57[16];
    *(_OWORD *)&v48[16] = *(_OWORD *)v57;
    *(_OWORD *)v48 = v56;
    v19 = v57[48];
    HIDWORD(v49) = *(_DWORD *)&v57[52];
    *(_DWORD *)((char *)&v49 + 9) = *(_DWORD *)&v57[49];
    *(_QWORD *)&v49 = __PAIR64__(*(unsigned int *)&v57[44], v13);
    BYTE8(v49) = v57[48];
    if ( DWORD2(v55) != 1000000000 )
    {
      if ( v13 == 1000000000 )
        core::option::unwrap_failed(&off_3EB958);
      <grep_printer::stats::Stats as core::ops::arith::AddAssign<&grep_printer::stats::Stats>>::add_assign(v54, v48);
    }
    v20 = v27;
    LOBYTE(v20) = (v19 | v27) & 1;
    v27 = v20;
    if ( (_BYTE)v20 && (v25 & 1) != 0 )
    {
      v21 = 1;
      goto LABEL_37;
    }
    core::ptr::drop_in_place<rg::haystack::Haystack>(v58);
    v12 = 1;
    v40(v53, v29);
  }
  v14 = (char **)v56;
  if ( (unsigned __int8)std::io::error::Error::kind(v56) == 11 )
  {
LABEL_36:
    v32 = v14;
    core::ptr::drop_in_place<std::io::error::Error>(&v32);
    v21 = v27;
LABEL_37:
    core::ptr::drop_in_place<rg::haystack::Haystack>(v58);
    v12 = 1;
    goto LABEL_40;
  }
  v36 = v14;
  rg::messages::set_errored();
  if ( !rg::messages::messages() )
    goto LABEL_22;
  v32 = (char **)std::io::stdio::stdout();
  v31 = std::io::stdio::Stdout::lock(&v32);
  v32 = (char **)&std::io::stdio::stderr::INSTANCE;
  v28 = std::io::stdio::Stdout::lock(&v32);
  v32 = &off_3E99C8;
  v33 = 1LL;
  v34 = (__int64 **)&byte_8;
  v35 = 0LL;
  v15 = std::io::Write::write_fmt(&v28, &v32);
  v43 = (__int64 *)v15;
  if ( v15 )
  {
LABEL_49:
    v32 = (char **)v15;
    v23 = std::io::error::Error::kind(v15);
    std::process::exit(2 * (v23 != 11));
  }
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v43);
  v41 = rg::haystack::Haystack::path((__int64)v58);
  v42 = v16;
  v43 = &v41;
  v44 = <std::path::Display as core::fmt::Display>::fmt;
  v45 = &v36;
  v46 = <std::io::error::Error as core::fmt::Display>::fmt;
  v32 = (char **)&unk_3EB928;
  v33 = 3LL;
  v34 = &v43;
  v35 = 2uLL;
  v17 = std::io::Write::write_fmt(&v28, &v32);
  v37 = v17;
  if ( v17 )
  {
LABEL_50:
    v32 = (char **)v17;
    v24 = std::io::error::Error::kind(v17);
    std::process::exit(2 * (v24 != 11));
  }
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v37);
  core::ptr::drop_in_place<std::io::stdio::StderrLock>(v31);
  core::ptr::drop_in_place<std::io::stdio::StderrLock>(v28);
LABEL_22:
  while ( 1 )
  {
    core::ptr::drop_in_place<std::io::error::Error>(&v36);
    core::ptr::drop_in_place<rg::haystack::Haystack>(v58);
    v40(v53, v29);
    if ( LODWORD(v53[0]) == 3 )
      break;
    *(_QWORD *)&v58[7] = *(_QWORD *)&v53[7];
    v58[6] = v53[6];
    v58[5] = v53[5];
    v58[4] = v53[4];
    v58[3] = v53[3];
    v58[2] = v53[2];
    v58[1] = v53[1];
    v58[0] = v53[0];
    rg::search::SearchWorker<W>::search(&v56, &v59, v58);
    v13 = *(_DWORD *)&v57[40];
    if ( *(_DWORD *)&v57[40] != 1000000001 )
      goto LABEL_30;
    v14 = (char **)v56;
    if ( (unsigned __int8)std::io::error::Error::kind(v56) == 11 )
      goto LABEL_36;
    v36 = v14;
    rg::messages::set_errored();
    if ( rg::messages::messages() )
    {
      v32 = (char **)std::io::stdio::stdout();
      v31 = std::io::stdio::Stdout::lock(&v32);
      v32 = (char **)&std::io::stdio::stderr::INSTANCE;
      v28 = std::io::stdio::Stdout::lock(&v32);
      v32 = &off_3E99C8;
      v33 = 1LL;
      v34 = (__int64 **)&byte_8;
      v35 = 0LL;
      v15 = std::io::Write::write_fmt(&v28, &v32);
      v43 = (__int64 *)v15;
      if ( v15 )
        goto LABEL_49;
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v43);
      v41 = rg::haystack::Haystack::path((__int64)v58);
      v42 = v18;
      v43 = &v41;
      v44 = <std::path::Display as core::fmt::Display>::fmt;
      v45 = &v36;
      v46 = <std::io::error::Error as core::fmt::Display>::fmt;
      v32 = (char **)&unk_3EB928;
      v33 = 3LL;
      v34 = &v43;
      v35 = 2uLL;
      v17 = std::io::Write::write_fmt(&v28, &v32);
      v37 = v17;
      if ( v17 )
        goto LABEL_50;
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v37);
      core::ptr::drop_in_place<std::io::stdio::StderrLock>(v31);
      core::ptr::drop_in_place<std::io::stdio::StderrLock>(v28);
    }
  }
  v12 = 1;
LABEL_39:
  v21 = v27;
LABEL_40:
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v29, v30);
  if ( !(((v5 & 1) == 0) | v12 & 1) )
    rg::eprint_nothing_searched();
  if ( DWORD2(v55) != 1000000000 )
  {
    v22 = 0;
    if ( src[31] )
      v22 = LODWORD(src[31]) - 1;
    *(_QWORD *)&v58[0] = rg::print_stats(v38, v54, v47, v39, (char *)&src[-2] + off_887B0[v22]);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v58);
  }
  *(_BYTE *)(a1 + 1) = v21 & 1;
  *(_BYTE *)a1 = 0;
  return (void *)core::ptr::drop_in_place<rg::search::SearchWorker<grep_cli::wtr::StandardStream>>(&v59);
}