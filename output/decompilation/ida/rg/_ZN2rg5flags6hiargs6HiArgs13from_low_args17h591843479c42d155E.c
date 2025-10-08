__int64 __fastcall rg::flags::hiargs::HiArgs::from_low_args(__int64 a1, __int128 *a2)
{
  __int128 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r15
  int v6; // eax
  char v7; // al
  int v8; // ebp
  __int64 v9; // rax
  int v10; // r13d
  char v11; // bp
  char v12; // al
  char v14; // cl
  unsigned __int8 v15; // al
  char v16; // cl
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  char v29; // al
  __int128 v30; // rax
  char v31; // al
  char v32; // cl
  char v33; // bp
  char v34; // cl
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int128 v43; // xmm3
  __int128 v44; // xmm0
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int128 v47; // xmm4
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int128 v50; // xmm3
  char v51; // si
  char v52; // dl
  __int64 v53; // [rsp+0h] [rbp-338h] BYREF
  __int64 v54; // [rsp+8h] [rbp-330h]
  __int128 v55; // [rsp+10h] [rbp-328h] BYREF
  __m256i v56; // [rsp+20h] [rbp-318h]
  __int128 v57; // [rsp+40h] [rbp-2F8h]
  __int128 v58; // [rsp+50h] [rbp-2E8h]
  __int128 v59; // [rsp+60h] [rbp-2D8h]
  __int128 v60; // [rsp+70h] [rbp-2C8h]
  __int64 v61; // [rsp+80h] [rbp-2B8h]
  __int64 v62; // [rsp+88h] [rbp-2B0h]
  __int64 v63; // [rsp+90h] [rbp-2A8h] BYREF
  int v64; // [rsp+98h] [rbp-2A0h]
  int v65; // [rsp+9Ch] [rbp-29Ch]
  __int128 v66; // [rsp+A0h] [rbp-298h] BYREF
  __int128 v67; // [rsp+B0h] [rbp-288h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-278h]
  __int128 v69; // [rsp+C8h] [rbp-270h] BYREF
  __int128 v70; // [rsp+D8h] [rbp-260h]
  __int64 v71; // [rsp+E8h] [rbp-250h] BYREF
  __int128 v72; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v73; // [rsp+100h] [rbp-238h]
  _QWORD v74[2]; // [rsp+108h] [rbp-230h] BYREF
  __int128 v75; // [rsp+118h] [rbp-220h] BYREF
  __m256i v76; // [rsp+128h] [rbp-210h]
  __int128 v77; // [rsp+148h] [rbp-1F0h]
  __int128 v78; // [rsp+158h] [rbp-1E0h]
  __int128 v79; // [rsp+168h] [rbp-1D0h]
  __int64 v80; // [rsp+178h] [rbp-1C0h]
  __int128 v81; // [rsp+180h] [rbp-1B8h] BYREF
  __m256i v82; // [rsp+190h] [rbp-1A8h]
  __int128 v83; // [rsp+1B0h] [rbp-188h]
  __int128 v84; // [rsp+1C0h] [rbp-178h]
  __int128 v85; // [rsp+1D0h] [rbp-168h]
  __int128 v86; // [rsp+1E0h] [rbp-158h]
  __int64 v87; // [rsp+1F0h] [rbp-148h]
  __int128 v88; // [rsp+1F8h] [rbp-140h]
  __m256i v89; // [rsp+208h] [rbp-130h]
  __int128 v90; // [rsp+228h] [rbp-110h]
  __int128 v91; // [rsp+238h] [rbp-100h]
  __int128 v92; // [rsp+248h] [rbp-F0h]
  __int64 v93; // [rsp+258h] [rbp-E0h]
  _QWORD v94[5]; // [rsp+260h] [rbp-D8h] BYREF
  _QWORD v95[6]; // [rsp+288h] [rbp-B0h] BYREF
  _OWORD v96[3]; // [rsp+2BDh] [rbp-7Bh] BYREF
  _BYTE v97[27]; // [rsp+2EDh] [rbp-4Bh]

  v2 = a2;
  if ( *((_BYTE *)a2 + 603) != 5 )
  {
    *(_QWORD *)&v55 = &off_3EADE0;
    *((_QWORD *)&v55 + 1) = 1LL;
    v56.m256i_i64[0] = 8LL;
    *(_OWORD *)&v56.m256i_u64[1] = 0LL;
    core::panicking::assert_failed((char *)a2 + 603, &v55);
  }
  if ( *((_BYTE *)a2 + 554) != 2 )
  {
    v3 = rg::flags::lowargs::SortMode::supported(*((unsigned __int8 *)a2 + 555));
    if ( v3 )
      goto LABEL_6;
  }
  if ( *((_BYTE *)a2 + 556) )
    goto LABEL_5;
  v6 = *((unsigned __int8 *)a2 + 557);
  if ( v6 == 3 )
  {
    v7 = 4;
    if ( !*((_BYTE *)a2 + 584) )
      goto LABEL_5;
    goto LABEL_16;
  }
  if ( v6 == 4 )
  {
    v7 = 3;
    if ( *((_BYTE *)a2 + 566) )
LABEL_16:
      *((_BYTE *)a2 + 557) = v7;
  }
LABEL_5:
  rg::flags::hiargs::State::new(&v55);
  v3 = *((_QWORD *)&v55 + 1);
  v4 = -(__int64)v55;
  if ( __OFSUB__(-(__int64)v55, 1LL) )
  {
LABEL_6:
    *(_QWORD *)(a1 + 8) = v3;
    *(_QWORD *)a1 = 2LL;
    return core::ptr::drop_in_place<rg::flags::lowargs::LowArgs>(v2, a2, v4);
  }
  v67 = *(_OWORD *)v56.m256i_i8;
  v66 = v55;
  a2 = &v66;
  rg::flags::hiargs::Patterns::from_low_args(&v55, &v66, v2);
  v5 = 0x8000000000000000LL;
  if ( (_QWORD)v55 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v55 + 1);
    *(_QWORD *)a1 = 2LL;
LABEL_30:
    core::ptr::drop_in_place<rg::flags::hiargs::State>(&v66);
    return core::ptr::drop_in_place<rg::flags::lowargs::LowArgs>(v2, a2, v4);
  }
  v72 = v55;
  v73 = v56.m256i_i64[0];
  a2 = &v66;
  rg::flags::hiargs::Paths::from_low_args(&v55, &v66, v2);
  if ( (_QWORD)v55 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v55 + 1);
    *(_QWORD *)a1 = 2LL;
