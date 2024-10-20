void *__fastcall uu_more::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // r14
  __int128 v17; // [rsp+0h] [rbp-44F8h]
  _OWORD v18[37]; // [rsp+10h] [rbp-44E8h] BYREF
  __int64 v19; // [rsp+268h] [rbp-4290h] BYREF
  __int128 v20; // [rsp+270h] [rbp-4288h]
  _OWORD v21[35]; // [rsp+280h] [rbp-4278h] BYREF
  __int128 v22; // [rsp+4B0h] [rbp-4048h]
  _BYTE v23[12]; // [rsp+4C4h] [rbp-4034h]
  _BYTE v24[32]; // [rsp+4D0h] [rbp-4028h] BYREF
  _BYTE v25[32]; // [rsp+4F0h] [rbp-4008h] BYREF
  _BYTE v26[32]; // [rsp+510h] [rbp-3FE8h] BYREF
  _BYTE v27[32]; // [rsp+530h] [rbp-3FC8h] BYREF
  _BYTE v28[588]; // [rsp+550h] [rbp-3FA8h] BYREF
  int v29; // [rsp+79Ch] [rbp-3D5Ch]
  _BYTE v30[588]; // [rsp+7A0h] [rbp-3D58h] BYREF
  int v31; // [rsp+9ECh] [rbp-3B0Ch]
  _BYTE v32[588]; // [rsp+9F0h] [rbp-3B08h] BYREF
  int v33; // [rsp+C3Ch] [rbp-38BCh]
  _BYTE v34[588]; // [rsp+C40h] [rbp-38B8h] BYREF
  int v35; // [rsp+E8Ch] [rbp-366Ch]
  _QWORD src[78]; // [rsp+E90h] [rbp-3668h] BYREF
  __int128 v37; // [rsp+1100h] [rbp-33F8h]
  __int128 v38; // [rsp+1110h] [rbp-33E8h]
  __int128 v39; // [rsp+1120h] [rbp-33D8h]
  _BYTE v40[28]; // [rsp+1130h] [rbp-33C8h]
  __int64 v41; // [rsp+114Ch] [rbp-33ACh]
  int v42; // [rsp+1154h] [rbp-33A4h]
  _BYTE v43[589]; // [rsp+1158h] [rbp-33A0h] BYREF
  _BYTE v44[3]; // [rsp+13A5h] [rbp-3153h]
  _QWORD v45[74]; // [rsp+13A8h] [rbp-3150h] BYREF
  _BYTE desta[712]; // [rsp+15F8h] [rbp-2F00h] BYREF
  __int128 v47; // [rsp+18C0h] [rbp-2C38h] BYREF
  __int64 v48; // [rsp+18D0h] [rbp-2C28h]
  __int64 v49; // [rsp+18D8h] [rbp-2C20h]
  __int64 v50; // [rsp+18E0h] [rbp-2C18h]
  _BYTE v51[504]; // [rsp+18E8h] [rbp-2C10h] BYREF
  const char *v52; // [rsp+1AE0h] [rbp-2A18h]
  __int64 v53; // [rsp+1AE8h] [rbp-2A10h]
  __int128 v54; // [rsp+1AF0h] [rbp-2A08h]
  __int128 v55; // [rsp+1B00h] [rbp-29F8h]
  _OWORD v56[37]; // [rsp+1B18h] [rbp-29E0h] BYREF
  _OWORD v57[37]; // [rsp+1D68h] [rbp-2790h] BYREF
  _OWORD v58[37]; // [rsp+1FB8h] [rbp-2540h] BYREF
  _OWORD v59[37]; // [rsp+2208h] [rbp-22F0h] BYREF
  _QWORD v60[74]; // [rsp+2458h] [rbp-20A0h] BYREF
  _BYTE v61[712]; // [rsp+26A8h] [rbp-1E50h] BYREF
  _BYTE v62[712]; // [rsp+2970h] [rbp-1B88h] BYREF
  _BYTE v63[712]; // [rsp+2C38h] [rbp-18C0h] BYREF
  _BYTE v64[712]; // [rsp+2F00h] [rbp-15F8h] BYREF
  _BYTE v65[712]; // [rsp+31C8h] [rbp-1330h] BYREF
  _QWORD v66[89]; // [rsp+3490h] [rbp-1068h] BYREF
  _BYTE v67[712]; // [rsp+3758h] [rbp-DA0h] BYREF
  _BYTE v68[712]; // [rsp+3A20h] [rbp-AD8h] BYREF
  _BYTE v69[712]; // [rsp+3CE8h] [rbp-810h] BYREF
  _BYTE v70[592]; // [rsp+3FB0h] [rbp-548h] BYREF
  _BYTE v71[760]; // [rsp+4200h] [rbp-2F8h] BYREF

  v66[7] = 0LL;
  v60[14] = 0LL;
  v45[36] = 0LL;
  *(_QWORD *)&v23[4] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(v71, v2, v3);
  clap_builder::builder::command::Command::about(src, v71);
  uucore::format_usage((unsigned int)&v19);
  v4 = v19;
  if ( v19 != 0x8000000000000000LL )
    v18[0] = v20;
  if ( src[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &src[58],
      "{} [OPTIONS] FILE...0.0.27Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo no"
      "t scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from patte"
      "rn matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the "
      "files to be read\r\rPattern not found\n"
      "\r::::::::::::::\n"
      "\r{}\n"
      "\r::::::::::::::\n"
      "{}\n"
      "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v");
  src[58] = v4;
  *(_OWORD *)&src[59] = v18[0];
  memcpy(desta, src, 0x260uLL);
  *(_OWORD *)&desta[624] = v37;
  *(_OWORD *)&desta[640] = v38;
  *(_OWORD *)&desta[656] = v39;
  *(_OWORD *)&desta[672] = *(_OWORD *)v40;
  *(_OWORD *)&desta[684] = *(_OWORD *)&v40[12];
  *(_QWORD *)&desta[608] = "0.0.27Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo n"
                           "ot scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay fil"
                           "e beginning from pattern matchDisplay file beginning from line numberThe number of lines per "
                           "screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                           "\r::::::::::::::\n"
                           "\r{}\n"
                           "\r::::::::::::::\n"
                           "{}\n"
                           "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions."
                           " (unimplemented)]\v";
  *(_QWORD *)&desta[616] = 6LL;
  *(_QWORD *)&desta[700] = v41 | 0x8000000080LL;
  *(_DWORD *)&desta[708] = v42;
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = "print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scrol"
                        "l, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean scre"
                        "en and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern"
                        " matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesf"
                        "ilesPath to the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v18[33] + 1) = 10LL;
  memcpy(v28, v18, 0x220uLL);
  *(_OWORD *)&v28[560] = v18[35];
  *(_QWORD *)&v28[580] = *(_QWORD *)((char *)&v18[36] + 4);
  v29 = HIDWORD(v18[36]);
  *(_QWORD *)&v28[544] = "print-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scro"
                         "ll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean sc"
                         "reen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from patt"
                         "ern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --li"
                         "nesfilesPath to the files to be read\r\rPattern not found\n"
                         "\r::::::::::::::\n"
                         "\r{}\n"
                         "\r::::::::::::::\n"
                         "{}\n"
                         "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. ("
                         "unimplemented)]\v";
  *(_QWORD *)&v28[552] = 10LL;
  *(_DWORD *)&v28[576] = 99;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(
    v18,
    "Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and d"
    "isplay textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning"
    " from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not "
    "found\n"
    "\r::::::::::::::\n"
    "\r{}\n"
    "\r::::::::::::::\n"
    "{}\n"
    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
    47LL);
  v5 = *(_QWORD *)&v18[0];
  v21[0] = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = v21[0];
  if ( *(_QWORD *)&v28[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v28[440],
      "Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and"
      " display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file begin"
      "ning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPatter"
      "n not found\n"
      "\r::::::::::::::\n"
      "\r{}\n"
      "\r::::::::::::::\n"
      "{}\n"
      "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v");
  *(_QWORD *)&v28[440] = v5;
  *(_OWORD *)&v28[448] = v17;
  memcpy(v18, v28, 0x24CuLL);
  *(_WORD *)((char *)&v18[36] + 13) = *(_WORD *)((char *)&v29 + 1);
  HIBYTE(v18[36]) = HIBYTE(v29);
  BYTE12(v18[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(desta, v18);
  memcpy(v69, desta, sizeof(v69));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = "silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll, display"
                        " text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and dis"
                        "play textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisp"
                        "lay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath t"
                        "o the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v18[33] + 1) = 6LL;
  memcpy(v30, v18, 0x220uLL);
  *(_OWORD *)&v30[560] = v18[35];
  *(_QWORD *)&v30[580] = *(_QWORD *)((char *)&v18[36] + 4);
  v31 = HIDWORD(v18[36]);
  *(_QWORD *)&v30[544] = "silentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll, displa"
                         "y text and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and d"
                         "isplay textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchD"
                         "isplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPa"
                         "th to the files to be read\r\rPattern not found\n"
                         "\r::::::::::::::\n"
                         "\r{}\n"
                         "\r::::::::::::::\n"
                         "{}\n"
                         "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. ("
                         "unimplemented)]\v";
  *(_QWORD *)&v30[552] = 6LL;
  *(_DWORD *)&v30[576] = 100;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(
    v18,
    "Display help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into on"
    "eplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen"
    " fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
    "\r::::::::::::::\n"
    "\r{}\n"
    "\r::::::::::::::\n"
    "{}\n"
    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
    36LL);
  v6 = *(_QWORD *)&v18[0];
  v21[0] = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = v21[0];
  if ( *(_QWORD *)&v30[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v30[440],
      "Display help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into "
      "oneplainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number of lines per sc"
      "reen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
      "\r::::::::::::::\n"
      "\r{}\n"
      "\r::::::::::::::\n"
      "{}\n"
      "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v");
  *(_QWORD *)&v30[440] = v6;
  *(_OWORD *)&v30[448] = v17;
  memcpy(v18, v30, 0x24CuLL);
  *(_WORD *)((char *)&v18[36] + 13) = *(_WORD *)((char *)&v31 + 1);
  HIBYTE(v18[36]) = HIBYTE(v31);
  BYTE12(v18[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v69, v18);
  memcpy(v68, v69, sizeof(v68));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = "clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27D"
                        "o not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll,"
                        " clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning f"
                        "rom pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame "
                        "as --linesfilesPath to the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v18[33] + 1) = 11LL;
  memcpy(v32, v18, 0x220uLL);
  *(_OWORD *)&v32[560] = v18[35];
  *(_QWORD *)&v32[580] = *(_QWORD *)((char *)&v18[36] + 4);
  v33 = HIDWORD(v18[36]);
  *(_QWORD *)&v32[544] = "clean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27"
                         "Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scrol"
                         "l, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginnin"
                         "g from pattern matchDisplay file beginning from line numberThe number of lines per screen fullS"
                         "ame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                         "\r::::::::::::::\n"
                         "\r{}\n"
                         "\r::::::::::::::\n"
                         "{}\n"
                         "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. ("
                         "unimplemented)]\v";
  *(_QWORD *)&v32[552] = 11LL;
  *(_DWORD *)&v32[576] = 112;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(
    v18,
    "Do not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pa"
    "ttern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the"
    " files to be read\r\rPattern not found\n"
    "\r::::::::::::::\n"
    "\r{}\n"
    "\r::::::::::::::\n"
    "{}\n"
    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
    44LL);
  v7 = *(_QWORD *)&v18[0];
  v21[0] = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = v21[0];
  if ( *(_QWORD *)&v32[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v32[440],
      "Do not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginning from "
      "pattern matchDisplay file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to"
      " the files to be read\r\rPattern not found\n"
      "\r::::::::::::::\n"
      "\r{}\n"
      "\r::::::::::::::\n"
      "{}\n"
      "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v");
  *(_QWORD *)&v32[440] = v7;
  *(_OWORD *)&v32[448] = v17;
  memcpy(v18, v32, 0x24CuLL);
  *(_WORD *)((char *)&v18[36] + 13) = *(_WORD *)((char *)&v33 + 1);
  HIBYTE(v18[36]) = HIBYTE(v33);
  BYTE12(v18[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v68, v18);
  memcpy(v67, v68, sizeof(v67));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = "squeezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll, display text "
                        "and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display t"
                        "extSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay fi"
                        "le beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the "
                        "files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v18[33] + 1) = 7LL;
  memcpy(v34, v18, 0x220uLL);
  *(_OWORD *)&v34[560] = v18[35];
  *(_QWORD *)&v34[580] = *(_QWORD *)((char *)&v18[36] + 4);
  v35 = HIDWORD(v18[36]);
  *(_QWORD *)&v34[544] = "squeezeDisplay the contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll, display text"
                         " and clean line endsDisplay help instead of ringing bellDo not scroll, clean screen and display"
                         " textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay"
                         " file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to "
                         "the files to be read\r\rPattern not found\n"
                         "\r::::::::::::::\n"
                         "\r{}\n"
                         "\r::::::::::::::\n"
                         "{}\n"
                         "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. ("
                         "unimplemented)]\v";
  *(_QWORD *)&v34[552] = 7LL;
  *(_DWORD *)&v34[576] = 115;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(
    v18,
    "Squeeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from line "
    "numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
    "\r::::::::::::::\n"
    "\r{}\n"
    "\r::::::::::::::\n"
    "{}\n"
    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
    37LL);
  v8 = *(_QWORD *)&v18[0];
  v21[0] = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = v21[0];
  if ( *(_QWORD *)&v34[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v34[440],
      "Squeeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from lin"
      "e numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
      "\r::::::::::::::\n"
      "\r{}\n"
      "\r::::::::::::::\n"
      "{}\n"
      "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v");
  *(_QWORD *)&v34[440] = v8;
  *(_OWORD *)&v34[448] = v17;
  memcpy(v18, v34, 0x24CuLL);
  *(_WORD *)((char *)&v18[36] + 13) = *(_WORD *)((char *)&v35 + 1);
  HIBYTE(v18[36]) = HIBYTE(v35);
  BYTE12(v18[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v67, v18);
  memcpy(v66, v67, sizeof(v66));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = "plainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number "
                        "of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v21[33] + 1) = 5LL;
  memcpy(v18, v21, 0x220uLL);
  v18[35] = v22;
  *(_QWORD *)&v18[34] = "plainDisplay file beginning from pattern matchDisplay file beginning from line numberThe number "
                        "of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v18[34] + 1) = 5LL;
  LODWORD(v18[36]) = 117;
  *(_QWORD *)((char *)&v18[36] + 4) = *(_QWORD *)v23 | 0x400000000LL;
  HIDWORD(v18[36]) = *(_DWORD *)&v23[8] & 0xFFFFFF00 | 2;
  clap_builder::builder::command::Command::arg_internal(v66, v18);
  memcpy(v65, v66, sizeof(v65));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE..."
                        "0.0.27Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not "
                        "scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file begi"
                        "nning from pattern matchDisplay file beginning from line numberThe number of lines per screen fu"
                        "llSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v21[33] + 1) = 7LL;
  memcpy(v18, v21, 0x220uLL);
  v18[35] = v22;
  *(_QWORD *)&v18[34] = "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE..."
                        "0.0.27Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not "
                        "scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file begi"
                        "nning from pattern matchDisplay file beginning from line numberThe number of lines per screen fu"
                        "llSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v18[34] + 1) = 7LL;
  LODWORD(v18[36]) = 80;
  DWORD1(v18[36]) = *(_DWORD *)v23;
  DWORD2(v18[36]) = *(_DWORD *)&v23[4] & 0xFFFFFFDE | 0x20;
  HIDWORD(v18[36]) = *(_DWORD *)&v23[8];
  *(_QWORD *)&v21[0] = "patternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0"
                       ".0.27Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not sc"
                       "roll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay file beginni"
                       "ng from pattern matchDisplay file beginning from line numberThe number of lines per screen fullSa"
                       "me as --linesfilesPath to the files to be read\r\rPattern not found\n"
                       "\r::::::::::::::\n"
                       "\r{}\n"
                       "\r::::::::::::::\n"
                       "{}\n"
                       "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v";
  *((_QWORD *)&v21[0] + 1) = 7LL;
  clap_builder::builder::arg::Arg::value_names(v56, v18);
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(
    v18,
    "Display file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen fullS"
    "ame as --linesfilesPath to the files to be read\r\rPattern not found\n"
    "\r::::::::::::::\n"
    "\r{}\n"
    "\r::::::::::::::\n"
    "{}\n"
    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
    41LL);
  v9 = *(_QWORD *)&v18[0];
  v21[0] = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = v21[0];
  if ( *((_QWORD *)&v56[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      (char *)&v56[27] + 8,
      "Display file beginning from pattern matchDisplay file beginning from line numberThe number of lines per screen ful"
      "lSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
      "\r::::::::::::::\n"
      "\r{}\n"
      "\r::::::::::::::\n"
      "{}\n"
      "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v");
  *((_QWORD *)&v56[27] + 1) = v9;
  v56[28] = v17;
  memcpy(v18, v56, sizeof(v18));
  clap_builder::builder::command::Command::arg_internal(v65, v18);
  memcpy(v64, v65, sizeof(v64));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS"
                        "] FILE...0.0.27Do not scroll, display text and clean line endsDisplay help instead of ringing be"
                        "llDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay "
                        "file beginning from pattern matchDisplay file beginning from line numberThe number of lines per "
                        "screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v21[33] + 1) = 9LL;
  v18[0] = v21[0];
  memcpy((char *)&v18[2] + 8, (char *)&v21[2] + 8, 0x1F8uLL);
  v18[35] = v22;
  *(_QWORD *)((char *)&v18[36] + 4) = *(_QWORD *)v23;
  HIDWORD(v18[36]) = *(_DWORD *)&v23[8];
  *(_QWORD *)&v18[1] = 1LL;
  *((_QWORD *)&v18[1] + 1) = 1LL;
  *(_QWORD *)&v18[2] = 1LL;
  *(_QWORD *)&v18[34] = "from-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS"
                        "] FILE...0.0.27Do not scroll, display text and clean line endsDisplay help instead of ringing be"
                        "llDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDisplay "
                        "file beginning from pattern matchDisplay file beginning from line numberThe number of lines per "
                        "screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v18[34] + 1) = 9LL;
  LODWORD(v18[36]) = 70;
  *(_QWORD *)&v21[0] = "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OP"
                       "TIONS] FILE...0.0.27Do not scroll, display text and clean line endsDisplay help instead of ringin"
                       "g bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDispl"
                       "ay file beginning from pattern matchDisplay file beginning from line numberThe number of lines pe"
                       "r screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                       "\r::::::::::::::\n"
                       "\r{}\n"
                       "\r::::::::::::::\n"
                       "{}\n"
                       "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v";
  *((_QWORD *)&v21[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v45, v18);
  v10 = (_QWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
  v11 = v10;
  if ( !v10 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  *v10 = core::num::<impl core::str::traits::FromStr for usize>::from_str;
  if ( v45[10] >= 4uLL && v45[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v45[11]);
  v45[10] = 4LL;
  v45[11] = v11;
  v45[12] = &anon_1a911d3edb6b4aa343e194d7b0420439_7_llvm_18445788660129145147;
  memcpy(v57, v45, sizeof(v57));
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(
    v18,
    "Display file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to b"
    "e read\r\rPattern not found\n"
    "\r::::::::::::::\n"
    "\r{}\n"
    "\r::::::::::::::\n"
    "{}\n"
    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
    39LL);
  v12 = *(_QWORD *)&v18[0];
  v21[0] = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = v21[0];
  if ( *((_QWORD *)&v57[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      (char *)&v57[27] + 8,
      "Display file beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to"
      " be read\r\rPattern not found\n"
      "\r::::::::::::::\n"
      "\r{}\n"
      "\r::::::::::::::\n"
      "{}\n"
      "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v");
  *((_QWORD *)&v57[27] + 1) = v12;
  v57[28] = v17;
  memcpy(v18, v57, sizeof(v18));
  clap_builder::builder::command::Command::arg_internal(v64, v18);
  memcpy(v63, v64, sizeof(v63));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v21);
  *(_QWORD *)&v21[33] = "linessrc/uu/more/src/more.rsnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the "
                        "contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll, display text and clean line ends"
                        "Display help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple"
                        " blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from l"
                        "ine numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\r\r"
                        "Pattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v21[33] + 1) = 5LL;
  memcpy(v18, v21, 0x220uLL);
  v18[35] = v22;
  *(_QWORD *)((char *)&v18[36] + 4) = *(_QWORD *)v23;
  HIDWORD(v18[36]) = *(_DWORD *)&v23[8];
  *(_QWORD *)&v18[34] = "linessrc/uu/more/src/more.rsnumberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the "
                        "contents of a text file{} [OPTIONS] FILE...0.0.27Do not scroll, display text and clean line ends"
                        "Display help instead of ringing bellDo not scroll, clean screen and display textSqueeze multiple"
                        " blank lines into oneplainDisplay file beginning from pattern matchDisplay file beginning from l"
                        "ine numberThe number of lines per screen fullSame as --linesfilesPath to the files to be read\r\r"
                        "Pattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v18[34] + 1) = 5LL;
  LODWORD(v18[36]) = 110;
  *(_QWORD *)&v21[0] = "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OP"
                       "TIONS] FILE...0.0.27Do not scroll, display text and clean line endsDisplay help instead of ringin"
                       "g bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDispl"
                       "ay file beginning from pattern matchDisplay file beginning from line numberThe number of lines pe"
                       "r screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                       "\r::::::::::::::\n"
                       "\r{}\n"
                       "\r::::::::::::::\n"
                       "{}\n"
                       "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v";
  *((_QWORD *)&v21[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v60, v18);
  v60[2] = 1LL;
  v60[3] = 1LL;
  v60[4] = 1LL;
  memcpy(v70, v60, sizeof(v70));
  <clap_builder::builder::value_parser::RangedI64ValueParser<T> as core::convert::From<B>>::from(v18);
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 0xFFFFLL;
  LOBYTE(v21[1]) = 0;
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(v25, v18, v21);
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(v24, v25, 0LL);
  clap_builder::builder::arg::Arg::value_parser(v58, v70);
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(
    v18,
    "The number of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
    "\r::::::::::::::\n"
    "\r{}\n"
    "\r::::::::::::::\n"
    "{}\n"
    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
    35LL);
  v13 = *(_QWORD *)&v18[0];
  v21[0] = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = v21[0];
  if ( *((_QWORD *)&v58[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      (char *)&v58[27] + 8,
      "The number of lines per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
      "\r::::::::::::::\n"
      "\r{}\n"
      "\r::::::::::::::\n"
      "{}\n"
      "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v");
  *((_QWORD *)&v58[27] + 1) = v13;
  v58[28] = v17;
  memcpy(v18, v58, sizeof(v18));
  clap_builder::builder::command::Command::arg_internal(v63, v18);
  memcpy(v62, v63, sizeof(v62));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [O"
                        "PTIONS] FILE...0.0.27Do not scroll, display text and clean line endsDisplay help instead of ring"
                        "ing bellDo not scroll, clean screen and display textSqueeze multiple blank lines into oneplainDi"
                        "splay file beginning from pattern matchDisplay file beginning from line numberThe number of line"
                        "s per screen fullSame as --linesfilesPath to the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v18[33] + 1) = 6LL;
  v47 = v18[0];
  memcpy(v51, (char *)&v18[2] + 8, sizeof(v51));
  v54 = v18[35];
  v55 = v18[36];
  v48 = 1LL;
  v49 = 1LL;
  v50 = 1LL;
  v52 = "numberfrom-linepatternclean-printprint-oversilentsqueezeDisplay the contents of a text file{} [OPTIONS] FILE...0"
        ".0.27Do not scroll, display text and clean line endsDisplay help instead of ringing bellDo not scroll, clean scr"
        "een and display textSqueeze multiple blank lines into oneplainDisplay file beginning from pattern matchDisplay f"
        "ile beginning from line numberThe number of lines per screen fullSame as --linesfilesPath to the files to be rea"
        "d\r\rPattern not found\n"
        "\r::::::::::::::\n"
        "\r{}\n"
        "\r::::::::::::::\n"
        "{}\n"
        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v";
  v53 = 6LL;
  <clap_builder::builder::value_parser::RangedI64ValueParser<T> as core::convert::From<B>>::from(v18);
  *(_QWORD *)&v21[0] = 0LL;
  *((_QWORD *)&v21[0] + 1) = 0xFFFFLL;
  LOBYTE(v21[1]) = 0;
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(v27, v18, v21);
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(v26, v27, 0LL);
  clap_builder::builder::arg::Arg::value_parser(v59, &v47);
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(
    v18,
    "Same as --linesfilesPath to the files to be read\r\rPattern not found\n"
    "\r::::::::::::::\n"
    "\r{}\n"
    "\r::::::::::::::\n"
    "{}\n"
    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
    15LL);
  v14 = *(_QWORD *)&v18[0];
  v21[0] = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = v21[0];
  if ( *((_QWORD *)&v59[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      (char *)&v59[27] + 8,
      "Same as --linesfilesPath to the files to be read\r\rPattern not found\n"
      "\r::::::::::::::\n"
      "\r{}\n"
      "\r::::::::::::::\n"
      "{}\n"
      "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v");
  *((_QWORD *)&v59[27] + 1) = v14;
  v59[28] = v17;
  memcpy(v18, v59, sizeof(v18));
  clap_builder::builder::command::Command::arg_internal(v62, v18);
  memcpy(v61, v62, sizeof(v61));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v18);
  *(_QWORD *)&v18[33] = "filesPath to the files to be read\r\rPattern not found\n"
                        "\r::::::::::::::\n"
                        "\r{}\n"
                        "\r::::::::::::::\n"
                        "{}\n"
                        "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (u"
                        "nimplemented)]\v";
  *((_QWORD *)&v18[33] + 1) = 5LL;
  memcpy(v43, v18, 0x248uLL);
  *(_WORD *)v44 = *(_WORD *)((char *)&v18[36] + 13);
  v44[2] = HIBYTE(v18[36]);
  *(_DWORD *)&v43[584] = DWORD2(v18[36]) & 0xFFFFFFFE;
  v43[588] = 1;
  *(_QWORD *)&v18[0] = 0LL;
  *((_QWORD *)&v18[0] + 1) = 1LL;
  *(_QWORD *)&v18[1] = 0LL;
  alloc::string::String::push_str(
    v18,
    "Path to the files to be read\r\rPattern not found\n"
    "\r::::::::::::::\n"
    "\r{}\n"
    "\r::::::::::::::\n"
    "{}\n"
    "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v",
    28LL);
  v15 = *(_QWORD *)&v18[0];
  v21[0] = *(_OWORD *)((char *)v18 + 8);
  if ( *(_QWORD *)&v18[0] != 0x8000000000000000LL )
    v17 = v21[0];
  if ( *(_QWORD *)&v43[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v43[440],
      "Path to the files to be read\r\rPattern not found\n"
      "\r::::::::::::::\n"
      "\r{}\n"
      "\r::::::::::::::\n"
      "{}\n"
      "%Next file: --More--()\a[Press space to continue, 'q' to quit.]'. Press 'h' for instructions. (unimplemented)]\v");
  *(_QWORD *)&v43[440] = v15;
  *(_OWORD *)&v43[448] = v17;
  memcpy(v18, v43, 0x24DuLL);
  BYTE13(v18[36]) = 3;
  HIWORD(v18[36]) = *(_WORD *)&v44[1];
  clap_builder::builder::command::Command::arg_internal(v61, v18);
  memcpy(dest, v61, 0x2C8uLL);
  return dest;
}
