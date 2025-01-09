__int64 __fastcall uu_dd::dd_copy(__int64 a1, unsigned int *a2)
{
  int v2; // edx
  __int64 v3; // r15
  __int8 v4; // al
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r12
  __int128 v14; // kr00_16
  int v15; // r15d
  __int128 v16; // kr10_16
  unsigned __int128 v17; // kr20_16
  unsigned __int128 v18; // kr30_16
  char trigger; // al
  char v20; // bl
  __int64 v21; // rax
  int v22; // edx
  char v23; // bp
  char v25; // [rsp+Dh] [rbp-2ABh]
  char v26; // [rsp+Eh] [rbp-2AAh]
  char v27; // [rsp+Fh] [rbp-2A9h]
  int v29; // [rsp+1Ch] [rbp-29Ch]
  __int128 v31; // [rsp+28h] [rbp-290h]
  unsigned __int64 v32; // [rsp+38h] [rbp-280h]
  unsigned __int64 v33; // [rsp+40h] [rbp-278h]
  unsigned __int64 v34; // [rsp+48h] [rbp-270h]
  __int64 v35; // [rsp+50h] [rbp-268h]
  __int64 v36; // [rsp+58h] [rbp-260h]
  unsigned __int64 v37; // [rsp+60h] [rbp-258h]
  unsigned __int64 v38; // [rsp+68h] [rbp-250h]
  __m256i v39; // [rsp+70h] [rbp-248h] BYREF
  __int128 v40; // [rsp+90h] [rbp-228h]
  __int64 v41; // [rsp+A0h] [rbp-218h] BYREF
  int v42; // [rsp+A8h] [rbp-210h]
  __int128 v43; // [rsp+B0h] [rbp-208h] BYREF
  __int128 v44; // [rsp+C0h] [rbp-1F8h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-1E8h]
  __int64 v46; // [rsp+D8h] [rbp-1E0h]
  __m256i v47; // [rsp+E0h] [rbp-1D8h] BYREF
  __int128 v48; // [rsp+100h] [rbp-1B8h]
  unsigned __int64 v49; // [rsp+148h] [rbp-170h]
  unsigned __int64 v50; // [rsp+150h] [rbp-168h]
  __int128 v51; // [rsp+158h] [rbp-160h] BYREF
  __int64 v52; // [rsp+168h] [rbp-150h]
  _BYTE v53[8]; // [rsp+170h] [rbp-148h] BYREF
  char **v54; // [rsp+178h] [rbp-140h]
  unsigned __int64 v55; // [rsp+180h] [rbp-138h]
  __int128 v56; // [rsp+188h] [rbp-130h]
  _BYTE v57[24]; // [rsp+198h] [rbp-120h] BYREF
  __m128i v58; // [rsp+1B0h] [rbp-108h] BYREF
  __int128 v59; // [rsp+1F0h] [rbp-C8h] BYREF
  unsigned __int64 v60; // [rsp+200h] [rbp-B8h]
  int v61; // [rsp+208h] [rbp-B0h]
  __int64 v62; // [rsp+210h] [rbp-A8h] BYREF
  int v63; // [rsp+218h] [rbp-A0h]
  __int128 v64; // [rsp+220h] [rbp-98h]
  unsigned __int64 v65; // [rsp+230h] [rbp-88h]
  int v66; // [rsp+238h] [rbp-80h]
  unsigned __int64 v67; // [rsp+240h] [rbp-78h]
  unsigned __int64 v68; // [rsp+248h] [rbp-70h]
  __int64 v69; // [rsp+250h] [rbp-68h]
  __int64 v70; // [rsp+258h] [rbp-60h]
  char v71; // [rsp+260h] [rbp-58h]
  __int128 v72; // [rsp+270h] [rbp-48h] BYREF
  __int64 v73; // [rsp+280h] [rbp-38h]

  v41 = std::time::Instant::now();
  v42 = v2;
  v3 = *((_QWORD *)a2 + 2);
  v49 = uu_dd::calc_bsize(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL), *(_QWORD *)(v3 + 120));
  std::sync::mpmc::channel(&v47);
  v43 = *(_OWORD *)v47.m256i_i8;
  v4 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 166LL);
  *(_OWORD *)v39.m256i_i8 = *(_OWORD *)&v47.m256i_u64[2];
  v39.m256i_i8[16] = v4;
  v47.m256i_i64[2] = 0x8000000000000000LL;
  v47.m256i_i64[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v58, &v47, &v39);
  core::result::Result<T,E>::expect(&v51, &v58);
  v25 = *(_BYTE *)(v3 + 147);
  v5 = *(_QWORD **)(a1 + 8);
  if ( *v5 && (unsigned int)*v5 != 1 || v5[1] )
  {
    <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v53, 221LL, v49);
    uu_dd::Alarm::with_interval((__int64)v57);
    v6 = uu_dd::Alarm::manual_trigger_fn((__int64)v57);
    uu_dd::progress::SignalHandler::install_signal_handler((__int64)&v58, v6, (__int64)&off_160FD8);
    v7 = *(_QWORD *)(a1 + 8);
    if ( !v58.m128i_i64[0] )
    {
      *(_QWORD *)&v44 = &v58.m128i_i64[1];
      if ( *(_BYTE *)(v7 + 166) != 2 )
      {
        v39.m256i_i64[0] = (__int64)&v44;
        v39.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v47.m256i_i64[0] = (__int64)&off_161138;
        v47.m256i_i64[1] = 2LL;
        *(_QWORD *)&v48 = 0LL;
        v47.m256i_i64[2] = (__int64)&v39;
        v47.m256i_i64[3] = 1LL;
        std::io::stdio::_eprint(&v47);
        v7 = *(_QWORD *)(a1 + 8);
      }
    }
    v27 = *(_BYTE *)(v7 + 69);
    v8 = *((_QWORD *)a2 + 2);
    v26 = *(_BYTE *)(v8 + 156);
    if ( *(_BYTE *)(v8 + 165) )
    {
      v45 = *((_QWORD *)a2 + 2);
      v44 = *(_OWORD *)a2;
      uu_dd::bufferedoutput::BufferedOutput::new((__int64)&v47, (char *)&v44);
      v39 = v47;
      v40 = v48;
    }
    else
    {
      v39.m256i_i64[3] = *((_QWORD *)a2 + 2);
      *(_OWORD *)&v39.m256i_u64[1] = *(_OWORD *)a2;
      v39.m256i_i64[0] = 0x8000000000000000LL;
    }
    v36 = 0LL;
    v35 = 0LL;
    v34 = 0LL;
    v33 = 0LL;
    v29 = 0;
    v32 = 0LL;
    v31 = 0uLL;
    v37 = 0LL;
    v50 = 0LL;
    v38 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *(__int64 **)(a1 + 8);
        v10 = *v9;
        if ( *v9 )
        {
          if ( (_DWORD)v10 == 1 )
          {
            v11 = v9[1];
            if ( v32 >= v11 )
              goto LABEL_30;
          }
          else
          {
            v11 = v9[1];
          }
        }
        else
        {
          v11 = v9[1];
          if ( (_QWORD)v31 + *((_QWORD *)&v31 + 1) >= v11 )
            goto LABEL_30;
        }
        v12 = uu_dd::calc_loop_bsize(v10, v11, v31, *((__int64 *)&v31 + 1), v34, v33, v9[14], v49);
        uu_dd::read_helper((__int64)&v47, a1, (__int64)v53, v12);
        v13 = v47.m256i_i64[1];
        if ( v47.m256i_i64[0] )
        {
LABEL_34:
          core::ptr::drop_in_place<uu_dd::BlockWriter>(&v39);
          core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(&v58);
          core::ptr::drop_in_place<uu_dd::Alarm>(v57);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v53);
          v23 = 0;