LABEL_29:
    core::ptr::drop_in_place<rg::flags::hiargs::Patterns>(&v72);
    goto LABEL_30;
  }
  v70 = *(_OWORD *)v56.m256i_i8;
  v69 = v55;
  v8 = rg::flags::hiargs::BinaryDetection::from_low_args(*((unsigned __int8 *)v2 + 582), *((unsigned __int8 *)v2 + 591));
  rg::flags::hiargs::take_color_specs(v96, v2);
  v9 = rg::flags::hiargs::take_hyperlink_config(v2);
  v65 = v8;
  v63 = v9;
  if ( *((_BYTE *)v2 + 556) )
  {
    v10 = 1000000000;
    v11 = 1;
  }
  else
  {
    v12 = *((_BYTE *)v2 + 587) | (*((_BYTE *)v2 + 557) == 5);
    v11 = v12 ^ 1;
    v10 = 1000000000;
    if ( v12 )
      v10 = 0;
  }
  a2 = (__int128 *)*((_QWORD *)v2 + 54);
  rg::flags::hiargs::types(&v55, a2, *((_QWORD *)v2 + 55));
  if ( (_QWORD)v55 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v55 + 1);
    *(_QWORD *)a1 = 2LL;
LABEL_28:
    core::ptr::drop_in_place<grep_printer::hyperlink::HyperlinkConfig>(&v63);
    core::ptr::drop_in_place<rg::flags::hiargs::Paths>(&v69);
    goto LABEL_29;
  }
  v87 = v61;
  v86 = v60;
  v85 = v59;
  v84 = v58;
  v83 = v57;
  v82 = v56;
  v81 = v55;
  a2 = &v66;
  rg::flags::hiargs::globs(&v55, &v66, v2);
  if ( (_QWORD)v55 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v55 + 1);
    *(_QWORD *)a1 = 2LL;
