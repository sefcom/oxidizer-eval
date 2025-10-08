__int64 __fastcall uu_dd::dd_copy(__int64 a1, unsigned int *a2)
{
  int v2; // edx
  __int64 v3; // r15
  __int128 v4; // kr00_16
  __int8 v5; // al
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned __int64 v19; // rbp
  int v20; // r13d
  __int128 v21; // kr10_16
  unsigned __int128 v22; // kr20_16
  unsigned __int128 v23; // kr30_16
  char trigger; // r15
  __int64 v25; // rax
  int v26; // edx
  char v27; // bp
  char v29; // [rsp+7h] [rbp-2C1h]
  char v30; // [rsp+Eh] [rbp-2BAh]
  char v31; // [rsp+Fh] [rbp-2B9h]
  int v33; // [rsp+1Ch] [rbp-2ACh]
  __int64 v35; // [rsp+28h] [rbp-2A0h]
  __int64 v36; // [rsp+30h] [rbp-298h]
  unsigned __int64 v37; // [rsp+38h] [rbp-290h]
  unsigned __int64 v38; // [rsp+40h] [rbp-288h]
  unsigned __int64 v39; // [rsp+48h] [rbp-280h]
  __int64 v40; // [rsp+50h] [rbp-278h]
  __int64 v41; // [rsp+58h] [rbp-270h]
  unsigned __int64 v42; // [rsp+60h] [rbp-268h]
  unsigned __int64 v43; // [rsp+68h] [rbp-260h]
  __m256i v44; // [rsp+70h] [rbp-258h] BYREF
  __int128 v45; // [rsp+90h] [rbp-238h]
  __int64 v46; // [rsp+A0h] [rbp-228h] BYREF
  int v47; // [rsp+A8h] [rbp-220h]
  __int128 v48; // [rsp+B0h] [rbp-218h] BYREF
  __m256i v49; // [rsp+C0h] [rbp-208h] BYREF
  __int128 v50; // [rsp+E0h] [rbp-1E8h]
  __int64 v51; // [rsp+128h] [rbp-1A0h] BYREF
  char **v52; // [rsp+130h] [rbp-198h]
  unsigned __int64 v53; // [rsp+138h] [rbp-190h]
  __int128 v54; // [rsp+140h] [rbp-188h]
  __int64 v55; // [rsp+150h] [rbp-178h]
  unsigned __int64 v56; // [rsp+158h] [rbp-170h]
  __int128 v57; // [rsp+160h] [rbp-168h] BYREF
  __int64 v58; // [rsp+170h] [rbp-158h]
  __int64 v59; // [rsp+178h] [rbp-150h]
  __int128 v60; // [rsp+180h] [rbp-148h] BYREF
  __int64 v61; // [rsp+190h] [rbp-138h]
  __int128 v62; // [rsp+198h] [rbp-130h]
  _QWORD v63[3]; // [rsp+1A8h] [rbp-120h] BYREF
  _OWORD v64[4]; // [rsp+1C0h] [rbp-108h] BYREF
  _QWORD v65[3]; // [rsp+200h] [rbp-C8h] BYREF
  int v66; // [rsp+218h] [rbp-B0h]
  __int64 v67; // [rsp+220h] [rbp-A8h] BYREF
  int v68; // [rsp+228h] [rbp-A0h]
  __int64 v69; // [rsp+230h] [rbp-98h]
  __int64 v70; // [rsp+238h] [rbp-90h]
  unsigned __int64 v71; // [rsp+240h] [rbp-88h]
  int v72; // [rsp+248h] [rbp-80h]
  unsigned __int64 v73; // [rsp+250h] [rbp-78h]
  unsigned __int64 v74; // [rsp+258h] [rbp-70h]
  __int64 v75; // [rsp+260h] [rbp-68h]
  __int64 v76; // [rsp+268h] [rbp-60h]
  bool v77; // [rsp+270h] [rbp-58h]
  __int128 v78; // [rsp+280h] [rbp-48h] BYREF
  __int64 v79; // [rsp+290h] [rbp-38h]

  v46 = std::time::Instant::now();
  v47 = v2;
  v3 = *((_QWORD *)a2 + 2);
  v55 = uu_dd::calc_bsize(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL), *(_QWORD *)(v3 + 120));
  std::sync::mpmc::channel(&v49);
  v4 = *(_OWORD *)v49.m256i_i8;
  v48 = *(_OWORD *)v49.m256i_i8;
  v5 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 166LL);
  *(_OWORD *)v44.m256i_i8 = *(_OWORD *)&v49.m256i_u64[2];
  v44.m256i_i8[16] = v5;
  v49.m256i_i64[2] = 0x8000000000000000LL;
  v49.m256i_i64[0] = 0LL;
  BYTE8(v50) = 0;
  std::thread::Builder::spawn_unchecked(v64, &v49, &v44);
  core::result::Result<T,E>::expect(&v60, v64);
  v29 = *(_BYTE *)(v3 + 147) ^ 1;
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)v6 == 2 || *(_QWORD *)(v6 + 8) )
  {
    <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v51, 221LL, v55, &off_13DE40);
    uu_dd::Alarm::with_interval((__int64)v63, 1LL, 0);
    v7 = uu_dd::Alarm::manual_trigger_fn(v63);
    uu_dd::progress::SignalHandler::install_signal_handler((__int64)v64, v7);
    v8 = *(_QWORD *)(a1 + 8);
    if ( !*(_QWORD *)&v64[0] )
    {
      *(_QWORD *)&v57 = (char *)v64 + 8;
      if ( *(_BYTE *)(v8 + 166) != 2 )
      {
        v44.m256i_i64[0] = (__int64)&v57;
        v44.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v49.m256i_i64[0] = (__int64)&off_13DE20;
        v49.m256i_i64[1] = 2LL;
        *(_QWORD *)&v50 = 0LL;
        v49.m256i_i64[2] = (__int64)&v44;
        v49.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v49);
        v8 = *(_QWORD *)(a1 + 8);
      }
    }
    v31 = *(_BYTE *)(v8 + 69);
    v9 = *((_QWORD *)a2 + 2);
    v30 = *(_BYTE *)(v9 + 156);
    if ( *(_BYTE *)(v9 + 165) )
    {
      uu_dd::bufferedoutput::BufferedOutput::new((__int64)&v49, (char *)a2);
      v45 = v50;
      v44 = v49;
    }
    else
    {
      v44.m256i_i64[3] = *((_QWORD *)a2 + 2);
      *(_OWORD *)&v44.m256i_u64[1] = *(_OWORD *)a2;
      v44.m256i_i64[0] = 0x8000000000000000LL;
    }
    v54 = v48;
    v41 = 0LL;
    v40 = 0LL;
    v39 = 0LL;
    v38 = 0LL;
    v33 = 0;
    v37 = 0LL;
    v36 = 0LL;
    v35 = 0LL;
    v42 = 0LL;
    v56 = 0LL;
    v43 = 0LL;
    while ( 1 )
    {
      v10 = *(__int64 **)(a1 + 8);
      v11 = *v10;
      v12 = v10[1];
      if ( *v10 != 2 )
      {
        v13 = v35 + v36;
        if ( (v11 & 1) != 0 )
          v13 = v37;
        if ( v13 >= v12 )
          goto LABEL_23;
      }
      v14 = uu_dd::calc_loop_bsize(v11, v12, v35, v36, v39, v38, v10[14], v55);
      uu_dd::read_helper(&v49, a1, &v51, v14);
      v17 = v49.m256i_i64[1];
      if ( v49.m256i_i32[0] == 1 )
        goto LABEL_25;
      v18 = v49.m256i_i64[2];
      if ( *(_OWORD *)&v49.m256i_u64[1] == 0LL )
      {
LABEL_23:
        v50 = v45;
        v49 = v44;
        v65[0] = v35;
        v65[1] = v36;
        v65[2] = v37;
        v66 = v33;
        *((_QWORD *)&v57 + 1) = v38;
        *(_QWORD *)&v57 = v39;
        v58 = v40;
        v59 = v41;
        v79 = v61;
        v78 = v60;
        v17 = uu_dd::finalize(
                (unsigned int)&v49,
                (unsigned int)v65,
                (unsigned int)&v57,
                v46,
                v47,
                v54,
                *((__int64 *)&v54 + 1),
                (__int64)&v78,
                v29);
        core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(v64);
        core::ptr::drop_in_place<uu_dd::Alarm>(v63);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v51, v52);
        core::ptr::drop_in_place<std::sync::mpsc::Sender<uu_dd::progress::ProgUpdate>>(&v48);
        goto LABEL_31;
      }
      v19 = v49.m256i_u64[3];
      v20 = v50;
      uu_dd::BlockWriter::write_blocks(&v49, &v44, v52, v53, v15, v16);
      if ( v49.m256i_i32[0] == 1 )
        break;
      v21 = *(_OWORD *)&v49.m256i_u64[2];
      v62 = v50;
      if ( v31 )
      {
        core::result::Result<T,E>::unwrap(v43 >> 63, &off_13DE58);
        core::result::Result<T,E>::unwrap(v19 >> 63, &off_13DE70);
        uu_dd::Input::discard_cache(*(_DWORD *)a1, *(unsigned int *)(a1 + 4), v43, v19);
      }
      if ( v30 )
      {
        core::result::Result<T,E>::unwrap((v56 | (v42 >> 63)) != 0, &off_13DE88);
        core::result::Result<T,E>::unwrap((*((_QWORD *)&v21 + 1) | ((unsigned __int64)v21 >> 63)) != 0, &off_13DEA0);
        uu_dd::BlockWriter::discard_cache((__int64)&v44, v42, v21);
      }
      v43 += v19;
      v22 = v21 + __PAIR128__(v56, v42);
      v56 = v22 >> 64;
      v42 = v22;
      v35 += v17;
      v36 += v18;
      v33 += v20;
      v37 += v19;
      v40 += v62;
      v41 += *((_QWORD *)&v62 + 1);
      v23 = v21 + __PAIR128__(v38, v39);
      v38 = v23 >> 64;
      v39 = v23;
      trigger = uu_dd::Alarm::get_trigger((__int64)v63);
      if ( (unsigned __int8)(trigger - 1) < 2u )
      {
        v25 = std::time::Instant::elapsed(&v46);
        v69 = v35;
        v70 = v36;
        v71 = v37;
        v72 = v33;
        v73 = v39;
        v74 = v38;
        v75 = v40;
        v76 = v41;
        v67 = v25;
        v68 = v26;
        v77 = trigger != 1;
        std::sync::mpmc::Sender<T>::send(&v49, v54, *((_QWORD *)&v54 + 1), &v67);
      }
    }
    v17 = v49.m256i_i64[1];