LABEL_35:
          core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v51);
          goto LABEL_36;
        }
        v14 = *(_OWORD *)&v47.m256i_u64[2];
        v15 = v48;
        if ( __PAIR128__(v47.m256i_u64[1], 0LL) == v47.m256i_u64[2] )
        {
LABEL_30:
          v48 = v40;
          v47 = v39;
          v59 = v31;
          v60 = v32;
          v61 = v29;
          *((_QWORD *)&v44 + 1) = v33;
          *(_QWORD *)&v44 = v34;
          v45 = v35;
          v46 = v36;
          v73 = v52;
          v72 = v51;
          v13 = uu_dd::finalize(&v47, &v59, (__m128i *)&v44, v41, v42, (__int64)&v43, &v72, v25 == 0);
          core::ptr::drop_in_place<core::result::Result<uu_dd::progress::SignalHandler,std::io::error::Error>>(&v58);
          core::ptr::drop_in_place<uu_dd::Alarm>(v57);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v53);
          core::ptr::drop_in_place<std::sync::mpsc::Sender<uu_dd::progress::ProgUpdate>>(&v43);
          goto LABEL_38;
        }
        uu_dd::BlockWriter::write_blocks(&v47, &v39, v54, v55);
        if ( v47.m256i_i64[0] )
        {
          v13 = v47.m256i_i64[1];
          goto LABEL_34;
        }
        v16 = *(_OWORD *)&v47.m256i_u64[2];
        v56 = v48;
        if ( v27 )
        {
          core::result::Result<T,E>::unwrap(v38 >> 63, &off_161158);
          core::result::Result<T,E>::unwrap(*((_QWORD *)&v14 + 1) >> 63, &off_161170);
          uu_dd::Input::discard_cache(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), v38, *((__int64 *)&v14 + 1));
        }
        if ( v26 )
        {
          core::result::Result<T,E>::unwrap((v50 | (v37 >> 63)) != 0, &off_161188);
          core::result::Result<T,E>::unwrap((*((_QWORD *)&v16 + 1) | ((unsigned __int64)v16 >> 63)) != 0, &off_1611A0);
          uu_dd::BlockWriter::discard_cache((__int64)&v39, v37, v16);
        }
        v38 += *((_QWORD *)&v14 + 1);
        v17 = v16 + __PAIR128__(v50, v37);
        v50 = v17 >> 64;
        v37 = v17;
        *(_QWORD *)&v31 = v13 + v31;
        *((_QWORD *)&v31 + 1) += v14;
        v29 += v15;
        v32 += *((_QWORD *)&v14 + 1);
        v35 += v56;
        v36 += *((_QWORD *)&v56 + 1);
        v18 = v16 + __PAIR128__(v33, v34);
        v33 = v18 >> 64;
        v34 = v18;
        trigger = uu_dd::Alarm::get_trigger((__int64)v57);
        if ( trigger != 1 )
          break;
        v20 = 0;