LABEL_27:
    core::ptr::drop_in_place<ignore::types::Types>(&v81);
    goto LABEL_28;
  }
  v80 = v60;
  v79 = v59;
  v78 = v58;
  v77 = v57;
  v76 = v56;
  v75 = v55;
  a2 = &v66;
  rg::flags::hiargs::preprocessor_globs(&v55, &v66, *((_QWORD *)v2 + 51), *((_QWORD *)v2 + 52));
  if ( (_QWORD)v55 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v55 + 1);
    *(_QWORD *)a1 = 2LL;
    core::ptr::drop_in_place<ignore::overrides::Override>(&v75);
    goto LABEL_27;
  }
  v93 = v60;
  v92 = v59;
  v91 = v58;
  v90 = v57;
  v89 = v56;
  v88 = v55;
  if ( *((_BYTE *)v2 + 602) == 1 && BYTE8(v67) != 1 )
    HIDWORD(v54) = 0;
  else
    HIDWORD(v54) = *((unsigned __int8 *)v2 + 602);
  v14 = *((_BYTE *)v2 + 595);
  v15 = *((_BYTE *)v2 + 590);
  if ( v14 == 2 )
    v14 = *((_BYTE *)v2 + 590);
  BYTE5(v53) = v14;
  v16 = *((_BYTE *)v2 + 597);
  if ( v16 == 2 )
  {
    if ( (v15 & 1) != 0 )
      LODWORD(v54) = 0;
    else
      LODWORD(v54) = BYTE8(v67);
  }
  else
  {
    v17 = v15 ^ 1;
    v18 = 0;
    if ( (v16 & 1) != 0 )
      v18 = v17;
    LODWORD(v54) = v18;
  }
  v19 = 0;
  if ( v11 )
    v19 = *((unsigned __int8 *)v2 + 585);
  v64 = v19;
  HIBYTE(v53) = *((_BYTE *)v2 + 581);
  v20 = 1LL;
  if ( *((_BYTE *)v2 + 554) == 2 && !BYTE9(v70) )
  {
    if ( *((_DWORD *)v2 + 24) == 1 )
    {
      v20 = *((_QWORD *)v2 + 13);
    }
    else
    {
      v21 = std::thread::available_parallelism();
      v23 = core::result::Result<T,E>::map_or(v21, v22);
      v20 = core::cmp::Ord::min(v23, 12LL);
    }
  }
  v71 = v20;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
  {
    v74[0] = &v71;
    v74[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_OWORD *)&v56.m256i_u64[1] = 1uLL;
    v28 = log::__private_api::loc(&off_3EAE28, 0LL, v24, v25, v26, v27, v53, v54, &off_3EADF0, 2LL, v74);
    v94[0] = aRgFlagsHiargs;
    v94[1] = 17LL;
    v94[2] = aRgFlagsHiargs;
    v94[3] = 17LL;
    v94[4] = v28;
    log::__private_api::log(&v55, 4LL, v94);
  }
  v29 = *((_BYTE *)v2 + 601);
  if ( v29 == 2 )
  {
    v29 = 1;
    if ( !*((_BYTE *)v2 + 590) )
      v29 = BYTE9(v70) ^ 1;
  }
  BYTE6(v53) = v29;
  if ( !*((_WORD *)v2 + 278) )
  {
    if ( (v54 & 1) != 0 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v55, 1LL);
      v62 = *((_QWORD *)&v55 + 1);
      v5 = v55;
      v68 = v56.m256i_i64[0];
    }
    else if ( *((_DWORD *)v2 + 28) != 2 )
    {
      *(_QWORD *)&v30 = rg::flags::lowargs::ContextModeLimited::get(v2 + 7);
      if ( v30 != 0 && *((_QWORD *)v2 + 56) != 0x8000000000000000LL )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v55, *((_QWORD *)v2 + 57), *((_QWORD *)v2 + 58));
        if ( (_QWORD)v55 != 0x8000000000000000LL )
        {
          v62 = *((_QWORD *)&v55 + 1);
          v68 = v56.m256i_i64[0];
          v5 = v55;
        }
      }
    }
  }
  v31 = *((_BYTE *)v2 + 598);
  v95[0] = (char *)v2 + 556;
  v95[1] = (char *)v2 + 585;
  v95[2] = (char *)v2 + 590;
  v95[3] = (char *)&v67 + 8;
  v95[4] = &v69;
  v95[5] = (char *)&v53 + 5;
  if ( v31 == 2 )
    v31 = rg::flags::hiargs::HiArgs::from_low_args::{{closure}}(v95);
  if ( *((_BYTE *)v2 + 600) )
  {
    v32 = *((_BYTE *)v2 + 600) != 1;
  }
  else
  {
    v32 = 1;
    if ( (unsigned __int64)v70 < 0xB )
    {
      *(_QWORD *)&v55 = *((_QWORD *)&v69 + 1);
      *((_QWORD *)&v55 + 1) = *((_QWORD *)&v69 + 1) + 24 * v70;
      v33 = v31;
      v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v55);
      v31 = v33;
      v32 = v34 ^ 1;
    }
  }
  *(_QWORD *)(a1 + 384) = v73;
  *(_OWORD *)(a1 + 368) = v72;
  v35 = v69;
  *(_OWORD *)(a1 + 352) = v70;
  *(_OWORD *)(a1 + 336) = v35;
  v36 = v2[7];
  v37 = v2[8];
  *(_OWORD *)(a1 + 128) = v2[9];
  *(_OWORD *)(a1 + 112) = v37;
  *(_OWORD *)(a1 + 96) = v36;
  *(_QWORD *)(a1 + 632) = *((_QWORD *)v2 + 58);
  *(_OWORD *)(a1 + 616) = v2[28];
  *(_OWORD *)(a1 + 160) = *(__int128 *)((char *)v2 + 248);
  *(_QWORD *)(a1 + 176) = *((_QWORD *)v2 + 33);
  *(_QWORD *)(a1 + 200) = *((_QWORD *)v2 + 36);
  *(_OWORD *)(a1 + 184) = v2[17];
  *(_OWORD *)(a1 + 312) = *(__int128 *)((char *)v2 + 376);
  *(_QWORD *)(a1 + 328) = *((_QWORD *)v2 + 49);
  v38 = *(_OWORD *)v76.m256i_i8;
  v39 = *(_OWORD *)&v76.m256i_u64[2];
  v40 = v77;
  *(_OWORD *)(a1 + 208) = v75;
  *(_OWORD *)(a1 + 224) = v38;
  *(_OWORD *)(a1 + 240) = v39;
  *(_OWORD *)(a1 + 256) = v40;
  *(_OWORD *)(a1 + 272) = v78;
  *(_OWORD *)(a1 + 288) = v79;
  *(_QWORD *)(a1 + 304) = v80;
  *(_OWORD *)(a1 + 664) = v2[31];
  *(_QWORD *)(a1 + 680) = *((_QWORD *)v2 + 64);
  v41 = *(_OWORD *)v89.m256i_i8;
  v42 = *(_OWORD *)&v89.m256i_u64[2];
  v43 = v90;
  *(_OWORD *)(a1 + 392) = v88;
  *(_OWORD *)(a1 + 408) = v41;
  *(_OWORD *)(a1 + 424) = v42;
  *(_OWORD *)(a1 + 440) = v43;
  *(_OWORD *)(a1 + 456) = v91;
  *(_OWORD *)(a1 + 472) = v92;
  *(_QWORD *)(a1 + 488) = v93;
  *(_OWORD *)(a1 + 688) = *(__int128 *)((char *)v2 + 520);
  *(_QWORD *)(a1 + 704) = *((_QWORD *)v2 + 67);
  *(_QWORD *)(a1 + 608) = v87;
  v44 = v2[10];
  v45 = *(_OWORD *)v82.m256i_i8;
  v46 = *(_OWORD *)&v82.m256i_u64[2];
  v47 = v83;
  *(_OWORD *)(a1 + 496) = v81;
  *(_OWORD *)(a1 + 512) = v45;
  *(_OWORD *)(a1 + 528) = v46;
  *(_OWORD *)(a1 + 544) = v47;
  *(_OWORD *)(a1 + 560) = v84;
  *(_OWORD *)(a1 + 576) = v85;
  *(_OWORD *)(a1 + 592) = v86;
  *(_OWORD *)(a1 + 864) = *(_OWORD *)&v97[11];
  v48 = v96[0];
  v49 = v96[1];
  v50 = v96[2];
  *(_OWORD *)(a1 + 853) = *(_OWORD *)v97;
  *(_OWORD *)(a1 + 837) = v50;
  *(_OWORD *)(a1 + 821) = v49;
  *(_OWORD *)(a1 + 805) = v48;
  *(_OWORD *)a1 = *v2;
  *(_OWORD *)(a1 + 16) = v2[1];
  *(_OWORD *)(a1 + 32) = v2[2];
  *(_OWORD *)(a1 + 48) = v2[3];
  *(_OWORD *)(a1 + 64) = v2[4];
  *(_OWORD *)(a1 + 80) = v2[5];
  *(_OWORD *)(a1 + 144) = v44;
  *(_QWORD *)(a1 + 640) = v5;
  *(_QWORD *)(a1 + 648) = v62;
  *(_QWORD *)(a1 + 656) = v68;
  *(_OWORD *)(a1 + 712) = 0LL;
  *(_OWORD *)(a1 + 728) = 0LL;
  *(_OWORD *)(a1 + 744) = 0LL;
  *(_QWORD *)(a1 + 760) = 0LL;
  *(_DWORD *)(a1 + 768) = v10;
  *(_QWORD *)(a1 + 776) = v63;
  *(_QWORD *)(a1 + 784) = v71;
  *(_DWORD *)(a1 + 792) = v65;
  *(_WORD *)(a1 + 796) = *((_WORD *)v2 + 276);
  *(_BYTE *)(a1 + 798) = HIBYTE(v53);
  *(_BYTE *)(a1 + 799) = 0;
  *(_DWORD *)(a1 + 800) = *(_DWORD *)((char *)v2 + 554);
  v51 = BYTE5(v53);
  *(_BYTE *)(a1 + 804) = *((_BYTE *)v2 + 558);
  v52 = *((_BYTE *)v2 + 559);
  *(_BYTE *)(a1 + 880) = v51;
  *(_BYTE *)(a1 + 881) = v52;
  *(_WORD *)(a1 + 882) = *((_WORD *)v2 + 280);
  *(_BYTE *)(a1 + 884) = v54;
  *(_DWORD *)(a1 + 885) = *(_DWORD *)((char *)v2 + 563);
  *(_BYTE *)(a1 + 889) = BYTE8(v67);
  *(_BYTE *)(a1 + 890) = v31 & 1;
  *(_BYTE *)(a1 + 891) = *((_BYTE *)v2 + 567);
  *(_BYTE *)(a1 + 892) = v32;
  *(_WORD *)(a1 + 893) = *((_WORD *)v2 + 284);
  *(_DWORD *)(a1 + 895) = *(_DWORD *)((char *)v2 + 571);
  *(_WORD *)(a1 + 899) = *((_WORD *)v2 + 288);
  *(_WORD *)(a1 + 901) = *(_WORD *)((char *)v2 + 579);
  *(_DWORD *)(a1 + 903) = *(_DWORD *)((char *)v2 + 582);
  *(_BYTE *)(a1 + 907) = v64;
  *(_BYTE *)(a1 + 908) = *((_BYTE *)v2 + 586);
  *(_WORD *)(a1 + 909) = *((_WORD *)v2 + 294);
  *(_BYTE *)(a1 + 911) = *((_BYTE *)v2 + 590);
  *(_BYTE *)(a1 + 912) = BYTE6(v53);
  *(_WORD *)(a1 + 913) = *((_WORD *)v2 + 296);
  *(_BYTE *)(a1 + 915) = *((_BYTE *)v2 + 594);
  *(_BYTE *)(a1 + 916) = *((_BYTE *)v2 + 596);
  *(_BYTE *)(a1 + 917) = BYTE4(v54);
  core::ptr::drop_in_place<rg::flags::hiargs::State>(&v66);
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v2 + 11);
  core::ptr::drop_in_place<alloc::vec::Vec<rg::flags::lowargs::PatternSource>>((char *)v2 + 200);
  core::ptr::drop_in_place<alloc::vec::Vec<grep_printer::color::UserColorSpec>>(
    *((_QWORD *)v2 + 28),
    *((_QWORD *)v2 + 29));
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>((char *)v2 + 296);
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>((char *)v2 + 472);
  core::ptr::drop_in_place<grep_printer::hyperlink::HyperlinkFormat>(v2 + 20);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v2 + 22);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v2 + 25);
  return core::ptr::drop_in_place<alloc::vec::Vec<rg::flags::lowargs::TypeChange>>((char *)v2 + 424);
}