LABEL_25:
    core::ptr::drop_in_place<uu_dd::BlockWriter>(&v44);
    core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(v64);
    core::ptr::drop_in_place<uu_dd::Alarm>(v63);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v51, v52);
    v27 = 0;
    goto LABEL_28;
  }
  v17 = uu_dd::flush_caches_full_length(a1, (__int64)a2);
  if ( v17 )
  {
    v27 = 1;
LABEL_28:
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v60);
    goto LABEL_29;
  }
  v49.m256i_i64[3] = *((_QWORD *)a2 + 2);
  *(_OWORD *)&v49.m256i_u64[1] = *(_OWORD *)a2;
  v49.m256i_i64[0] = 0x8000000000000000LL;
  memset(&v44, 0, 28);
  memset(v64, 0, 32);
  v58 = v61;
  v57 = v60;
  v17 = uu_dd::finalize(
          (unsigned int)&v49,
          (unsigned int)&v44,
          (unsigned int)v64,
          v46,
          v47,
          v4,
          *((__int64 *)&v4 + 1),
          (__int64)&v57,
          v29);
  v27 = 0;
LABEL_29:
  core::ptr::drop_in_place<std::sync::mpsc::Sender<uu_dd::progress::ProgUpdate>>(&v48);
  if ( v27 )
    core::ptr::drop_in_place<uu_dd::Output>(*a2, a2[1]);
LABEL_31:
  core::ptr::drop_in_place<uu_dd::Input>(*(unsigned int *)(a1 + 4));
  return v17;
}