LABEL_29:
        v21 = std::time::Instant::elapsed(&v41);
        v64 = v31;
        v65 = v32;
        v66 = v29;
        v67 = v34;
        v68 = v33;
        v69 = v35;
        v70 = v36;
        v62 = v21;
        v63 = v22;
        v71 = v20;
        std::sync::mpmc::Sender<T>::send(&v47, &v43, &v62);
      }
      if ( trigger == 2 )
      {
        v20 = 1;
        goto LABEL_29;
      }
    }
  }
  v13 = uu_dd::flush_caches_full_length(a1, a2);
  if ( v13 )
  {
    v23 = 1;
    goto LABEL_35;
  }
  v47.m256i_i64[3] = *((_QWORD *)a2 + 2);
  *(_OWORD *)&v47.m256i_u64[1] = *(_OWORD *)a2;
  v47.m256i_i64[0] = 0x8000000000000000LL;
  memset(&v39, 0, 28);
  memset(&v58, 0, 32);
  v45 = v52;
  v44 = v51;
  v13 = uu_dd::finalize(&v47, (__int128 *)v39.m256i_i8, &v58, v41, v42, (__int64)&v43, &v44, v25 == 0);
  v23 = 0;
LABEL_36:
  core::ptr::drop_in_place<std::sync::mpsc::Sender<uu_dd::progress::ProgUpdate>>(&v43);
  if ( v23 )
    core::ptr::drop_in_place<uu_dd::Output>(*a2, a2[1]);
LABEL_38:
  core::ptr::drop_in_place<uu_dd::Input>(*(unsigned int *)(a1 + 4));
  return v13;
}
